__int64 __fastcall sub_4D64E0(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  __int64 result; // rax
  const char *v6; // r12
  size_t v7; // rax
  size_t v8; // r13
  __int64 v9; // rax
  void *v10; // r12
  __int64 *i; // r14
  size_t v12; // r14
  void *v13; // [rsp+0h] [rbp-70h] BYREF
  __int128 v14; // [rsp+8h] [rbp-68h]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v16; // [rsp+20h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  result = *(_QWORD *)(a2 + 48);
  if ( result || !a3 )
    return result;
  v6 = *(const char **)(a2 + 8);
  v13 = nullptr;
  ptr = nullptr;
  v14 = 0;
  v16 = 0;
  if ( v6 )
  {
    v7 = strlen(v6);
    v8 = v7;
    if ( v7 )
    {
      v12 = v7 + 1;
      v13 = (void *)qvector_reserve(&v13, 0, v7 + 1, 1);
      *(_QWORD *)&v14 = v12;
      memmove(v13, v6, v8);
      *((_BYTE *)v13 + v8) = 0;
    }
  }
  plugin_name_from_path_or_name(&ptr, v6);
  v9 = sub_4D4980(a2, a1, (__int64)&v13, nullptr, 0, 0, 0.0, a5, 0);
  v10 = ptr;
  if ( !v9 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    return 0;
  }
  for ( i = *(__int64 **)(a1 + 8); i; i = (__int64 *)*i )
  {
    if ( (__int64 *)a2 != i && !strcasecmp((const char *)i[1], *(const char **)(a2 + 8)) )
    {
      i[6] = *(_QWORD *)(a2 + 48);
      *(__m128i *)(i + 7) = _mm_loadu_si128((const __m128i *)(a2 + 56));
      *(__m128i *)(i + 9) = _mm_loadu_si128((const __m128i *)(a2 + 72));
      *(__m128i *)(i + 11) = _mm_loadu_si128((const __m128i *)(a2 + 88));
      *(__m128i *)(i + 13) = _mm_loadu_si128((const __m128i *)(a2 + 104));
      *(__m128i *)(i + 15) = _mm_loadu_si128((const __m128i *)(a2 + 120));
      i[17] = *(_QWORD *)(a2 + 136);
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v10);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return *(_QWORD *)(a2 + 48);
}

