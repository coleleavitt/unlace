bool __fastcall linelist_tiplace_t__::vfunc_0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 24);
  result = 0;
  if ( *(_DWORD *)(v1 + 12) == *(_DWORD *)(a1 + 40) )
    return *(_QWORD *)(v1 + 16) == *(_QWORD *)(a1 + 48);
  return result;
}
