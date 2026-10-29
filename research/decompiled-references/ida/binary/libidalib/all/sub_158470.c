__int64 (__fastcall *__fastcall sub_158470(__int64 a1, __int64 a2))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 392);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, *(_QWORD *)(a1 + 432));
  return result;
}

