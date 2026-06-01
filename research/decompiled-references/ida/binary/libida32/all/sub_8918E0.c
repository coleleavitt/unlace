__int64 __fastcall sub_8918E0(int a1, void (__fastcall ***a2)(__int64, __int64, void **))
{
  void (__fastcall **v3)(__int64, __int64, void **); // rax
  const char *v5; // rsi
  time_t v6; // rbp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1 == -2 )
  {
    v3 = *a2;
    ptr = nullptr;
    v8 = 0;
    (*v3)((__int64)a2, 1, &ptr);
    v5 = haystack;
    if ( (_QWORD)v8 )
      v5 = (const char *)ptr;
    v6 = parse_borrow_date(0, v5);
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, void **)))(*a2)[9])(a2);
    if ( v6 < sub_8898E0() )
      sub_365330();
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return 1;
}

