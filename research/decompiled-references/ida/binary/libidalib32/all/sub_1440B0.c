_QWORD *__fastcall sub_1440B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  sub_109D70(a1, a2);
  v4[0] = a1 + 0x100000000LL;
  v4[1] = a2 - 0x100000000LL;
  v2 = (_QWORD *)operator new(0x90u);
  TDeskInit::TDeskInit(v2 + 17, sub_143E40);
  TDeskTop::TDeskTop(v2, &off_233620, v4);
  *v2 = &off_238C00;
  return v2;
}

