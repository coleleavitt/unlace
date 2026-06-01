__int64 __fastcall sub_1A423D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // rsi
  _BYTE v13[32]; // [rsp+8h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 6) == 0 )
    return 1;
  LOBYTE(v7) = sub_1A42350(a1, a2, 0, a4, a5, a6);
  v8 = v7;
  if ( (_BYTE)v7 )
    return 1;
  if ( (*(_DWORD *)(a2 + 40) & 7) == 7 )
  {
    v9 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !*(_DWORD *)v9 )
    {
      v10 = *(_QWORD *)(v9 + 16);
      if ( v10 )
        return (unsigned int)sub_1E61510(a1, v10, v13, 0);
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 && sub_B74AF0(a2) )
  {
    return 1;
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v12 = *(_QWORD *)v12;
      if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) > 4 )
        return v8;
    }
    else if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) > 4 )
    {
      return v8;
    }
    v10 = v12 - 64;
    if ( v10 )
      return (unsigned int)sub_1E61510(a1, v10, v13, 0);
  }
  return v8;
}
