/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BBF8
// Address: 0x0006BBF8

//----- (0006BBF8) --------------------------------------------------------
_BYTE *__fastcall sub_6BBF8(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  _BYTE *v4; // r5
  int v5; // r3
  _BYTE *v6; // r4
  _BYTE *v7; // r6
  unsigned __int8 *v9; // r3
  int v10; // r3
  unsigned __int8 *v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  if ( a3 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(1225);
  }
  if ( !a2 )
    return nullptr;
  v4 = a1;
  if ( a3 )
  {
    v11 = a2 + 1;
    v5 = *a2;
    *a1 = v5;
    if ( v5 )
    {
      v6 = a1 + 1;
      v7 = &a1[a3];
      if ( v5 == 92 )
        goto LABEL_14;
      while ( v7 != v6 )
      {
        v9 = v11++;
        v10 = *v9;
        *v6++ = v10;
        if ( !v10 )
          return v4;
        if ( v10 == 92 )
LABEL_14:
          *(v6 - 1) = sub_6BA7C(&v11);
      }
      if ( a3 == v6 - v4 )
        *(v7 - 1) = 0;
    }
  }
  return v4;
}
// D5C00: using guessed type char under_debugger;
