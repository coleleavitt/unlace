/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69404
// Address: 0x00069404

//----- (00069404) --------------------------------------------------------
int __fastcall sub_69404(void *ptr, size_t a2)
{
  FILE *v2; // r3

  v2 = (FILE *)dword_D3B4C;
  if ( !dword_D3B4C )
    v2 = stdout;
  return sub_7768C(v2, ptr, a2);
}
// D3B4C: using guessed type int dword_D3B4C;
