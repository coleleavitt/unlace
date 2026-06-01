/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43CCF0
// Address: 0x0043CCF0

//----- (0043CCF0) --------------------------------------------------------
char __thiscall sub_43CCF0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebp
  _DWORD *v4; // edx
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // ecx

  v3 = (_DWORD *)*this;
  v4 = (_DWORD *)*this;
  v5 = 4 * *(this + 1);
  v6 = v5 + *this;
  if ( *this == v6 )
    return 0;
  while ( 1 )
  {
    v7 = v4 + 1;
    if ( *a2 == *v4 )
      break;
    ++v4;
    if ( v7 == (_DWORD *)v6 )
      return 0;
  }
  sub_464310((unsigned int)v4, (unsigned int)(v4 + 1), 4 * (((int)v3 + v5 - (int)v4) >> 2) - 4);
  --*(this + 1);
  return 1;
}
