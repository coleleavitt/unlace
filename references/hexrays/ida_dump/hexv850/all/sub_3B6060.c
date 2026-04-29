_BOOL8 __fastcall sub_3B6060(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rbp
  int tinfo_property; // eax
  bool v7; // [rsp+Fh] [rbp-29h]
  _QWORD v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v3 = (_QWORD *)sub_387C40(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  if ( !v3 )
    return 0;
  v4 = (__int64)v3;
  if ( *v3 == -1 || sub_3BF8B0(*(_QWORD *)(a3 + 24) + 1312LL) )
    return 0;
  sub_23F800(v8, v4);
  tinfo_property = get_tinfo_property(v8[0], 20);
  v7 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  clear_tinfo_t(v8);
  return v7;
}
