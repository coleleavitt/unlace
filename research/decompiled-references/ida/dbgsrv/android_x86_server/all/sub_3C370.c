/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C370
// Address: 0x0003C370

//----- (0003C370) --------------------------------------------------------
int __cdecl sub_3C370(_WORD *a1, _WORD *a2)
{
  __int16 v2; // si
  __int16 v3; // cx
  int result; // eax

  v2 = a2[152];
  a1[28] = v2;
  v3 = a2[162];
  a1[44] = v3;
  result = (unsigned __int16)a2[164];
  a1[60] = result;
  if ( !v2 || !v3 || !(_WORD)result )
  {
    if ( !(_BYTE)under_debugger )
      interr(20037);
    BUG();
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
