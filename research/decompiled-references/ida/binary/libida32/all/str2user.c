__int64 __fastcall str2user(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v3; // rbx
  const char *v6; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v3 = a1;
  if ( a3 )
  {
    ptr = nullptr;
    v8 = 0;
    sub_892B20((__int64 *)&ptr, a2, -1, a3);
    v6 = haystack;
    if ( (_QWORD)v8 )
      v6 = (const char *)ptr;
    v3 = qstrncpy(a1, v6, a3);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return v3;
}

