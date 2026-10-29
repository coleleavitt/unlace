char __fastcall sub_A62E10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  char v8; // al
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 89LL) & 1) != 0 )
  {
    LOBYTE(v9) = 0;
  }
  else
  {
    v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_QWORD *)v5;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_BYTE *)(v7 + 16);
    if ( v8 == 13 )
    {
      LOBYTE(v9) = 0;
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0xF )
        LOBYTE(v9) = ((1LL << ((unsigned __int8)(*(_WORD *)(v7 + 18) >> 3) + 76)) & 0xF0FF) != 0;
    }
    else if ( v8 == 47
           && (*(_BYTE *)(v6 + 17) & 4) == 0
           && (*(_QWORD *)(sub_F60F10(
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                             v5,
                             v6,
                             a4,
                             a5)
                         + 136)
             & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      return (unsigned int)~*(_DWORD *)(sub_F60F10(v7, v5, v10, v11, v12) + 76) >> 7;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
  }
  return v9;
}
