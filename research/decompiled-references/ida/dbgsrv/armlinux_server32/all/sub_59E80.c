/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59E80
// Address: 0x00059E80

//----- (00059E80) --------------------------------------------------------
int __fastcall sub_59E80(int a1, _BYTE *a2)
{
  *a2 = *(_BYTE *)(a1 + 153);
  if ( *(_BYTE *)(a1 + 153) )
    return sub_59DC0(a1, 40);
  else
    return *(unsigned __int8 *)(a1 + 153);
}
