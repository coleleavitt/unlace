unsigned __int64 __fastcall sub_37F5B0(__int64 a1, __int64 (__fastcall **a2)(_QWORD))
{
  __int64 (__fastcall **v3[3])(_QWORD); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3[1] = a2;
  v3[0] = (__int64 (__fastcall **)(_QWORD))off_4BE2E8;
  sub_338F80(v3);
  return v4 - __readfsqword(0x28u);
}
