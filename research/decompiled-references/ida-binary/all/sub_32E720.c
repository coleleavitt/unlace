unsigned __int64 __fastcall sub_32E720(const char *a1, const char *a2)
{
  const char *v2; // rsi
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  const char *v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  sub_17DEF0((__int64)&v4, a1, a2);
  v2 = v5;
  sub_1C7660();
  if ( v4 )
  {
    v5 = nullptr;
    qfree(v4, v2);
  }
  return v6 - __readfsqword(0x28u);
}
