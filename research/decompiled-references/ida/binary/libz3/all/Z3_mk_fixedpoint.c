__int64 __fastcall Z3_mk_fixedpoint(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r15
  _QWORD v6[8]; // [rsp+18h] [rbp-40h] BYREF

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29FC70();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_186B270(0x28u);
  sub_2518F0(v2, a1);
  *(_QWORD *)v2 = &off_1C4CB30;
  *(_OWORD *)(v2 + 24) = 0;
  v3 = sub_186B270(0xC18u);
  v4 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)v3 = &off_1C4CB70;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  sub_3932D0(v3 + 32);
  v6[0] = 0;
  sub_64C8D0(v3 + 48, v4, v3 + 32, a1 + 592, v6);
  sub_18572D0(v6);
  *(_QWORD *)(v2 + 24) = v3;
  *(_QWORD *)(v3 + 3080) = v4;
  *(_QWORD *)(v3 + 3088) = 0;
  sub_24FBE0(a1, v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

