_QWORD *__fastcall clang_IndexAction_create(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  _OWORD *v3; // rax

  v1 = (_QWORD *)operator new(0x10u);
  *v1 = a1;
  v2 = v1;
  v3 = (_OWORD *)operator new(0x40u);
  v2[1] = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  return v2;
}

