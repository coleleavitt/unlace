__int64 __fastcall sub_47EB60(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  if ( v4 < v3 )
    return 1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 40LL))(
           *a1,
           a2 + 64,
           *(unsigned int *)(a2 + 148),
           a3 + 64,
           *(unsigned int *)(a3 + 148));
}

