void __fastcall sub_209F320(__int64 *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __m128i *v8; // r11
  __m128i *v9; // rbx
  __m128i *v10; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __m128i *v13; // rax
  __m128i *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm0
  unsigned __int64 v26; // [rsp+10h] [rbp-48h]

  v7 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 384 )
  {
    v8 = a2;
    if ( !a3 )
    {
      v14 = a2;
      goto LABEL_12;
    }
    while ( 1 )
    {
      --a3;
      v9 = (__m128i *)(a1 + 3);
      sub_209EAD0(a1, a1 + 3, &a1[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v7 >> 3)) >> 1)], &v8[-2].m128i_i64[1]);
      v11 = a1[2];
      v12 = v10[-1].m128i_u64[1];
      v13 = v10;
      while ( 1 )
      {
        v14 = v9;
        if ( v9[1].m128i_i64[0] < v11 )
          goto LABEL_9;
        v13 = (__m128i *)((char *)v13 - 24);
        if ( v12 > v11 )
        {
          do
            v13 = (__m128i *)((char *)v13 - 24);
          while ( v13[1].m128i_i64[0] > v11 );
        }
        if ( v9 >= v13 )
          break;
        v15 = v9->m128i_i64[0];
        v9->m128i_i64[0] = v13->m128i_i64[0];
        v16 = v13->m128i_i64[1];
        v13->m128i_i64[0] = v15;
        v17 = v9->m128i_i64[1];
        v9->m128i_i64[1] = v16;
        v18 = v13[1].m128i_i64[0];
        v13->m128i_i64[1] = v17;
        v19 = v9[1].m128i_i64[0];
        v9[1].m128i_i64[0] = v18;
        v12 = v13[-1].m128i_u64[1];
        v13[1].m128i_i64[0] = v19;
        v11 = a1[2];
LABEL_9:
        v9 = (__m128i *)((char *)v9 + 24);
      }
      sub_209F320(v9, v10, a3);
      v7 = (char *)v9 - (char *)a1;
      if ( (char *)v9 - (char *)a1 <= 384 )
        return;
      v8 = v9;
      if ( !a3 )
      {
LABEL_12:
        v20 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
        v21 = (v20 - 2) >> 1;
        sub_209F170(
          (__int64)a1,
          v21,
          v20,
          a4,
          a5,
          a6,
          (__int128)_mm_loadu_si128((const __m128i *)&a1[3 * v21]),
          a1[3 * v21 + 2]);
        do
        {
          --v21;
          sub_209F170(
            (__int64)a1,
            v21,
            v20,
            v22,
            v23,
            v24,
            (__int128)_mm_loadu_si128((const __m128i *)&a1[3 * v21]),
            a1[3 * v21 + 2]);
        }
        while ( v21 );
        do
        {
          v14 = (__m128i *)((char *)v14 - 24);
          v25 = (__int128)_mm_loadu_si128(v14);
          v26 = v14[1].m128i_u64[0];
          v14->m128i_i64[0] = *a1;
          v14->m128i_i64[1] = a1[1];
          v14[1].m128i_i64[0] = a1[2];
          sub_209F170((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * (((char *)v14 - (char *)a1) >> 3), v22, v23, v24, v25, v26);
        }
        while ( (char *)v14 - (char *)a1 > 24 );
        return;
      }
    }
  }
}
