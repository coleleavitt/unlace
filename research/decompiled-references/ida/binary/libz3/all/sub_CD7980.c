__int64 __fastcall sub_CD7980(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rax
  void (__fastcall ***v7)(_QWORD); // r15
  __int64 v8; // rbp

  v1 = sub_186B270(0x18u);
  *(_DWORD *)(v1 + 8) = 0;
  v2 = v1;
  *(_QWORD *)v1 = &off_1C597E0;
  v3 = (_QWORD *)sub_186B270(0x230u);
  *v3 = a1;
  v4 = v3;
  v5 = v3 + 22;
  sub_1584DD0(v3 + 1, a1, 0);
  *((_DWORD *)v4 + 40) = 0;
  v4[1] = &off_1C597A0;
  v4[19] = v4 + 68;
  v4[21] = 0;
  sub_1584DD0(v5, a1, 0);
  v4[40] = 0;
  *((_DWORD *)v4 + 82) = 0;
  v4[22] = &off_1C61DB8;
  sub_1584DD0(v4 + 42, a1, 0);
  *((_DWORD *)v4 + 120) = 0;
  v4[1] = &off_1C597C0;
  v4[42] = &off_1C61DE0;
  v4[61] = 0;
  v4[62] = a1;
  v4[63] = 0;
  v4[64] = a1;
  v4[65] = 0;
  v4[66] = a1;
  v4[67] = 0;
  v4[68] = a1;
  v4[69] = 0;
  v6 = sub_1434DE0(a1, 0);
  v7 = (void (__fastcall ***)(_QWORD))v4[69];
  v8 = v6;
  if ( (void (__fastcall ***)(_QWORD))v6 != v7 )
  {
    if ( v7 )
    {
      (**v7)(v4[69]);
      sub_186B220(v7);
    }
    v4[69] = v8;
  }
  *(_QWORD *)(v2 + 16) = v4;
  return v2;
}

