unsigned __int64 __fastcall sel_chooser_t__::vfunc_6(
        double a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // [rsp+8h] [rbp-20h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)getn_selector(&v7, &v8, a6) )
  {
    sub_169A50(*a3, (__int64)"%04a", a1);
    sub_169A50(*a3 + 3, (__int64)"%08a", a1);
  }
  return v9 - __readfsqword(0x28u);
}
