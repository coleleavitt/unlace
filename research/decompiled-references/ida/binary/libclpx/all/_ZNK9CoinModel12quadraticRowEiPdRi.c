CoinPackedMatrix *__fastcall CoinModel::quadraticRow(CoinModel *this, int a2, double *a3, int *a4, double a5)
{
  double *v5; // r12
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // rbp
  const char *ElementAsString; // rax
  char *v10; // rsi
  double *v11; // rbp
  char v12; // r8
  int v13; // eax
  int *v14; // r13
  int *v15; // rbp
  double *v16; // r14
  int v17; // r12d
  int i; // ebx
  const char *v19; // rax
  char *v20; // rsi
  char v21; // r8
  double v22; // xmm0_8
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  CoinPackedMatrix *v26; // r12
  double *v28; // rax
  double *v29; // rax
  int v30; // ebp
  int v31; // ebx
  const char *ColumnObjectiveAsString; // rax
  char *v33; // rsi
  char v34; // r8
  int v35; // eax
  const int *v36; // r14
  const int *v37; // r13
  int v38; // ebx
  int v39; // ebp
  const char *v40; // rax
  char *v41; // rsi
  char v42; // r8
  __int64 v43; // rdx
  double v44; // xmm0_8
  int v45; // eax
  __int64 v46; // rdx
  char *dest; // [rsp+8h] [rbp-13970h]
  char *v50; // [rsp+40h] [rbp-13938h] BYREF
  double v51; // [rsp+48h] [rbp-13930h] BYREF
  char *v52; // [rsp+50h] [rbp-13928h] BYREF
  double v53; // [rsp+58h] [rbp-13920h] BYREF
  char *v54; // [rsp+60h] [rbp-13918h] BYREF
  double v55; // [rsp+68h] [rbp-13910h] BYREF
  char *v56; // [rsp+70h] [rbp-13908h] BYREF
  double v57; // [rsp+78h] [rbp-13900h] BYREF
  _BYTE v58[4]; // [rsp+80h] [rbp-138F8h] BYREF
  int v59; // [rsp+84h] [rbp-138F4h]
  _BYTE v60[4]; // [rsp+A0h] [rbp-138D8h] BYREF
  int v61; // [rsp+A4h] [rbp-138D4h]
  char v62[20000]; // [rsp+C0h] [rbp-138B8h] BYREF
  char v63[20000]; // [rsp+4EE0h] [rbp-EA98h] BYREF
  char v64[20000]; // [rsp+9D00h] [rbp-9C78h] BYREF
  char v65[20056]; // [rsp+EB20h] [rbp-4E58h] BYREF

  v5 = a3;
  *a4 = 0;
  v6 = *((_DWORD *)this + 3);
  if ( !v6 )
  {
    if ( a2 != -1 )
      goto LABEL_3;
    return nullptr;
  }
  if ( v6 / 8 <= 0 )
  {
    v29 = a3;
  }
  else
  {
    v28 = a3;
    do
    {
      *v28 = 0.0;
      v28[1] = 0.0;
      v28 += 8;
      *(v28 - 6) = 0.0;
      *(v28 - 5) = 0.0;
      *(v28 - 4) = 0.0;
      *(v28 - 3) = 0.0;
      *(v28 - 2) = 0.0;
      *(v28 - 1) = 0.0;
    }
    while ( &a3[8 * (unsigned int)(v6 / 8 - 1) + 8] != v28 );
    v29 = &a3[8 * (v6 / 8 - 1) + 8];
  }
  switch ( v6 % 8 )
  {
    case 1:
      goto LABEL_46;
    case 2:
      goto LABEL_45;
    case 3:
      goto LABEL_44;
    case 4:
      goto LABEL_43;
    case 5:
      goto LABEL_42;
    case 6:
      goto LABEL_41;
    case 7:
      v29[6] = 0.0;
LABEL_41:
      v29[5] = 0.0;
LABEL_42:
      v29[4] = 0.0;
LABEL_43:
      v29[3] = 0.0;
LABEL_44:
      v29[2] = 0.0;
LABEL_45:
      v29[1] = 0.0;
LABEL_46:
      *v29 = 0.0;
      break;
    default:
      break;
  }
  if ( a2 == -1 )
  {
    if ( v6 <= 0 )
      return nullptr;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      ColumnObjectiveAsString = (const char *)CoinModel::getColumnObjectiveAsString(this, v30);
      if ( !strcmp(ColumnObjectiveAsString, "Numeric") )
      {
        CoinModel::getElement(this, -1, v30);
        *v5 = a5;
      }
      else
      {
        strcpy(v64, ColumnObjectiveAsString);
        v33 = v64;
        v54 = v64;
        if ( v64[0] )
        {
          v34 = 1;
          do
          {
            v35 = CoinModel::decodeBit(this, v33, &v54, &v55, v34 & 1);
            if ( v35 < 0 )
            {
              if ( v35 == -2 )
              {
                a5 = v55;
                *v5 = v55;
                goto LABEL_56;
              }
              if ( v35 != -1 )
              {
                printf("bad nonlinear term %s\n", v64);
                goto LABEL_16;
              }
            }
            ++v31;
LABEL_56:
            v33 = v54;
            v34 = 0;
          }
          while ( *v54 );
        }
      }
      ++v30;
      ++v5;
      if ( *((_DWORD *)this + 3) <= v30 )
      {
        if ( v31 )
        {
          v36 = (const int *)operator new[](4LL * v31);
          v37 = (const int *)operator new[](4LL * v31);
          dest = (char *)operator new[](8LL * v31);
          if ( *((int *)this + 3) <= 0 )
          {
            v39 = 0;
          }
          else
          {
            v38 = 0;
            v39 = 0;
            do
            {
              v40 = (const char *)CoinModel::getColumnObjectiveAsString(this, v38);
              if ( strcmp(v40, "Numeric") )
              {
                strcpy(v65, v40);
                v41 = v65;
                v56 = v65;
                if ( v65[0] )
                {
                  v42 = 1;
                  do
                  {
                    v45 = CoinModel::decodeBit(this, v41, &v56, &v57, v42 & 1);
                    if ( v45 >= 0 )
                    {
                      v43 = v39;
                      v44 = v57;
                      v37[v39++] = v45;
                      v36[v43] = v38;
                      *(double *)&dest[8 * v43] = v44;
                    }
                    else if ( v45 == -1 )
                    {
                      v46 = v39++;
                      v37[v46] = -1;
                      v36[v46] = v38;
                      *(_QWORD *)&dest[8 * v46] = 0x2B2BFF2EE48E0530LL;
                      ++*a4;
                    }
                    else if ( v45 != -2 )
                    {
                      printf("bad nonlinear term %s\n", v65);
LABEL_16:
                      abort();
                    }
                    v41 = v56;
                    v42 = 0;
                  }
                  while ( *v56 );
                }
              }
              ++v38;
            }
            while ( *((_DWORD *)this + 3) > v38 );
          }
          v26 = (CoinPackedMatrix *)operator new(0x58u);
          CoinPackedMatrix::CoinPackedMatrix(v26, 1, v37, v36, (const double *)dest, v39);
          return v26;
        }
        return nullptr;
      }
    }
  }
