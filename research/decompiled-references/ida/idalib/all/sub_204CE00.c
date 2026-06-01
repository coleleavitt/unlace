_QWORD *__fastcall sub_204CE00(_QWORD *a1)
{
  _OWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = (_OWORD *)operator new(0x30u);
  *v1 = 0;
  v2 = v1;
  v1[1] = 0;
  v1[2] = 0;
  sub_208DE10(v1);
  *a1 = v2;
  *v2 = &off_2BE5DF0;
  return a1;
}
