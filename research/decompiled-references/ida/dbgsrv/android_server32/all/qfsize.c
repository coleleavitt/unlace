/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsize
// Address: 0x00075D2C

//----- (00075D2C) --------------------------------------------------------
__int64 __fastcall qfsize(FILE *a1)
{
  __int64 v2; // kr00_8
  __int64 v3; // kr08_8
  int whence; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+4h] [bp-8h]
  int off; // [sp+8h] [bp-4h]

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(552);
    __debugbreak();
  }
  v2 = qftell(a1);
  v6 = HIDWORD(v2);
  off = v2;
  qfseek(a1, (int)&whence, 0, 0, 2);
  v3 = qftell(a1);
  qfseek(a1, SHIDWORD(v3), off, v6, 0);
  return v3;
}
// E0550: using guessed type char under_debugger;
