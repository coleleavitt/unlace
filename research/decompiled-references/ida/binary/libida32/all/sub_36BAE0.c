__int64 __fastcall sub_36BAE0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  bool v3; // zf
  __int64 tinfo_by_edm_name; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v6[1] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = -1;
  v6[0] = 0;
  tinfo_by_edm_name = get_tinfo_by_edm_name(v6, 0, v2);
  if ( tinfo_by_edm_name != -1 )
    *(_DWORD *)(a2 + 8) = get_tinfo_property4(v6[0], 299, tinfo_by_edm_name, 0, 0, 0);
  clear_tinfo_t(v6);
  return 0;
}

