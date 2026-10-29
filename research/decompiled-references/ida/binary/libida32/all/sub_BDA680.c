__int64 __fastcall sub_BDA680(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  char v5; // si
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-20h] BYREF
  __m128 v8; // [rsp+10h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 || (v2 = sub_BDA5C0(*(_QWORD *)(a1 + 16))) == 0 )
  {
    result = sub_EC7AA0(v1);
    if ( (_DWORD)result )
      return result;
    return *(unsigned int *)(a1 + 40);
  }
  if ( (*(_QWORD *)a1 & 0x100000LL) == 0 )
    return *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
    return 0;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = _mm_loadh_ps((const double *)&v7);
  v4 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v8.m128_u64[0] = v4;
    v5 = 0;
    while ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v5 = v2;
      v4 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v5 )
      v8.m128_u64[0] = v4;
  }
  return sub_E6C7F0(&v8);
}

