/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C994
// Address: 0x0001C994

//----- (0001C994) --------------------------------------------------------
int __fastcall sub_1C994(int a1, int a2, unsigned int *a3, int a4)
{
  if ( *(_BYTE *)(a1 + 1077) )
    return 0;
  if ( *(_DWORD *)(a1 + 1068) == -1 )
    return *(unsigned __int8 *)(a1 + 1077);
  return sub_1C68C(a1, -1, a2, a3, a4, 1u);
}
