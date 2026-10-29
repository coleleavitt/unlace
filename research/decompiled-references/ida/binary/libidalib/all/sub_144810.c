_QWORD *__fastcall sub_144810(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  sub_10A010(a1, a2);
  v4[0] = a1 + 0x100000000LL;
  v4[1] = a2 - 0x100000000LL;
  v2 = (_QWORD *)operator new(0x90u);
  TDeskInit::TDeskInit(v2 + 17, sub_1445A0);
  TDeskTop::TDeskTop(v2, &off_234620, v4);
  *v2 = &off_239C00;
  return v2;
}

