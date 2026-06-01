__int64 __fastcall sub_69540(__int64 a1, __int64 a2)
{
  _UNKNOWN **v3; // [rsp+0h] [rbp-38h] BYREF
  int v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_65FF0(a2);
  v3 = &off_4DB3B8;
  v4 = *(_DWORD *)(a2 + 72);
  return sub_67DD0(a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v3);
}
