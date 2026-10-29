/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unmake_linput
// Address: 0x000AB730

//----- (000AB730) --------------------------------------------------------
void __cdecl unmake_linput(void *ptr)
{
  if ( ptr )
    operator delete(ptr);
}
