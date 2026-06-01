char __fastcall sub_3B7D60(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // rdx

  v2 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56);
  if ( v2 )
    return v2(a2, *(_QWORD *)(a1 + 64));
  else
    return (a2 & 0x600) == 0;
}
