/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x0000000000082430

//----- (0000000000082430) ----------------------------------------------------
void __fastcall destroy_lexer(void *ptr)
{
  if ( ptr )
  {
    sub_81F00((__int64)ptr);
    operator delete(ptr);
  }
}
