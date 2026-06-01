void __fastcall Z3_solver_set_initial_value(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // r15

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29E190(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  v7 = sub_15D1F10(a3);
  if ( v7 != sub_15D1F10(a4) )
  {
    sub_24EA30(a1, 0xAu, "variable and value should have same sort");
    goto LABEL_7;
  }
  if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 232), a4) )
  {
    sub_24EA30(a1, 0xAu, "a proper value was not supplied");
LABEL_7:
    if ( !v6 )
      return;
LABEL_11:
    byte_1C7EBA0 = 1;
    return;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 72LL) + 104LL))(
    *(_QWORD *)(a2 + 32) + 72LL,
    a3,
    a4);
  if ( v6 )
    goto LABEL_11;
}

