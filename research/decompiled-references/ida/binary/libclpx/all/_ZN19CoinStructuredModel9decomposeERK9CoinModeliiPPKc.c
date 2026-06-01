__int64 __fastcall CoinStructuredModel::decompose(
        CoinMessageHandler **this,
        const CoinModel *a2,
        int a3,
        int a4,
        const char **a5,
        double a6)
{
  int v6; // eax
  int v7; // r14d
  CoinMessageHandler *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // ebp
  int v15; // r13d
  const char *RowName; // rax
  const char *v17; // r12
  int v18; // eax
  __int64 v19; // r13
  const char **v20; // r12
  int v21; // r15d
  const char *v22; // rax
  int *v23; // rcx
  int v24; // eax
  int *v25; // rax
  double v26; // xmm0_8
  unsigned int v27; // eax
  double v29; // xmm0_8
  int v30; // r13d
  const char *ColumnName; // rax
  int v32; // eax
  __int64 v33; // r13
  const char **v34; // r12
  int v35; // r15d
  const char *v36; // rax
  int v37; // eax
  CoinMessageHandler *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-168h]
  int *v45; // [rsp+8h] [rbp-160h]
  unsigned int v47; // [rsp+10h] [rbp-158h]
  int v48; // [rsp+24h] [rbp-144h]
  int v50; // [rsp+2Ch] [rbp-13Ch]
  CoinPackedMatrix *v51; // [rsp+30h] [rbp-138h]
  double *v52; // [rsp+38h] [rbp-130h]
  double *v53; // [rsp+40h] [rbp-128h]
  double *v54; // [rsp+48h] [rbp-120h]
  double *v55; // [rsp+50h] [rbp-118h]
  double *v56; // [rsp+58h] [rbp-110h]
  char s[264]; // [rsp+60h] [rbp-108h] BYREF

  v50 = a4;
  v51 = *((CoinPackedMatrix **)a2 + 38);
  v56 = *((double **)a2 + 23);
  v54 = *((double **)a2 + 24);
  v55 = *((double **)a2 + 25);
  v52 = *((double **)a2 + 16);
  v53 = *((double **)a2 + 17);
  v6 = *((_DWORD *)a2 + 2) + *((_DWORD *)a2 + 3);
  if ( a4 > 1 && 2 * a4 <= v6 )
  {
    v7 = a4;
    if ( a5 )
      goto LABEL_8;
    v29 = *((double *)a2 + 3);
    return CoinStructuredModel::decompose(
             (CoinStructuredModel *)this,
             v51,
             v52,
             v53,
             v54,
             v55,
             v29,
             v56,
             a3 + 10,
             v50,
             nullptr);
  }
  v7 = (v6 + 399) / 400;
  if ( v7 < 8 )
    v7 = 8;
  if ( v7 > 1000 )
    v7 = 1000;
  sprintf(s, "Trying for %d blocks", (unsigned int)v7);
  v8 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 7), 28, (const CoinMessages *)(this + 8));
  v13 = CoinMessageHandler::operator<<(v8, (__int64)s, v9, v10, v11, v12, v44);
  CoinMessageHandler::operator<<(v13, 0, a6);
  if ( !a5 )
  {
    v29 = *((double *)a2 + 3);
    if ( v50 <= 1 )
      return CoinStructuredModel::decompose(
               (CoinStructuredModel *)this,
               v51,
               v52,
               v53,
               v54,
               v55,
               v29,
               v56,
               a3,
               v7,
               nullptr);
    v50 = v7;
    return CoinStructuredModel::decompose(
             (CoinStructuredModel *)this,
             v51,
             v52,
             v53,
             v54,
             v55,
             v29,
             v56,
             a3 + 10,
             v50,
             nullptr);
  }
