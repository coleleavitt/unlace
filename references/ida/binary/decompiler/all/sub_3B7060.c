_BOOL8 __fastcall sub_3B7060(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  int tinfo_property; // eax
  bool v6; // [rsp+Fh] [rbp-29h]
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = (_QWORD *)sub_3894C0(*(_QWORD *)(a2 + 32), a2 + 80);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( *v2 == -1 || sub_3C0830(*(_QWORD *)(a2 + 24) + 1312LL) )
    return 0;
  sub_2421A0(v7, v3);
  tinfo_property = get_tinfo_property();
  v6 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  clear_tinfo_t();
  return v6;
}
