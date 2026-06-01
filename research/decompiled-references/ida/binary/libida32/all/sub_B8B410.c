_QWORD *__fastcall sub_B8B410(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B6C230(128, a1, a2, 0, a5, a6);
  sub_B8B230((__int64)v6, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  v6[15] = v6[15] & 0xFFFFFFFFFFFFFFFBLL | (4LL * (((*(_BYTE *)(a1[290] + 21LL) >> 1) ^ 1) & 1));
  return v6;
}

