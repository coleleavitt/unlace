/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: delete
// Address: 0x000BCA60

//----- (000BCA60) --------------------------------------------------------
void __cdecl operator delete(void *ptr)
{
  free(ptr);
}
