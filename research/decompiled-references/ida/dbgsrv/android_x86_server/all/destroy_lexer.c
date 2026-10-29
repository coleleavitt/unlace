/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x0006A7E0

//----- (0006A7E0) --------------------------------------------------------
void __cdecl destroy_lexer(void *ptr)
{
  if ( ptr )
  {
    sub_6A2B0((int)ptr);
    operator delete(ptr);
  }
}
