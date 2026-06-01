/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F244
// Address: 0x0008F244

//----- (0008F244) --------------------------------------------------------
size_t __fastcall sub_8F244(int a1, FILE *stream, void *ptr, size_t n)
{
  return fread(ptr, 1u, n, stream);
}
