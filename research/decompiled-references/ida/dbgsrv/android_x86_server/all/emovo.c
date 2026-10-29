/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovo
// Address: 0x000A41C0

//----- (000A41C0) --------------------------------------------------------
_WORD *__cdecl emovo(_WORD *a1, _WORD *a2)
{
  _WORD *result; // eax
  __int16 v3; // si

  result = a2;
  v3 = a1[1] | 0x8000;
  if ( !*a1 )
    v3 = a1[1];
  a2[7] = v3;
  a2[6] = a1[3];
  a2[5] = a1[4];
  a2[4] = a1[5];
  a2[3] = a1[6];
  a2[2] = a1[7];
  a2[1] = a1[8];
  *a2 = a1[9];
  return result;
}
