void __fastcall CoinIndexedVector::createPacked(CoinIndexedVector *this, int a2, const __m128i *a3, double *a4)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r11d
  const __m128i *v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __int64 v11; // rax
  double *v12; // r8
  double *v13; // rdx
  double *v14; // rax
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  const int *v18; // r8
  int v19; // ebp

  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 4) = a2;
  *((_BYTE *)this + 28) = 1;
  if ( (const __m128i *)v4 != a3 && a2 )
  {
    v5 = a2 >> 3;
    if ( a2 >> 3 > 0 )
    {
      if ( ((unsigned __int64)a3 >= v4 + 32 || v4 >= (unsigned __int64)&a3[2]) && v5 > 1 )
      {
        v6 = a3;
        v7 = v4;
        v8 = v5 - 1;
        do
        {
          v9 = _mm_loadu_si128(v6);
          v6 += 2;
          v7 += 32LL;
          v10 = _mm_loadu_si128(v6 - 1);
          *(__m128i *)(v7 - 32) = v9;
          *(__m128i *)(v7 - 16) = v10;
        }
        while ( v6 != &a3[2 * v8 + 2] );
      }
      else
      {
        v17 = v4;
        v18 = (const int *)a3;
        v8 = v5 - 1;
        do
        {
          v19 = *v18;
          v17 += 32LL;
          v18 += 8;
          *(_DWORD *)(v17 - 32) = v19;
          *(_DWORD *)(v17 - 28) = *(v18 - 7);
          *(_DWORD *)(v17 - 24) = *(v18 - 6);
          *(_DWORD *)(v17 - 20) = *(v18 - 5);
          *(_DWORD *)(v17 - 16) = *(v18 - 4);
          *(_DWORD *)(v17 - 12) = *(v18 - 3);
          *(_DWORD *)(v17 - 8) = *(v18 - 2);
          *(_DWORD *)(v17 - 4) = *(v18 - 1);
        }
        while ( v4 + 32 * (v8 + 1) != v17 );
      }
      v11 = 32 * ((int)v8 + 1LL);
      a3 = (const __m128i *)((char *)a3 + v11);
      v4 += v11;
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
        *(_DWORD *)(v4 + 24) = a3[1].m128i_i32[2];
LABEL_11:
        *(_DWORD *)(v4 + 20) = a3[1].m128i_i32[1];
LABEL_12:
        *(_DWORD *)(v4 + 16) = a3[1].m128i_i32[0];
LABEL_13:
        *(_DWORD *)(v4 + 12) = a3->m128i_i32[3];
LABEL_14:
        *(_DWORD *)(v4 + 8) = a3->m128i_i32[2];
LABEL_15:
        *(_DWORD *)(v4 + 4) = a3->m128i_i32[1];
LABEL_16:
        *(_DWORD *)v4 = a3->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v12 = *((double **)this + 1);
  if ( v12 != a4 && a2 )
  {
    if ( a2 >> 3 > 0 )
    {
      v13 = a4;
      v14 = *((double **)this + 1);
      do
      {
        v15 = *(_QWORD *)v13;
        v14 += 8;
        v13 += 8;
        *((_QWORD *)v14 - 8) = v15;
        *(v14 - 7) = *(v13 - 7);
        *(v14 - 6) = *(v13 - 6);
        *(v14 - 5) = *(v13 - 5);
        *(v14 - 4) = *(v13 - 4);
        *(v14 - 3) = *(v13 - 3);
        *(v14 - 2) = *(v13 - 2);
        *(v14 - 1) = *(v13 - 1);
      }
      while ( v14 != &v12[8 * (unsigned int)((a2 >> 3) - 1) + 8] );
      v16 = ((a2 >> 3) - 1 + 1LL) << 6;
      a4 = (double *)((char *)a4 + v16);
      v12 = (double *)((char *)v12 + v16);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_30;
      case 2:
        goto LABEL_29;
      case 3:
        goto LABEL_28;
      case 4:
        goto LABEL_27;
      case 5:
        goto LABEL_26;
      case 6:
        goto LABEL_25;
      case 7:
        v12[6] = a4[6];
LABEL_25:
        v12[5] = a4[5];
LABEL_26:
        v12[4] = a4[4];
LABEL_27:
        v12[3] = a4[3];
LABEL_28:
        v12[2] = a4[2];
LABEL_29:
        v12[1] = a4[1];
LABEL_30:
        *v12 = *a4;
        break;
      default:
        return;
    }
  }
}

