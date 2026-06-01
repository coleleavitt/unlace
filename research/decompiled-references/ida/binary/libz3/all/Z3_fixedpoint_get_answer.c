__int64 __fastcall Z3_fixedpoint_get_answer(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbp

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29FED0();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_6545A0(*(_QWORD *)(a2 + 24) + 48LL);
  sub_251FD0(a1, v3);
  if ( v2 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

