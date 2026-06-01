_QWORD *__fastcall sub_BA9460(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rbx

  v8 = (_QWORD *)sub_B902D0(56, a1, a2, 0);
  sub_B725B0((__int64)v8, 0x4Cu, a2, a3);
  v8[5] = a4;
  v8[6] = a5;
  *v8 = &off_2C03D70;
  return v8;
}
