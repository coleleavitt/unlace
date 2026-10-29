__int64 __fastcall sub_A32650(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi

  if ( !a2 )
    BUG();
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_WORD *)(a2 - 2) & 0x7FFF;
  v9 = *(_BYTE *)(a2 - 3) >> 7;
  v10 = *(_WORD *)(a2 - 4) & 0x7FFF;
  if ( (*(_BYTE *)(a2 - 6) & 8) != 0 )
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 - 16);
  sub_F3CBA0(a5, v11, v7, v10, v8, v9);
  return sub_21FF190(a5, a3);
}

