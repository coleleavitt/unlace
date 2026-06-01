void __fastcall sub_494DC0(void **a1, signed __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdx
  signed __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  const __m128i *v11; // rdx
  const __m128i *v12; // rdi
  __m128i v13; // xmm1
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rsi
  void *v17; // rdi
  _QWORD v18[3]; // [rsp+0h] [rbp-18h] BYREF

  v6 = *a1;
  v18[1] = __readfsqword(0x28u);
  if ( v6
    && (__int64)(*((_QWORD *)v6 + 1)
               - 0xAAAAAAAAAAAAAAABLL
               * ((__int64)((__int64)a1[1] - ((unsigned __int64)(v6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3)) >= a2 )
  {
    if ( (v6[4] & 1) != 0 )
      return;
    if ( *(_DWORD *)v6 == 1 )
    {
      *((_DWORD *)v6 + 1) |= 1u;
      return;
    }
  }
  v8 = (signed __int64)a1[2];
  if ( a2 >= v8 )
    v8 = a2;
  v9 = QT::QArrayData::allocate(v18, 24, 16, v8, 1, a6);
  v10 = v18[0];
  v11 = (const __m128i *)a1[1];
  v12 = (const __m128i *)((char *)v11 + 24 * (_QWORD)a1[2]);
  v13 = _mm_unpacklo_epi64((__m128i)v18[0], (__m128i)(unsigned __int64)v9);
  if ( v11 == v12 || v11 >= v12 )
  {
    v16 = 0;
  }
  else
  {
    v14 = 1;
    do
    {
      v15 = _mm_loadu_si128(v11);
      v11 = (const __m128i *)((char *)v11 + 24);
      v9 += 24;
      *(__m128i *)(v9 - 24) = v15;
      *(_QWORD *)(v9 - 8) = v11[-1].m128i_i64[1];
      v16 = v14++;
    }
    while ( v11 < v12 );
  }
  if ( v10 )
    *(_DWORD *)(v10 + 4) |= 1u;
  v17 = *a1;
  a1[2] = (void *)v16;
  *(__m128i *)a1 = v13;
  if ( v17 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
      free(v17);
  }
}
