/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dd
// Address: 0x000AD580

//----- (000AD580) --------------------------------------------------------
_BYTE *__cdecl pack_dd(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // esi
  _BYTE *result; // eax

  v3 = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
    goto LABEL_30;
  if ( a3 <= 0x7F )
    goto LABEL_13;
  if ( a3 <= 0x3FFF )
  {
    if ( (unsigned int)a1 < a2 )
    {
      *a1 = BYTE1(a3) | 0x80;
LABEL_12:
      ++v3;
      goto LABEL_13;
    }
    goto LABEL_13;
  }
  if ( a3 <= 0x1FFFFFFF )
  {
    if ( (unsigned int)a1 < a2 && (*a1 = HIBYTE(a3) | 0xC0, v3 = a1 + 1, (unsigned int)(a1 + 1) < a2) )
    {
      *v3 = BYTE2(a3);
      v3 = a1 + 2;
      if ( (int)(a2 - (_DWORD)(a1 + 2)) >= 0 )
      {
LABEL_10:
        if ( (unsigned int)v3 < a2 )
        {
          *v3 = BYTE1(a3);
          goto LABEL_12;
        }
LABEL_13:
        if ( (unsigned int)v3 < a2 )
          *v3++ = a3;
        return v3;
      }
    }
    else if ( (int)(a2 - (_DWORD)v3) >= 0 )
    {
      goto LABEL_10;
    }
LABEL_30:
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  result = a1 + 1;
  *a1 = -1;
  if ( (int)(a2 - (_DWORD)(a1 + 1)) < 0 )
    goto LABEL_30;
  if ( (unsigned int)result < a2 && (a1[1] = HIBYTE(a3), result = a1 + 2, (unsigned int)(a1 + 2) < a2) )
  {
    *result = BYTE2(a3);
    result = a1 + 3;
    if ( (int)(a2 - (_DWORD)(a1 + 3)) < 0 )
      goto LABEL_30;
  }
  else if ( (int)(a2 - (_DWORD)result) < 0 )
  {
    goto LABEL_30;
  }
  if ( (unsigned int)result < a2 )
    *result++ = BYTE1(a3);
  if ( (unsigned int)result < a2 )
    *result++ = a3;
  return result;
}
// 13E34C: using guessed type int under_debugger;
