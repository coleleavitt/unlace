/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451070
// Address: 0x00451070

//----- (00451070) --------------------------------------------------------
int __thiscall sub_451070(int *this, int a2, int a3, int a4)
{
  int result; // eax

  result = sub_44D7B0(*(this + 4), a2, a3, a4);
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
    }
  }
  return result;
}
