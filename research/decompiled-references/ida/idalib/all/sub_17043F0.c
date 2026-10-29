bool __fastcall sub_17043F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  bool result; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // al

  v6 = sub_17040B0(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), a2, a3, a4, a5, a6);
  result = 0;
  if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&byte_8[sub_A71450(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), v6)
                                      & 0xFFFFFFFFFFFFFFF0LL]
                   & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *(_BYTE *)(v8 + 16);
    if ( v9 == 13 )
    {
      return ((*(_WORD *)(v8 + 18) >> 3) & 0x1FFu) - 489 <= 2;
    }
    else if ( v9 < 0xDu || (unsigned __int8)(v9 - 34) > 2u )
    {
      result = 0;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL) + 2320LL) + 1LL) & 8) != 0 )
      {
        result = 1;
        if ( (*(_BYTE *)(v8 + 17) & 4) == 0 )
          return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
