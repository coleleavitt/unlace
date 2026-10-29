/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3059C
// Address: 0x0003059C

//----- (0003059C) --------------------------------------------------------
int __fastcall sub_3059C(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 2 )
    sub_22E48();
  if ( a2 == 1 )
    return *(_DWORD *)(a1 + 12);
  else
    return *(_DWORD *)(a1 + 4);
}
