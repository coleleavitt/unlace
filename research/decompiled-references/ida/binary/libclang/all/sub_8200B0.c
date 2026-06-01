char __fastcall sub_8200B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  char result; // al
  __int64 v6; // r12
  __int64 v7; // rdx
  size_t v8; // rdx

  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a2;
  if ( v3 <= 7 )
    return v4 <= 7;
  if ( v4 <= 7 )
    return 0;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(v3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6 != (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) )
    return 0;
  v7 = *(unsigned int *)(a1 + 16);
  if ( v7 != *(_DWORD *)(a2 + 16) )
    return 0;
  v8 = 8 * v7;
  result = 1;
  if ( v8 )
    return memcmp(*(const void **)(a1 + 8), *(const void **)(a2 + 8), v8) == 0;
  return result;
}

