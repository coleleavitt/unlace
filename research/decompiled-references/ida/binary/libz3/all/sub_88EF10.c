__int64 __fastcall sub_88EF10(__int64 a1, int a2)
{
  void *v3; // r14
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // rbp
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v3 = qword_1C7F2C0;
  v13[0] = 1;
  v13[1] = 0;
  if ( a2 < 0 )
    sub_1830C40(qword_1C7F2C0, v12, (unsigned int)a2);
  else
    LODWORD(v12[0]) = a2;
  sub_182CBA0(v3, v13);
  v7 = *(_QWORD *)(a1 + 8);
  BYTE4(v13[0]) &= ~1u;
  LODWORD(v13[0]) = 1;
  if ( !v7 )
  {
    sub_16669E0(a1);
    v7 = *(_QWORD *)(a1 + 8);
  }
  v8 = sub_166A700(v7, (unsigned int)v12, 1, v4, v5, v6);
  v9 = qword_1C7F2C0;
  v10 = v8;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v9, v13);
  return v10;
}

