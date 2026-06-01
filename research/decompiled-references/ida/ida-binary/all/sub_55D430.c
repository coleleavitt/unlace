__int64 __fastcall sub_55D430(__int64 a1, int a2)
{
  unsigned int v2; // esi
  _QWORD *v4; // rax
  __time_t v5; // rax
  unsigned int (__fastcall *v6)(__int64); // rax
  struct timespec v7; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 1436) + a2;
  if ( v2 > 0x63 )
  {
    *(_DWORD *)(a1 + 1436) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1436) = v2;
    if ( v2 )
      return 1;
  }
  v4 = *(_QWORD **)(a1 + 1440);
  if ( v4 && *v4 )
    return 0;
  if ( *(_OWORD *)(a1 + 1408) != 0 )
  {
    clock_gettime(1, &v7);
    v5 = *(_QWORD *)(a1 + 1408);
    if ( v7.tv_sec > v5 || v7.tv_nsec > *(_QWORD *)(a1 + 1416) && v7.tv_sec == v5 )
      return 0;
  }
  v6 = *(unsigned int (__fastcall **)(__int64))(a1 + 1480);
  if ( !v6 )
    return 1;
  return v6(a1 + 1488) ^ 1;
}
