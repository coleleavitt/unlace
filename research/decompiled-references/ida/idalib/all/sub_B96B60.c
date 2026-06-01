_QWORD *__fastcall sub_B96B60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(144, a1, a2, 0, a5, a6);
  sub_B80110(v6, 0x3Bu, 0, (__int64)a1, 0, 0, 0, 0, 0);
  *((_BYTE *)v6 + 74) &= ~0x10u;
  v6[16] = 0;
  v6[17] = 0;
  *v6 = &off_2C02C58;
  return v6;
}
