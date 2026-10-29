/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4350A0
// Address: 0x004350A0

//----- (004350A0) --------------------------------------------------------
bool __thiscall sub_4350A0(int *this, int a2)
{
  int v2; // esi
  int v3; // edi
  bool v4; // zf
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // eax

  v2 = *this;
  v3 = *this + 12 * *(this + 1);
  v4 = *this == v3;
  if ( *this != v3 )
  {
    do
    {
      v5 = MultiByteStr;
      if ( *(_DWORD *)(v2 + 4) )
        v5 = *(const char **)v2;
      v6 = MultiByteStr;
      if ( *(_DWORD *)(a2 + 4) )
        v6 = *(const char **)a2;
      v7 = strcmp(v6, v5);
      if ( v7 )
        v7 = v7 < 0 ? -1 : 1;
      if ( !v7 )
        break;
      v2 += 12;
    }
    while ( v2 != v3 );
    v4 = v2 == v3;
  }
  return !v4;
}
