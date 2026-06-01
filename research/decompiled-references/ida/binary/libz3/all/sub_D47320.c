__int64 __fastcall sub_D47320(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C5A6A8;
  sub_1858590(v2 + 24, a2);
  v4 = (_QWORD *)sub_186B270(0x258u);
  *v4 = a1;
  v5 = v4;
  v6 = v4 + 68;
  sub_1584DD0(v4 + 1, a1, *(_DWORD *)(a1 + 712) != 0);
  v5[19] = v6;
  v5[1] = &off_1C5A668;
  *((_DWORD *)v5 + 40) = 0;
  v5[21] = 0;
  sub_1584DD0(v5 + 22, a1, 0);
  v5[40] = 0;
  *((_DWORD *)v5 + 82) = 0;
  v5[22] = &off_1C61DB8;
  sub_1584DD0(v5 + 42, a1, 0);
  v5[62] = a1;
  *((_DWORD *)v5 + 120) = 0;
  v5[64] = a1;
  v5[42] = &off_1C61DE0;
  v5[61] = 0;
  v5[63] = 0;
  v5[65] = 0;
  v5[66] = a1;
  v5[67] = 0;
  v5[1] = &off_1C5A688;
  v5[68] = a1;
  sub_13A2DE0(v5 + 69, a1, 0);
  v5[71] = 0;
  v7 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  *(_QWORD *)(v3 + 16) = v5;
  v5[72] = 0;
  v8 = (unsigned __int64)v7 << 20;
  v9 = v7 == -1;
  v10 = -1;
  *((_DWORD *)v5 + 149) = 0;
  if ( !v9 )
    v10 = v8;
  v5[73] = v10;
  return sub_EE8D70(v3);
}

