/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BE49
// Address: 0x0047BE49

//----- (0047BE49) --------------------------------------------------------
int __cdecl sub_47BE49(unsigned __int8 *a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  unsigned __int8 *v4; // eax
  char v5; // al

  v2 = dword_4B7A00;
  v3 = (_DWORD *)dword_4B7A00;
  v4 = *(unsigned __int8 **)dword_4B7A00;
  if ( !*(_DWORD *)dword_4B7A00 )
    return -(((int)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( !sub_47B725(a2, v2, a1, v4, a2) )
    {
      v5 = *(_BYTE *)(a2 + *v3);
      if ( v5 == 61 || !v5 )
        break;
    }
    v4 = (unsigned __int8 *)*++v3;
    if ( !*v3 )
      return -(((int)v3 - v2) >> 2);
  }
  return ((int)v3 - v2) >> 2;
}
// 4B7A00: using guessed type int dword_4B7A00;
