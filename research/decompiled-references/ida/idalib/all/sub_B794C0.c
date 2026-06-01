_QWORD *__fastcall sub_B794C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp

  v2 = a2;
  if ( a2 )
  {
    v2 = a2 + 40;
    v3 = (_QWORD *)sub_B902D0(72, a1, a2 + 40, 0);
  }
  else
  {
    v3 = (_QWORD *)sub_B902D0(72, a1, 0, 0);
  }
  sub_B725B0((__int64)v3, 5u, v2, 0);
  sub_B8E080(v3 + 5, 5);
  *v3 = &off_2B4AC28;
  return v3;
}
