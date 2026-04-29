__int64 __fastcall sub_28C570(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // eax
  __int16 v6; // r14
  int tinfo_size; // eax

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_DWORD *)(v3 + 8);
  if ( *(_DWORD *)(v2 + 8) != 61 )
  {
    if ( v4 != 61 )
      return 0;
    v4 = *(_DWORD *)(v2 + 8);
    v2 = *(_QWORD *)(a2 + 32);
    v3 = *(_QWORD *)(a2 + 24);
  }
  if ( v4 != 48 )
    return 0;
  v6 = sub_281CF0(v2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
  if ( 8 * get_tinfo_size(0, *(_QWORD *)(v3 + 48), 0) < (unsigned __int64)v6 )
    return 0;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 0);
  return sub_28C400(a1, (__int64)"CAST-1", a2, v2, (__int64 *)v3, 8 * tinfo_size == v6);
}
