/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsize
// Address: 0x000000010006C4B0

//----- (000000010006C4B0) ----------------------------------------------------
__int64 __fastcall qfsize(FILE *a1)
{
  off_t v2; // x20
  off_t v3; // x21
  __int64 v5; // x0
  unsigned int v6; // w1

  if ( a1 )
  {
    v2 = qftell(a1);
    qfseek(a1, 0, 2);
    v3 = qftell(a1);
    qfseek(a1, v2, 0);
    return v3;
  }
  else
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(552);
    return eshift(v5, v6);
  }
}
// 10006C531: variable 'v5' is possibly undefined
// 10006C531: variable 'v6' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
