/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D1ED
// Address: 0x0046D1ED

//----- (0046D1ED) --------------------------------------------------------
int __thiscall sub_46D1ED(int this, int a2)
{
  int result; // eax

  sub_46D1AC(this);
  result = sub_46D22C((_DWORD *)(this + 8), 2 * a2);
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
