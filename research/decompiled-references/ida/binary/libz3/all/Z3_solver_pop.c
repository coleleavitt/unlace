void __fastcall Z3_solver_pop(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // r12
  __int64 v6; // rdi
  _QWORD *v7; // rdi

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29D860(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( !v6 )
  {
    sub_2A74C0(a1, a2);
    v6 = *(_QWORD *)(a2 + 32);
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6) < a3 )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v5 )
      return;
LABEL_12:
    byte_1C7EBA0 = 1;
    return;
  }
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 32) + 200LL))(*(_QWORD *)(a2 + 32), a3);
    v7 = *(_QWORD **)(a2 + 64);
    if ( v7 )
      sub_2A7670(v7, a3);
  }
  if ( v5 )
    goto LABEL_12;
}

