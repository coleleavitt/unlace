__int64 *__fastcall st_chooser_t__::vfunc_6(double a1, __int64 a2, __int64 **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rax
  unsigned __int64 *v12; // rbx
  int *v13; // rax
  const char *v14; // rdi
  const char *v15; // rax
  __int64 *v16; // r14
  const char *v17; // r12
  size_t v18; // rax
  size_t v19; // r13
  __int16 flags; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 *v25; // r12
  __int64 nlist_idx; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  const char *v31; // rdx
  unsigned __int64 v32; // rcx
  const char *v33; // rdx
  __int64 v34; // rcx
  void *v35; // rdi
  size_t v36; // r15
  __int64 v37; // rax
  __int64 v38; // r13
  unsigned __int64 nlist_ea; // rax
  const char *nlist_name; // rax
  const char *v41; // r12
  size_t v42; // r13
  const char *v43; // rsi
  const char *v44; // rdx
  const char *v45; // rdx
  void *v46; // [rsp+10h] [rbp-58h] BYREF
  __int128 v47; // [rsp+18h] [rbp-50h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v6 = *a3;
  v48 = __readfsqword(0x28u);
  if ( dword_8BA580 == -1 || dword_8CC5F0 >= 0 )
  {
    v7 = v6[3];
    if ( (unsigned __int64)v6[5] <= 0x19 )
    {
      v10 = qvector_reserve(v6 + 3, v7, 26, 1);
      v6[3] = v10;
      v7 = v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DD3E0);
    v6[4] = 26;
    *(__m128i *)v7 = si128;
    *(__m128i *)(v7 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DD3F0);
    *(_BYTE *)(v6[3] + 25) = 0;
    return (__int64 *)(v48 - __readfsqword(0x28u));
  }
  v12 = (unsigned __int64 *)(32 * a6 + *(_QWORD *)(qword_8CC430 + ((__int64)dword_8BA580 << 8) + 88));
  sub_169A50(v6, (__int64)"%08a", a1);
  v13 = sub_235C00(*v12);
  if ( v13 )
  {
    v14 = &s1;
    if ( *((_QWORD *)v13 + 1) )
      v14 = *(const char **)v13;
    v15 = (const char *)qbasename(v14);
    v16 = *a3;
    v17 = v15;
    if ( v15 && (v18 = strlen(v15), (v19 = v18) != 0) )
    {
      v35 = (void *)v16[3];
      v36 = v18 + 1;
      if ( v16[5] < v18 + 1 )
      {
        v37 = qvector_reserve(v16 + 3, v16[3], v36, 1);
        v16[3] = v37;
        v35 = (void *)v37;
      }
      v16[4] = v36;
      memmove(v35, v17, v19);
      *(_BYTE *)(v16[3] + v19) = 0;
    }
    else
    {
      v16[4] = 0;
    }
  }
  flags = get_flags_ex(*v12, 4);
  v21 = getseg(v12[1]);
  v25 = (unsigned __int64 *)v21;
  if ( v21 )
  {
    if ( (*(_WORD *)(v21 + 44) & 0x18) != 8 && (flags & 0x4000) == 0 )
    {
      nlist_idx = get_nlist_idx(*v12, 4, v22, v23, v24);
      if ( nlist_idx )
      {
        v38 = nlist_idx - 1;
        nlist_ea = get_nlist_ea(nlist_idx - 1, 4, v27, v28, v29);
        if ( nlist_ea >= *v25 && nlist_ea < v25[1] )
        {
          nlist_name = (const char *)get_nlist_name(v38);
          v46 = nullptr;
          v41 = nlist_name;
          v47 = 0;
          if ( !nlist_name
            || (v42 = strlen(nlist_name),
                v46 = (void *)qvector_reserve(&v46, 0, v42 + 1, 1),
                *(_QWORD *)&v47 = v42 + 1,
                memmove(v46, v41, v42),
                *((_BYTE *)v46 + v42) = 0,
                v43 = (const char *)v46,
                !(_QWORD)v47) )
          {
            v43 = &s1;
          }
          demangle_name(&v46, v43, 0, 2);
          v44 = &s1;
          if ( (_QWORD)v47 )
            v44 = (const char *)v46;
          sub_169A50(*a3 + 6, (__int64)"%s+0x%a", v44, 0.0);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46, "%s+0x%a", v45, 0.0);
          }
          return (__int64 *)(v48 - __readfsqword(0x28u));
        }
      }
    }
  }
  if ( *((_BYTE *)v12 + 24) && (unsigned __int8)print_type(*a3 + 6, v12[1], 16)
    || get_nice_colored_name(*a3 + 6, *v12, 519) )
  {
    return (__int64 *)(v48 - __readfsqword(0x28u));
  }
  if ( v25 )
  {
    v46 = nullptr;
    v47 = 0;
    get_segm_name(&v46, v25, 0);
    v30 = v12[1];
    v31 = &s1;
    if ( !*((_BYTE *)v12 + 24) )
      v30 = *v12;
    v32 = v30 - *v25;
    if ( (_QWORD)v47 )
      v31 = (const char *)v46;
    sub_169A50(*a3 + 6, (__int64)"%s+0x%llx", v31, v32);
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46, "%s+0x%llx", v33, v34);
    }
    return (__int64 *)(v48 - __readfsqword(0x28u));
  }
  return sub_169A50(*a3 + 6, (__int64)"%a", a1);
}
