unsigned __int64 __fastcall sub_7094F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  const char *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(void **, char *); // rdx
  void *v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1696);
  if ( !*(_BYTE *)(v1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 1696);
    v8 = nullptr;
    v9 = 0;
    sub_708B00(v3, (__int64 *)&v8);
    v4 = *(_QWORD *)(v1 + 16);
    v5 = haystack;
    if ( (_QWORD)v9 )
      v5 = (const char *)v8;
    select_parser_by_name(v5);
    if ( *(_QWORD *)(v1 + 16) == v4 )
    {
      v6 = *(_QWORD *)(v1 + 24);
      ptr = nullptr;
      v11 = 0;
      v7 = *(unsigned __int8 (__fastcall **)(void **, char *))(*(_QWORD *)(v6 + 8LL * *(_QWORD *)(v1 + 16)) + 64LL);
      if ( v7 && v7(&ptr, "VERSION") && (unsigned __int64)v11 > 1 )
        sub_365330();
      sub_365330();
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
  }
  return v12 - __readfsqword(0x28u);
}

