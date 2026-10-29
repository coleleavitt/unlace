_QWORD *__fastcall sub_BB2640(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(104, a1, a2, 0, a5, a6);
  sub_B73120((__int64)v6, 0x2Cu, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  *((_BYTE *)v6 + 29) |= 2u;
  *v6 = &off_2C042E0;
  return v6;
}
