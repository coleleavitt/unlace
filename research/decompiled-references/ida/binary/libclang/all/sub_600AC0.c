__int64 __fastcall sub_600AC0(_QWORD **a1, __int64 a2, __int64 a3)
{
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // r8
  size_t v20; // rdx
  int v21; // eax
  size_t v22; // rdx
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-40h]
  __int64 v25; // [rsp+0h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 40) != *(_QWORD *)(a3 + 40) )
    return 0;
  v7 = *(_QWORD *)(a3 + 48);
  v8 = *(_QWORD *)(a3 + 56);
  v9 = *(_QWORD *)(a2 + 48);
  v10 = *(_QWORD *)(a2 + 56);
  if ( (_DWORD)v7 != (_DWORD)v9
    || ((HIDWORD(v10) ^ HIDWORD(v8) | HIDWORD(v9) ^ HIDWORD(v7) | (unsigned int)v10 ^ (unsigned int)v8) & 0x7FFFFFFF) != 0
    || (v16 = *(_QWORD *)(a3 + 72), v17 = *(_QWORD *)(a2 + 64), (unsigned int)*(_QWORD *)(a3 + 64) != (_DWORD)v17)
    || ((HIDWORD(*(_QWORD *)(a2 + 72)) ^ HIDWORD(v16)
       | (unsigned int)*(_QWORD *)(a2 + 72) ^ (unsigned int)v16
       | HIDWORD(v17) ^ HIDWORD(*(_QWORD *)(a3 + 64)))
      & 0x7FFFFFFF) != 0
    || (v18 = *(_QWORD *)(a3 + 88), v19 = *(_QWORD *)(a2 + 80), (unsigned int)*(_QWORD *)(a3 + 80) != (_DWORD)v19)
    || ((HIDWORD(*(_QWORD *)(a2 + 88)) ^ HIDWORD(v18)
       | (unsigned int)*(_QWORD *)(a2 + 88) ^ (unsigned int)v18
       | HIDWORD(v19) ^ HIDWORD(*(_QWORD *)(a3 + 80)))
      & 0x7FFFFFFF) != 0
    || (v20 = *(unsigned int *)(a2 + 100), v20 != *(_DWORD *)(a3 + 100))
    || *(_DWORD *)(a2 + 100)
    && (v24 = v10, v21 = memcmp(*(const void **)(a2 + 104), *(const void **)(a3 + 104), v20), v10 = v24, v21)
    || (v22 = *(unsigned int *)(a2 + 116), v22 != *(_DWORD *)(a3 + 116))
    || (v25 = v10, *(_DWORD *)(a2 + 116))
    && (v23 = memcmp(*(const void **)(a2 + 120), *(const void **)(a3 + 120), v22), v10 = v25, v23) )
  {
    if ( (unsigned int)v9 | (HIDWORD(v10) | (unsigned int)v10 | HIDWORD(v9)) & 0x7FFFFFFF
      && (unsigned int)v7 | (HIDWORD(v8) | (unsigned int)v8 | HIDWORD(v7)) & 0x7FFFFFFF )
    {
      return 0;
    }
    v11 = *(_QWORD *)(a2 + 64);
    v12 = *(_QWORD *)(a2 + 72);
    if ( (unsigned int)v11 | (HIDWORD(v12) | (unsigned int)v12 | HIDWORD(v11)) & 0x7FFFFFFF )
    {
      if ( (unsigned int)*(_QWORD *)(a3 + 64)
         | (HIDWORD(*(_QWORD *)(a3 + 72)) | (unsigned int)*(_QWORD *)(a3 + 72) | HIDWORD(*(_QWORD *)(a3 + 64)))
         & 0x7FFFFFFF )
      {
        return 0;
      }
    }
    v13 = *(_QWORD *)(a2 + 80);
    v14 = *(_QWORD *)(a2 + 88);
    if ( (unsigned int)v13 | (HIDWORD(v14) | (unsigned int)v14 | HIDWORD(v13)) & 0x7FFFFFFF )
    {
      if ( (unsigned int)*(_QWORD *)(a3 + 80)
         | (HIDWORD(*(_QWORD *)(a3 + 88)) | (unsigned int)*(_QWORD *)(a3 + 88) | HIDWORD(*(_QWORD *)(a3 + 80)))
         & 0x7FFFFFFF )
      {
        return 0;
      }
    }
    if ( !((unsigned int)v9 | (HIDWORD(v10) | (unsigned int)v10 | HIDWORD(v9)) & 0x7FFFFFFF)
      && (unsigned int)v7 | (HIDWORD(v8) | (unsigned int)v8 | HIDWORD(v7)) & 0x7FFFFFFF )
    {
      *(__m128i *)(a2 + 48) = _mm_loadu_si128((const __m128i *)(a3 + 48));
    }
    if ( !((unsigned int)v11 | (HIDWORD(v12) | (unsigned int)v12 | HIDWORD(v11)) & 0x7FFFFFFF)
      && (unsigned int)*(_QWORD *)(a3 + 64)
       | (HIDWORD(*(_QWORD *)(a3 + 72)) | (unsigned int)*(_QWORD *)(a3 + 72) | HIDWORD(*(_QWORD *)(a3 + 64)))
       & 0x7FFFFFFF )
    {
      v15 = *(_DWORD *)(a2 + 100) == 0;
      *(__m128i *)(a2 + 64) = _mm_loadu_si128((const __m128i *)(a3 + 64));
      if ( v15 )
        sub_6009C0(a2, *a1, *(const void **)(a3 + 104), *(unsigned int *)(a3 + 100));
      if ( !*(_DWORD *)(a2 + 116) )
        sub_600A40(a2, *a1, *(const void **)(a3 + 120), *(unsigned int *)(a3 + 116));
      v13 = *(_QWORD *)(a2 + 80);
      v14 = *(_QWORD *)(a2 + 88);
    }
    if ( !((unsigned int)v13 | (HIDWORD(v14) | (unsigned int)v14 | HIDWORD(v13)) & 0x7FFFFFFF)
      && (unsigned int)*(_QWORD *)(a3 + 80)
       | (HIDWORD(*(_QWORD *)(a3 + 88)) | (unsigned int)*(_QWORD *)(a3 + 88) | HIDWORD(*(_QWORD *)(a3 + 80)))
       & 0x7FFFFFFF )
    {
      v15 = *(_DWORD *)(a2 + 100) == 0;
      *(__m128i *)(a2 + 80) = _mm_loadu_si128((const __m128i *)(a3 + 80));
      if ( v15 )
        sub_6009C0(a2, *a1, *(const void **)(a3 + 104), *(unsigned int *)(a3 + 100));
      if ( !*(_DWORD *)(a2 + 116) )
        sub_600A40(a2, *a1, *(const void **)(a3 + 120), *(unsigned int *)(a3 + 116));
    }
  }
  return 1;
}

