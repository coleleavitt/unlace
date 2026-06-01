_QWORD *__fastcall sub_607210(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  _QWORD *v3; // rbx

  v1 = sub_186B270(0x60u);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = (_QWORD *)v1;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_BYTE *)(v1 + 24) = 1;
  *(_QWORD *)v1 = &off_1C68880;
  *(_QWORD *)(v1 + 32) = v2;
  sub_16744A0(v1 + 40, v2);
  v3[8] = v2;
  v3[9] = 0;
  v3[10] = v2;
  v3[11] = 0;
  return v3;
}

