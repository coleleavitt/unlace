void __fastcall Z3_optimize_set_initial_value(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  __int64 v7; // r14

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_2A0650(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15D1F10(a3);
  if ( v7 != sub_15D1F10(a4) )
  {
    sub_24EA30(a1, 0xAu, "variable and value should have same sort");
    goto LABEL_5;
  }
  if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 232), a4) )
  {
    sub_24EA30(a1, 0xAu, "a proper value was not supplied");
LABEL_5:
    if ( !v6 )
      return;
LABEL_9:
    byte_1C7EBA0 = 1;
    return;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 24) + 160LL))(*(_QWORD *)(a2 + 24), a3, a4);
  if ( v6 )
    goto LABEL_9;
}

