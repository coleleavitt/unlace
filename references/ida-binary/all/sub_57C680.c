_QWORD *__fastcall sub_57C680(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  void *v8; // rax

  v6 = off_8C52B8(0x20u);
  *v6 = a1;
  v7 = v6;
  v6[1] = sub_57C660(a2);
  v8 = off_8C52B0(a4, 0x18u);
  v7[2] = v8;
  memcpy(v8, a3, 24LL * a4);
  *((_DWORD *)v7 + 6) = a4;
  return v7;
}
