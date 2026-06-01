__int64 __fastcall sub_67CDB0(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi

  result = a1[3];
  if ( *(_QWORD *)(result + 8) )
  {
    v2 = sub_62FF70(a1[5], 0);
    result = *(_QWORD *)(a1[3] + 8LL);
    if ( result )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD))result)(a1[2], v2, 0);
  }
  return result;
}

