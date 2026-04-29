__int64 __fastcall boot_set_root(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // x8
  _DWORD *v5; // x20
  __int64 result; // x0

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 < 0 )
    dyld_halt("invalid offset: %lld", *(_QWORD *)(a2 + 16));
  v5 = (_DWORD *)(a1 + v3);
  closefd_optional((int *)(a1 + v3), "old root");
  result = xferfd(a3);
  *v5 = result;
  return result;
}
