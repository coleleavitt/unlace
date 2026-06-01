/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E576
// Address: 0x0046E576

//----- (0046E576) --------------------------------------------------------
_DWORD *__thiscall sub_46E576(_DWORD *this, int a2, int a3, int a4)
{
  *this = a2;
  *(this + 1) = a3;
  *(this + 2) = a4;
  *(this + 3) = 0;
  memset(this + 11, 0, 0x20u);
  *(this + 4) = 0;
  *((_WORD *)this + 10) = 0;
  *((_BYTE *)this + 22) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *((_BYTE *)this + 36) = 0;
  *(this + 10) = 0;
  return this;
}
