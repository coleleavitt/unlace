bool __fastcall sub_1837A90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rsi
  int v13; // eax

  v6 = sub_F63270(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( !sub_B8EC80((__int64)v6) )
    return 0;
  v8 = v7[5];
  if ( (v8 & 7) != 0 )
    return 0;
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v9 + 16);
  if ( *(_DWORD *)v10 != 19 )
    return 0;
  v12 = v10 + 16;
  if ( *(_QWORD *)(v10 + 16) ^ 0x69796F7274736564LL | *(_QWORD *)(v10 + 24) ^ 0x74656C65645F676ELL
    || *(_WORD *)(v10 + 32) != 24421
    || (v13 = 0, *(_BYTE *)(v12 + 18) != 116) )
  {
    v13 = 1;
  }
  return v13 == 0;
}
