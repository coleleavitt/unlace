__int64 __fastcall sub_3CAD80(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx

  if ( (unsigned int)(*(_DWORD *)(a3 + 60) - 1) > 1 )
    return 0;
  v3 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 64LL) - 1;
  if ( v3 < 0 )
    return 0;
  v4 = 0;
  if ( (unsigned __int64)v3 < *(_QWORD *)(a3 + 120) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 112) + 24LL * v3 + 8);
    if ( v5 )
      v4 = v5 - 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 64) + 64LL) <= v3 )
    return 0;
  a2[2] = 0;
  a2[5] = v3;
  a2[6] = v4;
  sub_3CA9E0(a1, (__int64)a2, a3);
  return 1;
}
