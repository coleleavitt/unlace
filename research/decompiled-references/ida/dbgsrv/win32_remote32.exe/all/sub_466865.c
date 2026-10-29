/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466865
// Address: 0x00466865

//----- (00466865) --------------------------------------------------------
char sub_466865()
{
  DWORD v0; // eax

  v0 = sub_467B79((int)sub_4667A9);
  dwTlsIndex = v0;
  if ( v0 == -1 )
    return 0;
  if ( !sub_467C2A(v0, dword_4B785C) )
  {
    sub_466898();
    return 0;
  }
  return 1;
}
// 4B785C: using guessed type int dword_4B785C[5];
