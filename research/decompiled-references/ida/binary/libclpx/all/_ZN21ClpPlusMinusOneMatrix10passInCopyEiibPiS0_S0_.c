__int64 __fastcall ClpPlusMinusOneMatrix::passInCopy(
        ClpPlusMinusOneMatrix *this,
        int a2,
        int a3,
        char a4,
        int *a5,
        int *a6,
        int *a7)
{
  *((_DWORD *)this + 32) = a2;
  *((_BYTE *)this + 136) = a4;
  *((_QWORD *)this + 13) = a6;
  *((_QWORD *)this + 15) = a5;
  *((_DWORD *)this + 33) = a3;
  *((_QWORD *)this + 14) = a7;
  return ClpPlusMinusOneMatrix::checkValid(this, 0);
}

