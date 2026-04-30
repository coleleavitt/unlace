__int64 *__fastcall srcdbg_place_t__::vfunc_0(__int64 a1, __int64 *a2, double a3)
{
  __int64 *result; // rax
  __int64 *v4; // rdx

  sub_169A50(a2, (__int64)"%u", *(_DWORD *)(a1 + 12) + 1);
  result = *(__int64 **)(*(_QWORD *)a1 + 128LL);
  if ( result == (__int64 *)srcdbg_place_t__::vfunc_16 )
  {
    v4 = *(__int64 **)(a1 + 16);
  }
  else
  {
    result = (__int64 *)((__int64 (__fastcall *)(__int64))result)(a1);
    v4 = result;
  }
  if ( v4 != (__int64 *)-1LL )
    return sub_16FAA0(a2, (__int64)" (%a)", a3);
  return result;
}
