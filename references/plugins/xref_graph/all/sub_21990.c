void __fastcall sub_21990(void **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rax
  signed __int64 v13; // rbp
  __m128i v14; // xmm1
  const void *v15; // rsi
  void *v16; // rdi
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v6 = *a1;
  v18[1] = __readfsqword(0x28u);
  if ( v6
    && *((_QWORD *)v6 + 1) - ((__int64)((__int64)a1[1] - ((unsigned __int64)(v6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) >= a2 )
  {
    if ( (v6[4] & 1) != 0 )
      return;
    if ( *(_DWORD *)v6 == 1 )
    {
      *((_DWORD *)v6 + 1) |= 1u;
      return;
    }
  }
  v8 = (__int64)a1[2];
  if ( a2 >= v8 )
    v8 = a2;
  v9 = QT::QArrayData::allocate(v18, 8, 16, v8, 1, a6);
  v10 = v18[0];
  v11 = (__m128i)(unsigned __int64)v9;
  v12 = 0;
  v13 = 8LL * (_QWORD)a1[2];
  v14 = _mm_unpacklo_epi64((__m128i)v18[0], v11);
  if ( v13 )
  {
    v15 = a1[1];
    v17 = v14;
    memcpy((void *)v11.m128i_i64[0], v15, v13);
    v14 = _mm_load_si128(&v17);
    v12 = v13 >> 3;
  }
  if ( v10 )
    *(_DWORD *)(v10 + 4) |= 1u;
  v16 = *a1;
  a1[2] = (void *)v12;
  *(__m128i *)a1 = v14;
  if ( v16 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
      free(v16);
  }
}
