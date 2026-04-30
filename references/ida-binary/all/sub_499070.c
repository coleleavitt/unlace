__int64 __fastcall sub_499070(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax

  if ( !a3 )
    return 1;
  v6 = *(_DWORD *)(a1[38] + 2376LL);
  if ( v6 == 2 )
    return sub_48C960((__int64)a1, a2, a3, a4, a5, a6);
  if ( v6 != 1 || a3 != 1 || (int)a5 > 0 )
    return 0;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64, __int64))(*a1 + 488LL))(a1, a2, a1, a4, a6);
}
