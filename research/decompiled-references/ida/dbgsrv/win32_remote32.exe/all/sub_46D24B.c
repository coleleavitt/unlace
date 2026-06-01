/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D24B
// Address: 0x0046D24B

//----- (0046D24B) --------------------------------------------------------
int __thiscall sub_46D24B(int this)
{
  int result; // eax

  result = 0;
  if ( *(_BYTE *)(this + 20) )
    *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}
