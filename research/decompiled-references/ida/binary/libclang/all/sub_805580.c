__int64 __fastcall sub_805580(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // r13
  _QWORD *v6; // rax

  v3 = (32 * (*(_WORD *)a2 & 0xF)) | *(_WORD *)(a1 + 2) & 0xFE1F;
  *(_WORD *)(a1 + 2) = v3;
  result = ((unsigned __int8)v3 >> 3) & 3;
  if ( (_BYTE)result == 1 )
  {
    v6 = (_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 16) > 0x40u )
      v6 = *(_QWORD **)(a2 + 8);
    *(_QWORD *)(a1 + 24) = *v6;
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 16) & 0x7F | *(_BYTE *)(a1 + 4) & 0x80;
    result = (2 * (*(_BYTE *)(a2 + 20) & 1)) | *(_BYTE *)(a1 + 3) & 0xFDu;
    *(_BYTE *)(a1 + 3) = (2 * (*(_BYTE *)(a2 + 20) & 1)) | *(_BYTE *)(a1 + 3) & 0xFD;
  }
  else if ( (_BYTE)result == 2 )
  {
    v5 = a1 + 24;
    if ( *(char *)(a1 + 4) >= 0 )
    {
      if ( sub_6A0220(a2) )
      {
        *(_BYTE *)(a1 + 4) |= 0x80u;
        sub_6B5A70(a3, (__int64)sub_778160, v5);
      }
    }
    return sub_6A01B0(v5, a2);
  }
  return result;
}

