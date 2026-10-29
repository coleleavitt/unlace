// Alternative name is '_ZN16CoinPackedMatrixC1EbiiiPKdPKiS3_S3_'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(
        CoinPackedMatrix *this,
        bool a2,
        int a3,
        int a4,
        int a5,
        const double *a6,
        const int *a7,
        const int *a8,
        const int *a9)
{
  *((_BYTE *)this + 8) = a2;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  CoinPackedMatrix::gutsOfOpEqual(this, a2, a3, a4, a5, a6, a7, a8, a9);
}

