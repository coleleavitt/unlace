/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4022C
// Address: 0x0004022C

//----- (0004022C) --------------------------------------------------------
_BYTE *__fastcall sub_4022C(int *a1, int a2, int a3)
{
  int v3; // r0
  _BYTE *result; // r0

  if ( a1[1] - a2 <= 3 )
  {
    if ( !under_debugger )
      interr(277);
    __debugbreak();
  }
  v3 = *a1;
  *(_BYTE *)(v3 + a2) = a3;
  result = (_BYTE *)(v3 + a2);
  result[1] = BYTE1(a3);
  result[2] = BYTE2(a3);
  result[3] = HIBYTE(a3);
  return result;
}
// E0550: using guessed type char under_debugger;
