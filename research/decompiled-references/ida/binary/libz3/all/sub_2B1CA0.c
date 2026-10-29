__int64 __fastcall sub_2B1CA0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 == a3 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a3);
  return 0;
}

