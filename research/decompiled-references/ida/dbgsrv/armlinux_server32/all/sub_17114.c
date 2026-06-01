/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17114
// Address: 0x00017114

//----- (00017114) --------------------------------------------------------
_DWORD *__fastcall sub_17114(_DWORD *result, _DWORD *a2)
{
  int v2; // r2

  if ( a2[1] )
  {
    *result = *a2;
    v2 = a2[1];
    result[1] = v2;
    result[2] = a2[2];
    result[3] = a2[3];
    *(_DWORD *)(v2 + 4) = result;
    result[4] = a2[4];
    a2[2] = a2;
    a2[3] = a2;
    a2[1] = 0;
    a2[4] = 0;
  }
  else
  {
    *result = 0;
    result[1] = 0;
    result[2] = result;
    result[3] = result;
    result[4] = 0;
  }
  return result;
}
