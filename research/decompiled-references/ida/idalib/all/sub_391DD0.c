__int64 __fastcall sub_391DD0(__int64 a1, __int64 a2, double a3)
{
  const char *v3; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  sub_391D30((__int64)&ptr, a2, "BADSEL");
  v3 = (const char *)ptr;
  if ( !v6 )
    v3 = haystack;
  sub_391720(*(_QWORD *)(a1 + 8), (__int64)"set_selector(%s, 0x%a)", v3, a3);
  if ( ptr )
  {
    v6 = 0;
    qfree(ptr);
  }
  return 0;
}
