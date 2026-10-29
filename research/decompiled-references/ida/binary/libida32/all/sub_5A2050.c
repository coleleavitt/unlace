unsigned __int64 __fastcall sub_5A2050(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  const char *v6; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  sub_3B90A0(a1, a4);
  sub_3573A0((char **)&ptr);
  v6 = haystack;
  if ( (_QWORD)v9 )
    v6 = (const char *)ptr;
  qstrncpy(a2, v6, a3);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return v10 - __readfsqword(0x28u);
}

