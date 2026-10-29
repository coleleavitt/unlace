/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsize
// Address: 0x00000000000B77A0

//----- (00000000000B77A0) ----------------------------------------------------
__int64 __fastcall qfsize(FILE *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15

  if ( !a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(552);
    BUG();
  }
  v1 = qftell(a1);
  qfseek(a1, 0, 2);
  v2 = qftell(a1);
  qfseek(a1, v1, 0);
  return v2;
}
// 158B40: using guessed type __int64 under_debugger;
