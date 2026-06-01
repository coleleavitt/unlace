__int64 __fastcall CoinModel::convertMatrix(CoinModel *this)
{
  unsigned int Arrays; // r12d
  CoinPackedMatrix *v2; // r13
  _BYTE v4[136]; // [rsp+0h] [rbp-88h] BYREF

  if ( *((_DWORD *)this + 176) == 3 )
    return 0;
  Arrays = *((_DWORD *)this + 66);
  if ( Arrays )
    Arrays = CoinModel::createArrays(
               this,
               (double **)this + 16,
               (double **)this + 17,
               (double **)this + 24,
               (double **)this + 25,
               (double **)this + 23,
               (int **)this + 30,
               (double **)this + 78);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v4);
  CoinModel::createPackedMatrix(this, (CoinPackedMatrix *)v4, *((const double **)this + 78));
  v2 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v2, (const CoinPackedMatrix *)v4);
  *((_QWORD *)this + 38) = v2;
  *((_DWORD *)this + 176) = 3;
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v4);
  return Arrays;
}

