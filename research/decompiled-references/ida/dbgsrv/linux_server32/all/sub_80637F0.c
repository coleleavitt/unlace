/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80637F0
// Address: 0x080637F0

//----- (080637F0) --------------------------------------------------------
int __cdecl sub_80637F0(int a1, int a2, int a3, int a4)
{
  if ( *(_BYTE *)(a1 + 733) || *(_DWORD *)(a1 + 724) == -1 )
    return 0;
  else
    return sub_8063570(a1, -1, a2, a3, a4, 1);
}
