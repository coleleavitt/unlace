__int64 __fastcall sub_8A8940(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (*v3)(); // rax
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( a3 )
  {
    ptr = nullptr;
    v6 = 0;
    sub_3573A0((char **)&ptr);
    set_error_string();
    if ( ptr )
    {
      *(_QWORD *)&v6 = 0;
      qfree(ptr);
    }
    return 33;
  }
  else
  {
    v3 = *(__int64 (**)())(*a1 + 200LL);
    if ( (char *)v3 != (char *)sub_8A88C0
      || (a1 = (_QWORD *)a1[3]) != nullptr && (v3 = *(__int64 (**)())(*a1 + 8LL), v3 != sub_8A46A0) )
    {
      ((void (__fastcall *)(_QWORD *, __int64, __int64))v3)(a1, 3, a2);
    }
    return 0;
  }
}

