/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807BDE0
// Address: 0x0807BDE0

//----- (0807BDE0) --------------------------------------------------------
int __cdecl sub_807BDE0(_DWORD *a1)
{
  int result; // eax
  int v2; // ecx
  const char *v3; // eax

  if ( a1[30] != 1 )
    return 0;
  result = *(_DWORD *)(a1[25] + 24);
  if ( result )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1[15] + 36) + 4 * result);
    v3 = (const char *)&dword_80DDFD8;
    if ( *(_DWORD *)(v2 + 36) )
      v3 = *(const char **)(v2 + 32);
    result = sub_807BC80(a1, v3);
    if ( !result )
      return sub_807AFC0(a1);
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
