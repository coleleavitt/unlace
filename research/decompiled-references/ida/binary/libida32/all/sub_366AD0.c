__int64 __fastcall sub_366AD0(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v5; // rsi
  int v6; // r13d
  _BOOL4 v7; // eax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v9[1] = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a1 + 8);
  if ( !v3 )
    v2 = *(const char **)(a1 + 40);
  v9[0] = 0;
  v6 = *(_DWORD *)(a1 + 72);
  v7 = (_DWORD)v5 != -1
    && (unsigned __int8)get_type_by_tid(v9, v5)
    && set_tinfo_property4(v9, 5, v2, v6 == 0, 0, 0) != 0;
  *(_DWORD *)(a2 + 8) = v7;
  clear_tinfo_t(v9);
  return 0;
}

