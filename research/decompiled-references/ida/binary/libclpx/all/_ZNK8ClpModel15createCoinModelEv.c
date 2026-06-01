CoinModel *__fastcall ClpModel::createCoinModel(ClpModel *this)
{
  CoinModel *v2; // r15
  __int64 (__fastcall ***v3)(_QWORD); // rdi
  const CoinPackedMatrix *v4; // rsi
  const char *v5; // rsi
  double v6; // xmm0_8
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // ebp
  int v15; // eax
  int v16; // ebp
  __int64 v17; // r12
  char *v18; // kr00_8
  char *v19; // rax
  int v20; // r14d
  __int64 v21; // r12
  char *v22; // kr08_8
  char *v23; // rax
  const void *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r12
  int v28; // r13d
  int v29; // r14d
  unsigned __int64 v30; // rax
  int *v31; // r13
  double *v32; // r14
  const char *v33; // rax
  int v34; // esi
  const char *ColumnName; // rax
  const char *v37; // rax
  const char *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-187B0h]
  double v40; // [rsp+8h] [rbp-187B0h]
  int *v41; // [rsp+20h] [rbp-18798h]
  __int64 v42; // [rsp+28h] [rbp-18790h]
  __int64 v43; // [rsp+38h] [rbp-18780h]
  __int64 v44; // [rsp+40h] [rbp-18778h]
  __int64 v45; // [rsp+48h] [rbp-18770h]
  _BYTE v46[8]; // [rsp+58h] [rbp-18760h] BYREF
  char v47[32]; // [rsp+60h] [rbp-18758h] BYREF
  _BYTE v48[32]; // [rsp+80h] [rbp-18738h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-18718h]
  __int64 v50; // [rsp+A8h] [rbp-18710h]
  __int64 v51; // [rsp+B0h] [rbp-18708h]
  __int64 v52; // [rsp+B8h] [rbp-18700h]
  char dest[100056]; // [rsp+E0h] [rbp-186D8h] BYREF

  v2 = (CoinModel *)operator new(0x2D0u);
  CoinModel::CoinModel(v2);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v48);
  CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v48, 0.0);
  CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v48, 0.0);
  v3 = *((__int64 (__fastcall ****)(_QWORD))this + 24);
  if ( v3 )
    v4 = (const CoinPackedMatrix *)(**v3)(v3);
  else
    v4 = nullptr;
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v48, v4);
  v5 = *((const char **)this + 86);
  v6 = *((double *)this + 5);
  *((double *)v2 + 3) = v6;
  CoinBaseModel::setProblemName(v2, v5);
  v7 = v50;
  v8 = v51;
  v9 = v52;
  v39 = v49;
  if ( *((int *)this + 26) > 0 )
  {
    v10 = 0;
    do
    {
      v6 = *(double *)(*((_QWORD *)this + 18) + 8 * v10);
      CoinModel::addRow(
        v2,
        *(_DWORD *)(v9 + 4 * v10),
        (const int *)(v7 + 4LL * *(int *)(v8 + 4 * v10)),
        (const double *)(v39 + 8LL * *(int *)(v8 + 4 * v10)),
        v6,
        *(double *)(*((_QWORD *)this + 19) + 8 * v10),
        nullptr);
      ++v10;
    }
    while ( *((_DWORD *)this + 26) > (int)v10 );
  }
  v11 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v11 )
    v12 = (**v11)(v11, 0, 0, v46, 0, 2);
  else
    v12 = 0;
  if ( *((int *)this + 27) > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      CoinModel::setColumnBounds(
        v2,
        v14,
        *(double *)(*((_QWORD *)this + 22) + v13),
        *(double *)(*((_QWORD *)this + 23) + v13));
      v6 = *(double *)(v12 + v13);
      CoinModel::setColumnObjective(v2, v14, v6);
      v15 = *((_DWORD *)this + 27);
      ++v14;
      v13 += 8;
    }
    while ( v15 > v14 );
    if ( v15 > 0 )
    {
      v16 = 0;
      do
      {
        while ( !(unsigned __int8)ClpModel::isInteger(this, v16) )
        {
          if ( *((_DWORD *)this + 27) <= ++v16 )
            goto LABEL_16;
        }
        CoinModel::setColumnIsInteger(v2, v16++, 1);
      }
      while ( *((_DWORD *)this + 27) > v16 );
    }
  }
