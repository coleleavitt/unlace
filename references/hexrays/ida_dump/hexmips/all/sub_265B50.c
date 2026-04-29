__int64 __fastcall sub_265B50(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r12
  __int64 result; // rax
  const void *v7; // r14
  void *v8; // rax
  const void *v9; // r14
  void *v10; // rax

  v3 = a1 + 16;
  *(_QWORD *)(v3 - 16) = *(_QWORD *)a2;
  *(_QWORD *)(v3 - 8) = *(_QWORD *)(a2 + 8);
  if ( v3 != a2 + 16 )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 > 1 )
    {
      v9 = *(const void **)(a2 + 16);
      v10 = *(void **)(a1 + 16);
      if ( *(_QWORD *)(a1 + 32) < v4 )
      {
        v10 = (void *)qvector_reserve(v3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), 1);
        *(_QWORD *)(a1 + 16) = v10;
      }
      *(_QWORD *)(a1 + 24) = v4;
      memmove(v10, v9, v4 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 16) + v4 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  if ( a1 + 40 != a2 + 40 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( v5 > 1 )
    {
      v7 = *(const void **)(a2 + 40);
      v8 = *(void **)(a1 + 40);
      if ( *(_QWORD *)(a1 + 56) < v5 )
      {
        v8 = (void *)qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 48), 1);
        *(_QWORD *)(a1 + 40) = v8;
      }
      *(_QWORD *)(a1 + 48) = v5;
      memmove(v8, v7, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = 0;
    }
  }
  copy_tinfo_t(a1 + 64, a2 + 64);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  result = *(unsigned __int8 *)(a2 + 136);
  *(_BYTE *)(a1 + 136) = result;
  return result;
}
