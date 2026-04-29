__int64 __fastcall sub_3CF060(__int64 a1, _DWORD *a2, __int64 a3, double a4)
{
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rcx

  if ( (unsigned int)(*(_DWORD *)(a3 + 60) - 1) > 1 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 64LL) - 1;
  if ( v4 < 0 )
    return 0;
  v5 = 0;
  if ( (unsigned __int64)v4 < *(_QWORD *)(a3 + 120) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a3 + 112) + 24LL * v4 + 8);
    if ( v6 )
      v5 = v6 - 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 64) + 64LL) <= v4 )
    return 0;
  a2[2] = 0;
  a2[5] = v4;
  a2[6] = v5;
  sub_3CECB0(a1, (__int64)a2, a3, a4);
  return 1;
}
