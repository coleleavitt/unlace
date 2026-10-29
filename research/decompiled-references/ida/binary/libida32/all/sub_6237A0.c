__int64 __fastcall sub_6237A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  char *file_ext; // rax
  __int64 extlang; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(_QWORD *, const char *, void **); // rax
  const char *v7; // rsi
  unsigned int core_module; // r13d
  _DWORD *v10; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v2 = a1 + 15;
  v13 = __readfsqword(0x28u);
  qstrncpy(a1 + 15, a2, 4096);
  file_ext = (char *)get_file_ext(a1 + 15);
  extlang = find_extlang(file_ext);
  v5 = a1[11];
  if ( v5 )
    --*(_DWORD *)(v5 + 12);
  a1[11] = extlang;
  if ( extlang )
  {
    if ( !*(_QWORD *)(extlang + 48) || !*(_QWORD *)(extlang + 80) || !*(_QWORD *)(extlang + 56) )
      sub_375400();
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    ptr = nullptr;
    v12 = 0;
    if ( (*(_BYTE *)(extlang + 8) & 2) != 0 )
    {
      make_script_ns();
      extlang = a1[11];
    }
    v6 = *(__int64 (__fastcall **)(_QWORD *, const char *, void **))(extlang + 48);
    v7 = haystack;
    if ( a1[13] )
      v7 = (const char *)a1[12];
    core_module = v6(v2, v7, &ptr);
    if ( !(_BYTE)core_module )
    {
      if ( (debug & 0x10) == 0 )
        sub_375400();
      sub_383DA0();
    }
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
    return core_module;
  }
  if ( (debug & 0x10) != 0 )
    sub_383DA0();
  core_module = load_core_module(a1, v2, "LDSC");
  if ( !(_BYTE)core_module )
  {
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    return 0;
  }
  if ( (debug & 0x10) != 0 )
    sub_383DA0();
  v10 = (_DWORD *)a1[10];
  if ( !v10 || *v10 != 900 )
  {
    free_dll(a1);
    return 0;
  }
  return core_module;
}

