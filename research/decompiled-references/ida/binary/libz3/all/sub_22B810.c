_QWORD *__fastcall sub_22B810(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d

  v5 = (_QWORD *)sub_186B270(0x148u);
  v5[2] = a4;
  v6 = v5;
  v5[1] = a2;
  v5[3] = a4 + 104;
  *v5 = &off_1C4C098;
  sub_1448220((_DWORD)v5 + 32, a2, v7, v8, v9, v10);
  return v6;
}

