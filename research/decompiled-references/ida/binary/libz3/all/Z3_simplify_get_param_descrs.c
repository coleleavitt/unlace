_QWORD *__fastcall Z3_simplify_get_param_descrs(__int64 a1)
{
  char v1; // bp
  _QWORD *v2; // rbx

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29B120();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v2, a1);
  *v2 = &off_1C4C8A0;
  sub_1857380(v2 + 3);
  sub_24FBE0(a1, (__int64)v2);
  sub_14B6210(v2 + 3);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

