/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_325CC
// Address: 0x000325CC

//----- (000325CC) --------------------------------------------------------
int __fastcall sub_325CC(int a1, int a2, unsigned int a3)
{
  if ( !*(_BYTE *)(a1 + 136) )
    sub_147B8();
  if ( a3 < *(_DWORD *)(a1 + 20) )
    return sub_324D4(a1, a2, (unsigned int *)(*(_DWORD *)(a1 + 16) + (a3 << 6)));
  else
    return 0;
}
