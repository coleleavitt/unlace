void __fastcall __noreturn sub_64ED20(__int64 a1, _QWORD *a2, char a3)
{
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  ptr = nullptr;
  v4 = 0;
  sub_64EC60((__int64 *)&ptr, a1, a2, a3);
  sub_365330();
}

