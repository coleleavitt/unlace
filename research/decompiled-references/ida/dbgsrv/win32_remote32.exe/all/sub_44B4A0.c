/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B4A0
// Address: 0x0044B4A0

//----- (0044B4A0) --------------------------------------------------------
char __thiscall sub_44B4A0(unsigned int *this, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax

  v3 = *(this + 104);
  if ( a3[1] > v3 )
  {
    v4 = 3 * v3;
    v5 = *a3;
    *(_DWORD *)(v5 + 8 * v4 + 8) &= ~0x100u;
    *(_DWORD *)(v5 + 8 * v4 + 12) = *(_DWORD *)(v5 + 8 * v4 + 12);
  }
  return 1;
}
