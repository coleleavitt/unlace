_QWORD *__fastcall sub_BBF200(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(184, a1, a2, 0, a5, a6);
  sub_B96A00(v6, 0x3Cu, 0, (__int64)a1, 0, 0, 0, 0, 0);
  *((_BYTE *)v6 + 180) &= 0xF8u;
  v6[18] = 0;
  *((_BYTE *)v6 + 74) &= ~0x10u;
  *v6 = &off_2C04698;
  v6[19] = 0;
  v6[20] = 0;
  *((_DWORD *)v6 + 44) = 0;
  return v6;
}
