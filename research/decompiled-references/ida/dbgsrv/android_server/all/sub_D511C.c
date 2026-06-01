/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D511C
// Address: 0x00000000000D511C

//----- (00000000000D511C) ----------------------------------------------------
size_t __fastcall sub_D511C(int a1, FILE *stream, void *ptr, size_t n)
{
  return fread(ptr, 1u, n, stream);
}
