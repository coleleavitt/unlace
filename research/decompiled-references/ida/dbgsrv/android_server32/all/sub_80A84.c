/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A84
// Address: 0x00080A84

//----- (00080A84) --------------------------------------------------------
_DWORD *__fastcall sub_80A84(_DWORD *result, _DWORD *a2, int a3, char a4)
{
  _DWORD *v4; // r4
  int v5; // r3

  v4 = (_DWORD *)*a2;
  *result = *a2;
  if ( a2 == v4 )
  {
LABEL_8:
    *result = a2;
  }
  else
  {
    v5 = a4 & 8;
    while ( a3 != -1 && v4[2] != a3 || !v5 && v4[3] == 0xFFFF )
    {
      v4 = (_DWORD *)*v4;
      *result = v4;
      if ( a2 == v4 )
        goto LABEL_8;
    }
  }
  return result;
}
