/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469D1D
// Address: 0x00469D1D

//----- (00469D1D) --------------------------------------------------------
_DWORD *__thiscall sub_469D1D(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  sub_469CD8(this);
  *(this + 274) = *a2;
  *this = a3;
  *(this + 1) = a4;
  *(this + 2) = a6;
  *(this + 4) = a5;
  *(this + 5) = a7;
  return this;
}
