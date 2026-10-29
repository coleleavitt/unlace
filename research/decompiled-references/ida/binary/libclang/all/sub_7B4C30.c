void __fastcall sub_7B4C30(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  const __m128i *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __m128i *v11; // rdi
  const __m128i *v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // rdx
  const __m128i *v18; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v6 = a4;
    v7 = a5;
    if ( a4 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_13:
        v14 = a1->m128i_i64[0];
        if ( a2->m128i_i64[0] < (unsigned __int64)a1->m128i_i64[0] )
        {
          v15 = a1->m128i_i64[1];
          *a1 = _mm_loadu_si128(a2);
          a2->m128i_i64[0] = v14;
          a2->m128i_i64[1] = v15;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 >= v6 )
          {
            v11 = a1;
            v16 = a2 - a1;
            v13 = v7 / 2;
            v8 = &a2[v7 / 2];
            while ( v16 > 0 )
            {
              while ( 1 )
              {
                v17 = &v11[v16 >> 1];
                if ( v8->m128i_i64[0] < (unsigned __int64)v17->m128i_i64[0] )
                  break;
                v11 = v17 + 1;
                v16 = v16 - (v16 >> 1) - 1;
                if ( v16 <= 0 )
                  goto LABEL_21;
              }
              v16 >>= 1;
            }
LABEL_21:
            v9 = v11 - a1;
          }
          else
          {
            v8 = a2;
            v9 = v6 / 2;
            v10 = (a3 - (__int64)a2) >> 4;
            v11 = &a1[v6 / 2];
            while ( v10 > 0 )
            {
              while ( 1 )
              {
                v12 = &v8[v10 >> 1];
                if ( v12->m128i_i64[0] >= (unsigned __int64)v11->m128i_i64[0] )
                  break;
                v8 = v12 + 1;
                v10 = v10 - (v10 >> 1) - 1;
                if ( v10 <= 0 )
                  goto LABEL_9;
              }
              v10 >>= 1;
            }
LABEL_9:
            v13 = v8 - a2;
          }
          v7 -= v13;
          v18 = sub_7B49C0(v11, a2, v8);
          sub_7B4C30(a1, v11, v18, v9, v13);
          v6 -= v9;
          if ( !v6 || !v7 )
            break;
          a1 = (__m128i *)v18;
          a2 = (__m128i *)v8;
          if ( v7 + v6 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}

