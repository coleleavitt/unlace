unsigned __int64 __fastcall vcred_reg_set_site_0(__int64 a1, __int64 a2)
{
  void *v3; // rbp
  const char *v4; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 48) > 1u && *(_QWORD *)(a1 + 16) > 1u )
  {
    ptr = nullptr;
    v7 = 0;
    sub_7A6620(a1, (__int64)&ptr);
    v3 = ptr;
    v4 = haystack;
    if ( (_QWORD)v7 )
      v4 = (const char *)ptr;
    if ( a2 )
      reg_str_set();
    else
      reg_delete("DefaultSite", v4);
    if ( v3 )
      qfree(v3);
  }
  return v8 - __readfsqword(0x28u);
}

