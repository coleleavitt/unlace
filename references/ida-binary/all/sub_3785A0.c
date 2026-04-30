__int64 *__fastcall findpath_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *result; // rax

  result = (__int64 *)get_ea_name(*a2, *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * a6), 0, 0);
  if ( (__int64)result <= 0 )
    return sub_169A50(*a2, (__int64)"0x%a", a3);
  return result;
}
