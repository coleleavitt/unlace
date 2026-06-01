__int64 __fastcall Z3_fixedpoint_get_cover_delta(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29FFE0();
  v7 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_654360(&v14, v7 + 48, a3, a4);
  sub_251FD0(a1, v14);
  v8 = v14;
  if ( v6 )
  {
    sub_2BB620(v14);
    v12 = v14;
    if ( v14 )
    {
      v13 = v15;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v13, v12);
    }
    byte_1C7EBA0 = 1;
  }
  else if ( v14 )
  {
    v9 = v15;
    v10 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  return v8;
}

