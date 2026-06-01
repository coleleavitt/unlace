char __fastcall sub_161B30(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // rcx

  v6 = *(_DWORD *)(a1 + 908);
  v7 = *a2;
  if ( v6 > 919 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v7 + 168))(a2, a3, *(_QWORD *)(a1 + 760));
  if ( v6 > 740 )
    return (*(unsigned int (__fastcall **)(__int64 *, __int64, _QWORD))(v7 + 160))(a2, a3, *(_QWORD *)(a1 + 760)) == 0;
  return (*(unsigned int (__fastcall **)(__int64 *, __int64))(v7 + 40))(a2, a3) == 0;
}

