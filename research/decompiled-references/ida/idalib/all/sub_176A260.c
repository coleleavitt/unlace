__int64 __fastcall sub_176A260(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v3; // rax
  void **v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v3 = sub_176A140(a1, (void **)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL), a3);
  if ( !v3 )
    return 1;
  v4 = v3;
  v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v5 == 1 )
    return 1;
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_191BDF0(*a1, *(unsigned int *)(a2 + 32), v6, v4, *(unsigned int *)(a2 + 36));
  if ( v4 != (void **)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL) )
    return sub_191BDF0(*a1, *(unsigned int *)(a2 + 32), v6, v4, *(unsigned int *)(a2 + 36));
  result = a2;
  if ( *(_QWORD *)(a2 + 16) != v6 )
    return sub_191BDF0(*a1, *(unsigned int *)(a2 + 32), v6, v4, *(unsigned int *)(a2 + 36));
  return result;
}
