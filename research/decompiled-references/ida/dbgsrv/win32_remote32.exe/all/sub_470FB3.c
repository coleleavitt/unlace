/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470FB3
// Address: 0x00470FB3

//----- (00470FB3) --------------------------------------------------------
char __thiscall sub_470FB3(_BYTE *this, int a2, int a3)
{
  if ( a3 == -1 )
    return 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( a3 >= 9 && a3 <= 13 || a3 == 32 )
        return 0;
    }
    else if ( a2 != 8 || ((unsigned __int8)(1 << (a3 & 7)) & *(this + ((unsigned __int8)a3 >> 3) + 68)) == 0 )
    {
      return 0;
    }
  }
  return 1;
}
