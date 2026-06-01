void __fastcall sub_4D5E40(void **a1, signed __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdx
  signed __int64 v7; // rax
  __m128i *v8; // rax
  __int64 v9; // r9
  const __m128i *v10; // rdx
  const __m128i *v11; // r8
  __m128i v12; // xmm1
  __int64 i; // rsi
  __m128i v14; // xmm0
  void *v15; // r12
  void **v16; // rbp
  void *v17; // rax
  void **j; // rbx
  _QWORD v19[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *a1;
  v19[1] = __readfsqword(0x28u);
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
  v7 = (signed __int64)a1[2];
  if ( a2 >= v7 )
    v7 = a2;
  v8 = (__m128i *)QT::QArrayData::allocate(v19, 24, 16, v7, 1, a6);
  v9 = v19[0];
  v10 = (const __m128i *)a1[1];
  v11 = (const __m128i *)((char *)v10 + 24 * (_QWORD)a1[2]);
  v12 = _mm_unpacklo_epi64((__m128i)v19[0], (__m128i)(unsigned __int64)v8);
  if ( v10 == v11 || v10 >= v11 )
  {
    i = 0;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      v14 = _mm_loadu_si128(v10);
      v8[1].m128i_i64[0] = v10[1].m128i_i64[0];
      *v8 = v14;
      if ( v14.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
      v10 = (const __m128i *)((char *)v10 + 24);
      v8 = (__m128i *)((char *)v8 + 24);
      if ( v10 >= v11 )
        break;
    }
  }
  if ( v9 )
    *(_DWORD *)(v9 + 4) |= 1u;
  v15 = *a1;
  v16 = (void **)a1[1];
  *(__m128i *)a1 = v12;
  v17 = a1[2];
  a1[2] = (void *)i;
  if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
  {
    for ( j = &v16[3 * (_QWORD)v17]; j != v16; v16 += 3 )
    {
      if ( *v16 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v16, 1u) )
          free(*v16);
      }
    }
    free(v15);
  }
}
