__int64 (__fastcall *__fastcall sub_8D86C0(__int64 *a1, __int64 *a2))(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 (__fastcall *result)(__int64, __int64); // rax
  __int64 v5; // rdi

  v2 = *a1;
  v3 = *a2;
  result = **(__int64 (__fastcall ***)(__int64, __int64))v2;
  if ( result != sub_8D8610 )
    return (__int64 (__fastcall *)(__int64, __int64))result(v2, v3);
  v5 = *(_QWORD *)(v2 + 8);
  if ( v5 )
  {
    result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL);
    if ( (char *)result != (char *)sub_8A46A0 )
      return (__int64 (__fastcall *)(__int64, __int64))((__int64 (__fastcall *)(__int64, __int64, __int64))result)(
                                                         v5,
                                                         1,
                                                         v3);
  }
  return result;
}

