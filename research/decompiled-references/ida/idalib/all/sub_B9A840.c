_QWORD *__fastcall sub_B9A840(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(88, a1, a2, 0, a5, a6);
  sub_B725B0((__int64)v6, 0x1Cu, 0, 0);
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  *v6 = &off_2C033C0;
  *((_OWORD *)v6 + 4) = 0;
  v6[10] = 0;
  return v6;
}