LABEL_8:
  v45 = (int *)operator new[](4LL * (v7 + 3));
  if ( a3 == 2 )
  {
    v14 = *((_DWORD *)a2 + 3);
    if ( v14 <= 0 )
    {
      v32 = -1;
      v30 = 0;
      if ( !v14 )
        goto LABEL_51;
    }
    else
    {
      v30 = 0;
      while ( 1 )
      {
        ColumnName = (const char *)CoinModel::getColumnName(a2, v30);
        v17 = *a5;
        if ( !strcmp(*a5, ColumnName) )
          break;
        if ( ++v30 == v14 )
          goto LABEL_52;
      }
      v32 = -1;
      if ( v30 )
        v32 = v14;
    }
    v45[1] = v32;
    *v45 = v30;
    v33 = 1;
    v34 = a5 + 1;
    do
    {
      v48 = v33;
      if ( v14 <= 0 )
      {
        v35 = 0;
      }
      else
      {
        v35 = 0;
        while ( 1 )
        {
          v36 = (const char *)CoinModel::getColumnName(a2, v35);
          if ( !strcmp(*v34, v36) )
            break;
          if ( ++v35 == v14 )
          {
LABEL_47:
            sprintf(s, "Unable to find start of block %d %s", v48, a5[v48]);
            goto LABEL_48;
          }
        }
      }
      if ( (_DWORD)v33 == 1 && v45[1] == -1 )
        v45[1] = v35 - 1;
      v37 = v33 + 2;
      ++v34;
      v45[++v33] = v35;
    }
    while ( v7 >= (int)v33 );
    v23 = v45;
    v25 = &v45[v37];
    if ( v45[1] != v14 )
      goto LABEL_23;
    goto LABEL_44;
  }
  v14 = *((_DWORD *)a2 + 2);
  if ( v14 > 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      RowName = (const char *)CoinModel::getRowName(a2, v15);
      v17 = *a5;
      if ( !strcmp(*a5, RowName) )
        break;
      if ( ++v15 == v14 )
        goto LABEL_52;
    }
    v18 = -1;
    if ( v15 )
      v18 = v14;
LABEL_15:
    v45[1] = v18;
    *v45 = v15;
    v19 = 1;
    v20 = a5 + 1;
    do
    {
      v48 = v19;
      if ( v14 <= 0 )
      {
        v21 = 0;
      }
      else
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = (const char *)CoinModel::getRowName(a2, v21);
          if ( !strcmp(*v20, v22) )
            break;
          if ( ++v21 == v14 )
            goto LABEL_47;
        }
      }
      if ( (_DWORD)v19 == 1 && v45[1] == -1 )
        v45[1] = v21 - 1;
      v23 = v45;
      v24 = v19 + 2;
      ++v20;
      v45[++v19] = v21;
    }
    while ( v7 >= (int)v19 );
    v25 = &v45[v24];
    if ( v45[1] != v14 )
    {
LABEL_23:
      *v25 = v14;
LABEL_24:
      v26 = *((double *)a2 + 3);
      if ( v50 <= 1 )
        v27 = CoinStructuredModel::decompose(
                (CoinStructuredModel *)this,
                v51,
                v52,
                v53,
                v54,
                v55,
                v26,
                v56,
                a3,
                v7,
                v45);
      else
        v27 = CoinStructuredModel::decompose(
                (CoinStructuredModel *)this,
                v51,
                v52,
                v53,
                v54,
                v55,
                v26,
                v56,
                a3 + 10,
                v7,
                v45);
      v47 = v27;
      operator delete[](v45);
      return v47;
    }
LABEL_44:
    *v25 = *v23;
    goto LABEL_24;
  }
  v18 = -1;
  v15 = 0;
  if ( v14 )
    goto LABEL_15;
LABEL_51:
  v17 = *a5;
LABEL_52:
  sprintf(s, "Unable to find start of master block %s", v17);
LABEL_48:
  v38 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 7), 30, (const CoinMessages *)(this + 8));
  v43 = CoinMessageHandler::operator<<(v38, (__int64)s, v39, v40, v41, v42, v44);
  CoinMessageHandler::operator<<(v43, 0, a6);
  operator delete[](v45);
  return 0;
}

