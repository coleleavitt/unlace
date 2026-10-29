unsigned __int64 sub_4D7AE0()
{
  char *v0; // rcx
  const char **v1; // rbp
  const char **v2; // r15
  const char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  char *v6; // rdx
  void *v7; // rdi
  __m128i v9; // [rsp+0h] [rbp-88h] BYREF
  void *p_ptr; // [rsp+18h] [rbp-70h]
  __m128i v11; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v9 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B03468), (__m128i)(unsigned __int64)&unk_2CA1FE0);
  if ( qword_2CA2088 )
    qmutex_lock(qword_2CA2088);
  ptr = nullptr;
  p_ptr = &ptr;
  v13 = 0;
  get_ida_subdirs();
  v0 = (char *)ptr;
  v1 = (const char **)((char *)ptr + 24 * v13);
  if ( v1 != ptr )
  {
    v2 = (const char **)ptr;
    do
    {
      if ( (debug & 0x20) != 0 )
        sub_383DA0();
      v3 = haystack;
      v11 = _mm_load_si128(&v9);
      if ( v2[1] )
        v3 = *v2;
      sub_4D7980((__int64)v3, (__int64)&v11, 0);
      v2 += 3;
    }
    while ( v1 != v2 );
    v0 = (char *)ptr;
  }
  if ( v0 )
  {
    v4 = v13;
    if ( (_QWORD)v13 )
    {
      v5 = 0;
      do
      {
        v6 = &v0[24 * v5];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v7);
          v0 = (char *)ptr;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v0);
  }
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
  return v14 - __readfsqword(0x28u);
}

