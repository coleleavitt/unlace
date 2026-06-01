// Alternative name is '_ZN16CoinPackedMatrixC2Ebdd'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(CoinPackedMatrix *this, char a2, double a3, double a4)
{
  _DWORD *v4; // rax

  *((double *)this + 2) = a4;
  *((double *)this + 3) = a3;
  *((_BYTE *)this + 8) = a2;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  v4 = (_DWORD *)operator new[](4u);
  *((_QWORD *)this + 6) = v4;
  *v4 = 0;
}

