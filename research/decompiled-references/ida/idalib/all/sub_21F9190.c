__int64 __fastcall sub_21F9190(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax

  v2 = *(_BYTE *)(a2 + 20) & 8 | *(_BYTE *)(a1 + 20) & 0xF7;
  *(_BYTE *)(a1 + 20) = v2;
  v3 = *(_BYTE *)(a2 + 20) & 7 | v2 & 0xF8;
  *(_BYTE *)(a1 + 20) = v3;
  result = v3 & 7;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  if ( (_BYTE)result == 1 || (_BYTE)result != 3 && (_BYTE)result )
  {
    v5 = a2 + 8;
    v6 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) >> 6;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) <= 0x7F )
      v6 = 1;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
      v5 = *(_QWORD *)(a2 + 8);
    v7 = a1 + 8;
    if ( v6 != 1 )
      v7 = *(_QWORD *)(a1 + 8);
    return sub_2209710(v7, v5);
  }
  return result;
}
