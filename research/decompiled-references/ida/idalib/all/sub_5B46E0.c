__int64 __fastcall sub_5B46E0(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 result; // rax
  __int64 entry; // rax
  int v8; // r14d
  char *v9; // rbx
  unsigned __int8 v10; // [rsp+Fh] [rbp-49h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  if ( !*a3 )
    return 0;
  entry = get_entry(a2);
  v8 = entry;
  if ( entry == -1 )
    return 0;
  ptr = nullptr;
  v12 = 0;
  v9 = (char *)sub_5B38F0((__int64 *)&ptr, a3, a4);
  sub_7BE7C0(*(_QWORD *)(a1 + 1672) + 2456LL, a1, a2, v9, 0, 83);
  mark_builtin_widgets(1, 0, 1);
  result = set_name(v8, v9);
  if ( ptr )
  {
    v10 = result;
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
    return v10;
  }
  return result;
}
