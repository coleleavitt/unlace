void __fastcall CoinLpIO::setDefaultColNames(CoinLpIO *this)
{
  int NumCols; // r14d
  const char **v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  int v5; // r12d
  char *v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // rcx
  void **v16; // rbp
  void *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-158h]
  int v19; // [rsp+Ch] [rbp-14Ch]
  __int64 v21; // [rsp+18h] [rbp-140h]
  char s[312]; // [rsp+20h] [rbp-138h] BYREF

  NumCols = CoinLpIO::getNumCols(this);
  v19 = NumCols;
  v2 = (const char **)malloc(8LL * NumCols);
  if ( NumCols <= 0 )
  {
    CoinLpIO::stopHash(this, 1);
    CoinLpIO::startHash(this, v2, NumCols, 1);
    goto LABEL_22;
  }
  v3 = (unsigned int)(NumCols - 1);
  v4 = 0;
  v21 = v3;
  v18 = v3 + 1;
  do
  {
    sprintf(s, "x%d", v4);
    v5 = strlen(s);
    v6 = (char *)malloc(v5 + 1);
    if ( !v5 )
      goto LABEL_19;
    v7 = v5 >> 3;
    if ( v5 >> 3 > 0 )
    {
      if ( v7 == 1 )
      {
        v12 = v6;
        v11 = s;
      }
      else
      {
        v8 = 0;
        v9 = 0;
        do
        {
          ++v9;
          *(__m128i *)&v6[v8] = _mm_load_si128((const __m128i *)&s[v8]);
          v8 += 16;
        }
        while ( v9 < v7 >> 1 );
        v10 = 8LL * (v7 & 0xFFFFFFFE);
        v11 = &s[v10];
        v12 = &v6[v10];
        if ( v7 == (v7 & 0xFFFFFFFE) )
          goto LABEL_10;
      }
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12[7] = v11[7];
LABEL_10:
      v13 = 8LL * (int)(v7 - 1) + 8;
      v14 = &s[v13];
      v15 = &v6[v13];
      goto LABEL_11;
    }
    v15 = v6;
    v14 = s;
LABEL_11:
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_18;
      case 2:
        goto LABEL_17;
      case 3:
        goto LABEL_16;
      case 4:
        goto LABEL_15;
      case 5:
        goto LABEL_14;
      case 6:
        goto LABEL_13;
      case 7:
        v15[6] = v14[6];
LABEL_13:
        v15[5] = v14[5];
LABEL_14:
        v15[4] = v14[4];
LABEL_15:
        v15[3] = v14[3];
LABEL_16:
        v15[2] = v14[2];
LABEL_17:
        v15[1] = v14[1];
LABEL_18:
        *v15 = *v14;
        break;
      default:
        break;
    }
LABEL_19:
    v2[v4++] = v6;
    v6[v5] = 0;
  }
  while ( v4 != v18 );
  v16 = (void **)v2;
  CoinLpIO::stopHash(this, 1);
  CoinLpIO::startHash(this, v2, v19, 1);
  do
  {
    v17 = *v16++;
    free(v17);
  }
  while ( v16 != (void **)&v2[v21 + 1] );
LABEL_22:
  free(v2);
}

