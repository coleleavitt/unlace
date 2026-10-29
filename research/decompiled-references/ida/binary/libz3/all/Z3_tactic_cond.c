_QWORD *__fastcall Z3_tactic_cond(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  char v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rbx

  v6 = a2;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_29CB70();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a4 )
    a4 = *(_QWORD *)(a4 + 24);
  if ( a3 )
    a3 = *(_QWORD *)(a3 + 24);
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 24);
  v8 = sub_EE8F50(v6, a3, a4);
  v9 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v9, a1);
  *v9 = &off_1C4C8E0;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9[3] = v8;
  sub_24FBE0(a1, v9);
  if ( v7 )
  {
    sub_2BB620(v9);
    byte_1C7EBA0 = 1;
  }
  return v9;
}

