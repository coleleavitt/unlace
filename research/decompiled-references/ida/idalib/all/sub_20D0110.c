__int64 __fastcall sub_20D0110(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64); // rdx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
  if ( v3 == sub_20CEB60 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  else
    return v3(a2, v2);
}
