_QWORD *__fastcall sub_BBFE50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(160, a1, a2, 0, a5, a6);
  sub_B73120((__int64)v6, 0x2Au, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  v6[13] = 0;
  v6[14] = 0;
  v6[15] = 0;
  *v6 = &off_2C04978;
  *((_DWORD *)v6 + 34) = 0;
  *((_BYTE *)v6 + 140) &= 0xF0u;
  v6[18] = 0;
  v6[19] = 0;
  return v6;
}
