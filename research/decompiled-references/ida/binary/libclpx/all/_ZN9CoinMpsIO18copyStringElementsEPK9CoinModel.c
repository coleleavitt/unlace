__int64 __fastcall CoinMpsIO::copyStringElements(CoinMpsIO *this, const CoinModel *a2)
{
  __int64 result; // rax
  int i; // r13d
  const char *ColumnObjectiveAsString; // rax
  int j; // ebx
  const char *ElementAsString; // rax
  __int64 v8; // rbx
  const char *RowLowerAsString; // r12
  const char *RowUpperAsString; // rax
  __int64 v11; // r14
  int v12; // esi
  __int64 v13; // rbx
  const char *ColumnUpperAsString; // rax
  const char *ColumnLowerAsString; // rax
  int v16; // [rsp+Ch] [rbp-8Ch]
  const char *v17; // [rsp+10h] [rbp-88h]
  int v18; // [rsp+18h] [rbp-80h]
  int v19[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v20[88]; // [rsp+40h] [rbp-58h] BYREF

  result = *((unsigned int *)a2 + 66);
  if ( !(_DWORD)result )
    return result;
  v16 = *((_DWORD *)a2 + 3);
  v18 = *((_DWORD *)a2 + 2);
  if ( v16 <= 0 )
  {
    if ( v18 <= 0 )
      return *((unsigned int *)this + 73);
  }
  else
  {
    for ( i = 0; i != v16; ++i )
    {
      ColumnObjectiveAsString = (const char *)CoinModel::getColumnObjectiveAsString(a2, i);
      if ( strcmp(ColumnObjectiveAsString, "Numeric") )
        CoinMpsIO::addString(this, v18, i, ColumnObjectiveAsString);
      CoinModel::firstInColumn((CoinModel *)v19, (int)a2);
      for ( j = v19[0]; v19[0] >= 0; j = v19[0] )
      {
        ElementAsString = (const char *)CoinModel::getElementAsString(a2, j, i);
        if ( strcmp(ElementAsString, "Numeric") )
          CoinMpsIO::addString(this, j, i, ElementAsString);
        CoinModel::next((CoinModel *)v20, a2);
        CoinModelLink::operator=(v19, v20);
        CoinModelLink::~CoinModelLink((CoinModelLink *)v20);
      }
      CoinModelLink::~CoinModelLink((CoinModelLink *)v19);
    }
    if ( v18 <= 0 )
      goto LABEL_21;
  }
  v8 = 0;
  do
  {
    while ( 1 )
    {
      RowLowerAsString = (const char *)CoinModel::getRowLowerAsString(a2, v8);
      RowUpperAsString = (const char *)CoinModel::getRowUpperAsString(a2, v8);
      if ( strcmp(RowLowerAsString, "Numeric") )
        break;
LABEL_15:
      if ( v18 <= (int)++v8 )
        goto LABEL_20;
    }
    v11 = 8 * v8;
    if ( *(double *)(*((_QWORD *)this + 13) + 8 * v8) <= 1.0e20 || strcmp(RowUpperAsString, "Numeric") )
    {
      v17 = RowUpperAsString;
      if ( strcmp(RowLowerAsString, RowUpperAsString) )
      {
        printf("Unaable to handle string ranges row %d %s %s\n", v8, RowLowerAsString, v17);
        abort();
      }
      CoinMpsIO::addString(this, v8, v16, RowLowerAsString);
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v8) = 0xAAFBA6B1BB537317LL;
      CoinMpsIO::addString(this, v8, v16 + 1, RowLowerAsString);
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v8) = 0xAAFBA6B1BB537317LL;
      goto LABEL_15;
    }
    v12 = v8++;
    CoinMpsIO::addString(this, v12, v16, RowLowerAsString);
    *(_QWORD *)(*((_QWORD *)this + 12) + v11) = 0xAAFBA6B1BB537317LL;
  }
  while ( v18 > (int)v8 );
LABEL_20:
  if ( v16 > 0 )
  {
LABEL_21:
    v13 = 0;
    do
    {
      while ( 1 )
      {
        ColumnLowerAsString = (const char *)CoinModel::getColumnLowerAsString(a2, v13);
        if ( strcmp(ColumnLowerAsString, "Numeric") )
        {
          CoinMpsIO::addString(this, v18 + 1, v13, ColumnLowerAsString);
          *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v13) = 0xAAFBA6B1BB537317LL;
        }
        ColumnUpperAsString = (const char *)CoinModel::getColumnUpperAsString(a2, v13);
        if ( strcmp(ColumnUpperAsString, "Numeric") )
          break;
        if ( v16 <= (int)++v13 )
          return *((unsigned int *)this + 73);
      }
      CoinMpsIO::addString(this, v18 + 2, v13, ColumnUpperAsString);
      *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v13++) = 0xAAFBA6B1BB537317LL;
    }
    while ( v16 > (int)v13 );
  }
  return *((unsigned int *)this + 73);
}

