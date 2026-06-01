/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D377
// Address: 0x0047D377

//----- (0047D377) --------------------------------------------------------
int __thiscall sub_47D377(int *this)
{
  int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  char *v6; // eax
  int v7; // esi

  v2 = *(this + 2);
  if ( *(this + 1) != v2 )
    return 0;
  if ( !*this )
  {
    *this = (int)sub_4791B9(4u, 4u);
    sub_479216(nullptr);
    v4 = *this;
    if ( *this )
    {
      *(this + 1) = v4;
      *(this + 2) = v4 + 16;
      return 0;
    }
    return 12;
  }
  v5 = (v2 - *this) >> 2;
  if ( v5 > 0x7FFFFFFF )
    return 12;
  v6 = sub_47DE51(v5, (LPVOID)*this, 2 * v5, 4u);
  if ( v6 )
  {
    *this = (int)v6;
    *(this + 1) = (int)&v6[4 * v5];
    *(this + 2) = (int)&v6[8 * v5];
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  sub_479216(nullptr);
  return v7;
}
