/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_925B0
// Address: 0x000925B0

//----- (000925B0) --------------------------------------------------------
unsigned int __cdecl sub_925B0(int a1, char *s1, _DWORD *a3)
{
  const char **v3; // edi
  unsigned int v4; // esi
  unsigned int v6; // [esp+8h] [ebp-14h]

  v6 = *(_DWORD *)(a1 + 284);
  if ( !v6 )
    return -1;
  v3 = (const char **)(*(_DWORD *)(a1 + 280) + 8);
  v4 = 0;
  while ( strcasecmp(s1, *(v3 - 2)) )
  {
    ++v4;
    v3 += 5;
    if ( v4 >= v6 )
      return -1;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)v3;
  return v4;
}
