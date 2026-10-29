/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstpncpy
// Address: 0x00080348

//----- (00080348) --------------------------------------------------------
_BYTE *__fastcall qstpncpy(_BYTE *result, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r2
  int v5; // r4

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_14:
    __debugbreak();
  }
  if ( &result[a3] <= result )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_14;
  }
  v3 = (int)&result[a3 - 1];
  if ( (_BYTE *)v3 == result )
  {
LABEL_8:
    *result = 0;
  }
  else
  {
    v4 = a3 - 1;
    while ( 1 )
    {
      v5 = *a2;
      *result = v5;
      if ( !v5 )
        break;
      --v4;
      ++result;
      ++a2;
      if ( !v4 )
      {
        result = (_BYTE *)v3;
        goto LABEL_8;
      }
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
