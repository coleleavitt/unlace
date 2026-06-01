/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x0007C9F8

//----- (0007C9F8) --------------------------------------------------------
_BYTE *__fastcall pack_dw(_BYTE *result, unsigned int a2, unsigned int a3)
{
  if ( (int)(a2 - (_DWORD)result) < 0 )
    goto LABEL_14;
  if ( a3 <= 0x7F )
    goto LABEL_11;
  if ( !(a3 >> 14) )
  {
    if ( (unsigned int)result >= a2 )
      goto LABEL_11;
    *result = BYTE1(a3) | 0x80;
    goto LABEL_10;
  }
  if ( (unsigned int)result < a2 )
  {
    *result++ = -1;
    if ( (int)(a2 - (_DWORD)result) < 0 )
    {
LABEL_14:
      if ( !under_debugger )
        interr(1225);
      __debugbreak();
    }
  }
  if ( (unsigned int)result >= a2 )
    goto LABEL_11;
  *result = BYTE1(a3);
LABEL_10:
  ++result;
LABEL_11:
  if ( (unsigned int)result < a2 )
    *result++ = a3;
  return result;
}
// E0550: using guessed type char under_debugger;
