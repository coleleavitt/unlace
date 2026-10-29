__int64 __fastcall sub_7E4330(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, a3 ^ 1u);
  if ( !v3 )
    return 0;
  v4 = v3 + 16LL * *(unsigned int *)(v3 - 4);
  if ( v3 == v4 )
    return 0;
  while ( *(_QWORD *)v3 != a1 - 8 || *(_DWORD *)(v3 + 8) != 2 )
  {
    v3 += 16;
    if ( v4 == v3 )
      return 0;
  }
  return 1;
}

