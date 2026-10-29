__int64 __fastcall sub_920DF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _DWORD *v7; // rax
  bool v8; // bp
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rbp
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v3 = sub_15D1F10(a2);
  v15[0] = 1;
  v15[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v15);
  v7 = *(_DWORD **)(v3 + 24);
  v8 = 0;
  BYTE4(v15[0]) &= ~1u;
  LODWORD(v15[0]) = 1;
  if ( v7 && *v7 == 5 )
    v8 = v7[1] == 1;
  v9 = *(_QWORD *)(a1 + 152);
  if ( !v9 )
  {
    sub_16669E0(a1 + 144);
    v9 = *(_QWORD *)(a1 + 152);
  }
  v10 = sub_166A700(v9, (unsigned int)v14, v8, v4, v5, v6);
  v11 = qword_1C7F2C0;
  v12 = v10;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v11, v15);
  return v12;
}

