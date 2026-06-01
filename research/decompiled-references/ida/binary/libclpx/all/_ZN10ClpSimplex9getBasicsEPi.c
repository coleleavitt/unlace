void __fastcall ClpSimplex::getBasics(ClpSimplex *this, int *a2)
{
  int v2; // ecx
  int *v3; // r8
  unsigned int v4; // r9d
  const __m128i *v5; // rax
  int *v6; // rdx
  __int64 v7; // r9
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 v10; // rax
  int *v11; // rdx
  int *v12; // rax
  int v13; // r10d

  if ( !*((_QWORD *)this + 132) )
  {
    puts("ClpSimplexPrimal or ClpSimplexDual must have been called with correct startFinishOption");
    abort();
  }
  v2 = *((_DWORD *)this + 26);
  v3 = *((int **)this + 157);
  if ( v2 && a2 != v3 )
  {
    v4 = v2 >> 3;
    if ( v2 >> 3 > 0 )
    {
      if ( (a2 >= v3 + 8 || v3 >= a2 + 8) && v4 > 1 )
      {
        v5 = *((const __m128i **)this + 157);
        v6 = a2;
        v7 = v4 - 1;
        do
        {
          v8 = _mm_loadu_si128(v5);
          v5 += 2;
          v6 += 8;
          v9 = _mm_loadu_si128(v5 - 1);
          *((__m128i *)v6 - 2) = v8;
          *((__m128i *)v6 - 1) = v9;
        }
        while ( v5 != (const __m128i *)&v3[8 * v7 + 8] );
      }
      else
      {
        v11 = a2;
        v12 = *((int **)this + 157);
        v7 = v4 - 1;
        do
        {
          v13 = *v12;
          v12 += 8;
          v11 += 8;
          *(v11 - 8) = v13;
          *(v11 - 7) = *(v12 - 7);
          *(v11 - 6) = *(v12 - 6);
          *(v11 - 5) = *(v12 - 5);
          *(v11 - 4) = *(v12 - 4);
          *(v11 - 3) = *(v12 - 3);
          *(v11 - 2) = *(v12 - 2);
          *(v11 - 1) = *(v12 - 1);
        }
        while ( &v3[8 * v7 + 8] != v12 );
      }
      v10 = 32 * ((int)v7 + 1LL);
      v3 = (int *)((char *)v3 + v10);
      a2 = (int *)((char *)a2 + v10);
    }
    switch ( v2 % 8 )
    {
      case 1:
        goto LABEL_17;
      case 2:
        goto LABEL_16;
      case 3:
        goto LABEL_15;
      case 4:
        goto LABEL_14;
      case 5:
        goto LABEL_13;
      case 6:
        goto LABEL_12;
      case 7:
        a2[6] = v3[6];
LABEL_12:
        a2[5] = v3[5];
LABEL_13:
        a2[4] = v3[4];
LABEL_14:
        a2[3] = v3[3];
LABEL_15:
        a2[2] = v3[2];
LABEL_16:
        a2[1] = v3[1];
LABEL_17:
        *a2 = *v3;
        break;
      default:
        return;
    }
  }
}

