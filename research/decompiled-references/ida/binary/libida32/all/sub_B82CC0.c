void __fastcall sub_B82CC0(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __m128i *v6; // r10
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __m128i *v10; // rbx
  __m128i *v11; // rbp
  __int64 v12; // rcx
  __m128i *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  __m128i *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i *v21; // rcx
  __m128i *v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]

  if ( a4 )
  {
    v5 = a5;
    if ( a5 )
    {
      v6 = a1;
      v7 = a4;
      if ( a4 + a5 == 2 )
      {
        v16 = a1;
        v11 = (__m128i *)a2;
LABEL_13:
        v17 = v16->m128i_i64[0];
        if ( v11->m128i_i64[0] < (unsigned __int64)v16->m128i_i64[0] )
        {
          v18 = v16->m128i_i64[1];
          *v16 = _mm_loadu_si128(v11);
          v11->m128i_i64[0] = v17;
          v11->m128i_i64[1] = v18;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v5 >= v7 )
          {
            v15 = v5 / 2;
            v19 = a2 - v6;
            v11 = (__m128i *)&a2[v5 / 2];
            if ( (char *)a2 - (char *)v6 <= 0 )
            {
              v10 = v6;
              v14 = 16 * (v5 / 2);
              v8 = 0;
            }
            else
            {
              v10 = v6;
              do
              {
                while ( 1 )
                {
                  v20 = v19 >> 1;
                  v21 = &v10[v19 >> 1];
                  if ( v11->m128i_i64[0] < (unsigned __int64)v21->m128i_i64[0] )
                    break;
                  v10 = v21 + 1;
                  v19 = v19 - v20 - 1;
                  if ( v19 <= 0 )
                  {
                    v14 = 16 * (v5 / 2);
                    v8 = v10 - v6;
                    goto LABEL_10;
                  }
                }
                v19 >>= 1;
              }
              while ( v20 );
              v14 = 16 * (v5 / 2);
              v8 = v10 - v6;
            }
          }
          else
          {
            v8 = v7 / 2;
            v9 = (a3 - (__int64)a2) >> 4;
            v10 = &v6[v7 / 2];
            if ( a3 - (__int64)a2 <= 0 )
            {
              v11 = (__m128i *)a2;
            }
            else
            {
              v11 = (__m128i *)a2;
              do
              {
                while ( 1 )
                {
                  v12 = v9 >> 1;
                  v13 = &v11[v9 >> 1];
                  if ( v13->m128i_i64[0] >= (unsigned __int64)v10->m128i_i64[0] )
                    break;
                  v11 = v13 + 1;
                  v9 = v9 - v12 - 1;
                  if ( v9 <= 0 )
                    goto LABEL_9;
                }
                v9 >>= 1;
              }
              while ( v12 );
            }
LABEL_9:
            v14 = (char *)v11 - (char *)a2;
            v15 = v11 - a2;
          }
LABEL_10:
          v23 = v5;
          v16 = (__m128i *)((char *)v10 + v14);
          v22 = v6;
          sub_B82B40(v10, a2, v11);
          sub_B82CC0(v22, v10, v16, v8, v15);
          v5 = v23 - v15;
          v7 -= v8;
          if ( !v7 || !v5 )
            break;
          a2 = v11;
          v6 = v16;
          if ( v5 + v7 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}

