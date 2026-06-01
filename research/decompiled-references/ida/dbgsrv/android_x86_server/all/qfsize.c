/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsize
// Address: 0x000A3EC0

//----- (000A3EC0) --------------------------------------------------------
int __cdecl qfsize(FILE *stream)
{
  int v1; // edx
  int v2; // esi
  int v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+8h] [ebp-14h]

  if ( !stream )
  {
    if ( !(_BYTE)under_debugger )
      interr(552);
    BUG();
  }
  v5 = qftell(stream);
  v4 = v1;
  qfseek(stream, 0, 0, 2);
  v2 = qftell(stream);
  qfseek(stream, v5, v4, 0);
  return v2;
}
// A3EF1: variable 'v1' is possibly undefined
// 13E34C: using guessed type int under_debugger;
