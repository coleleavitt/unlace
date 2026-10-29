bool __fastcall sub_36FD70(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = qalloc_or_throw(232);
  sub_36F7A0(v2, a2);
  v6[0] = xmmword_8CC810;
  return sub_4AED50(v2, v6, v3, v4) == 0;
}
