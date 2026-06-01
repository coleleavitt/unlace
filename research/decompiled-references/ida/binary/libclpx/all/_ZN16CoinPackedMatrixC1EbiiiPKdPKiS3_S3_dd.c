// Alternative name is '_ZN16CoinPackedMatrixC2EbiiiPKdPKiS3_S3_dd'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(
        CoinPackedMatrix *this,
        bool a2,
        int a3,
        int a4,
        int a5,
        const double *a6,
        double a7,
        double a8,
        const int *a9,
        const int *a10,
        const int *a11)
{
  *((double *)this + 2) = a8;
  *((_BYTE *)this + 8) = a2;
  *((double *)this + 3) = a7;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  CoinPackedMatrix::gutsOfOpEqual(this, a2, a3, a4, a5, a6, a9, a10, a11);
}

