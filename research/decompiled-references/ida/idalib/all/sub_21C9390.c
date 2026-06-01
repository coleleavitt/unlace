_QWORD *__fastcall sub_21C9390(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD v5[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]

  v5[0] = a3;
  v6 = 260;
  v3 = operator new(0x30u);
  *(_DWORD *)(v3 + 8) = a2;
  *(_QWORD *)v3 = &off_2C74C70;
  sub_2253560(v3 + 16, v5);
  *a1 = v3;
  return a1;
}
