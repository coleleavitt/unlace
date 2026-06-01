/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4188E0
// Address: 0x004188E0

//----- (004188E0) --------------------------------------------------------
char __thiscall sub_4188E0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // esi
  unsigned int v5; // edx
  _DWORD *i; // eax
  unsigned int v8; // esi

  v4 = 0;
  v5 = *(this + 1);
  if ( v5 )
  {
    for ( i = (_DWORD *)*this; *i != a3; i += 3 )
    {
      if ( ++v4 >= v5 )
        return 0;
    }
    if ( a2 )
      *a2 = i[2];
    v8 = *this + 12 * v4;
    sub_464310(
      v8,
      v8 + 12,
      12
    * (((int)((unsigned __int64)(715827883LL * (int)(*this + 12 * *(this + 1) - v8)) >> 32) >> 1)
     - 1
     + ((unsigned int)((unsigned __int64)(715827883LL * (int)(*this + 12 * *(this + 1) - v8)) >> 32) >> 31)));
    --*(this + 1);
  }
  return 0;
}
