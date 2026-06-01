__int64 __fastcall sub_372F70(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v5; // rsi
  _BOOL8 v6; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = haystack;
  v3 = a1[6] == 0;
  v8[1] = __readfsqword(0x28u);
  v5 = a1[1];
  if ( !v3 )
    v2 = (const char *)a1[5];
  v8[0] = 0;
  v6 = v5 != -1
    && (unsigned __int8)get_type_by_tid(v8, v5)
    && (unsigned int)set_tinfo_property4(v8, 4, v2, 1, 0, 0) == 0;
  *(_QWORD *)(a2 + 8) = v6;
  clear_tinfo_t(v8);
  return 0;
}
