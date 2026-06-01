__int64 __fastcall sub_769A00(__int64 a1, __int64 a2)
{
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_768980((__int64 (__fastcall *)(__int64, __int64))sub_768850, (__int64)&ptr, a1, a2);
  if ( (unsigned __int64)v4 > 1 )
    sub_365330();
  if ( ptr )
  {
    *(_QWORD *)&v4 = 0;
    qfree(ptr);
  }
  return 0;
}

