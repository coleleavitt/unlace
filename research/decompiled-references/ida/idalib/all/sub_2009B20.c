__int64 (__fastcall *__fastcall sub_2009B20(__int64 a1))(__int64, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 136);
  if ( result )
  {
    result = (__int64 (__fastcall *)(__int64, __int64, __int64))result(a1 + 120, a1 + 120, 3);
    *(_OWORD *)(a1 + 136) = 0;
  }
  return result;
}
