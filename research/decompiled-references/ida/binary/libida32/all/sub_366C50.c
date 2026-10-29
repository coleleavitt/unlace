__int64 __fastcall sub_366C50(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v5; // rsi
  _BOOL4 v6; // eax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v8[1] = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a1 + 8);
  if ( !v3 )
    v2 = *(const char **)(a1 + 40);
  v8[0] = 0;
  v6 = (_DWORD)v5 != -1 && (unsigned __int8)get_type_by_tid(v8, v5) && set_tinfo_property4(v8, 4, v2, 1, 0, 0) == 0;
  *(_DWORD *)(a2 + 8) = v6;
  clear_tinfo_t(v8);
  return 0;
}

