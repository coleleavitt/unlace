_QWORD *__fastcall sub_7A31F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx

  v2 = sub_7943D0(144, a1, a2, 0);
  sub_78A3D0((__int64)v2, 0x39u, 0, (__int64)a1, 0, 0, 0, 0, 0);
  *((_BYTE *)v2 + 74) &= ~0x10u;
  v2[16] = 0;
  v2[17] = 0;
  *v2 = &off_49F5330;
  return v2;
}

