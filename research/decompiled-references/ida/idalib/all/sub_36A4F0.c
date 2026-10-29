__int64 __fastcall sub_36A4F0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v4; // r13
  __int64 v6; // rsi
  _BOOL8 v7; // rax
  __int64 tinfo_property4; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = haystack;
  v3 = a1[10] == 0;
  v4 = a1[5];
  v10[1] = __readfsqword(0x28u);
  v6 = a1[1];
  if ( !v3 )
    v2 = (const char *)a1[9];
  v10[0] = 0;
  v7 = (unsigned __int8)get_type_by_tid(v10, v6)
    && (tinfo_property4 = get_tinfo_property4(v10[0], 294, 0, v4, -1, 0), tinfo_property4 != -1)
    && (unsigned int)set_tinfo_property4(v10, 22, tinfo_property4, v2, 0, 0) == 0;
  *(_QWORD *)(a2 + 8) = v7;
  clear_tinfo_t(v10);
  return 0;
}
