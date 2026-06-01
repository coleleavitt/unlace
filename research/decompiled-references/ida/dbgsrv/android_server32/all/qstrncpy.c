/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x000802E0

//----- (000802E0) --------------------------------------------------------
unsigned int __fastcall qstrncpy(unsigned int result, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  _BYTE *v4; // r4
  int v5; // r2
  _BYTE *v6; // r4
  int v7; // r5

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_14:
    __debugbreak();
  }
  if ( result + a3 <= result )
  {
    if ( !under_debugger )
      interr(520);
    goto LABEL_14;
  }
  v3 = result + a3 - 1;
  v4 = (_BYTE *)result;
  if ( v3 == result )
  {
LABEL_8:
    *v4 = 0;
  }
  else
  {
    v5 = a3 - 1;
    v6 = (_BYTE *)result;
    while ( 1 )
    {
      v7 = *a2;
      *v6 = v7;
      if ( !v7 )
        break;
      --v5;
      ++v6;
      ++a2;
      if ( !v5 )
      {
        v4 = (_BYTE *)v3;
        goto LABEL_8;
      }
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
