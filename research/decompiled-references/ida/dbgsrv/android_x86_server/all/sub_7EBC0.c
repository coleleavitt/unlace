/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EBC0
// Address: 0x0007EBC0

//----- (0007EBC0) --------------------------------------------------------
int __cdecl sub_7EBC0(int a1, _BYTE *a2)
{
  *a2 = *(_BYTE *)(a1 + 153);
  if ( *(_BYTE *)(a1 + 153) )
    return sub_7EC10(a1, 40);
  else
    return 0;
}
