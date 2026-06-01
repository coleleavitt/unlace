/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdirname
// Address: 0x000AE400

//----- (000AE400) --------------------------------------------------------
int __cdecl qdirname(char *dest, unsigned int a2, char *s)
{
  int v3; // ecx
  char *v5; // esi
  char *v6; // eax
  size_t v7; // esi
  char v8; // al
  char *v9; // eax

  if ( !s || dest && a2 < 2 )
    return 0;
  v5 = strrchr(s, 47);
  v6 = strrchr(s, 92);
  if ( v5 > v6 )
    v6 = v5;
  if ( !v6 )
  {
    if ( dest )
      *(_WORD *)dest = 46;
    return 0;
  }
  v3 = v6 - s;
  v7 = a2 - 1;
  if ( v6 - s < a2 )
    v7 = v6 - s;
  if ( !v7 )
  {
    v8 = *v6;
    if ( v8 == 92 || (v7 = 0, v8 == 47) )
      v7 = 1;
  }
  LOBYTE(v3) = 1;
  v9 = dest;
  if ( dest )
  {
    if ( dest != s )
    {
      memcpy(dest, s, v7);
      LOBYTE(v3) = 1;
      v9 = dest;
    }
    v9[v7] = 0;
  }
  return v3;
}
// AE42D: variable 'v3' is possibly undefined
