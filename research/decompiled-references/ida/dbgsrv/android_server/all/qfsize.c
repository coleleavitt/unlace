/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsize
// Address: 0x00000000000B2AC0

//----- (00000000000B2AC0) ----------------------------------------------------
__int64 __fastcall qfsize(FILE *a1, int a2, int8x16x2_t a3)
{
  FILE *v3; // x19
  __int64 v4; // x20
  __int64 v5; // x21

  if ( a1 )
  {
    v3 = a1;
    v4 = qftell(a1);
    qfseek(v3, 0, 2);
    v5 = qftell(v3);
    qfseek(v3, v4, 0);
    return v5;
  }
  else
  {
    if ( !under_debugger )
      a1 = (FILE *)interr(552);
    __break(1u);
    return eshift((__int64)a1, a2, a3);
  }
}
// B2B2D: variable 'a2' is possibly undefined
// B2B2D: variable 'a3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
