__int64 __fastcall sub_7C5BC0(_QWORD *a1, int a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, unsigned int); // rax
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = (unsigned int)(2 * a2);
  v3 = *(__int64 (__fastcall **)(__int64, unsigned int))(*a1 + 536LL);
  if ( v3 != sub_7C55E0 )
    return v3((__int64)a1, v2);
  v4 = a1[20];
  if ( !v4 )
    return *(unsigned int *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v2);
  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 880) + 4LL * (a2 & 0x7FFFFFFF)) >= *(_DWORD *)(v4 + 888) )
    return (*(_DWORD *)(*(_QWORD *)(v4 + 880) + 4LL * (a2 & 0x7FFFFFFF)) & 1) != 0 ? -1 : 1;
  return result;
}

