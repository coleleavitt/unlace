/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E670
// Address: 0x0044E670

//----- (0044E670) --------------------------------------------------------
int __thiscall sub_44E670(_DWORD *this)
{
  int result; // eax

  result = *(this + 5);
  if ( result )
    *(this + 5) = --result;
  return result;
}
