/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E858
// Address: 0x0003E858

//----- (0003E858) --------------------------------------------------------
_DWORD *__fastcall sub_3E858(_DWORD *result)
{
  unsigned int v1; // r3
  unsigned int v2; // r3
  unsigned int v3; // r4

  v1 = result[1];
  if ( v1 <= 2 )
  {
    if ( !under_debugger )
      sub_78C64(278);
    goto LABEL_3;
  }
  v2 = v1 - 2;
  v3 = *(__int16 *)(*result + v2);
  result[3] = v2 - v3;
  if ( v2 < v3 || v2 == v3 )
  {
    if ( !under_debugger )
      sub_78C64(279);
LABEL_3:
    __und(0xFFu);
  }
  return result;
}
// D6C20: using guessed type char under_debugger;
