/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63AFC
// Address: 0x00063AFC

//----- (00063AFC) --------------------------------------------------------
int __fastcall sub_63AFC(int a1, char *s1, _DWORD *a3)
{
  int v3; // r7
  int v6; // r5
  int v7; // r4

  v3 = *(_DWORD *)(a1 + 348);
  if ( !v3 )
    return -1;
  v6 = *(_DWORD *)(a1 + 344);
  v7 = 0;
  while ( strcasecmp(s1, *(const char **)v6) )
  {
    ++v7;
    v6 += 20;
    if ( v7 == v3 )
      return -1;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v6 + 8);
  return v7;
}
