_BYTE *__fastcall sub_110B910(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10,
        _BYTE *a11,
        __int64 a12,
        char a13)
{
  _BYTE *v16; // rcx
  signed __int64 v17; // rbp
  __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rdx
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  _BYTE *result; // rax
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  v28.m128i_i64[0] = a4;
  v28.m128i_i64[1] = a10;
  sub_DF80E0((_QWORD *)a1, a2, (__int64)&a2[a3]);
  v16 = (_BYTE *)v28.m128i_i64[0];
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_DF80E0((_QWORD *)(a1 + 32), v16, (__int64)&v16[a5]);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_DF80E0((_QWORD *)(a1 + 64), a7, (__int64)&a7[a8]);
  v17 = a6[1] - *a6;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  if ( v17 >> 5 )
  {
    if ( (unsigned __int64)(v17 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v18 = operator new(v17);
  }
  else
  {
    v18 = 0;
  }
  v28.m128i_i64[0] = v18;
  v19 = _mm_loadl_epi64(&v28);
  *(_QWORD *)(a1 + 112) = v18 + v17;
  *(__m128i *)(a1 + 96) = _mm_unpacklo_epi64(v19, v19);
  v20 = a6[1];
  v21 = *a6;
  if ( v20 != *a6 )
  {
    v22 = *a6;
    v23 = (_QWORD *)v18;
    do
    {
      v24 = v23 + 2;
      v25 = v23;
      v28.m128i_i64[0] = v22;
      v23 += 4;
      *(v23 - 4) = v24;
      sub_110A8B0(v25, *(_BYTE **)v22, *(_QWORD *)v22 + *(_QWORD *)(v22 + 8));
      v22 = v28.m128i_i64[0] + 32;
    }
    while ( v20 != v28.m128i_i64[0] + 32 );
    v18 += ((v20 - 32 - v21) & 0xFFFFFFFFFFFFFFE0LL) + 32;
  }
  v26 = v28.m128i_i64[1];
  *(_QWORD *)(a1 + 104) = v18;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  result = sub_DF80E0((_QWORD *)(a1 + 120), a9, (__int64)&a9[v26]);
  *(_BYTE *)(a1 + 184) = 0;
  if ( a13 )
  {
    *(_QWORD *)(a1 + 152) = a1 + 168;
    result = sub_DF80E0((_QWORD *)(a1 + 152), a11, (__int64)&a11[a12]);
    *(_BYTE *)(a1 + 184) = 1;
  }
  return result;
}
