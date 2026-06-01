/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputc
// Address: 0x0000000100074180

//----- (0000000100074180) ----------------------------------------------------
__int64 __fastcall qfputc(int a1, FILE *a2)
{
  __int64 v2; // x30

  if ( a2 )
  {
    if ( ((v2 ^ (2 * v2)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return fputc(a1, a2);
  }
  else
  {
    set_qerrno();
    *__error() = 9;
    set_qerrno();
    return 0xFFFFFFFFLL;
  }
}
// 100074184: variable 'v2' is possibly undefined
