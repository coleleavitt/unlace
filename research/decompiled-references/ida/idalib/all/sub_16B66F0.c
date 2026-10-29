bool __fastcall sub_16B66F0(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  bool result; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  char v9; // di

  v2 = sub_BFBAE0(a1);
  v3 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(v2 + 8);
  result = 0;
  if ( (*(_BYTE *)(v3 + 17) & 4) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( a2 )
    {
      v7 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v8 = *(_QWORD *)v7;
      v9 = *(_BYTE *)(*(_QWORD *)v7 + 16LL);
      if ( *(_BYTE *)(v6 + 16) != 13 )
        return result;
    }
    else
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v6 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      v9 = *(_BYTE *)(v8 + 16);
      if ( *(_BYTE *)(v3 + 16) != 13 )
        return result;
    }
    result = 0;
    if ( v9 == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1B4 )
      return (((*(_WORD *)(v6 + 18) >> 3) + 32) & 0x1FFu) <= 7;
  }
  return result;
}
