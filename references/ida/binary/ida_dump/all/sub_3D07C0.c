__int64 __fastcall sub_3D07C0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // rax

  v2 = *(_QWORD *)(a2 + 64);
  if ( !v2 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return 0;
  if ( a1[4] != *(_DWORD *)(v2 + 72) )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 64) + 64LL) - 1;
  if ( v4 != a1[5] )
    return 0;
  v5 = 0;
  if ( v4 >= 0 && (unsigned __int64)v4 < *(_QWORD *)(v2 + 120) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 112) + 24LL * v4 + 8);
    if ( v6 )
      v5 = v6 - 1;
  }
  LOBYTE(v5) = a1[6] >= (int)v5;
  return v5;
}
