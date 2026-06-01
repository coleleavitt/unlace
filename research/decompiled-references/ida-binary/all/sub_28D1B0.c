__int64 *__fastcall func_chooser_t__::vfunc_6(__int64 a1, void ***a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *result; // rax

  result = (__int64 *)getn_func(a5);
  if ( result )
    return (__int64 *)sub_28C9C0(a2, result, *(_DWORD *)(a1 + 180));
  return result;
}
