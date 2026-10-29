/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59CFC
// Address: 0x00059CFC

//----- (00059CFC) --------------------------------------------------------
int __fastcall sub_59CFC(int a1, _BYTE *a2)
{
  *a2 = *(_BYTE *)(a1 + 153);
  if ( *(_BYTE *)(a1 + 153) )
    return sub_59C3C(a1, 40);
  else
    return *(unsigned __int8 *)(a1 + 153);
}