LABEL_16:
  CoinModelHash::CoinModelHash((CoinModelHash *)v47);
  CoinModelHash::operator=((char *)v2 + 144, v47);
  CoinModelHash::~CoinModelHash((CoinModelHash *)v47);
  CoinModelHash::CoinModelHash((CoinModelHash *)dest);
  CoinModelHash::operator=((char *)v2 + 208, dest);
  CoinModelHash::~CoinModelHash((CoinModelHash *)dest);
  if ( *((int *)this + 26) > 0 )
  {
    v17 = 0;
    do
    {
      strcpy(dest, *(const char **)(*((_QWORD *)this + 46) + 8 * v17));
      v18 = &dest[strlen(dest)];
      if ( v18 != dest )
      {
        v19 = dest;
        do
        {
          if ( *v19 == 45 )
            *v19 = 95;
          ++v19;
        }
        while ( v18 != v19 );
      }
      CoinModel::setRowName(v2, v17++, dest);
    }
    while ( *((_DWORD *)this + 26) > (int)v17 );
  }
  v20 = *((_DWORD *)this + 27);
  if ( v20 > 0 )
  {
    v21 = 0;
    do
    {
      strcpy(dest, *(const char **)(*((_QWORD *)this + 49) + 8 * v21));
      v22 = &dest[strlen(dest)];
      if ( v22 != dest )
      {
        v23 = dest;
        do
        {
          if ( *v23 == 45 )
            *v23 = 95;
          ++v23;
        }
        while ( v22 != v23 );
      }
      CoinModel::setColumnName(v2, v21, dest);
      v20 = *((_DWORD *)this + 27);
      ++v21;
    }
    while ( v20 > (int)v21 );
  }
  v24 = *((const void **)this + 20);
  if ( v24 )
  {
    v25 = __dynamic_cast(
            v24,
            (const struct __class_type_info *)&`typeinfo for'ClpObjective,
            (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
            0);
    if ( v25 )
    {
      v26 = (_QWORD *)v25[3];
      v44 = v26[4];
      v45 = v26[5];
      v43 = v26[6];
      v42 = v26[7];
      if ( v20 > 0 )
      {
        v27 = 0;
        do
        {
          v28 = *(_DWORD *)(v42 + 4 * v27);
          if ( v28 )
          {
            v29 = *(_DWORD *)(v43 + 4 * v27);
            CoinModel::getColumnObjective(v2, v27);
            sprintf(dest, "%g", v6);
            if ( v29 < v28 + v29 )
            {
              v30 = v45 + 4 * (v29 + (unsigned __int64)(unsigned int)(v28 - 1)) + 4;
              v31 = (int *)(v45 + 4LL * v29);
              v32 = (double *)(v44 + 8LL * v29);
              v41 = (int *)v30;
              do
              {
                v34 = *v31;
                if ( *v31 >= (int)v27 )
                {
                  v40 = *v32;
                  if ( v34 == (_DWORD)v27 )
                    v40 = 0.5 * *v32;
                  if ( v40 == 1.0 )
                  {
                    ColumnName = (const char *)CoinModel::getColumnName(v2, v34);
                    sprintf(v47, "+%s", ColumnName);
                  }
                  else if ( v40 == -1.0 )
                  {
                    v37 = (const char *)CoinModel::getColumnName(v2, v34);
                    sprintf(v47, "-%s", v37);
                  }
                  else
                  {
                    v33 = (const char *)CoinModel::getColumnName(v2, v34);
                    v6 = v40;
                    if ( v40 <= 0.0 )
                      sprintf(v47, "%g*%s", v40, v33);
                    else
                      sprintf(v47, "+%g*%s", v40, v33);
                  }
                  strcat(dest, v47);
                }
                ++v31;
                ++v32;
              }
              while ( v31 != v41 );
            }
            CoinModel::setColumnObjective(v2, v27, dest);
            if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 2 )
            {
              v38 = (const char *)CoinModel::getColumnName(v2, v27);
              printf("el for objective column %s is %s\n", v38, dest);
            }
            v20 = *((_DWORD *)this + 27);
          }
          ++v27;
        }
        while ( (int)v27 < v20 );
      }
    }
  }
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v48);
  return v2;
}

