/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_324D4
// Address: 0x000324D4

//----- (000324D4) --------------------------------------------------------
int __fastcall sub_324D4(int a1, int a2, unsigned int *a3)
{
  if ( !a3 )
    return 0;
  if ( *(__int64 *)(a1 + 144) >= 1 && *(_QWORD *)(a1 + 160) )
    return sub_32440(*(_DWORD *)(a1 + 132), a2, (__int64 *)(a1 + 144), *a3);
  return 0;
}
