__int64 __fastcall sub_C44510(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rsi
  __int64 v7; // [rsp+0h] [rbp-28h]
  unsigned __int8 v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+8h] [rbp-20h]
  _BYTE v10[9]; // [rsp+1Fh] [rbp-9h] BYREF

  while ( 1 )
  {
    if ( *(_WORD *)(a2 + 4) )
      return sub_1666AE0(a1 + 24, a2, a3, v10);
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v3 || *v3 != 5 )
      return sub_1666AE0(a1 + 24, a2, a3, v10);
    if ( v3[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
      break;
LABEL_6:
    if ( v3[1] != 18 || *(_DWORD *)(a2 + 24) != 1 )
      return sub_1666AE0(a1 + 24, a2, a3, v10);
    a2 = *(_QWORD *)(a2 + 32);
  }
  v7 = a3;
  v9 = *(_QWORD *)(a2 + 32);
  v5 = sub_C44510(a1);
  a3 = v7;
  if ( !v5 )
  {
    a2 = v9;
    if ( *(_WORD *)(v9 + 4) )
      return sub_1666AE0(a1 + 24, a2, a3, v10);
    v3 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v3 || *v3 != 5 )
      return sub_1666AE0(a1 + 24, a2, a3, v10);
    goto LABEL_6;
  }
  v6 = v7;
  v8 = v5;
  sub_1831620(qword_1C7F2C0, v6);
  return v8;
}

