unsigned __int64 __fastcall sub_6B9860(_QWORD *a1, const char *a2, char a3, unsigned __int8 a4)
{
  const char *v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_6B9740((__int64 *)&ptr, a2);
  v6 = haystack;
  if ( v11 )
    v6 = (const char *)ptr;
  sub_7BEFF0(&v9, *a1, v6, 0, a4);
  v7 = sub_3BDE50(a1, v9);
  if ( v7 == -1 && a3 )
  {
    if ( !under_debugger )
      interr(2845);
    BUG();
  }
  if ( ptr )
  {
    v11 = 0;
    qfree(ptr);
  }
  return v7;
}
