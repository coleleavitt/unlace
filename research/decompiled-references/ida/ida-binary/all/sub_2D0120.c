bool __fastcall lineslist_udt_tiplace_t__::vfunc_0(__int64 a1)
{
  _DWORD *v2; // rdi
  bool result; // al

  v2 = *(_DWORD **)(a1 + 24);
  result = 0;
  if ( v2[3] == *(_DWORD *)(a1 + 40) )
    return *(_QWORD *)(a1 + 48) == (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v2 + 176LL))(
                                     v2,
                                     *(_QWORD *)(a1 + 8),
                                     0,
                                     0);
  return result;
}
