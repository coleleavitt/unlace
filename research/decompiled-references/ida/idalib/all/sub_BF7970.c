__int64 __fastcall sub_BF7970(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int v7; // eax
  _QWORD *v8; // rdx

  v3 = (32 * (*(_WORD *)a2 & 0xF)) | *(_WORD *)(a1 + 2) & 0xFE1F;
  *(_WORD *)(a1 + 2) = v3;
  result = ((unsigned __int8)v3 >> 3) & 3;
  if ( (_BYTE)result == 1 )
  {
    v7 = *(_DWORD *)(a2 + 16);
    v8 = (_QWORD *)(a2 + 8);
    if ( v7 > 0x40 )
      v8 = *(_QWORD **)(a2 + 8);
    *(_QWORD *)(a1 + 24) = *v8;
    *(_BYTE *)(a1 + 4) = v7 & 0x7F | *(_BYTE *)(a1 + 4) & 0x80;
    result = (2 * (*(_BYTE *)(a2 + 20) & 1)) | *(_BYTE *)(a1 + 3) & 0xFDu;
    *(_BYTE *)(a1 + 3) = (2 * (*(_BYTE *)(a2 + 20) & 1)) | *(_BYTE *)(a1 + 3) & 0xFD;
  }
  else if ( (_BYTE)result )
  {
    v5 = a1 + 24;
    if ( *(char *)(a1 + 4) >= 0 && sub_A4FD90(a2) )
    {
      *(_BYTE *)(a1 + 4) |= 0x80u;
      sub_A5F590(a3, (__int64)sub_B70CC0, v5);
    }
    return sub_A4FD20(v5, a2);
  }
  return result;
}
