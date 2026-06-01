__int64 __fastcall sub_CDA590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // r15
  __int64 v9; // rbp

  v2 = sub_186B270(0x18u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C597E0;
  v4 = (_QWORD *)sub_186B270(0x230u);
  *v4 = a2;
  v5 = v4;
  v6 = v4 + 22;
  sub_1584DD0(v4 + 1, a2, 0);
  *((_DWORD *)v5 + 40) = 0;
  v5[1] = &off_1C597A0;
  v5[19] = v5 + 68;
  v5[21] = 0;
  sub_1584DD0(v6, a2, 0);
  v5[40] = 0;
  *((_DWORD *)v5 + 82) = 0;
  v5[22] = &off_1C61DB8;
  sub_1584DD0(v5 + 42, a2, 0);
  *((_DWORD *)v5 + 120) = 0;
  v5[1] = &off_1C597C0;
  v5[42] = &off_1C61DE0;
  v5[61] = 0;
  v5[62] = a2;
  v5[63] = 0;
  v5[64] = a2;
  v5[65] = 0;
  v5[66] = a2;
  v5[67] = 0;
  v5[68] = a2;
  v5[69] = 0;
  v7 = sub_1434DE0(a2, 0);
  v8 = (void (__fastcall ***)(_QWORD))v5[69];
  v9 = v7;
  if ( (void (__fastcall ***)(_QWORD))v7 != v8 )
  {
    if ( v8 )
    {
      (**v8)(v5[69]);
      sub_186B220(v8);
    }
    v5[69] = v9;
  }
  *(_QWORD *)(v3 + 16) = v5;
  return v3;
}

