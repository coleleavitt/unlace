void __fastcall sub_1702C60(
        __int64 a1,
        __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // r14
  __m128i *v13; // r8
  const __m128i *v14; // rdi
  __int64 v15; // r12
  const __m128i *v16; // rbp
  __m128i *v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // r9
  __m128i *v20; // r8
  const __m128i *v21; // rdi
  __int64 v22; // r12
  __m128i *v23; // rax
  signed __int64 v24; // rdx
  unsigned __int64 v25; // r10
  const __m128i *v26; // [rsp+0h] [rbp-78h]
  __m128i *v27; // [rsp+8h] [rbp-70h]
  __m128i v29; // [rsp+20h] [rbp-58h]
  __m128i v30; // [rsp+20h] [rbp-58h]
  __m128i v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+30h] [rbp-48h]

  v8 = (__int64)a2->m128i_i64 - a1;
  v9 = 0xCF3CF3CF3CF3CF3DLL * (((__int64)a2->m128i_i64 - a1) >> 3);
  v26 = (__m128i *)((char *)a2 + (_QWORD)a3 - a1);
  v29 = _mm_loadu_si128((const __m128i *)&a7);
  v32 = a8;
  if ( (__int64)a2->m128i_i64 - a1 <= 1008 )
  {
    sub_17021E0((__m128i *)a1, a2, (__int64)a3, a4, a5, a6, a7, *((unsigned int **)&a7 + 1), a8);
  }
  else
  {
    v27 = (__m128i *)a1;
    do
    {
      sub_17021E0(
        (__m128i *)a1,
        (__m128i *)(a1 + 1176),
        (__int64)a3,
        a4,
        a5,
        a6,
        v29.m128i_i64[0],
        (unsigned int *)v29.m128i_i64[1],
        v32);
      a1 += 1176;
    }
    while ( (__int64)a2->m128i_i64 - a1 > 1008 );
    sub_17021E0((__m128i *)a1, a2, (__int64)a3, a4, a5, a6, v29.m128i_i64[0], (unsigned int *)v29.m128i_i64[1], v32);
    if ( v8 > 1176 )
    {
      v11 = 7;
      while ( 1 )
      {
        v12 = 2 * v11;
        v30 = _mm_loadu_si128((const __m128i *)&a7);
        v33 = a8;
        if ( v9 < 2 * v11 )
        {
          v13 = (__m128i *)a3;
          v18 = v9;
          v16 = v27;
        }
        else
        {
          v13 = (__m128i *)a3;
          v14 = v27;
          v15 = 21 * v11;
          do
          {
            v17 = sub_1700E60(
                    v14,
                    (const __m128i *)((char *)v14 + 168 * v11),
                    (const __m128i *)((char *)v14 + 168 * v11),
                    &v14[v15],
                    v13,
                    v10,
                    v30.m128i_i64[0],
                    (unsigned int *)v30.m128i_i64[1],
                    v33);
            v14 = (const __m128i *)((char *)v14 + v15 * 16);
            v16 = v14;
            v13 = v17;
            v18 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)v14) >> 3);
          }
          while ( v12 <= v18 );
        }
        if ( v11 <= v18 )
          v18 = v11;
        v11 *= 4;
        sub_1700E60(
          v16,
          (const __m128i *)((char *)v16 + 168 * v18),
          (const __m128i *)((char *)v16 + 168 * v18),
          a2,
          v13,
          v10,
          v30.m128i_i64[0],
          (unsigned int *)v30.m128i_i64[1],
          v33);
        v34 = a8;
        v31 = _mm_loadu_si128((const __m128i *)&a7);
        if ( v9 < v11 )
          break;
        v20 = v27;
        v21 = a3;
        v22 = 168 * v11;
        do
        {
          v23 = sub_1700E60(
                  v21,
                  &v21[(unsigned __int64)(168 * v12) / 0x10],
                  &v21[(unsigned __int64)(168 * v12) / 0x10],
                  (const __m128i *)((char *)v21 + v22),
                  v20,
                  v19,
                  v31.m128i_i64[0],
                  (unsigned int *)v31.m128i_i64[1],
                  v34);
          v21 = (const __m128i *)((char *)v21 + v22);
          v20 = v23;
          v24 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v26 - (char *)v21) >> 3);
        }
        while ( v11 <= v24 );
        v25 = v12;
        if ( v24 <= v12 )
          v25 = 0xCF3CF3CF3CF3CF3DLL * (((char *)v26 - (char *)v21) >> 3);
        sub_1700E60(
          v21,
          (const __m128i *)((char *)v21 + 168 * v25),
          (const __m128i *)((char *)v21 + 168 * v25),
          v26,
          v23,
          v19,
          v31.m128i_i64[0],
          (unsigned int *)v31.m128i_i64[1],
          v34);
        if ( v9 <= v11 )
          return;
      }
      if ( v9 > v12 )
        v9 = v12;
      sub_1700E60(
        a3,
        (const __m128i *)((char *)a3 + 168 * v9),
        (const __m128i *)((char *)a3 + 168 * v9),
        v26,
        v27,
        v19,
        a7,
        *((unsigned int **)&a7 + 1),
        a8);
    }
  }
}
