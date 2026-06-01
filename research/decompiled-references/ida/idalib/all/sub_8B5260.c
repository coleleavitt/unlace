__int64 __fastcall sub_8B5260(int a1, void (__fastcall ***a2)(__int64, __int64, void **))
{
  void (__fastcall **v3)(__int64, __int64, void **); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  char *v9; // rsi
  time_t v10; // rbp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a1 == -2 )
  {
    v3 = *a2;
    ptr = nullptr;
    v12 = 0;
    (*v3)((__int64)a2, 1, &ptr);
    v9 = (char *)haystack;
    if ( (_QWORD)v12 )
      v9 = (char *)ptr;
    v10 = parse_borrow_date(nullptr, v9, v5, v6, v7, v8);
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, void **)))(*a2)[9])(a2);
    if ( v10 < sub_8AD250() )
      sub_368890();
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
  }
  return 1;
}
