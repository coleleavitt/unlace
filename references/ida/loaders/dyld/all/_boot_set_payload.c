__int64 __fastcall boot_set_payload(__int64 result, __int64 a2, _DWORD *a3)
{
  __int64 v3; // x8
  __int64 v4; // x20
  int v6; // [xsp+1Ch] [xbp-14h] BYREF

  if ( *a3 >= 5u )
    dyld_halt("unsupported payload version: actual = %u, expected <= %u", *a3, 4);
  if ( *a3 >= *(_DWORD *)(a2 + 8) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 < 0 )
      dyld_halt("invalid offset: %lld", *(_QWORD *)(a2 + 16));
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 < 0 )
      dyld_halt("invalid offset: %lld", *(_QWORD *)(a2 + 24));
    v6 = dupfd_optional(*(_DWORD *)(result + v3), "boot root");
    result = xferfd(&v6);
    *(_DWORD *)((char *)a3 + v4) = result;
  }
  return result;
}
