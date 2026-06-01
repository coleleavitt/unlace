__int64 __fastcall sub_6DF890(__int64 a1)
{
  void *v2; // r12
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // r13
  __int64 v9; // r12
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = qword_1C7F2C0;
  v12[0] = 1;
  v12[1] = 0;
  v11[0] = 0;
  v13[0] = 10000;
  v13[1] = 0;
  v11[1] = 0;
  sub_1832C70(qword_1C7F2C0, v12, v13, v11);
  if ( (v11[0] & 0x100000000LL) != 0 || LODWORD(v11[0]) != 1 )
  {
    sub_1833EB0(v2, v12, v11, v12);
    sub_1833EB0(v2, v13, v11, v13);
  }
  sub_182CBA0(v2, v11);
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
    sub_16669E0(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
  }
  v7 = sub_166A700(v6, (unsigned int)v12, 0, v3, v4, v5);
  v8 = qword_1C7F2C0;
  v9 = v7;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v8, v13);
  return v9;
}

