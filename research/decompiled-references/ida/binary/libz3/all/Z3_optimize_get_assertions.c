_QWORD *__fastcall Z3_optimize_get_assertions(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // r14

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A0A90(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_186B270(0x28u);
  v4 = *(_QWORD *)(a1 + 232);
  v5 = (_QWORD *)v3;
  sub_2518F0(v3, a1);
  v5[3] = v4;
  *v5 = &off_1C4CA20;
  v5[4] = 0;
  sub_24FBE0(a1, (__int64)v5);
  sub_2F1290(*(_QWORD *)(a2 + 24));
  if ( v2 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

