/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: delete
// Address: 0x000BC7B0

//----- (000BC7B0) --------------------------------------------------------
void __cdecl operator delete(void *ptr)
{
  free(ptr);
}
