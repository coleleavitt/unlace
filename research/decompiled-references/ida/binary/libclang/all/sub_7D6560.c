_QWORD *__fastcall sub_7D6560(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx

  v2 = sub_7943D0(184, a1, a2, 0);
  sub_7A2EA0(v2, 0x3Au, 0, (__int64)a1, 0, 0, 0, 0, 0);
  *((_BYTE *)v2 + 180) &= 0xF8u;
  *((_BYTE *)v2 + 74) &= ~0x10u;
  v2[18] = 0;
  *v2 = &off_49F6870;
  v2[19] = 0;
  v2[20] = 0;
  *((_DWORD *)v2 + 44) = 0;
  return v2;
}

