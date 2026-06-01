__int64 (__fastcall *__fastcall sub_52F700(__int64 a1, __int64 a2))(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *result)(__int64, unsigned int); // rax

  v3 = *(unsigned int *)(a2 + 12);
  result = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 144LL);
  if ( result == sub_52EE70 )
  {
    *(_DWORD *)(a2 + 12) = v3;
  }
  else
  {
    result = (__int64 (__fastcall *)(__int64, unsigned int))result(a1, v3);
    *(_DWORD *)(a2 + 12) = (_DWORD)result;
  }
  return result;
}
