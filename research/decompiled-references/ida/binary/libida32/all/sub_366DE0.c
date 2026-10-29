__int64 __fastcall sub_366DE0(__int64 a1, __int64 a2)
{
  const char *v2; // r13
  bool v3; // zf
  unsigned int v4; // r12d
  __int64 v6; // rsi
  _BOOL4 v7; // eax
  __int64 tinfo_property4; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 80) == 0;
  v4 = *(_DWORD *)(a1 + 40);
  v10[1] = __readfsqword(0x28u);
  v6 = *(unsigned int *)(a1 + 8);
  if ( !v3 )
    v2 = *(const char **)(a1 + 72);
  v10[0] = 0;
  v7 = (unsigned __int8)get_type_by_tid(v10, v6)
    && (tinfo_property4 = get_tinfo_property4(v10[0], 294, 0, v4, -1, 0), tinfo_property4 != -1)
    && set_tinfo_property4(v10, 23, tinfo_property4, v2, 0, 0) == 0;
  *(_DWORD *)(a2 + 8) = v7;
  clear_tinfo_t(v10);
  return 0;
}

