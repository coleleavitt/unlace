__int64 __fastcall Z3_mk_string_sort(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rsi
  __int64 v3; // rbp

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_297A40();
  v2 = *(unsigned int *)(a1 + 480);
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_15D2CD0(*(_QWORD *)(a1 + 472), v2, 2, 0, 0);
  sub_251FD0(a1, v3);
  if ( v1 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

