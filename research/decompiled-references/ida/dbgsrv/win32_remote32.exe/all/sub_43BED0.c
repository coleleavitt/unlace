/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BED0
// Address: 0x0043BED0

//----- (0043BED0) --------------------------------------------------------
int __thiscall sub_43BED0(unsigned int *this, _DWORD *a2)
{
  int result; // eax

  *a2 = *(this + 31);
  a2[1] = *(this + 32);
  sub_403330((int)(a2 + 2), this + 33);
  result = *(this + 36);
  a2[5] = result;
  return result;
}
