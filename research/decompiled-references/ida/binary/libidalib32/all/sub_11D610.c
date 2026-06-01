__int64 __fastcall sub_11D610(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rsi
  __m128i si128; // xmm0
  unsigned int v15; // r12d
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // eax
  int v28; // edx
  __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // rax
  size_t v35; // r15
  size_t v36; // rbx
  __int64 v37; // rax
  _QWORD **v38; // rdi
  _QWORD **v39; // rbx
  __int64 v40; // rbp
  size_t v41; // rax
  size_t v42; // rbx
  __int64 v43; // rax
  _QWORD **v44; // rdi
  _QWORD **v45; // rbx
  __int64 v46; // rbp
  const char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  size_t v54; // r12
  void *v55; // rdi
  __int64 v56; // rax
  char v57; // [rsp+0h] [rbp-1098h]
  char *s; // [rsp+28h] [rbp-1070h]
  void *v62; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v63; // [rsp+38h] [rbp-1060h]
  char src[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v65; // [rsp+1058h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_database_flag() )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v13 = *a4;
        if ( (unsigned __int64)a4[2] <= 0x4F )
        {
          v32 = qvector_reserve();
          *a4 = v32;
          v13 = v32;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D24F0);
        a4[1] = 80;
        *(__m128i *)v13 = si128;
        *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2500);
        *(__m128i *)(v13 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D2510);
        *(__m128i *)(v13 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D2520);
        *(__m128i *)(v13 + 63) = _mm_load_si128((const __m128i *)&xmmword_1D2530);
        *(_BYTE *)(*a4 + 79) = 0;
      }
    }
    else
    {
      sub_92120(
        (__int64)"ICON ERROR\n%s",
        "Cannot take a snapshot of a temporary database.\nPlease save the database first.");
    }
    return (unsigned int)-1;
  }
  v17 = qalloc_or_throw();
  *(_QWORD *)v17 = 0;
  v18 = v17;
  *(_QWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 136) = 0;
  *(_QWORD *)(v17 + 4240) = 0;
  *(_OWORD *)(v17 + 4248) = 0;
  if ( a2 || *(_BYTE *)(a1 + 4290) )
  {
    s = (char *)(v17 + 10);
    qstrncpy();
  }
  else
  {
    s = (char *)(v17 + 10);
    qstrncpy();
    qbasename();
    qstrncat();
    set_file_ext();
    *(_BYTE *)(v18 + strlen((const char *)(v18 + 10)) + 9) = 0;
  }
  qstrncpy();
  set_file_ext();
  *(_BYTE *)(v18 + 138 + strlen((const char *)(v18 + 138)) - 1) = 95;
  time(nullptr);
  v19 = 0;
  qstrftime();
  qstrncpy();
  while ( 1 )
  {
    qstrncat();
    if ( !(unsigned __int8)qfileexist() )
    {
      qstrncpy();
      *(_QWORD *)v18 = qtime64();
      v24 = *(_QWORD **)(a1 + 8568);
      if ( !v24 )
        v24 = (_QWORD *)(a1 + 4280);
      v25 = v24[531];
      v26 = v24[530];
      if ( v24[532] < (unsigned __int64)(v25 + 1) )
      {
        v33 = qvector_reserve();
        v24[530] = v33;
        v26 = v33;
        v25 = v24[531];
      }
      *(_QWORD *)(v26 + 8 * v25) = v18;
      ++v24[531];
      v27 = *(unsigned __int16 *)(a1 + 4288);
      *(_WORD *)(v18 + 8) = v27;
      if ( a2 )
      {
        v28 = v27;
        v29 = v27 | 1;
        v30 = v28 & 0xFFFFFFFE;
        if ( (*(_BYTE *)(a2 + 8) & 1) == 0 )
          v29 = v30;
        *(_WORD *)(v18 + 8) = v29;
        sub_10DDF0(
          (__int64)"HIDECANCEL\nTaking snapshot, please wait...",
          v26,
          v30,
          a2,
          v20,
          v21,
          (__m128)0LL,
          a6,
          a7,
          a8,
          v22,
          v23,
          a11,
          a12,
          v57);
        if ( (unsigned __int8)save_database() )
        {
          sub_10D850();
LABEL_24:
          if ( a3 )
            *a3 = v18;
          return 1;
        }
      }
      else
      {
        v62 = nullptr;
        *(_WORD *)(v18 + 8) = v27 & 0xFFFE;
        v63 = 0;
        v34 = strlen(s);
        v35 = v34 + 1;
        v36 = v34;
        v62 = (void *)qvector_reserve();
        *(_QWORD *)&v63 = v35;
        memmove(v62, s, v36);
        *((_BYTE *)v62 + v36) = 0;
        if ( !(unsigned __int8)sub_9DA30((__int64)&v62, 2u, (__int64)"Enter snapshot description") )
        {
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
          }
          if ( (unsigned __int8)qfileexist() )
            qunlink();
          v15 = 0;
LABEL_42:
          v37 = *(_QWORD *)(v18 + 4248);
          v38 = *(_QWORD ***)(v18 + 4240);
          v39 = v38;
          if ( 8 * v37 )
          {
            do
            {
              v40 = (__int64)*v39;
              if ( *v39 )
              {
                sub_118C40(*v39);
                if ( *(_QWORD *)(v40 + 4240) )
                {
                  *(_QWORD *)(v40 + 4248) = 0;
                  qfree();
                }
                qfree();
                v38 = *(_QWORD ***)(v18 + 4240);
                v37 = *(_QWORD *)(v18 + 4248);
              }
              ++v39;
            }
            while ( v39 != &v38[v37] );
          }
          if ( v38 )
          {
            *(_QWORD *)(v18 + 4248) = 0;
            qfree();
          }
          qfree();
LABEL_32:
          v31 = v24[531];
          if ( v31 )
            v24[531] = v31 - 1;
          return v15;
        }
        v47 = s1;
        if ( (_QWORD)v63 )
          v47 = (const char *)v62;
        qstrncpy();
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree();
        }
        sub_10DDF0(
          (__int64)"HIDECANCEL\nTaking snapshot, please wait...",
          (__int64)v47,
          v48,
          v49,
          v50,
          v51,
          (__m128)0LL,
          a6,
          a7,
          a8,
          v52,
          v53,
          a11,
          a12,
          v57);
        if ( (unsigned __int8)save_database() )
        {
          sub_10D850();
          sub_8F660((__int64)"Database snapshot successfully created: %s\n", s);
          goto LABEL_24;
        }
      }
      sub_10D850();
      if ( (unsigned __int8)qfileexist() )
        qunlink();
      v15 = -1;
      if ( !v18 )
        goto LABEL_32;
      goto LABEL_42;
    }
    if ( ++v19 == 90000 )
      break;
    qsnprintf();
  }
  qsnprintf();
  if ( a2 )
  {
    if ( a4 )
    {
      v41 = strlen(src);
      v42 = v41;
      if ( v41 )
      {
        v54 = v41 + 1;
        v55 = (void *)*a4;
        if ( a4[2] < v41 + 1 )
        {
          v56 = qvector_reserve();
          *a4 = v56;
          v55 = (void *)v56;
        }
        a4[1] = v54;
        memmove(v55, src, v42);
        *(_BYTE *)(*a4 + v42) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
  }
  else
  {
    sub_92120((__int64)"ICON ERROR\n%s", src);
  }
  if ( v18 )
  {
    v43 = *(_QWORD *)(v18 + 4248);
    v44 = *(_QWORD ***)(v18 + 4240);
    v45 = v44;
    if ( 8 * v43 )
    {
      do
      {
        v46 = (__int64)*v45;
        if ( *v45 )
        {
          sub_118C40(*v45);
          if ( *(_QWORD *)(v46 + 4240) )
          {
            *(_QWORD *)(v46 + 4248) = 0;
            qfree();
          }
          qfree();
          v44 = *(_QWORD ***)(v18 + 4240);
          v43 = *(_QWORD *)(v18 + 4248);
        }
        ++v45;
      }
      while ( v45 != &v44[v43] );
    }
    if ( v44 )
    {
      *(_QWORD *)(v18 + 4248) = 0;
      qfree();
    }
    qfree();
  }
  return (unsigned int)-1;
}

