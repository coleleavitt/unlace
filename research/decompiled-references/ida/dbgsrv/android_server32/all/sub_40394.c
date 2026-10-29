/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40394
// Address: 0x00040394

//----- (00040394) --------------------------------------------------------
_DWORD *__fastcall sub_40394(_DWORD *result)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  v1 = result[1];
  if ( v1 <= 2 )
  {
    if ( !under_debugger )
      interr(278);
LABEL_8:
    __debugbreak();
  }
  v2 = *(__int16 *)(*result + v1 - 2);
  v3 = v1 - 2;
  v4 = v1 - 2 - v2;
  result[3] = v4;
  if ( v3 < v2 || !v4 )
  {
    if ( !under_debugger )
      interr(279);
    goto LABEL_8;
  }
  return result;
}
// E0550: using guessed type char under_debugger;
