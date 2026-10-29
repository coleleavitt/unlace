__int64 __fastcall sub_AAC1F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax
  __int64 result; // rax

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 47 )
  {
    v10 = sub_F60F10(v8, v7, a3, a4, a5);
    v6 = sub_6F3660(v10) & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)v6;
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_BYTE *)(v8 + 16);
  }
  if ( v9 != 13 )
  {
    if ( *(_BYTE *)(v7 + 16) == 10 )
      return (*(_DWORD *)(v7 + 32) >> 1) & 0xFFFFFF;
    if ( v9 == 10 )
    {
      v7 = sub_F63050(v7, v7, a3, a4);
      if ( v7 )
        return (*(_DWORD *)(v7 + 32) >> 1) & 0xFFFFFF;
      v7 = *(_QWORD *)v6;
    }
    return sub_A97D20(a1, v7);
  }
  result = 1;
  if ( ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B4 )
    return result;
  if ( *(_BYTE *)(v7 + 16) != 10 )
    return sub_A97D20(a1, v7);
  return (*(_DWORD *)(v7 + 32) >> 1) & 0xFFFFFF;
}
