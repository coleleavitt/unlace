/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E564
// Address: 0x0007E564

//----- (0007E564) --------------------------------------------------------
_BYTE *__fastcall sub_7E564(_DWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r10
  unsigned int v4; // r6
  _DWORD *v5; // r5
  _BYTE *v7; // r4
  _DWORD *v8; // r0
  int v9; // r0

  v3 = a2;
  v4 = (unsigned int)&a2[a3];
  v5 = (_DWORD *)*a1;
  if ( 8 * a1[1] )
  {
    v7 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v5;
        v5 += 2;
        v9 = sub_7E3E8(v8, v7, v4 - (_DWORD)v7);
        a2 = &v7[v9];
        if ( v5 == (_DWORD *)(*a1 + 8 * a1[1]) )
          goto LABEL_8;
        if ( (_DWORD *)*a1 != v5 )
          break;
        v7 += v9;
      }
      if ( v4 <= (unsigned int)a2 )
        break;
      v7 = a2 + 1;
      *a2 = 44;
      if ( v4 <= (unsigned int)(a2 + 1) )
      {
        v7 = (_BYTE *)(v4 - 1);
        *(_BYTE *)(v4 - 1) = 0;
      }
    }
    if ( !under_debugger )
      sub_78C64(518);
LABEL_10:
    __und(0xFFu);
  }
LABEL_8:
  if ( v4 <= (unsigned int)a2 )
  {
    if ( !under_debugger )
      sub_78C64(519);
    goto LABEL_10;
  }
  *a2 = 0;
  return (_BYTE *)(a2 - v3);
}
// D6C20: using guessed type char under_debugger;
