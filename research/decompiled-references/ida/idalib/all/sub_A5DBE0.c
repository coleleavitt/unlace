__int64 __fastcall sub_A5DBE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BOOL8 v7; // rax
  __int64 v8; // r8
  char v9; // dl
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r9
  unsigned __int8 v12; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi

  v5 = *(_QWORD *)(a1 + 16);
  if ( (v5 & 0x1000000) != 0 )
  {
    v6 = *(unsigned __int16 *)(a1 + 22);
    v7 = (v5 & 0x40000000) != 0;
    v8 = 8 * v6 + 48;
    v9 = *(_BYTE *)(a1 + 19);
    v10 = (a1 + v8 + ((SBYTE3(v5) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 0x40) != 0 )
    {
      v11 = v10 + 8 * (((*(_BYTE *)(((a1 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v7);
      v12 = ((unsigned __int8)v9 >> 1) & 0xF;
      if ( v12 != 2 )
        return ((__int64 (*)(void))((char *)dword_23DCCB8 + dword_23DCCB8[v12]))();
    }
    else
    {
      v11 = v10 + 8 * v7;
      v12 = ((unsigned __int8)v9 >> 1) & 0xF;
      if ( v12 != 2 )
        return ((__int64 (*)(void))((char *)dword_23DCCB8 + dword_23DCCB8[v12]))();
    }
    v14 = v11 + 8LL * (*(_WORD *)((a1 + v8 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    v15 = v14 + v6;
    if ( (v5 & 0x20000000) != 0 )
      v14 = v15;
    return *(_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else if ( *(_BYTE *)(a1 + 16) == 26
         || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
         && sub_F63050(a1, a2, a3, v5, a5) )
  {
    return *(_BYTE *)(a1 + 18) >> 5;
  }
  else
  {
    return 0;
  }
}
