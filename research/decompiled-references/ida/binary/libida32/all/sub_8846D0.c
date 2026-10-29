__int64 __fastcall sub_8846D0(__int64 a1, __int64 *a2)
{
  unsigned int valid; // ebp
  size_t v3; // rbx
  void *v4; // rax
  const void *v6; // r13
  const char *v8; // rdi
  __int64 v9; // rsi
  __m128i si128; // xmm0
  __int64 v11; // rax
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  valid = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  v4 = nullptr;
  if ( v3 )
  {
    v6 = *(const void **)a1;
    dest = nullptr;
    v13 = 0;
    if ( v3 != -1 )
    {
      v4 = (void *)qvector_reserve(&dest, 0, v3 + 1, 1);
      dest = v4;
    }
    *(_QWORD *)&v13 = v3 + 1;
    *((_BYTE *)v4 + v3) = 0;
    memmove(dest, v6, v3);
    v8 = haystack;
    if ( (_QWORD)v13 )
      v8 = (const char *)dest;
    valid = is_valid_utf8(v8);
    if ( !(_BYTE)valid )
    {
      v9 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x1B )
      {
        v11 = qvector_reserve(a2, v9, 28, 1);
        *a2 = v11;
        v9 = v11;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384930);
      a2[1] = 28;
      *(__m128i *)v9 = si128;
      *(__m128i *)(v9 + 11) = _mm_load_si128((const __m128i *)&xmmword_2384940);
      *(_BYTE *)(*a2 + 27) = 0;
    }
    if ( dest )
    {
      *(_QWORD *)&v13 = 0;
      qfree(dest);
    }
  }
  return valid;
}

