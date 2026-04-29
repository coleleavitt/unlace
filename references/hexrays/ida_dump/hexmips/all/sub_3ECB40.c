void __fastcall sub_3ECB40(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // r12d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r14d

  if ( *(_WORD *)(a1 + 890) != 8 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD81u, a2, a5);
LABEL_21:
    BUG();
  }
  if ( *(_BYTE *)(a1 + 145) != 5 || *(_BYTE *)(a1 + 185) != 5 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD82u, a2, a5);
    goto LABEL_21;
  }
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 152);
  v7 = a2;
  v9 = v6;
  if ( *(_WORD *)(a1 + 48) == 583 )
    v9 = v6 + 32;
  v10 = *(_QWORD *)(a1 + 192);
  v11 = v10 + 1;
  if ( v9 > 63 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD83u, a2, a5);
    goto LABEL_21;
  }
  if ( (unsigned int)v10 > 0x1F )
  {
    if ( !under_debugger )
      sub_37E160(0xCD84u, a2, a5);
    goto LABEL_21;
  }
  v12 = (unsigned int)(v9 + v11);
  if ( (int)v12 > 64 )
    LOBYTE(v11) = 64 - v9;
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_QWORD *)(v13 + 760);
  if ( !v14 )
    sub_3E5460(a5, a1, v12);
  v15 = *(_DWORD *)(*(_QWORD *)(v13 + 752) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 760) = v14 - 1;
  sub_3EC710(a1, (1LL << v11) - 1, 3, v15, *(unsigned __int16 *)(a1 + 890));
  sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v7, v15, v5, 0);
  sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v5, a4, v5, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v15);
}
