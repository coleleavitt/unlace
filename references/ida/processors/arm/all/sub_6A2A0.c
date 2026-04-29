__int64 __fastcall sub_6A2A0(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // dl
  __int64 v10; // rsi

  v1 = *(_DWORD *)(a1 + 16);
  v3 = 0;
  if ( (v1 & 0x810F11) != 0xB00 )
    return v3;
  v5 = (v1 >> 20) & 3;
  if ( (v1 & 0x4000A0) == 0 && (_DWORD)v5 != 3 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v6 + 41) = 1;
    *(_WORD *)(v6 + 46) = ((unsigned __int16)v1 >> 13) + 45;
    *(_BYTE *)(v6 + 45) = 8;
    v7 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v7 + 81) = 1;
    *(_BYTE *)(v7 + 85) = 8;
    *(_WORD *)(v7 + 86) = ((v1 >> 17) & 7) + 45;
    v8 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v8 + 126) = ((v1 >> 1) & 7) + 45;
    v9 = byte_8E21C[v5];
    *(_BYTE *)(v8 + 121) = 1;
    *(_BYTE *)(v8 + 125) = 8;
    v10 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      *(_BYTE *)(v10 + 33) = v9 | 0x80;
      v10 = *(_QWORD *)(a1 + 8);
    }
    *(_WORD *)(v10 + 24) = (*(_DWORD *)(a1 + 16) & 0x10000000) == 0 ? 376 : 381;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  return 0;
}
