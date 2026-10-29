__int64 __fastcall Z3_fixedpoint_get_reachable(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A1F60();
  v5 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_6543B0(&v12, v5 + 48, a3);
  sub_251FD0(a1, v12);
  v6 = v12;
  if ( v4 )
  {
    sub_2BB620(v12);
    v10 = v12;
    if ( v12 )
    {
      v11 = v13;
      v8 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v11, v10);
    }
    byte_1C7EBA0 = 1;
    return v6;
  }
  else if ( v12 && (v7 = v13, v8 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), v8) )
  {
    sub_15D7BC0(v7, v6);
    return v6;
  }
  else
  {
    return v6;
  }
}

