__int64 __fastcall sub_36A1C0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v5; // rsi
  __int64 v6; // r13
  _BOOL8 v7; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = haystack;
  v3 = a1[6] == 0;
  v9[1] = __readfsqword(0x28u);
  v5 = a1[1];
  if ( !v3 )
    v2 = (const char *)a1[5];
  v9[0] = 0;
  v6 = a1[9];
  v7 = v5 != -1
    && (unsigned __int8)get_type_by_tid(v9, v5)
    && (unsigned int)set_tinfo_property4(v9, 5, v2, v6 == 0, 0, 0) == 0;
  *(_QWORD *)(a2 + 8) = v7;
  clear_tinfo_t(v9);
  return 0;
}
