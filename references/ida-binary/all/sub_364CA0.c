unsigned __int64 __fastcall memmap_chooser_t__::vfunc_6(
        double a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_mapping(&v7, &v8, &v9, a6, a1) )
  {
    sub_169A50(*a3, (__int64)"%08a", a1);
    sub_169A50(*a3 + 3, (__int64)"%08a", a1);
    sub_169A50(*a3 + 6, (__int64)"%08a", a1);
    sub_169A50(*a3 + 9, (__int64)"%08a", a1);
  }
  return v10 - __readfsqword(0x28u);
}
