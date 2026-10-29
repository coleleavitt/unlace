char __fastcall sub_272970(CoinModel *this, CoinModel *a2, char a3)
{
  int v3; // r12d
  int v4; // ebx
  const char *RowName; // rbp
  const char *v7; // rax
  const char *ColumnName; // rbp
  const char *v9; // rax

  if ( !a3 )
  {
    v3 = *((_DWORD *)this + 3);
    v4 = 0;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        ColumnName = (const char *)CoinModel::getColumnName(this, v4);
        v9 = (const char *)CoinModel::getColumnName(a2, v4);
        if ( ColumnName )
        {
          if ( !v9 || strcmp(ColumnName, v9) )
            return v4 == v3;
        }
        else if ( v9 )
        {
          return v4 == v3;
        }
        if ( ++v4 == v3 )
          return 1;
      }
    }
    return v4 == v3;
  }
  v3 = *((_DWORD *)this + 2);
  v4 = 0;
  if ( v3 <= 0 )
    return v4 == v3;
  do
  {
    while ( 1 )
    {
      RowName = (const char *)CoinModel::getRowName(this, v4);
      v7 = (const char *)CoinModel::getRowName(a2, v4);
      if ( !RowName )
        break;
      if ( !v7 || strcmp(RowName, v7) )
        return v4 == v3;
      if ( ++v4 == v3 )
        return 1;
    }
    if ( v7 )
      return v4 == v3;
    ++v4;
  }
  while ( v4 != v3 );
  return 1;
}

