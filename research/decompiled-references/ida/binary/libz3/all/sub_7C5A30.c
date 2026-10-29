bool __fastcall sub_7C5A30(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(__int64, unsigned int); // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  bool result; // al

  v2 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)(a1 - 80) + 536LL);
  if ( v2 != sub_7C55E0 )
    return ((unsigned int (__fastcall *)(__int64))v2)(a1 - 80) == -1;
  v3 = *(_QWORD *)(a1 + 80);
  if ( !v3 )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 - 56) + 3288LL) + 4LL * a2) == -1;
  v4 = *(_DWORD *)(*(_QWORD *)(v3 + 880) + 4LL * (a2 >> 1));
  result = 0;
  if ( v4 >= *(_DWORD *)(v3 + 888) )
    return (a2 ^ v4) & 1;
  return result;
}

