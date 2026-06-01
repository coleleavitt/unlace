/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x000B32D0

//----- (000B32D0) --------------------------------------------------------
int __cdecl memicmp(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  int v5; // esi

  if ( a3 <= 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = tolower(*(unsigned __int8 *)(a1 + v3));
    v5 = v4 - tolower(*(unsigned __int8 *)(a2 + v3));
    if ( v5 )
      break;
    if ( ++v3 >= a3 )
      return 0;
  }
  return v5;
}
