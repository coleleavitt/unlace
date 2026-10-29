__int64 __fastcall sub_56BA0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        const char *a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int *a11)
{
  size_t v14; // rdx
  __int64 result; // rax
  int v16; // r15d
  int v17; // edx
  __int64 v18; // rax
  bool v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rax

  v14 = strlen(a2);
  result = 0xFFFFFFFFLL;
  if ( v14 <= 0x1D )
  {
    v16 = strncmp(a2, ".zdebug_", 8u);
    if ( !v16 && a2[8] && a5[7] && !strcmp(a2 + 8, a5 + 7) )
    {
      if ( *(_BYTE *)(a7 + 72) )
      {
LABEL_13:
        *a11 = a8;
        return 1;
      }
    }
    else
    {
      v17 = strcmp(a2, a5);
      result = 0xFFFFFFFFLL;
      if ( v17 )
        return result;
      if ( *(_BYTE *)(a7 + 72) )
        goto LABEL_13;
    }
    v18 = *(unsigned int *)(a1 + 10768);
    if ( (unsigned int)v18 <= 0x31 )
    {
      v19 = v16 == 0;
      v20 = 48 * v18;
      v21 = a1 + 48 * v18;
      *(_BYTE *)(a7 + 72) = 1;
      *(_QWORD *)(v21 + 8384) = a7;
      *(_QWORD *)(v21 + 8368) = a2;
      *(_QWORD *)(v21 + 8376) = a4;
      *(_DWORD *)(v21 + 8392) = a6;
      *(_QWORD *)(a7 + 184) = a2;
      *(_BYTE *)(a7 + 104) = v19;
      *(_QWORD *)(a7 + 192) = a3;
      *(_QWORD *)(a7 + 200) = a4;
      *(_QWORD *)(a7 + 56) = 0;
      *(_BYTE *)(a7 + 107) = 0;
      *(_OWORD *)(a7 + 40) = 0;
      *(_DWORD *)(a7 + 64) = dwarf_set_load_preference(0);
      *(__m128i *)(a1 + v20 + 8396) = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(_mm_cvtsi32_si128(a8), _mm_cvtsi32_si128(a9)),
                                        _mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), _mm_cvtsi32_si128(v19)));
      ++*(_DWORD *)(a1 + 10768);
      return 0;
    }
    *a11 = 245;
    return 1;
  }
  return result;
}

