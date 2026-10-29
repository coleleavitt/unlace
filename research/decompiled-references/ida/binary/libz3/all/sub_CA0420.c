__int64 __fastcall sub_CA0420(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  void *v8; // rbp
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a3 | a2;
  v11[0] = 1;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v12);
  BYTE4(v12[0]) &= ~1u;
  v12[2] = v3;
  LODWORD(v12[0]) = 1;
  v7 = sub_C9E9F0(a1, *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 16), (v3 & 7) == 1, v4, v5, v6, 1, 0, v12[0]);
  v8 = qword_1C7F2C0;
  v9 = v7;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v8, v12);
  return v9;
}

