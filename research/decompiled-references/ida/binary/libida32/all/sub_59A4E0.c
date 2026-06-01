__int64 __fastcall sub_59A4E0(__int64 a1, unsigned int a2, const char *a3, char a4)
{
  __int64 result; // rax
  int entry; // r14d
  char *v8; // rbx
  unsigned __int8 v9; // [rsp+Fh] [rbp-49h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  if ( !*a3 )
    return 0;
  entry = get_entry(a2);
  if ( entry == -1 )
    return 0;
  ptr = nullptr;
  v11 = 0;
  v8 = (char *)sub_599730((__int64 *)&ptr, a3, a4);
  sub_79B440(*(_QWORD *)(a1 + 1480) + 2352LL, a1, a2, v8, 0, 83);
  mark_builtin_widgets(1, 0, 1);
  result = set_name(entry, v8);
  if ( ptr )
  {
    v9 = result;
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
    return v9;
  }
  return result;
}

