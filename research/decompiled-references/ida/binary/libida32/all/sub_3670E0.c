__int64 __fastcall sub_3670E0(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  int v4; // edx
  _BOOL4 v5; // eax
  __int64 edm_by_tid; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 48) == 0;
  v4 = *(_DWORD *)(a1 + 8);
  v8[1] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 40);
  v8[0] = 0;
  v5 = v4 != -1
    && (edm_by_tid = get_edm_by_tid(v8, 0), edm_by_tid != -1)
    && set_tinfo_property4(v8, 22, edm_by_tid, v2, 0, 0) == 0;
  *(_DWORD *)(a2 + 8) = v5;
  clear_tinfo_t(v8);
  return 0;
}

