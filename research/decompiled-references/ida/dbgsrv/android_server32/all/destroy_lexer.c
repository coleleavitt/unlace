/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x0004EEB8

//----- (0004EEB8) --------------------------------------------------------
void __fastcall destroy_lexer(int a1)
{
  void *v1; // r0

  if ( a1 )
  {
    v1 = (void *)sub_4EBA4(a1);
    operator delete(v1);
  }
}
