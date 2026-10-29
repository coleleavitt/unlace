void __fastcall sub_9649F0(
        __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 **a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  const __m128i *v8; // r13
  __int64 v9; // r12
  __int64 **v10; // rbp
  __m128i *v11; // rbx
  const __m128i *v12; // r14
  __m128i *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rbx
  __m128i *v16; // r8
  __int64 v17; // r14
  __int64 v18; // rax
  const __m128i *v19; // r15
  __int64 **v20; // r12
  __int64 v21; // rbp
  const __m128i *v22; // rdi
  __int64 v23; // rax
  const __m128i *v24; // r12
  __m128i *v25; // r8
  const __m128i *v26; // r13
  const __m128i *v27; // rdi
  __int64 v28; // rax
  const __m128i *v29; // r12
  const __m128i *v30; // rdi
  __int64 v31; // r15
  __int64 v32; // [rsp+8h] [rbp-60h]
  const __m128i *v35; // [rsp+20h] [rbp-48h]
  __int64 v36; // [rsp+28h] [rbp-40h]
  const __m128i *v37; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v9 = (char *)a2 - (char *)a1;
  v10 = a4;
  v11 = a1;
  v12 = (const __m128i *)((char *)a3 + (char *)a2 - (char *)a1);
  v32 = a2 - a1;
  if ( (char *)a2 - (char *)a1 <= 96 )
  {
    sub_95E9A0(a1, a2, a4, a5, a6, a7, a8);
  }
  else
  {
    do
    {
      v13 = v11;
      v11 += 7;
      sub_95E9A0(v13, v11, v10, a5, a6, a7, a8);
    }
    while ( (char *)a2 - (char *)v11 > 96 );
    sub_95E9A0(v11, a2, v10, a5, a6, a7, a8);
    if ( v9 > 112 )
    {
      v14 = 7;
      while ( 1 )
      {
        v15 = 2 * v14;
        if ( v32 < 2 * v14 )
        {
          v23 = v32;
          v16 = (__m128i *)a3;
          v24 = a1;
        }
        else
        {
          v16 = (__m128i *)a3;
          v35 = v12;
          v36 = v14;
          v17 = 32 * v14;
          v18 = -16 * v14;
          v19 = a1;
          v20 = v10;
          v21 = v18;
          do
          {
            v22 = v19;
            v19 = (const __m128i *)((char *)v19 + v17);
            v16 = sub_9646C0(
                    v22,
                    (const __m128i *)((char *)v19 + v21),
                    (const __m128i *)((char *)v19 + v21),
                    v19,
                    v16,
                    v20,
                    a5,
                    a6,
                    a7,
                    a8);
            v23 = v8 - v19;
          }
          while ( v15 <= v23 );
          v10 = v20;
          v12 = v35;
          v24 = v19;
          v14 = v36;
        }
        if ( v14 <= v23 )
          v23 = v14;
        v14 *= 4;
        sub_9646C0(v24, &v24[v23], &v24[v23], v8, v16, v10, a5, a6, a7, a8);
        if ( v32 < v14 )
          break;
        v25 = a1;
        v37 = v8;
        v26 = a3;
        do
        {
          v27 = v26;
          v26 += v14;
          v25 = sub_9646C0(
                  v27,
                  (const __m128i *)((char *)v26 + 16 * v15 - 16 * v14),
                  (const __m128i *)((char *)v26 + 16 * v15 - 16 * v14),
                  v26,
                  v25,
                  v10,
                  a5,
                  a6,
                  a7,
                  a8);
          v28 = v12 - v26;
        }
        while ( v14 <= v28 );
        v29 = v26;
        v30 = v26;
        v8 = v37;
        if ( v28 <= v15 )
          v15 = v28;
        sub_9646C0(v30, &v29[v15], &v29[v15], v12, v25, v10, a5, a6, a7, a8);
        if ( v32 <= v14 )
          return;
      }
      v31 = v32;
      if ( v32 > v15 )
        v31 = v15;
      sub_9646C0(a3, &a3[v31], &a3[v31], v12, a1, v10, a5, a6, a7, a8);
    }
  }
}

