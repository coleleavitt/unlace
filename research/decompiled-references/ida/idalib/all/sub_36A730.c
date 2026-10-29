__int64 __fastcall sub_36A730(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 v4; // rdx
  _BOOL8 v5; // rax
  __int64 edm_by_tid; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = haystack;
  v3 = a1[6] == 0;
  v4 = a1[1];
  v8[1] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = (const char *)a1[5];
  v8[0] = 0;
  v5 = v4 != -1
    && (edm_by_tid = get_edm_by_tid(v8, 0), edm_by_tid != -1)
    && (unsigned int)set_tinfo_property4(v8, 22, edm_by_tid, v2, 0, 0) == 0;
  *(_QWORD *)(a2 + 8) = v5;
  clear_tinfo_t(v8);
  return 0;
}
