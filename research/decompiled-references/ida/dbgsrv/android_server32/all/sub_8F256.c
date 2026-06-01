/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F256
// Address: 0x0008F256

//----- (0008F256) --------------------------------------------------------
size_t __fastcall sub_8F256(int a1, FILE *s, void *ptr, size_t n)
{
  return fwrite(ptr, 1u, n, s);
}
