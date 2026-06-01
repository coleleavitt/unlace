void __fastcall CoinLpIO::setDefaultRowNames(CoinLpIO *this)
{
  int NumRows; // r14d
  const char **v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  int v5; // r12d
  const char *v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // rcx
  char *v16; // rax
  char v17; // dl
  char *v18; // rax
  void **v19; // rbp
  void *v20; // rdi
  size_t v22; // [rsp+10h] [rbp-448h]
  int v23; // [rsp+18h] [rbp-440h]
  int v24; // [rsp+1Ch] [rbp-43Ch]
  char s[1080]; // [rsp+20h] [rbp-438h] BYREF

  NumRows = CoinLpIO::getNumRows(this);
  v24 = NumRows;
  v23 = NumRows + 1;
  v22 = NumRows + 1;
  v2 = (const char **)malloc(v22 * 8);
  if ( NumRows > 0 )
  {
    v3 = (unsigned int)(NumRows - 1);
    v4 = 0;
    while ( 1 )
    {
      sprintf(s, "cons%d", v4);
      v5 = strlen(s);
      v6 = (const char *)malloc(v5 + 1);
      if ( v5 )
        break;
LABEL_19:
      v2[v4++] = v6;
      v6[v5] = 0;
      if ( v4 == v3 + 1 )
        goto LABEL_20;
    }
    v7 = v5 >> 3;
    if ( v5 >> 3 <= 0 )
    {
      v15 = (char *)v6;
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
          goto LABEL_19;
      }
      goto LABEL_19;
    }
    if ( v7 == 1 )
    {
      v12 = (char *)v6;
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
      v12 = (char *)&v6[v10];
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
    v15 = (char *)&v6[v13];
    goto LABEL_11;
  }
LABEL_20:
  strcpy(s, "obj");
  v16 = (char *)malloc(4u);
  v17 = s[2];
  v16[3] = 0;
  v2[v22 - 1] = v16;
  v16[2] = v17;
  v16[1] = s[1];
  *v16 = s[0];
  CoinLpIO::stopHash(this, 0);
  CoinLpIO::startHash(this, v2, v23, 0);
  v18 = (char *)malloc(4u);
  if ( v18 != "obj" )
  {
    v18[2] = 106;
    *(_WORD *)v18 = 25199;
  }
  v18[3] = 0;
  *((_QWORD *)this + 30) = v18;
  if ( v24 >= 0 )
  {
    v19 = (void **)v2;
    do
    {
      v20 = *v19++;
      free(v20);
    }
    while ( v19 != (void **)&v2[v24 + 1] );
  }
  free(v2);
}

