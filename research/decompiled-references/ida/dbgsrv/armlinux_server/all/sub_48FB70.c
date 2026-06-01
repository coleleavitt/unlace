/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FB70
// Address: 0x000000000048FB70

//----- (000000000048FB70) ----------------------------------------------------
__int64 __fastcall sub_48FB70(_BYTE *a1, _BYTE *a2)
{
  if ( *a2 == 42 && !a2[1] )
    return 1;
  else
    return sub_48EC48(a1, a2);
}
