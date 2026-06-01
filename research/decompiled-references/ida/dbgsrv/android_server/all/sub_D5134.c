/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5134
// Address: 0x00000000000D5134

//----- (00000000000D5134) ----------------------------------------------------
size_t __fastcall sub_D5134(int a1, FILE *s, void *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, s);
}
