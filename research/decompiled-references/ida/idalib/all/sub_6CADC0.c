__int64 __fastcall sub_6CADC0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = sub_6CAD10(a1, a2, a3);
  return sub_7BEB80(v4, *a1, 69);
}
