__int64 __fastcall sub_3AB1C0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char tinfo_property; // dl
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 result; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  const void *v20; // r14
  void *v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  const void *v24; // r14
  void *v25; // rax
  char v26; // [rsp+0h] [rbp-28h]

  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 8), 2);
  result = -1;
  v18 = tinfo_property & 0x2F;
  if ( (_BYTE)v18 == 13 )
  {
    result = *(_QWORD *)(a2 + 32);
    if ( result != -1 )
    {
      if ( (*(_QWORD *)(a2 + 120) & 0xFLL) == 0xA || (get_tinfo_property(*(_QWORD *)(a2 + 112), 2) & 0x3F) == 0xD )
      {
        sub_169630(
          (int)"ICON ERROR\nAUTOHIDE NONE\nThe strings and structures cannot use this type",
          2,
          v18,
          v12,
          v13,
          v14,
          a3,
          a4,
          a5,
          a6,
          v15,
          v16,
          a9,
          a10,
          v26);
        return -2;
      }
      if ( !a1 )
        return *(_QWORD *)(a2 + 32);
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 56);
      if ( a1 + 16 != a2 + 64 )
      {
        v19 = *(_QWORD *)(a2 + 72);
        if ( v19 < 2 )
        {
          v22 = a1 + 40;
          *(_QWORD *)(a1 + 24) = 0;
          if ( a1 + 40 != a2 + 88 )
          {
LABEL_12:
            v23 = *(_QWORD *)(a2 + 96);
            if ( v23 < 2 )
            {
              *(_QWORD *)(a1 + 48) = 0;
            }
            else
            {
              v24 = *(const void **)(a2 + 88);
              v25 = *(void **)(a1 + 40);
              if ( *(_QWORD *)(a1 + 56) < v23 )
              {
                v25 = (void *)qvector_reserve(v22, *(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 96), 1);
                *(_QWORD *)(a1 + 40) = v25;
              }
              *(_QWORD *)(a1 + 48) = v23;
              memmove(v25, v24, v23 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + v23 - 1) = 0;
            }
          }
LABEL_16:
          copy_tinfo_t(a1 + 64, a2 + 112, v18);
          *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 120));
          *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 136));
          *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 152));
          *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 168);
          *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 176);
          *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 180);
          *(_BYTE *)(a1 + 136) = *(_BYTE *)(a2 + 184);
          return *(_QWORD *)(a2 + 32);
        }
        v20 = *(const void **)(a2 + 64);
        v21 = *(void **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < v19 )
        {
          v21 = (void *)qvector_reserve(a1 + 16, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 72), 1);
          *(_QWORD *)(a1 + 16) = v21;
        }
        *(_QWORD *)(a1 + 24) = v19;
        memmove(v21, v20, v19 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v19 - 1) = 0;
      }
      v22 = a1 + 40;
      if ( a1 + 40 != a2 + 88 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  return result;
}
