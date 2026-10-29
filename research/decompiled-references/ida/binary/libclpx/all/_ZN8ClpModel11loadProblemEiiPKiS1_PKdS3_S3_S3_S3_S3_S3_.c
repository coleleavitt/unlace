void __fastcall ClpModel::loadProblem(
        ClpModel *this,
        int a2,
        int a3,
        const int *a4,
        const int *a5,
        const double *a6,
        double *a7,
        double *a8,
        double *a9,
        double *a10,
        double *a11,
        double *a12)
{
  int v15; // ebx
  int v16; // r8d
  ClpPackedMatrix *v17; // rbx
  int v18; // edx
  int v19; // esi
  _BYTE v21[152]; // [rsp+18h] [rbp-98h] BYREF

  v15 = a2;
  ClpModel::gutsOfLoadModel(this, a3, a2, a7, a8, a9, a10, a11, a12);
  v16 = 0;
  if ( a4 )
    v16 = a4[a2];
  if ( !a3 )
    v15 = 0;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v21, 1, a3, v15, v16, a6, a5, a4, nullptr);
  v17 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v17, (const CoinPackedMatrix *)v21);
  v18 = *((_DWORD *)this + 27);
  v19 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 24) = v17;
  ClpPackedMatrix::setDimensions(v17, v19, v18);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v21);
}

