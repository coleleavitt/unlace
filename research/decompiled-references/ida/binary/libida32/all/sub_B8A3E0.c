__int64 __fastcall sub_B8A3E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi

  v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  v7 = *(_BYTE *)(v6 + 8) & 0x7F;
  if ( v7 == 23 )
    return v6 - 48;
  if ( v7 != 22 )
    return 0;
  result = v6 - 48;
  if ( v6 != 48 )
  {
    result = *(_QWORD *)(v6 + 40);
    if ( result )
    {
      v9 = *(_QWORD *)(v6 - 8);
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 7) != 0 )
        v10 = 0;
      return sub_B89FC0(result, v10, 0, a4, a5, a6);
    }
  }
  return result;
}

