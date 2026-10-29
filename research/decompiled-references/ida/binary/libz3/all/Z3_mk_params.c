_QWORD *__fastcall Z3_mk_params(__int64 a1)
{
  char v1; // r12
  _QWORD *v2; // rbx

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_294CA0(a1);
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v2, a1);
  v2[3] = 0;
  *v2 = &off_1C4CC30;
  sub_24FBE0(a1, (__int64)v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

