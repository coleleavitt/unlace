/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrncpy
// Address: 0x000B3600

//----- (000B3600) --------------------------------------------------------
unsigned int __cdecl qstrncpy(unsigned int a1, int a2, int a3)
{
  unsigned int result; // eax
  _BYTE *v4; // esi
  int v5; // edi
  char v6; // bl

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_14:
    BUG();
  }
  result = a1;
  if ( a1 + a3 <= a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(520);
    goto LABEL_14;
  }
  v4 = (_BYTE *)a1;
  if ( a1 + a3 - 1 == a1 )
  {
LABEL_8:
    *v4 = 0;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_BYTE *)(a2 + v5);
      *(_BYTE *)(a1 + v5) = v6;
      if ( !v6 )
        break;
      if ( a3 - 1 == ++v5 )
      {
        v4 = (_BYTE *)(a1 + a3 - 1);
        goto LABEL_8;
      }
    }
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
