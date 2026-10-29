unsigned __int64 __fastcall sub_271CA0(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_277780(v3, *(_QWORD *)(a1 + 40));
  v1 = sub_277DF0();
  sub_278C20(v1, a1);
  sub_277860(v3);
  return v4 - __readfsqword(0x28u);
}
