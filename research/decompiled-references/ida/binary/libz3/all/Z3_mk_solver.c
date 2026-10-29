__int64 __fastcall Z3_mk_solver(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rbx
  __int64 v3; // r13

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29D560(a1);
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_186B270(0x80u);
  v3 = sub_3743C0(&qword_18D6CD0);
  sub_2518F0(v2, a1);
  *(_QWORD *)(v2 + 24) = v3;
  *(_QWORD *)v2 = &off_1C4CC50;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  sub_1857380(v2 + 48);
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 96) = 0;
  sub_24FBE0(a1, v2);
  sub_2AF8D0(a1, v2);
  if ( v1 )
  {
    sub_2BB620(v2);
    byte_1C7EBA0 = 1;
  }
  return v2;
}

