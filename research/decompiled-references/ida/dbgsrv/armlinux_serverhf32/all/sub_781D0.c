/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_781D0
// Address: 0x000781D0

//----- (000781D0) --------------------------------------------------------
_DWORD *__fastcall sub_781D0(_DWORD *result)
{
  _DWORD *v1; // r3
  int v2; // r5
  int v3; // r6
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // r1
  bool v7; // zf
  _BOOL4 v8; // r2

  v1 = result;
  v2 = *result;
  v3 = result[1];
  while ( 1 )
  {
    v5 = *(v1 - 2);
    v6 = v1;
    v7 = v2 == v5;
    v8 = v2 < v5;
    if ( v7 )
      v8 = v3 < *(v1 - 1);
    v1 -= 2;
    if ( !v8 )
      break;
    result = (_DWORD *)*v1;
    v4 = v1[1];
    v1[2] = *v1;
    v1[3] = v4;
  }
  *v6 = v2;
  v6[1] = v3;
  return result;
}
