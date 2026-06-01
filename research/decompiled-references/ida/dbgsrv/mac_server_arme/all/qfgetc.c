/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x00000001000741C8

//----- (00000001000741C8) ----------------------------------------------------
__int64 __fastcall qfgetc(FILE *a1)
{
  __int64 v1; // x30

  if ( a1 )
  {
    if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return fgetc(a1);
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return 0xFFFFFFFFLL;
  }
}
// 1000741CC: variable 'v1' is possibly undefined
