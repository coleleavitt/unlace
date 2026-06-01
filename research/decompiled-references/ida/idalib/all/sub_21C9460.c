_QWORD *__fastcall sub_21C9460(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  _WORD v4[36]; // [rsp+0h] [rbp-48h] BYREF

  v4[16] = 257;
  v2 = operator new(0x30u);
  *(_DWORD *)(v2 + 8) = a2;
  *(_QWORD *)v2 = &off_2C74C70;
  sub_2253560(v2 + 16, v4);
  *a1 = v2;
  return a1;
}
