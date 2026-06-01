/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x0000000100045B20

//----- (0000000100045B20) ----------------------------------------------------
void __fastcall destroy_lexer(_QWORD *__p)
{
  if ( __p )
  {
    sub_1000455E0(__p);
    operator delete(__p);
  }
}
