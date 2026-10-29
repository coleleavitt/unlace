__int64 __fastcall sub_4DDB00(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rcx

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL);
  if ( v2 == sub_4DD980 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2 + 16);
  else
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v2)(a1, a2 + 16, *(unsigned int *)(a2 + 24));
}

