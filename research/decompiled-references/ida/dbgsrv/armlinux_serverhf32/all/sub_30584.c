/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30584
// Address: 0x00030584

//----- (00030584) --------------------------------------------------------
int __fastcall sub_30584(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 2 )
    sub_22E48();
  if ( a2 == 2 )
    return *(_DWORD *)(a1 + 12);
  else
    return 0;
}
