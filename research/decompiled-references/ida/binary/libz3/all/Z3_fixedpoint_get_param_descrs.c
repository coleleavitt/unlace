_QWORD *__fastcall Z3_fixedpoint_get_param_descrs(__int64 a1, __int64 a2)
{
  char v2; // r12
  _QWORD *v3; // rbx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A0290();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v3, a1);
  *v3 = &off_1C4C8A0;
  sub_1857380(v3 + 3);
  sub_24FBE0(a1, (__int64)v3);
  sub_64C4A0(*(_QWORD *)(a2 + 24) + 48LL, v3 + 3);
  if ( v2 )
  {
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  return v3;
}

