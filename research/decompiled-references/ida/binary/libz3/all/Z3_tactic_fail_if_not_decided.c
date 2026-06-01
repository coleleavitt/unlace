_QWORD *__fastcall Z3_tactic_fail_if_not_decided(__int64 a1)
{
  char v1; // r13
  __int64 v2; // r12
  _QWORD *v3; // rbx

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29CC80();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_EE4EC0();
  v3 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v3, a1);
  *v3 = &off_1C4C8E0;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v3[3] = v2;
  sub_24FBE0(a1, v3);
  if ( v1 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

