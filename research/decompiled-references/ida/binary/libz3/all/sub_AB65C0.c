_QWORD *__fastcall sub_AB65C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // r14
  unsigned int *v9; // rax
  void *v10; // rbx
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(unsigned int *)(a1 + 8);
  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  v5 = sub_B39350(a2, v4);
  v6 = v5;
  sub_AB6070(a1, v5, (__int64)v12);
  v7 = (_QWORD *)sub_186B270(0x10u);
  v8 = *(_QWORD *)(a1 + 1184);
  v9 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v6)) + 24) + 8LL);
  if ( *((_BYTE *)v9 + 8) )
    sub_DBF6E(0);
  v7[1] = sub_1342E60(v8, v12, *v9);
  *v7 = off_1C559A8;
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v10, v13);
  return v7;
}

