/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70BE0
// Address: 0x00070BE0

//----- (00070BE0) --------------------------------------------------------
int __cdecl sub_70BE0(int a1, char *s)
{
  char *v2; // eax
  char *v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-14h]

  v2 = strchr(s, 40);
  if ( !v2 )
    return -1;
  v3 = v2;
  v5 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v2 + 1;
  *(_BYTE *)(a1 + 244) = 40;
  result = sub_708E0(a1);
  if ( result >= 0 )
    *v3 = 0;
  *(_DWORD *)(a1 + 4) = v5;
  return result;
}
