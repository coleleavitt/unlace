__int64 *__fastcall sub_14A230(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbx
  const char *v11; // rax
  __int64 *v12; // r14
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  __int16 flags; // r13
  __int64 v17; // rax
  unsigned int *v18; // r12
  void *v19; // rdi
  size_t v20; // r15
  __int64 v21; // rax
  unsigned int nlist_ea; // eax
  const char *nlist_name; // rax
  const char *v24; // r12
  size_t v25; // r13
  void *v26; // [rsp+10h] [rbp-58h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v5 = *a2;
  v27 = __readfsqword(0x28u);
  if ( dword_244108 == -1 || dword_2515A4 >= 0 )
  {
    v6 = v5[3];
    if ( (unsigned __int64)v5[5] <= 0x19 )
    {
      v9 = qvector_reserve();
      v5[3] = v9;
      v6 = v9;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D27D0);
    v5[4] = 26;
    *(__m128i *)v6 = si128;
    *(__m128i *)(v6 + 9) = _mm_load_si128((const __m128i *)&xmmword_1D27E0);
    *(_BYTE *)(v5[3] + 25) = 0;
    return (__int64 *)(v27 - __readfsqword(0x28u));
  }
  v10 = 16 * a5 + *(_QWORD *)(qword_251410 + 232LL * dword_244108 + 88);
  sub_94360(v5);
  if ( sub_C5C80(*(_DWORD *)v10) )
  {
    v11 = (const char *)qbasename();
    v12 = *a2;
    v13 = v11;
    if ( v11 && (v14 = strlen(v11), (v15 = v14) != 0) )
    {
      v19 = (void *)v12[3];
      v20 = v14 + 1;
      if ( v12[5] < v14 + 1 )
      {
        v21 = qvector_reserve();
        v12[3] = v21;
        v19 = (void *)v21;
      }
      v12[4] = v20;
      memmove(v19, v13, v15);
      *(_BYTE *)(v12[3] + v15) = 0;
    }
    else
    {
      v12[4] = 0;
    }
  }
  flags = get_flags_ex();
  v17 = getseg();
  v18 = (unsigned int *)v17;
  if ( v17 )
  {
    if ( (*(_WORD *)(v17 + 24) & 0x18) != 8 && (flags & 0x4000) == 0 )
    {
      if ( get_nlist_idx() )
      {
        nlist_ea = get_nlist_ea();
        if ( nlist_ea >= *v18 && nlist_ea < v18[1] )
        {
          nlist_name = (const char *)get_nlist_name();
          v26 = nullptr;
          v24 = nlist_name;
          if ( nlist_name )
          {
            v25 = strlen(nlist_name);
            v26 = (void *)qvector_reserve();
            memmove(v26, v24, v25);
            *((_BYTE *)v26 + v25) = 0;
          }
          demangle_name();
          sub_94360(*a2 + 6);
          if ( v26 )
            qfree();
          return (__int64 *)(v27 - __readfsqword(0x28u));
        }
      }
    }
  }
  if ( *(_BYTE *)(v10 + 12) && (unsigned __int8)print_type() || get_nice_colored_name() )
    return (__int64 *)(v27 - __readfsqword(0x28u));
  if ( v18 )
  {
    get_segm_name();
    sub_94360(*a2 + 6);
    return (__int64 *)(v27 - __readfsqword(0x28u));
  }
  return sub_94360(*a2 + 6);
}

