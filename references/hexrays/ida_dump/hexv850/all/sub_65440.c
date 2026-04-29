__int64 __fastcall sub_65440(__int64 a1, __int64 a2)
{
  _UNKNOWN **v3; // [rsp+0h] [rbp-38h] BYREF
  int v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_61E70(a2);
  v3 = &off_4AF598;
  v4 = *(_DWORD *)(a2 + 72);
  return sub_63CD0(a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v3);
}
