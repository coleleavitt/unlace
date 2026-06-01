__int64 __fastcall sub_7CC1A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a1 == *a3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1);
  else
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 240LL))(*a3);
}

