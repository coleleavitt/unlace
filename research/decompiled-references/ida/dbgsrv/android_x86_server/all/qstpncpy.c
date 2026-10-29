/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstpncpy
// Address: 0x000B36A0

//----- (000B36A0) --------------------------------------------------------
_BYTE *__cdecl qstpncpy(unsigned int a1, char *a2, int a3)
{
  _BYTE *result; // eax
  int v5; // ecx
  char v6; // bl

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_14:
    BUG();
  }
  result = (_BYTE *)a1;
  if ( a1 + a3 <= a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_14;
  }
  if ( a1 + a3 - 1 == a1 )
  {
LABEL_8:
    *result = 0;
  }
  else
  {
    v5 = a3 - 1;
    while ( 1 )
    {
      v6 = *a2;
      *result = *a2;
      if ( !v6 )
        break;
      ++a2;
      ++result;
      if ( !--v5 )
      {
        result = (_BYTE *)(a1 + a3 - 1);
        goto LABEL_8;
      }
    }
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
