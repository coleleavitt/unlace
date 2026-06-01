__int64 __fastcall Z3_solver_congruence_explain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_29DC30(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_QWORD *)(a2 + 32);
  if ( !v8 )
  {
    sub_2A74C0(a1, a2);
    v8 = *(_QWORD *)(a2 + 32);
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(*(_QWORD *)v8 + 312LL))(&v15, v8, a3, a4);
  sub_251FD0(a1, v15);
  v9 = v15;
  if ( v7 )
  {
    sub_2BB620(v15);
    v13 = v15;
    if ( v15 )
    {
      v14 = v16;
      v11 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v14, v13);
    }
    byte_1C7EBA0 = 1;
  }
  else if ( v15 )
  {
    v10 = v16;
    v11 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  return v9;
}