LABEL_3:
  v7 = 0;
  CoinModel::firstInRow((CoinModel *)v58, (int)this);
  v8 = v59;
  if ( v59 < 0 )
    goto LABEL_78;
  do
  {
    ElementAsString = (const char *)CoinModel::getElementAsString(this, a2, v8);
    if ( !strcmp(ElementAsString, "Numeric") )
    {
      CoinModel::getElement(this, a2, v8);
      v5[(int)v8] = a5;
    }
    else
    {
      strcpy(v62, ElementAsString);
      v10 = v62;
      v50 = v62;
      if ( v62[0] )
      {
        v11 = &v5[v8];
        v12 = 1;
        do
        {
          v13 = CoinModel::decodeBit(this, v10, &v50, &v51, v12 & 1);
          if ( v13 < 0 )
          {
            if ( v13 == -2 )
            {
              a5 = v51;
              *v11 = v51;
              goto LABEL_11;
            }
            if ( v13 != -1 )
            {
              printf("bad nonlinear term %s\n", v62);
              goto LABEL_16;
            }
          }
          ++v7;
LABEL_11:
          v10 = v50;
          v12 = 0;
        }
        while ( *v50 );
      }
    }
    CoinModel::next((CoinModel *)v65, this);
    CoinModelLink::operator=(v58, v65);
    CoinModelLink::~CoinModelLink((CoinModelLink *)v65);
    v8 = v59;
  }
  while ( v59 >= 0 );
  if ( v7 )
  {
    v14 = (int *)operator new[](4LL * v7);
    v15 = (int *)operator new[](4LL * v7);
    v16 = (double *)operator new[](8LL * v7);
    CoinModel::firstInRow((CoinModel *)v60, (int)this);
    v17 = v61;
    for ( i = 0; v61 >= 0; v17 = v61 )
    {
      v19 = (const char *)CoinModel::getElementAsString(this, a2, v17);
      if ( strcmp(v19, "Numeric") )
      {
        strcpy(v63, v19);
        v20 = v63;
        v52 = v63;
        if ( v63[0] )
        {
          v21 = 1;
          do
          {
            v24 = CoinModel::decodeBit(this, v20, &v52, &v53, v21 & 1);
            if ( v24 >= 0 )
            {
              v22 = v53;
              v23 = i;
              v14[i] = v17;
              v15[i++] = v24;
              v16[v23] = v22;
            }
            else if ( v24 == -1 )
            {
              v25 = i++;
              v15[v25] = -1;
              v14[v25] = v17;
              v16[v25] = 1.0e-100;
              ++*a4;
            }
            else if ( v24 != -2 )
            {
              printf("bad nonlinear term %s\n", v63);
              goto LABEL_16;
            }
            v20 = v52;
            v21 = 0;
          }
          while ( *v52 );
        }
      }
      CoinModel::next((CoinModel *)v65, this);
      CoinModelLink::operator=(v60, v65);
      CoinModelLink::~CoinModelLink((CoinModelLink *)v65);
    }
    v26 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v26, 1, v15, v14, v16, i);
    operator delete[](v14);
    operator delete[](v15);
    operator delete[](v16);
    CoinModelLink::~CoinModelLink((CoinModelLink *)v60);
  }
  else
  {
LABEL_78:
    v26 = nullptr;
  }
  CoinModelLink::~CoinModelLink((CoinModelLink *)v58);
  return v26;
}

