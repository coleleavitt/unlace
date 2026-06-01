char *__fastcall sub_7A3600(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 i; // rdx
  char *result; // rax

  v5 = 16 * a4;
  v6 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(v6 + 104) = *(_DWORD *)(v6 + 104) & 0x1F | (32 * (a4 & 0x7FFF));
  v7 = a2[274];
  a2[284] += 16 * a4;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = 16 * a4 + v8;
  if ( a2[275] >= v9 && v7 )
    a2[274] = v9;
  else
    v8 = sub_7A1DE0((__int64)(a2 + 274), 16 * a4, 3);
  sub_7A3480(v6, (__int64)a2, v8);
  if ( v5 )
  {
    for ( i = 0; i != v5; i += 16 )
    {
      if ( (*(_BYTE *)(a3 + i) & 1) == 0 )
        *(_WORD *)(v6 + 106) += 16;
      *(__m128i *)(v8 + i) = _mm_loadu_si128((const __m128i *)(a3 + i));
    }
  }
  result = *(char **)(a1 + 128);
  if ( !result
    || (result[10] & 0x20) == 0
    || (result[104] & 0x18) != 0
    || (*((_DWORD *)result + 26) & 0xFFFE0) != 0
    || (result = *(char **)(sub_798D40(a1) + 2160), result[1] >= 0) )
  {
    *(_BYTE *)(v6 + 4) |= 0x10u;
  }
  return result;
}

