__int64 __fastcall lineslist_idaplace_t__::vfunc_2(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 56) != 3 )
    return 0;
  if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 128LL))(*(_QWORD *)(a1 + 24)) )
    return 0;
  return *(_DWORD *)(a1 + 32) >> 31;
}
