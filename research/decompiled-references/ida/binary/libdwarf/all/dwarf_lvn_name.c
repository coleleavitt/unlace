__int64 __fastcall dwarf_lvn_name(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  if ( !*(_DWORD *)(v3 + 40) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(v3 + 64);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = *(_QWORD *)(v3 + 56);
  return 0;
}

