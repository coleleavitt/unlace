/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B260
// Address: 0x0044B260

//----- (0044B260) --------------------------------------------------------
char __thiscall sub_44B260(int *this, int a2, int a3)
{
  int v3; // esi
  _DWORD *i; // eax
  int v6; // eax

  v3 = 0;
  for ( i = this + 98; *(i - 4) != a2 || *i != a3; ++i )
  {
    if ( ++v3 >= 4 )
      return 0;
  }
  *(this + v3 + 94) = -1;
  v6 = *this;
  *(this + 103) &= ~(3 << (2 * v3)) & ~(15 << (4 * v3 + 16));
  return (*(int (__thiscall **)(int *))(v6 + 304))(this);
}
