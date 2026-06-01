__int64 __fastcall sub_CD77E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  __int64 result; // rax
  void (__fastcall ***v6)(_QWORD); // r15
  __int64 v7; // rbp

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1C597E0;
  v2 = (_QWORD *)sub_186B270(0x230u);
  *v2 = a2;
  v3 = v2;
  v4 = v2 + 22;
  sub_1584DD0(v2 + 1, a2, 0);
  *((_DWORD *)v3 + 40) = 0;
  v3[1] = &off_1C597A0;
  v3[19] = v3 + 68;
  v3[21] = 0;
  sub_1584DD0(v4, a2, 0);
  v3[40] = 0;
  *((_DWORD *)v3 + 82) = 0;
  v3[22] = &off_1C61DB8;
  sub_1584DD0(v3 + 42, a2, 0);
  *((_DWORD *)v3 + 120) = 0;
  v3[1] = &off_1C597C0;
  v3[42] = &off_1C61DE0;
  v3[61] = 0;
  v3[62] = a2;
  v3[63] = 0;
  v3[64] = a2;
  v3[65] = 0;
  v3[66] = a2;
  v3[67] = 0;
  v3[68] = a2;
  v3[69] = 0;
  result = sub_1434DE0(a2, 0);
  v6 = (void (__fastcall ***)(_QWORD))v3[69];
  v7 = result;
  if ( (void (__fastcall ***)(_QWORD))result != v6 )
  {
    if ( v6 )
    {
      (**v6)(v3[69]);
      result = sub_186B220(v6);
    }
    v3[69] = v7;
  }
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}

