/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_947AC
// Address: 0x000947AC

//----- (000947AC) --------------------------------------------------------
int __fastcall sub_947AC(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r0

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  v3 = *(unsigned __int8 **)(a1 + 12);
  *(_BYTE *)(a1 + 16) = 1;
  result = sub_9484A(v3);
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
