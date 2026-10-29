unsigned __int64 __fastcall sub_6B9D30(_QWORD *a1, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  const char *v5; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return sub_6B9860(a1, a2, 1, 1u);
  sub_6B9740((__int64 *)&ptr, a2);
  v4 = sub_3BDD60(a1, a3);
  v5 = haystack;
  if ( v8 )
    v5 = (const char *)ptr;
  netnode_rename(v4, v5, 0);
  if ( ptr )
  {
    v8 = 0;
    qfree(ptr);
  }
  return v9 - __readfsqword(0x28u);
}
