/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3071C
// Address: 0x0003071C

//----- (0003071C) --------------------------------------------------------
int __fastcall sub_3071C(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 2 )
    sub_22FE8();
  if ( a2 == 2 )
    return *(_DWORD *)(a1 + 12);
  else
    return 0;
}
