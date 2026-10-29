__int64 __fastcall Z3_optimize_get_upper(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bp
  __int64 v4; // r12
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A0890(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_2F3060((int)&v10, *(_QWORD *)(a2 + 24));
  sub_251FD0(a1, v10);
  v4 = v10;
  if ( v3 )
  {
    sub_2BB620(v10);
    v8 = v10;
    if ( v10 )
    {
      v9 = v11;
      v6 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v6 )
        sub_15D7BC0(v9, v8);
    }
    byte_1C7EBA0 = 1;
    return v4;
  }
  else if ( v10 && (v5 = v11, v6 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), v6) )
  {
    sub_15D7BC0(v5, v4);
    return v4;
  }
  else
  {
    return v4;
  }
}

