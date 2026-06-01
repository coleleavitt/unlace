__int64 __fastcall sub_204900(
        __int64 *a1,
        const __m128i *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // ebp
  unsigned __int64 v22; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rcx
  __m128i v32; // xmm0
  char v34; // [rsp+0h] [rbp-18h]

  v15 = sub_2046A0(a7, a8, a9, a10, a11, a12, a13, a14, (__int64)a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)v15 )
  {
    v21 = v15;
    v22 = a2->m128i_u64[1];
    if ( v22 > 1 )
      return v21;
    if ( v22 )
      sub_2046A0(a7, a8, a9, a10, v19, v20, a13, a14, (__int64)a1, a2, a2->m128i_i64[0], v16, v17, v18);
    v24 = *a1;
    v25 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2->m128i_i64 - *a1) >> 3);
    if ( (v25 & 0x80000000) == 0LL && (int)v25 < (unsigned __int64)a1[1] )
    {
      v26 = (__int64 *)(v24 + 24LL * (int)v25);
      v27 = *v26;
      if ( *v26 )
      {
        v26[1] = 0;
        qfree(v27, a2->m128i_i8);
        v24 = *a1;
      }
      v28 = a1[1];
      v29 = v26 + 3;
      v30 = 0xAAAAAAAAAAAAAAABLL * ((v24 + 24 * v28 - (__int64)v26) >> 3) - 2;
      if ( v30 >= 0 )
      {
        do
        {
          v31 = *v29;
          v32 = _mm_loadu_si128((const __m128i *)(v29 + 1));
          *v29 = 0;
          v29 += 3;
          *(v29 - 1) = 0;
          *(v29 - 6) = v31;
          *(__m128i *)(v29 - 5) = v32;
        }
        while ( v30-- != 0 );
        v28 = a1[1];
      }
      a1[1] = v28 - 1;
      return v21;
    }
    sub_169700(
      (int)"Coherency check failed: ok\n",
      (__int64)a2,
      v24,
      v16,
      v17,
      v18,
      a7,
      a8,
      a9,
      a10,
      v19,
      v20,
      a13,
      a14,
      v34);
  }
  return 0;
}
