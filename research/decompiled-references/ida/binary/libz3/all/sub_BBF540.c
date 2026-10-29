__int64 __fastcall sub_BBF540(_QWORD *a1, _DWORD *a2, double a3)
{
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // r15
  _DWORD *v11; // r13
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ebp
  __int64 v15; // rdi
  unsigned int v17; // eax
  int v19[2]; // [rsp+0h] [rbp-58h] BYREF
  int v20[2]; // [rsp+8h] [rbp-50h]
  int v21[2]; // [rsp+10h] [rbp-48h] BYREF
  int v22[2]; // [rsp+18h] [rbp-40h]

  *(_QWORD *)v19 = 0;
  *(_QWORD *)v20 = 0;
  *(_QWORD *)v21 = 1;
  *(_QWORD *)v22 = 0;
  sub_182CBA0(qword_1C7F2C0, v21);
  v8 = a1[230];
  LOBYTE(v21[1]) &= ~1u;
  v21[0] = 1;
  if ( !v8 )
  {
    sub_16669E0(a1 + 229);
    v8 = a1[230];
  }
  v9 = sub_166A700(v8, (unsigned int)v19, 1, v5, v6, v7);
  v10 = qword_1C7F2C0;
  v11 = (_DWORD *)v9;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v10, v21);
  sub_1579480(v19, a1 + 153);
  v12 = sub_966380((__int64)a1, v11, *(_DWORD **)v19);
  v13 = *(_QWORD *)v19;
  v14 = v12;
  if ( *(_QWORD *)v19 )
  {
    v15 = *(_QWORD *)v20;
    if ( (*(_DWORD *)(*(_QWORD *)v19 + 8LL))-- == 1 )
      sub_15D7BC0(v15, v13);
  }
  v17 = sub_BB24A0((__int64)a1, a2);
  sub_BBF3C0(a1, v14 ^ 1, v17, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
  return 1;
}

