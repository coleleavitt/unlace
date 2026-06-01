char __fastcall sub_C106B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  char result; // al
  __int64 v4; // r12
  __int64 v5; // rdx
  size_t v6; // rdx

  v2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return v2 == 0;
  if ( !v2 )
    return 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) != v4 )
    return 0;
  v5 = *(unsigned int *)(a1 + 16);
  if ( v5 != *(_DWORD *)(a2 + 16) )
    return 0;
  v6 = 8 * v5;
  result = 1;
  if ( v6 )
    return memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v6) == 0;
  return result;
}
