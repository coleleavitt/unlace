// Alternative name is '_ZN16CoinPackedMatrixC1Ev'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(CoinPackedMatrix *this)
{
  _DWORD *v1; // rax

  *((_BYTE *)this + 8) = 1;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = off_4D1A60;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  v1 = (_DWORD *)operator new[](4u);
  *((_QWORD *)this + 6) = v1;
  *v1 = 0;
}

