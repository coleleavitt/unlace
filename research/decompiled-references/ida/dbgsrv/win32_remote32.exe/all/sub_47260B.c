/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47260B
// Address: 0x0047260B

//----- (0047260B) --------------------------------------------------------
int __thiscall sub_47260B(int this, SIZE_T a2)
{
  int result; // eax

  sub_46D1AC(this);
  result = sub_46D22C((_DWORD *)(this + 8), a2);
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
