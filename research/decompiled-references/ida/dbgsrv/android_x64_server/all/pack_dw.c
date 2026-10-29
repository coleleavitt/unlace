/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dw
// Address: 0x00000000000C0110

//----- (00000000000C0110) ----------------------------------------------------
_BYTE *__fastcall pack_dw(_BYTE *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
    goto LABEL_14;
  if ( a3 <= 0x7Fu )
    goto LABEL_11;
  if ( a3 <= 0x3FFFu )
  {
    if ( (unsigned __int64)a1 >= a2 )
      goto LABEL_11;
    *a1 = HIBYTE(a3) | 0x80;
    goto LABEL_10;
  }
  if ( (unsigned __int64)a1 < a2 )
  {
    *a1++ = -1;
    if ( (__int64)(a2 - (_QWORD)a1) < 0 )
    {
LABEL_14:
      if ( !(_BYTE)under_debugger )
        interr(1225);
      BUG();
    }
  }
  if ( (unsigned __int64)a1 >= a2 )
    goto LABEL_11;
  *a1 = HIBYTE(a3);
LABEL_10:
  ++a1;
LABEL_11:
  if ( (unsigned __int64)a1 < a2 )
    *a1++ = a3;
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
