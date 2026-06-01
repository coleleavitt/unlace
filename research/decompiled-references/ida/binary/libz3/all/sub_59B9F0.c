__int64 __fastcall sub_59B9F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) == 4 )
  {
    a2 = *(_QWORD *)(a2 + 64);
    if ( v3 != 4 )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  }
  else if ( v3 != 4 )
  {
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
           *(_QWORD *)(a1 + 8),
           a2,
           *(_QWORD *)(a3 + 64));
}

