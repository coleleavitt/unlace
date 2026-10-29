void __fastcall CoinMemcpyN<char>(char *a1, int a2, char *a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rax
  signed int v9; // r8d
  __int64 v10; // rax
  char *v11; // rcx
  char *v12; // rax
  char v13; // r9

  if ( a2 && a1 != a3 )
  {
    v3 = a2 >> 3;
    if ( a2 >> 3 > 0 )
    {
      if ( (a1 >= a3 + 16 || a3 >= a1 + 16) && v3 > 1 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          ++v5;
          *(__m128i *)&a3[v4] = _mm_loadu_si128((const __m128i *)&a1[v4]);
          v4 += 16;
        }
        while ( v5 < v3 >> 1 );
        v6 = 8LL * (v3 & 0xFFFFFFFE);
        v7 = &a1[v6];
        v8 = &a3[v6];
        if ( v3 != (v3 & 0xFFFFFFFE) )
        {
          *v8 = *v7;
          v8[1] = v7[1];
          v8[2] = v7[2];
          v8[3] = v7[3];
          v8[4] = v7[4];
          v8[5] = v7[5];
          v8[6] = v7[6];
          v8[7] = v7[7];
        }
        v9 = v3 - 1;
      }
      else
      {
        v9 = v3 - 1;
        v11 = a3;
        v12 = a1;
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
        while ( &a1[8 * v9 + 8] != v12 );
      }
      v10 = 8LL * v9 + 8;
      a1 += v10;
      a3 += v10;
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_19;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_17;
      case 4:
        goto LABEL_16;
      case 5:
        goto LABEL_15;
      case 6:
        goto LABEL_14;
      case 7:
        a3[6] = a1[6];
LABEL_14:
        a3[5] = a1[5];
LABEL_15:
        a3[4] = a1[4];
LABEL_16:
        a3[3] = a1[3];
LABEL_17:
        a3[2] = a1[2];
LABEL_18:
        a3[1] = a1[1];
LABEL_19:
        *a3 = *a1;
        break;
      default:
        return;
    }
  }
}

