/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputc
// Address: 0x000000010007CAC0

//----- (000000010007CAC0) ----------------------------------------------------
int __fastcall qfputc(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  set_qerrno();
  *__error() = 9;
  set_qerrno();
  return -1;
}
