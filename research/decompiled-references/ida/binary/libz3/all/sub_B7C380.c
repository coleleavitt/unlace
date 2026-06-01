_QWORD *__fastcall sub_B7C380(__int64 a1, _QWORD *a2)
{
  _BOOL4 v2; // r14d
  int v3; // r13d
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rbp
  _BYTE v8[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v9[56]; // [rsp+10h] [rbp-38h] BYREF

  v2 = 0;
  v3 = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  v4 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  if ( v4 && *v4 == 5 )
    v2 = v4[1] == 1;
  sub_B7BFB0((__int64)v8, a1, v3);
  v5 = (_QWORD *)sub_186B270(0x10u);
  v5[1] = sub_1343270(*(_QWORD *)(a1 + 1584), v8, v2);
  *v5 = off_1C559A8;
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v8);
  sub_182CBA0(v6, v9);
  return v5;
}

