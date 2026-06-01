/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BA30
// Address: 0x0041BA30

//----- (0041BA30) --------------------------------------------------------
int __stdcall sub_41BA30(int a1, int a2)
{
  const CHAR *v2; // ecx
  int v3; // eax

  v2 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(const CHAR **)(a1 + 32);
  if ( *(_DWORD *)(a1 + 12) )
    v3 = sub_45D0F0(*(LPCCH *)(a1 + 8), v2);
  else
    v3 = sub_45D0F0(MultiByteStr, v2);
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}
