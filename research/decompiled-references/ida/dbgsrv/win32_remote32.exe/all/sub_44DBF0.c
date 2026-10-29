/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DBF0
// Address: 0x0044DBF0

//----- (0044DBF0) --------------------------------------------------------
int __thiscall sub_44DBF0(_DWORD *this)
{
  int result; // eax
  _DWORD *i; // ecx

  result = 0;
  for ( i = this + 2; *i; ++i )
  {
    if ( (unsigned int)++result >= 0x10 )
    {
      *sub_46B984() = 23;
      return -1;
    }
  }
  return result;
}
