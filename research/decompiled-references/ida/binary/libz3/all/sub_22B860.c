_QWORD *__fastcall sub_22B860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d

  v6 = (_QWORD *)sub_186B270(0x38u);
  v6[2] = a4;
  v7 = v6;
  v6[3] = a4 + 104;
  v6[1] = a2;
  *v6 = &off_1C5F2F0;
  sub_FC1490((_DWORD)v6 + 32, a2, a3, v8, v9, v10);
  *((_DWORD *)v7 + 10) = 0;
  v7[6] = 0;
  sub_F59500(v7, a3);
  return v7;
}

