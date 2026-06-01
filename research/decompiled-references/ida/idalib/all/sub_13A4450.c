_QWORD *__fastcall sub_13A4450(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)operator new(0x10u);
  v2[1] = a2;
  *a1 = v2;
  *v2 = &off_2BB2620;
  return a1;
}
