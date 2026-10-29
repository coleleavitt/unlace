/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x000AD670

//----- (000AD670) --------------------------------------------------------
_BYTE *__cdecl pack_dw(_BYTE *a1, unsigned int a2, unsigned __int16 a3)
{
  _BYTE *result; // eax

  result = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
    goto LABEL_14;
  if ( a3 <= 0x7Fu )
    goto LABEL_11;
  if ( a3 <= 0x3FFFu )
  {
    if ( (unsigned int)a1 >= a2 )
      goto LABEL_11;
    *a1 = HIBYTE(a3) | 0x80;
    goto LABEL_10;
  }
  if ( (unsigned int)a1 < a2 )
  {
    *a1 = -1;
    result = a1 + 1;
    if ( (int)(a2 - (_DWORD)(a1 + 1)) < 0 )
    {
LABEL_14:
      if ( !(_BYTE)under_debugger )
        interr(1225);
      BUG();
    }
  }
  if ( (unsigned int)result >= a2 )
    goto LABEL_11;
  *result = HIBYTE(a3);
LABEL_10:
  ++result;
LABEL_11:
  if ( (unsigned int)result < a2 )
    *result++ = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
