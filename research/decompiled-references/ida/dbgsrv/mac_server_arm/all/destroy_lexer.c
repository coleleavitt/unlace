/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x000000010003E2C0

//----- (000000010003E2C0) ----------------------------------------------------
void __fastcall destroy_lexer(_QWORD *a1)
{
  _QWORD *v1; // x0

  if ( a1 )
  {
    v1 = sub_10003DF24(a1);
    operator delete(v1);
  }
}
