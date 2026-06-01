_QWORD *__fastcall Z3_mk_model(__int64 a1)
{
  char v1; // r13
  _QWORD *v2; // rbx
  __int64 v3; // r12
  _DWORD *v4; // r15

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29B3C0();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v2, a1);
  v2[3] = 0;
  *v2 = &off_1C4CBA8;
  v3 = sub_186B270(0xA0u);
  sub_1373200(v3, *(_QWORD *)(a1 + 232));
  v4 = (_DWORD *)v2[3];
  ++*(_DWORD *)(v3 + 16);
  if ( v4 )
  {
    if ( v4[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      sub_186B220(v4);
    }
  }
  v2[3] = v3;
  sub_24FBE0(a1, (__int64)v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

