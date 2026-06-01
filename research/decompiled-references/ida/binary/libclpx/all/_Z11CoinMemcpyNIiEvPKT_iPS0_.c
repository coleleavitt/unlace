void __fastcall CoinMemcpyN<int>(const __m128i *a1, int a2, __m128i *a3)
{
  unsigned int v3; // r9d
  const __m128i *v4; // rax
  __m128i *v5; // rcx
  __int64 v6; // r9
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i *v10; // rcx
  const __m128i *v11; // rax
  __int32 v12; // r10d

  if ( a2 && a1 != a3 )
  {
    v3 = a2 >> 3;
    if ( a2 >> 3 > 0 )
    {
      if ( (a1 >= &a3[2] || a3 >= &a1[2]) && v3 > 1 )
      {
        v4 = a1;
        v5 = a3;
        v6 = v3 - 1;
        do
        {
          v7 = _mm_loadu_si128(v4);
          v4 += 2;
          v5 += 2;
          v8 = _mm_loadu_si128(v4 - 1);
          v5[-2] = v7;
          v5[-1] = v8;
        }
        while ( v4 != &a1[2 * v6 + 2] );
      }
      else
      {
        v10 = a3;
        v11 = a1;
        v6 = v3 - 1;
        do
        {
          v12 = v11->m128i_i32[0];
          v11 += 2;
          v10 += 2;
          v10[-2].m128i_i32[0] = v12;
          v10[-2].m128i_i32[1] = v11[-2].m128i_i32[1];
          v10[-2].m128i_i32[2] = v11[-2].m128i_i32[2];
          v10[-2].m128i_i32[3] = v11[-2].m128i_i32[3];
          v10[-1].m128i_i32[0] = v11[-1].m128i_i32[0];
          v10[-1].m128i_i32[1] = v11[-1].m128i_i32[1];
          v10[-1].m128i_i32[2] = v11[-1].m128i_i32[2];
          v10[-1].m128i_i32[3] = v11[-1].m128i_i32[3];
        }
        while ( &a1[2 * v6 + 2] != v11 );
      }
      v9 = 32 * ((int)v6 + 1LL);
      a1 = (const __m128i *)((char *)a1 + v9);
      a3 = (__m128i *)((char *)a3 + v9);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_16;
      case 2:
        goto LABEL_15;
      case 3:
        goto LABEL_14;
      case 4:
        goto LABEL_13;
      case 5:
        goto LABEL_12;
      case 6:
        goto LABEL_11;
      case 7:
        a3[1].m128i_i32[2] = a1[1].m128i_i32[2];
LABEL_11:
        a3[1].m128i_i32[1] = a1[1].m128i_i32[1];
LABEL_12:
        a3[1].m128i_i32[0] = a1[1].m128i_i32[0];
LABEL_13:
        a3->m128i_i32[3] = a1->m128i_i32[3];
LABEL_14:
        a3->m128i_i32[2] = a1->m128i_i32[2];
LABEL_15:
        a3->m128i_i32[1] = a1->m128i_i32[1];
LABEL_16:
        a3->m128i_i32[0] = a1->m128i_i32[0];
        break;
      default:
        return;
    }
  }
}

