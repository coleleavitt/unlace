/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qftell
// Address: 0x0000000100073D24

//----- (0000000100073D24) ----------------------------------------------------
off_t __fastcall qftell(FILE *a1)
{
  off_t result; // x0

  if ( !a1 )
  {
    set_qerrno();
    *__error() = 9;
    goto LABEL_5;
  }
  result = ftello(a1);
  if ( result == -1 )
  {
LABEL_5:
    set_qerrno();
    return -1;
  }
  return result;
}
