unsigned __int64 __fastcall sub_82ED0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
  getinf();
  get_ea_name();
  sub_7DAF0(a2, 0xFFFF, (__int64)&unk_91AFC, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), s1);
  return v3 - __readfsqword(0x28u);
}
