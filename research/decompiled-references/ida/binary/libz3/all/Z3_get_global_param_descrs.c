_QWORD *__fastcall Z3_get_global_param_descrs(__int64 a1)
{
  char v1; // r12
  _QWORD *v2; // rbx
  __int64 v3; // rax

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_294C40();
  v2 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v2, a1);
  *v2 = &off_1C4C8A0;
  sub_1857380(v2 + 3);
  sub_24FBE0(a1, (__int64)v2);
  v3 = sub_17FA030();
  sub_185C3E0(v2 + 3, v3);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

