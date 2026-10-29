unsigned __int64 __fastcall sub_391FA0(__int64 *a1, __int64 a2, const char *a3, double a4, double a5)
{
  __int64 v5; // rsi
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 8);
  v9 = __readfsqword(0x28u);
  sub_391D30((__int64)ptr, v5, "BADADDR");
  sub_391720(*a1, (__int64)"append_func_tail(0x%a, 0x%a, %s)", a4, a5, a3);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  a1[1] += 22;
  return v9 - __readfsqword(0x28u);
}
