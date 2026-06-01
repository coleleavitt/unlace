void __fastcall sub_1C59090(const __m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  const __m128i *v6; // rbp
  const __m128i *v7; // r15
  __int64 v8; // rbx
  const __m128i *v9; // r13
  size_t v10; // rbp
  size_t v11; // rdx
  __int8 *v12; // r14
  size_t v13; // r15
  int v14; // eax
  __m128i *v15; // r12
  __m128i *v16; // r14
  size_t v17; // rbp
  unsigned __int64 v18; // rbx
  __int64 v19; // r13
  size_t v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  const __m128i *v25; // r13
  size_t v26; // r15
  __int64 v27; // r14
  __int8 *v28; // rbx
  size_t v29; // rbp
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // r13
  __int64 v33; // [rsp+8h] [rbp-80h]
  const __m128i *v34; // [rsp+10h] [rbp-78h]
  const __m128i *v35; // [rsp+18h] [rbp-70h]
  const void **v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]

  v35 = a1;
  v34 = a2;
  v33 = a5;
  if ( a5 )
  {
    v5 = a4;
    if ( a4 )
    {
      if ( a4 + a5 != 2 )
      {
        while ( v5 > v33 )
        {
          v41 = v5 / 2;
          v39 = v5 / 2;
          v6 = (const __m128i *)((char *)v35 + 24 * (v5 / 2));
          v7 = v34;
          v8 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)v34) >> 3);
          if ( a3 - (__int64)v34 > 0 )
          {
            v36 = (const void **)v35 + 3 * (v5 / 2);
            v37 = v5;
            v9 = v34;
            v10 = v6->m128i_u64[1];
            while ( 1 )
            {
              while ( 1 )
              {
                v11 = v10;
                v12 = &v9->m128i_i8[24 * (v8 >> 1)];
                v13 = *((_QWORD *)v12 + 1);
                if ( v13 <= v10 )
                  v11 = *((_QWORD *)v12 + 1);
                if ( !v11 )
                  break;
                v14 = memcmp(*(const void **)v12, *v36, v11);
                if ( !v14 )
                  break;
                if ( v14 >= 0 )
                {
                  v8 >>= 1;
                  goto LABEL_15;
                }
LABEL_7:
                v9 = (const __m128i *)(v12 + 24);
                v8 = v8 - (v8 >> 1) - 1;
                if ( v8 <= 0 )
                  goto LABEL_16;
              }
              if ( v13 != v10 && v13 < v10 )
                goto LABEL_7;
              v8 >>= 1;
LABEL_15:
              if ( v8 <= 0 )
              {
LABEL_16:
                v7 = v9;
                v6 = (const __m128i *)v36;
                v5 = v37;
                v15 = (__m128i *)((char *)v36 + (char *)v7 - (char *)v34);
                v33 -= 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)v34) >> 3);
                v38 = 0xAAAAAAAAAAAAAAABLL * (((char *)v7 - (char *)v34) >> 3);
                goto LABEL_17;
              }
            }
          }
          v38 = 0;
          v15 = (__m128i *)((char *)v35 + 24 * (v5 / 2));
LABEL_17:
          v5 -= v41;
LABEL_18:
          sub_1C530D0(v6, v34, v7);
          sub_1C59090(v35, v6, v15, v39, v38);
          if ( !v5 || !v33 )
            return;
          v34 = v7;
          v35 = v15;
          if ( v5 + v33 == 2 )
          {
            v16 = (__m128i *)v7;
            goto LABEL_22;
          }
        }
        v6 = v35;
        v38 = v33 / 2;
        v42 = 24 * (v33 / 2);
        v7 = (const __m128i *)((char *)v34 + v42);
        v24 = 0xAAAAAAAAAAAAAAABLL * (((char *)v34 - (char *)v35) >> 3);
        if ( (char *)v34 - (char *)v35 <= 0 )
        {
          v39 = 0;
LABEL_44:
          v33 -= v33 / 2;
          v15 = (__m128i *)((char *)v6 + v42);
          goto LABEL_18;
        }
        v40 = v5;
        v25 = v35;
        v26 = v7->m128i_u64[1];
        while ( 1 )
        {
          while ( 1 )
          {
            v27 = v24 >> 1;
            v28 = &v25->m128i_i8[24 * (v24 >> 1)];
            v29 = *((_QWORD *)v28 + 1);
            v30 = v29;
            if ( v26 <= v29 )
              v30 = v26;
            if ( !v30 )
              break;
            v31 = memcmp((const void *)v34->m128i_i64[(unsigned __int64)v42 / 8], *(const void **)v28, v30);
            if ( !v31 )
              break;
            if ( v31 >= 0 )
            {
              v25 = (const __m128i *)(v28 + 24);
              v24 = v24 - v27 - 1;
              goto LABEL_42;
            }
LABEL_34:
            v24 >>= 1;
            if ( v27 <= 0 )
              goto LABEL_43;
          }
          if ( v26 != v29 && v26 < v29 )
            goto LABEL_34;
          v25 = (const __m128i *)(v28 + 24);
          v24 = v24 - v27 - 1;
LABEL_42:
          if ( v24 <= 0 )
          {
LABEL_43:
            v6 = v25;
            v32 = v40;
            v7 = (const __m128i *)((char *)v34 + v42);
            v39 = 0xAAAAAAAAAAAAAAABLL * (((char *)v6 - (char *)v35) >> 3);
            v5 = v32 - v39;
            goto LABEL_44;
          }
        }
      }
      v15 = (__m128i *)a1;
      v16 = a2;
LABEL_22:
      v17 = v16->m128i_u64[1];
      v18 = v15->m128i_u64[1];
      v19 = v15->m128i_i64[0];
      v20 = v17;
      if ( v18 <= v17 )
        v20 = v15->m128i_u64[1];
      if ( v20 && (v21 = memcmp((const void *)v16->m128i_i64[0], (const void *)v15->m128i_i64[0], v20)) != 0 )
      {
        if ( v21 < 0 )
        {
LABEL_28:
          v22 = v15[1].m128i_i64[0];
          v23 = v16[1].m128i_i64[0];
          *v15 = _mm_loadu_si128(v16);
          v16->m128i_i64[0] = v19;
          v16->m128i_i64[1] = v18;
          v15[1].m128i_i64[0] = v23;
          v16[1].m128i_i64[0] = v22;
        }
      }
      else if ( v18 != v17 && v18 > v17 )
      {
        goto LABEL_28;
      }
    }
  }
}
