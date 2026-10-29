/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DA58
// Address: 0x000000000049DA58

//----- (000000000049DA58) ----------------------------------------------------
_QWORD *__fastcall sub_49DA58(__int64 a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x0
  _QWORD *result; // x0

  v1 = a1 + 128;
  v2 = malloc(a1 + 128);
  if ( !v2 )
  {
    v2 = (_QWORD *)sub_49D8A0(v1);
    if ( !v2 )
      sub_49DBB0();
  }
  *v2 = 0;
  v2[1] = 0;
  result = v2 + 16;
  *(result - 14) = 0;
  *(result - 13) = 0;
  *(result - 12) = 0;
  *(result - 11) = 0;
  *(result - 10) = 0;
  *(result - 9) = 0;
  *(result - 8) = 0;
  *(result - 7) = 0;
  *(result - 6) = 0;
  *(result - 5) = 0;
  *(result - 4) = 0;
  *(result - 3) = 0;
  *(result - 2) = 0;
  *(result - 1) = 0;
  return result;
}
