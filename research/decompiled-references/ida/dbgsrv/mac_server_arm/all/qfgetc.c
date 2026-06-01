/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x000000010006F280

//----- (000000010006F280) ----------------------------------------------------
__int64 __fastcall qfgetc(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  set_qerrno();
  *__error() = 9;
  set_qerrno();
  return 0xFFFFFFFFLL;
}
