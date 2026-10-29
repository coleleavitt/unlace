__int64 __fastcall sub_56AEF0(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v6; // eax

  v6 = a1[2];
  if ( *(_DWORD *)(a2 + 32) != v6 )
    return 0;
  if ( *(_DWORD *)(a3 + 32) != v6 || sub_56AD10(a2 + 16, a3 + 16, a4, a5, a6) )
    return 0;
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 96LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           0,
           0);
}

