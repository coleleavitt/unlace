_QWORD *__fastcall sub_B9AA40(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v6; // rbx

  v6 = (_QWORD *)sub_B902D0(48, a1, a2, 0);
  sub_B725B0((__int64)v6, 0x39u, a2, a3);
  v6[5] = a4;
  *v6 = &off_2C034B0;
  return v6;
}
