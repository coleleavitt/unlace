__int64 __fastcall sub_5CE210(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 16);
  v3 = *v2;
  v4 = *v2 + 48 * v2[1];
  if ( v4 == *v2 )
    return 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 8) && !strcmp(*(const char **)v3, "format") )
    {
      v13 = _mm_unpacklo_epi64(
              (__m128i)*(unsigned __int64 *)(v3 + 24),
              (__m128i)(unsigned __int64)(*(_QWORD *)(v3 + 24) + *(_QWORD *)(v3 + 32)));
      unpack_dd(&v13);
      v6 = unpack_dd(&v13);
      v7 = v13.m128i_i64[1];
      v8 = v6;
      v9 = unpack_dd(&v13);
      if ( v8 <= 0 )
        break;
      v10 = *(_DWORD *)(a2 + 64);
      if ( v10 < v8 )
        break;
      if ( v9 )
      {
        v11 = *(_DWORD *)(a2 + 68) & 0xFFFFFFF0;
        if ( v11 != 64 && v11 != 208 )
          break;
        if ( v10 + 1 != v9 )
          break;
      }
    }
    v3 += 48;
    if ( v4 == v3 )
      return 0;
  }
  return set_qerrno(1120, v7);
}

