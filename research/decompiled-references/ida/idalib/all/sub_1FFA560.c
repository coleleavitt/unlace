_QWORD *__fastcall sub_1FFA560(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax

  v2 = *a2;
  *a2 = 0;
  v3 = (_QWORD *)operator new(0x10u);
  *v3 = &off_2BE4D78;
  v3[1] = v2;
  *a1 = v3;
  return a1;
}
