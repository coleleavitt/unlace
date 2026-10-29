/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E5C0
// Address: 0x0046E5C0

//----- (0046E5C0) --------------------------------------------------------
_DWORD *__thiscall sub_46E5C0(_DWORD *this, int a2, int a3, int a4, _BYTE *a5)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  *this = a2;
  *(this + 2) = a3;
  *(this + 3) = a4;
  *(this + 6) = a5;
  if ( a5 )
    *a5 = 1;
  return this;
}
