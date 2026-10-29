__int64 __fastcall Z3_mk_fpa_rounding_mode_sort(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rsi
  __int64 v3; // rbp

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_2A0B10();
  v2 = *(unsigned int *)(a1 + 384);
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_15D2CD0(*(_QWORD *)(a1 + 368), v2, 1, 0, 0);
  sub_251FD0(a1, v3);
  if ( v1 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

