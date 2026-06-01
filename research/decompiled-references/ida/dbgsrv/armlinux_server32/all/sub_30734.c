/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30734
// Address: 0x00030734

//----- (00030734) --------------------------------------------------------
int __fastcall sub_30734(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 2 )
    sub_22FE8();
  if ( a2 == 1 )
    return *(_DWORD *)(a1 + 12);
  else
    return *(_DWORD *)(a1 + 4);
}
