/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CF70
// Address: 0x0001CF70

//----- (0001CF70) --------------------------------------------------------
int __fastcall sub_1CF70(int a1, int a2, char *a3, int a4)
{
  if ( *(_BYTE *)(a1 + 1077) )
    return 0;
  if ( *(_DWORD *)(a1 + 1068) == -1 )
    return *(unsigned __int8 *)(a1 + 1077);
  return sub_1CD50(a1, -1, a2, a3, a4, 1u);
}
