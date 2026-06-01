__int64 (__fastcall ***__fastcall sub_1E6720(__int64 a1, __int64 a2, __int64 a3))(_QWORD, __int64, _QWORD)
{
  __int64 (__fastcall ***result)(_QWORD, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a3 + 40);
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))(**result)(result, a2, *(_QWORD *)(a1 + 728));
  return result;
}
