/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47180C
// Address: 0x0047180C

//----- (0047180C) --------------------------------------------------------
int __thiscall sub_47180C(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 32);
  if ( result == 2 )
    *(_BYTE *)(this + 36) = 0;
  if ( result == 3 || result == 4 || result == 8 )
    *(_BYTE *)(this + 36) = 1;
  return result;
}
