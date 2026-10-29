__int64 __fastcall sub_8CC680(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (*v3)(); // rax
  const char *v5; // rsi
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a3 )
  {
    ptr = nullptr;
    v7 = 0;
    sub_35A790((char **)&ptr);
    v5 = haystack;
    if ( (_QWORD)v7 )
      v5 = (const char *)ptr;
    set_error_string(0, v5);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
    return 33;
  }
  else
  {
    v3 = *(__int64 (**)())(*a1 + 200LL);
    if ( (char *)v3 != (char *)sub_8CC600
      || (a1 = (_QWORD *)a1[3]) != nullptr && (v3 = *(__int64 (**)())(*a1 + 8LL), v3 != sub_8C83E0) )
    {
      ((void (__fastcall *)(_QWORD *, __int64, __int64))v3)(a1, 3, a2);
    }
    return 0;
  }
}
