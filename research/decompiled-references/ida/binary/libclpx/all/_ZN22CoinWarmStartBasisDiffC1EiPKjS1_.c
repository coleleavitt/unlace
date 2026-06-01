void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        int a2,
        const __m128i *a3,
        const __m128i *a4)
{
  const unsigned int *v8; // rax
  const __m128i *v9; // rdi
  const unsigned int *v10; // r8
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rsi
  unsigned int *v15; // rsi
  unsigned int *v16; // rsi
  const __m128i *v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rcx

  *((_DWORD *)this + 2) = a2;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)this = off_4D24C0;
  if ( a2 > 0 )
  {
    v8 = (const unsigned int *)operator new[](8LL * a2);
    *((_QWORD *)this + 2) = v8;
    if ( a3 != (const __m128i *)v8 )
    {
      if ( a2 >> 3 )
      {
        v9 = a3;
        v10 = v8;
        v11 = (unsigned int)((a2 >> 3) - 1);
        do
        {
          v12 = _mm_loadu_si128(v9 + 1);
          v9 += 2;
          v10 += 8;
          v13 = _mm_loadu_si128(v9 - 2);
          *((__m128i *)v10 - 1) = v12;
          *((__m128i *)v10 - 2) = v13;
        }
        while ( v9 != &a3[2 * v11 + 2] );
        v14 = 8 * ((int)v11 + 1LL);
        a3 = (const __m128i *)((char *)a3 + v14 * 4);
        v15 = (unsigned int *)&v8[v14];
      }
      else
      {
        v15 = (unsigned int *)v8;
      }
      switch ( a2 & 7 )
      {
        case 0:
          break;
        case 1:
          goto LABEL_14;
        case 2:
          goto LABEL_13;
        case 3:
          goto LABEL_12;
        case 4:
          goto LABEL_11;
        case 5:
          goto LABEL_10;
        case 6:
          goto LABEL_9;
        case 7:
          v15[6] = a3[1].m128i_u32[2];
LABEL_9:
          v15[5] = a3[1].m128i_u32[1];
LABEL_10:
          v15[4] = a3[1].m128i_u32[0];
LABEL_11:
          v15[3] = a3->m128i_u32[3];
LABEL_12:
          v15[2] = a3->m128i_u32[2];
LABEL_13:
          v15[1] = a3->m128i_u32[1];
LABEL_14:
          *v15 = a3->m128i_i32[0];
          break;
      }
    }
    v16 = (unsigned int *)&v8[*((int *)this + 2)];
    if ( a4 != (const __m128i *)v16 )
    {
      if ( a2 >> 3 )
      {
        v17 = a4;
        v18 = v16;
        v19 = (unsigned int)((a2 >> 3) - 1);
        do
        {
          v20 = _mm_loadu_si128(v17 + 1);
          v17 += 2;
          v18 += 8;
          v21 = _mm_loadu_si128(v17 - 2);
          *((__m128i *)v18 - 1) = v20;
          *((__m128i *)v18 - 2) = v21;
        }
        while ( &a4[2 * v19 + 2] != v17 );
        v22 = 32 * ((int)v19 + 1LL);
        a4 = (const __m128i *)((char *)a4 + v22);
        v16 = (unsigned int *)((char *)v16 + v22);
      }
      switch ( a2 & 7 )
      {
        case 0:
          return;
        case 1:
          goto LABEL_27;
        case 2:
          goto LABEL_26;
        case 3:
          goto LABEL_25;
        case 4:
          goto LABEL_24;
        case 5:
          goto LABEL_23;
        case 6:
          goto LABEL_22;
        case 7:
          v16[6] = a4[1].m128i_u32[2];
LABEL_22:
          v16[5] = a4[1].m128i_u32[1];
LABEL_23:
          v16[4] = a4[1].m128i_u32[0];
LABEL_24:
          v16[3] = a4->m128i_u32[3];
LABEL_25:
          v16[2] = a4->m128i_u32[2];
LABEL_26:
          v16[1] = a4->m128i_u32[1];
LABEL_27:
          *v16 = a4->m128i_i32[0];
          break;
      }
    }
  }
}

