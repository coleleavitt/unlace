void __fastcall CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(
        CoinWarmStartBasisDiff *this,
        __int64 *a2,
        const unsigned int *a3,
        const __m128i *a4,
        const __m128i *a5)
{
  int v5; // ebp
  __int64 v6; // rax
  const unsigned int *v10; // rax
  const __m128i *v11; // rsi
  const unsigned int *v12; // rdi
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rdx
  unsigned int *v17; // rdx
  unsigned int *v18; // rsi
  const __m128i *v19; // rax
  unsigned int *v20; // rcx
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rdx

  v5 = (int)a3;
  v6 = *a2;
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v6 - 40)) = a2[1];
  *((_DWORD *)this + 2) = (_DWORD)a3;
  *((_QWORD *)this + 2) = 0;
  if ( (int)a3 > 0 )
  {
    v10 = (const unsigned int *)operator new[](8LL * (_DWORD)a3);
    *((_QWORD *)this + 2) = v10;
    if ( v10 != (const unsigned int *)a4 )
    {
      if ( v5 >> 3 )
      {
        v11 = a4;
        v12 = v10;
        v13 = (unsigned int)((v5 >> 3) - 1);
        do
        {
          v14 = _mm_loadu_si128(v11 + 1);
          v11 += 2;
          v12 += 8;
          v15 = _mm_loadu_si128(v11 - 2);
          *((__m128i *)v12 - 1) = v14;
          *((__m128i *)v12 - 2) = v15;
        }
        while ( v11 != &a4[2 * v13 + 2] );
        v16 = 8 * ((int)v13 + 1LL);
        a4 = (const __m128i *)((char *)a4 + v16 * 4);
        v17 = (unsigned int *)&v10[v16];
      }
      else
      {
        v17 = (unsigned int *)v10;
      }
      switch ( v5 & 7 )
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
          v17[6] = a4[1].m128i_u32[2];
LABEL_9:
          v17[5] = a4[1].m128i_u32[1];
LABEL_10:
          v17[4] = a4[1].m128i_u32[0];
LABEL_11:
          v17[3] = a4->m128i_u32[3];
LABEL_12:
          v17[2] = a4->m128i_u32[2];
LABEL_13:
          v17[1] = a4->m128i_u32[1];
LABEL_14:
          *v17 = a4->m128i_i32[0];
          break;
      }
    }
    v18 = (unsigned int *)&v10[*((int *)this + 2)];
    if ( v18 != (unsigned int *)a5 )
    {
      if ( v5 >> 3 )
      {
        v19 = a5;
        v20 = v18;
        v21 = (unsigned int)((v5 >> 3) - 1);
        do
        {
          v22 = _mm_loadu_si128(v19 + 1);
          v19 += 2;
          v20 += 8;
          v23 = _mm_loadu_si128(v19 - 2);
          *((__m128i *)v20 - 1) = v22;
          *((__m128i *)v20 - 2) = v23;
        }
        while ( &a5[2 * v21 + 2] != v19 );
        v24 = 32 * ((int)v21 + 1LL);
        a5 = (const __m128i *)((char *)a5 + v24);
        v18 = (unsigned int *)((char *)v18 + v24);
      }
      switch ( v5 & 7 )
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
          v18[6] = a5[1].m128i_u32[2];
LABEL_22:
          v18[5] = a5[1].m128i_u32[1];
LABEL_23:
          v18[4] = a5[1].m128i_u32[0];
LABEL_24:
          v18[3] = a5->m128i_u32[3];
LABEL_25:
          v18[2] = a5->m128i_u32[2];
LABEL_26:
          v18[1] = a5->m128i_u32[1];
LABEL_27:
          *v18 = a5->m128i_i32[0];
          break;
      }
    }
  }
}

