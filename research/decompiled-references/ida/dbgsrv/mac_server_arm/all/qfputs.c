/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputs
// Address: 0x000000010006F378

//----- (000000010006F378) ----------------------------------------------------
__int64 __fastcall qfputs(const char *a1, FILE *a2)
{
  if ( a2 )
    return fputs(a1, a2);
  set_qerrno();
  *__error() = 9;
  set_qerrno();
  return 0xFFFFFFFFLL;
}
