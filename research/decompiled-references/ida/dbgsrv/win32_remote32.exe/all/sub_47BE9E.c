/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BE9E
// Address: 0x0047BE9E

//----- (0047BE9E) --------------------------------------------------------
int __cdecl sub_47BE9E(unsigned __int16 *a1, int a2)
{
  _BYTE *v2; // edi
  char *v3; // esi
  unsigned __int16 *v4; // eax
  int v5; // eax

  v2 = dword_4B7A04;
  v3 = (char *)dword_4B7A04;
  v4 = *(unsigned __int16 **)dword_4B7A04;
  if ( !*(_DWORD *)dword_4B7A04 )
    return -((v3 - v2) >> 2);
  while ( 1 )
  {
    if ( !sub_47B5F8(a2, (int)v2, a1, v4, a2) )
    {
      v5 = *(unsigned __int16 *)(*(_DWORD *)v3 + 2 * a2);
      if ( v5 == 61 || !(_WORD)v5 )
        break;
    }
    v3 += 4;
    v4 = *(unsigned __int16 **)v3;
    if ( !*(_DWORD *)v3 )
      return -((v3 - v2) >> 2);
  }
  return (v3 - v2) >> 2;
}
