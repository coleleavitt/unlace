/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74A28
// Address: 0x00074A28

//----- (00074A28) --------------------------------------------------------
size_t __fastcall sub_74A28(int a1, void *a2, signed int a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_77620(*(FILE **)(a1 + 8), a2, a3);
  return sub_747A4(a1, a2, a3);
}
