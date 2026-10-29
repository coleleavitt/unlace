/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputs
// Address: 0x00000001000742D4

//----- (00000001000742D4) ----------------------------------------------------
__int64 __fastcall qfputs(const char *a1, FILE *a2)
{
  __int64 v2; // x30

  if ( a2 )
  {
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return fputs(a1, a2);
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return 0xFFFFFFFFLL;
  }
}
// 1000742D8: variable 'v2' is possibly undefined
