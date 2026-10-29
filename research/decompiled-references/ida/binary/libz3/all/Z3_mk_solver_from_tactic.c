__int64 __fastcall Z3_mk_solver_from_tactic(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r12

  v2 = a2;
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D5E0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = sub_186B270(0x80u);
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 24);
  v5 = sub_E47310(v2);
  sub_2518F0(v4, a1);
  *(_QWORD *)(v4 + 24) = v5;
  *(_QWORD *)v4 = &off_1C4CC50;
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  sub_1857380(v4 + 48);
  *(_QWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  sub_24FBE0(a1, v4);
  sub_2AF8D0(a1, v4);
  if ( v3 )
  {
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
  }
  return v4;
}

