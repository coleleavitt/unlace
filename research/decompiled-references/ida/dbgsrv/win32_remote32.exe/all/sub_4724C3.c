/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4724C3
// Address: 0x004724C3

//----- (004724C3) --------------------------------------------------------
int __thiscall sub_4724C3(int this, int a2)
{
  int result; // eax

  sub_4724A9(this);
  result = sub_472502((_DWORD *)(this + 8), 2 * a2);
  if ( result )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_BYTE *)(this + 20) = 0;
  }
  else
  {
    *(_BYTE *)(this + 20) = 1;
    *(_DWORD *)(this + 12) = a2;
    return 0;
  }
  return result;
}
