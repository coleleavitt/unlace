_QWORD *__fastcall sub_2156C20(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx

  v2 = (_QWORD *)operator new(0x18u);
  v2[1] = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  *a1 = v2;
  v2[2] = v3;
  *v2 = off_2C73820;
  return a1;
}
