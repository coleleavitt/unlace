/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77134
// Address: 0x00077134

//----- (00077134) --------------------------------------------------------
int __fastcall sub_77134(_BYTE *a1, _BYTE *a2)
{
  if ( *a2 == 42 && !a2[1] )
    return 1;
  else
    return sub_76810(a1, a2);
}
