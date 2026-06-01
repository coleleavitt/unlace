/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destroy_lexer
// Address: 0x000000000007D828

//----- (000000000007D828) ----------------------------------------------------
void __fastcall destroy_lexer(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a1 )
  {
    sub_7D47C(a1, a2, a3, a4, a5, a6, a7, a8);
    operator delete(a1);
  }
}
