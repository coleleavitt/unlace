/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4718E9
// Address: 0x004718E9

//----- (004718E9) --------------------------------------------------------
int __thiscall sub_4718E9(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 2);
  if ( result != *this && (result != *(this + 1) || a2 != -1) )
    *(this + 2) = --result;
  return result;
}
