/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A9B8
// Address: 0x0003A9B8

//----- (0003A9B8) --------------------------------------------------------
int __fastcall sub_3A9B8(int a1)
{
  void *v2; // r0

  sub_455C8((unsigned __int8 *)(a1 + 16));
  v2 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v2);
  }
  return a1;
}
