__int64 __fastcall sub_5EA000(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 16);
  v3 = *v2;
  v4 = *v2 + 48 * v2[1];
  if ( v4 == *v2 )
    return 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 8) && !strcmp(*(const char **)v3, "format") )
    {
      v10 = _mm_unpacklo_epi64(
              (__m128i)*(unsigned __int64 *)(v3 + 24),
              (__m128i)(unsigned __int64)(*(_QWORD *)(v3 + 24) + *(_QWORD *)(v3 + 32)));
      unpack_dd(&v10);
      v5 = unpack_dd(&v10);
      v6 = unpack_dd(&v10);
      if ( v5 <= 0 )
        break;
      v7 = *(_DWORD *)(a2 + 64);
      if ( v7 < v5 )
        break;
      if ( v6 )
      {
        v8 = *(_DWORD *)(a2 + 68) & 0xFFFFFFF0;
        if ( v8 != 64 && v8 != 208 )
          break;
        if ( v7 + 1 != v6 )
          break;
      }
    }
    v3 += 48;
    if ( v4 == v3 )
      return 0;
  }
  return set_qerrno(1120);
}
