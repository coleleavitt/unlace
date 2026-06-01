__int64 __fastcall sub_B1FFF0(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // r13
  __int64 v8; // rbx
  _QWORD v10[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[0] = 1;
  v10[1] = 0;
  v11[0] = 1;
  v11[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v11);
  v5 = *(_QWORD *)(a1 + 16);
  BYTE4(v11[0]) &= ~1u;
  LODWORD(v11[0]) = 1;
  if ( !v5 )
  {
    sub_16669E0(a1 + 8);
    v5 = *(_QWORD *)(a1 + 16);
  }
  v6 = sub_166A700(v5, (unsigned int)v10, 1, v2, v3, v4);
  v7 = qword_1C7F2C0;
  v8 = v6;
  sub_182CBA0(qword_1C7F2C0, v10);
  sub_182CBA0(v7, v11);
  return v8;
}

