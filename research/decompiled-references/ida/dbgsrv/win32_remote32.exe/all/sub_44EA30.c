/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EA30
// Address: 0x0044EA30

//----- (0044EA30) --------------------------------------------------------
int __thiscall sub_44EA30(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  result = a3;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = -1;
  if ( a3 )
  {
    if ( a2 > -1 )
    {
      *(this + 1) = a3;
      *(this + 2) = a4;
      *(this + 3) = a2;
      return a4;
    }
  }
  return result;
}
