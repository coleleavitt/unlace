/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A375
// Address: 0x0046A375

//----- (0046A375) --------------------------------------------------------
char __thiscall sub_46A375(int this)
{
  switch ( *(_BYTE *)(this + 49) )
  {
    case ' ':
      *(_DWORD *)(this + 32) |= 2u;
      break;
    case '#':
      *(_DWORD *)(this + 32) |= 0x20u;
      break;
    case '+':
      *(_DWORD *)(this + 32) |= 1u;
      break;
    case '-':
      *(_DWORD *)(this + 32) |= 4u;
      break;
    case '0':
      *(_DWORD *)(this + 32) |= 8u;
      break;
  }
  return 1;
}
