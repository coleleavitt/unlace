__int64 __fastcall sub_5DE3B0(__m128i *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rbp
  const __m128i *v5; // rcx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int8 *v11; // rcx
  __int8 v12; // dl
  __int32 v13; // edx
  __int32 v14; // eax
  __int64 v15; // rdx
  __int64 v17; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v1 = a1[27].m128i_i64[0];
  v2 = a1[27].m128i_i64[1];
  v20 = __readfsqword(0x28u);
  v4 = a1[9].m128i_i64[0];
  v5 = (const __m128i *)(v1 + 8 * v2 - 8);
  v6 = _mm_loadl_epi64(v5);
  v7 = _mm_unpacklo_epi64(v6, v6);
  if ( v2 )
  {
    a1[6].m128i_i64[1] = v6.m128i_i64[0];
    a1[27].m128i_i64[1] = v2 - 1;
    v8 = *(_QWORD *)(v1 + 8 * (v2 - 1) - 8);
    if ( v2 != 1 )
      a1[27].m128i_i64[1] = v2 - 2;
  }
  else
  {
    a1[6].m128i_i64[1] = v6.m128i_i64[0];
    v8 = v5->m128i_i64[0];
  }
  v9 = a1[10].m128i_i64[1];
  v10 = a1[10].m128i_i64[0];
  a1[9].m128i_i64[0] = v8;
  v11 = (__int8 *)(v10 + v9 - 1);
  v12 = *v11;
  if ( !v9 )
  {
    a1[46].m128i_i8[1] = v12;
    v13 = (unsigned __int8)*v11;
LABEL_5:
    a1[13].m128i_i32[0] = v13;
    v14 = (unsigned __int8)*v11;
    goto LABEL_6;
  }
  v17 = v9 - 2;
  a1[10].m128i_i64[1] = v9 - 1;
  v11 = (__int8 *)(v10 + v9 - 2);
  a1[46].m128i_i8[1] = v12;
  v13 = (unsigned __int8)*v11;
  if ( v9 == 1 )
    goto LABEL_5;
  a1[10].m128i_i64[1] = v17;
  if ( v9 != 2 )
    v17 = v9 - 3;
  a1[13].m128i_i32[0] = v13;
  v14 = *(unsigned __int8 *)(v10 + v9 - 3);
  a1[10].m128i_i64[1] = v17;
LABEL_6:
  a1[13].m128i_i32[1] = v14;
  a1[7] = v7;
  v15 = *(_QWORD *)(v4 + 40);
  if ( (v15 & 0x1800000000LL) == 0x800000000LL )
    *(_QWORD *)(v4 + 40) = v15 | 0x800000;
  if ( (*(_BYTE *)(v4 + 80) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a1[6].m128i_i64[1] + 186) & 0x3F) == 0xD )
    {
      if ( (unsigned __int8)sub_5CFFA0((__int64 **)(v4 + 48), a1[15].m128i_i64[0]) )
        *(_QWORD *)(v4 + 40) |= 0x400000uLL;
      if ( (getinf(57) & 0xF) == 6 )
        sub_5CF7D0(v4 + 48, a1[15].m128i_i64[0]);
    }
LABEL_10:
    sub_5CC5E0(a1);
    return 0;
  }
  ptr = nullptr;
  v19 = 0;
  if ( !(unsigned int)sub_5DE300((__int64)a1, (__int64)&ptr, v4, (__m128i)0LL, *(double *)v7.m128i_i64) )
  {
    sub_5CFD90(a1, v4, (__int64)&ptr);
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    goto LABEL_10;
  }
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return 0xFFFFFFFFLL;
}

