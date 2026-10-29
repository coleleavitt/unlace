__int64 __fastcall CoinModel::loadBlock(
        CoinModel *this,
        const CoinPackedMatrix *a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const double *a6,
        double *a7)
{
  int v8; // r12d
  int v9; // ebp

  CoinModel::passInMatrix(this, a2);
  v8 = *((_DWORD *)a2 + 16);
  if ( *((_BYTE *)a2 + 8) )
  {
    v9 = *((_DWORD *)a2 + 16);
    v8 = *((_DWORD *)a2 + 17);
  }
  else
  {
    v9 = *((_DWORD *)a2 + 17);
  }
  CoinModel::setObjective(this, v9, a5);
  CoinModel::setRowLower(this, v8, a6);
  CoinModel::setRowUpper(this, v8, a7);
  CoinModel::setColumnLower(this, v9, a3);
  return CoinModel::setColumnUpper(this, v9, a4);
}

