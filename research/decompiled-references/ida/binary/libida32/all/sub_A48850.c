unsigned __int64 __fastcall sub_A48850(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rsi

  if ( !a2 )
    BUG();
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 - 3) >> 7;
  v6 = *(_WORD *)(a2 - 2) & 0x7FFF;
  v7 = *(_WORD *)(a2 - 4) & 0x7FFF;
  if ( (*(_BYTE *)(a2 - 6) & 8) != 0 )
    v8 = *(_QWORD *)(a2 + 24);
  else
    v8 = *(_QWORD *)(a2 - 16);
  sub_F3CBA0(a3, v8, v4, v7, v6, v5);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

