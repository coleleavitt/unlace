_QWORD *__fastcall sub_7D8C90(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx

  v2 = sub_7943D0(144, a1, a2, 0);
  sub_77B010((__int64)v2, 0x27u, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  *((_BYTE *)v2 + 140) &= 0xF0u;
  v2[13] = 0;
  v2[14] = 0;
  *v2 = &off_49F6AD8;
  v2[15] = 0;
  *((_DWORD *)v2 + 34) = 0;
  return v2;
}

