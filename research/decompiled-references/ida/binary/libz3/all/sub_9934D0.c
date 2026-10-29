__int64 __fastcall sub_9934D0(__int64 a1, unsigned int a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // r13
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[0] = a2;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v12);
  v6 = *(_QWORD *)(a1 + 8);
  BYTE4(v12[0]) &= ~1u;
  LODWORD(v12[0]) = 1;
  if ( !v6 )
  {
    sub_16669E0(a1);
    v6 = *(_QWORD *)(a1 + 8);
  }
  v7 = sub_166A700(v6, (unsigned int)v11, 0, v3, v4, v5);
  v8 = qword_1C7F2C0;
  v9 = v7;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v8, v12);
  return v9;
}

