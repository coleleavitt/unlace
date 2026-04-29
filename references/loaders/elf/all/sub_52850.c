const void *__fastcall sub_52850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __m128i a7)
{
  bool v7; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // r12
  unsigned int v14; // r13d
  const char *v15; // rbp
  __int64 elf_debug_file_directory; // r14
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // rbx
  size_t v20; // rax
  size_t v21; // r15
  size_t v22; // rbx
  __m128i v23; // xmm0
  size_t v24; // rax
  size_t v25; // rbp
  size_t v26; // rbx
  const char *i; // rax
  unsigned __int64 *v28; // rbp
  __m128i v29; // xmm0
  unsigned __int64 v30; // rax
  const void *v31; // rbx
  size_t v32; // rax
  __int64 v33; // r15
  size_t v34; // rbp
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rbp
  __int64 *v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 j; // r14
  __int64 *v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rdi
  int s; // [rsp+0h] [rbp-2558h]
  __int64 v61; // [rsp+8h] [rbp-2550h]
  int *v63; // [rsp+10h] [rbp-2548h]
  __m128i v65; // [rsp+20h] [rbp-2538h] BYREF
  unsigned int v66; // [rsp+34h] [rbp-2524h] BYREF
  char v67[8]; // [rsp+38h] [rbp-2520h] BYREF
  const char *v68; // [rsp+40h] [rbp-2518h] BYREF
  __int128 v69; // [rsp+48h] [rbp-2510h]
  const char *v70; // [rsp+60h] [rbp-24F8h] BYREF
  __int128 v71; // [rsp+68h] [rbp-24F0h]
  unsigned __int64 *v72; // [rsp+80h] [rbp-24D8h] BYREF
  __m128i v73; // [rsp+88h] [rbp-24D0h] BYREF
  __int64 (__fastcall **v74)(); // [rsp+A0h] [rbp-24B8h] BYREF
  char s2[1024]; // [rsp+A8h] [rbp-24B0h] BYREF
  unsigned __int64 v76; // [rsp+4A8h] [rbp-20B0h] BYREF
  __int128 v77; // [rsp+4B0h] [rbp-20A8h]
  void *v78; // [rsp+4C0h] [rbp-2098h] BYREF
  __int128 v79; // [rsp+4C8h] [rbp-2090h]
  void *v80; // [rsp+4D8h] [rbp-2080h] BYREF
  __int128 v81; // [rsp+4E0h] [rbp-2078h]
  void *v82; // [rsp+4F0h] [rbp-2068h] BYREF
  __int128 v83; // [rsp+4F8h] [rbp-2060h]
  unsigned int v84; // [rsp+508h] [rbp-2050h]
  char v85[4096]; // [rsp+510h] [rbp-2048h] BYREF
  _BYTE v86[4104]; // [rsp+1510h] [rbp-1048h] BYREF
  unsigned __int64 v87; // [rsp+2518h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v7 = *(_BYTE *)(a2 + 248) == 0;
  v69 = 0;
  v68 = nullptr;
  if ( v7 )
    return nullptr;
  if ( (unsigned __int8)sub_483A0((__int64 *)(a2 + 80), (__int64 *)&v68, &v66) )
  {
    v70 = nullptr;
    v71 = 0;
    sub_4C450(a3, (__int64 *)&v70, v9, v10, v11, v12, s, a1, a4);
    getinf_buf(97, v85, 4096);
    v13 = &s1;
    if ( (_QWORD)v71 )
      v13 = v70;
    v14 = v66;
    v15 = &s1;
    if ( (_QWORD)v69 )
      v15 = v68;
    elf_debug_file_directory = get_elf_debug_file_directory();
    v74 = off_87200;
    v76 = 0;
    v78 = nullptr;
    v77 = 0;
    v79 = 0;
    v17 = strlen(v85);
    v18 = v17 + 1;
    v19 = v17;
    v78 = (void *)qvector_reserve(&v78, 0, v17 + 1, 1);
    *(_QWORD *)&v79 = v18;
    memmove(v78, v85, v19);
    *((_BYTE *)v78 + v19) = 0;
    v80 = nullptr;
    v81 = 0;
    if ( v15 )
    {
      v20 = strlen(v15);
      v21 = v20 + 1;
      v22 = v20;
      v80 = (void *)qvector_reserve(&v80, 0, v20 + 1, 1);
      *(_QWORD *)&v81 = v21;
      memmove(v80, v15, v22);
      *((_BYTE *)v80 + v22) = 0;
    }
    v82 = nullptr;
    v23 = 0;
    v83 = 0;
    if ( v13 )
    {
      v24 = strlen(v13);
      v25 = v24 + 1;
      v26 = v24;
      v82 = (void *)qvector_reserve(&v82, 0, v24 + 1, 1);
      *(_QWORD *)&v83 = v25;
      memmove(v82, v13, v26);
      *((_BYTE *)v82 + v26) = 0;
    }
    v84 = v14;
    s2[0] = 0;
    qstrncpy(v86, elf_debug_file_directory, 4096);
    for ( i = (const char *)qstrtok(v86, ";", v67); ; i = (const char *)qstrtok(0, ";", v67) )
    {
      v31 = i;
      if ( !i )
        break;
      v72 = nullptr;
      v73 = 0;
      v32 = strlen(i);
      v33 = v32 + 1;
      v34 = v32;
      v72 = (unsigned __int64 *)qvector_reserve(&v72, 0, v32 + 1, 1);
      v73.m128i_i64[0] = v33;
      memmove(v72, v31, v34);
      *((_BYTE *)v72 + v34) = 0;
      v44 = v77;
      v43 = v76;
      v35 = v77 + 1;
      if ( (unsigned __int64)&v72 < v76 || (unsigned __int64)&v72 >= v76 + 24LL * *((_QWORD *)&v77 + 1) )
      {
        if ( *((_QWORD *)&v77 + 1) < v35 )
        {
          v76 = qvector_reserve(&v76, v76, v77 + 1, 24);
          v43 = v76;
          v44 = v77;
        }
        v23 = _mm_loadu_si128(&v73);
        v36 = v43 + 24 * v44;
        *(_QWORD *)v36 = v72;
        *(__m128i *)(v36 + 8) = v23;
        *(_QWORD *)&v77 = v77 + 1;
      }
      else
      {
        v28 = v72;
        v29 = _mm_loadl_epi64(&v73);
        v72 = nullptr;
        a7 = _mm_loadl_epi64((const __m128i *)&v73.m128i_u64[1]);
        v73 = 0;
        if ( *((_QWORD *)&v77 + 1) < v35 )
        {
          v65.m128i_i64[1] = a7.m128i_i64[0];
          v65.m128i_i64[0] = v29.m128i_i64[0];
          v76 = qvector_reserve(&v76, v76, v77 + 1, 24);
          v43 = v76;
          a7 = _mm_loadl_epi64((const __m128i *)&v65.m128i_u64[1]);
          v44 = v77;
          v29 = _mm_loadl_epi64(&v65);
        }
        v23 = _mm_unpacklo_epi64(v29, a7);
        v30 = v43 + 24 * v44;
        *(_QWORD *)v30 = v28;
        *(__m128i *)(v30 + 8) = v23;
        *(_QWORD *)&v77 = v77 + 1;
        if ( v72 )
        {
          v73.m128i_i64[0] = 0;
          qfree(v72);
        }
      }
    }
    if ( (unsigned int)sub_441C0((_BOOL8 (__fastcall ***)(__int64, int))&v74) && strcmp(v85, s2) )
    {
      v45 = open_linput(s2, 0);
      if ( v45 )
      {
        v46 = operator new(0x578u);
        sub_45200(v46, v45, s2);
        if ( (unsigned __int8)sub_39590(v46) && (unsigned __int8)sub_39BD0(v46) && (unsigned __int8)sub_46B20(v46) )
        {
          sub_319C0(v46);
          sub_51EE0(v61, v46, v63, a5, v23, a7);
          if ( *v63 > 0 )
          {
            *(__m128i *)(v46 + 800) = _mm_loadu_si128((const __m128i *)v46);
            *(__m128i *)(v46 + 812) = _mm_loadu_si128((const __m128i *)(v46 + 12));
          }
          if ( *(_QWORD *)(v46 + 800) )
          {
            v73 = 0;
            v72 = nullptr;
            v72 = (unsigned __int64 *)qvector_reserve(&v72, 0, 10, 16);
            if ( (unsigned __int8)sub_45B00(v46, (__int64 *)&v72, (__int64 *)(v46 + 800)) )
              sub_3B290((_DWORD *)v46, v46 + 840, &v72);
            if ( v72 )
            {
              v73.m128i_i64[0] = 0;
              qfree(v72);
            }
          }
          sub_EAA0((__int64)"Found companion file \"%s\".\n", s2);
          v31 = (const void *)v46;
        }
        else
        {
          sub_EAA0((__int64)"Couldn't load companion file \"%s\". Ignoring.\n", s2);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 1376);
            if ( v47 )
            {
              *(_QWORD *)(v46 + 1384) = 0;
              qfree(v47);
            }
            v48 = *(_QWORD *)(v46 + 1352);
            if ( v48 )
            {
              *(_QWORD *)(v46 + 1360) = 0;
              qfree(v48);
            }
            v49 = *(_QWORD *)(v46 + 1328);
            if ( v49 )
            {
              *(_QWORD *)(v46 + 1336) = 0;
              qfree(v49);
            }
            sub_3F920((__int64 *)(v46 + 624));
            v50 = *(_QWORD *)(v46 + 600);
            if ( v50 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
            v51 = *(_QWORD *)(v46 + 576);
            if ( v51 )
            {
              *(_QWORD *)(v46 + 584) = 0;
              qfree(v51);
            }
            v52 = *(_QWORD *)(v46 + 288);
            if ( v52 )
            {
              v53 = *(_QWORD *)(v46 + 296);
              if ( v53 )
              {
                for ( j = 0; j != v53; ++j )
                {
                  v55 = (__int64 *)(v52 + 96 * j);
                  v56 = v55[3];
                  if ( v56 )
                  {
                    v55[4] = 0;
                    qfree(v56);
                  }
                  v57 = *v55;
                  if ( *v55 )
                  {
                    v55[1] = 0;
                    qfree(v57);
                  }
                  v52 = *(_QWORD *)(v46 + 288);
                }
              }
              *(_QWORD *)(v46 + 296) = 0;
              qfree(v52);
            }
            v58 = *(_QWORD *)(v46 + 112);
            if ( v58 )
            {
              *(_QWORD *)(v46 + 120) = 0;
              qfree(v58);
            }
            v59 = *(_QWORD *)(v46 + 32);
            if ( v59 )
            {
              *(_QWORD *)(v46 + 40) = 0;
              qfree(v59);
            }
            operator delete((void *)v46, 0x578u);
          }
        }
      }
      else
      {
        sub_EAA0((__int64)"Couldn't open companion file \"%s\". Ignoring.\n", s2);
      }
    }
    v74 = off_87200;
    if ( v82 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v82);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
    if ( v78 )
    {
      *(_QWORD *)&v79 = 0;
      qfree(v78);
    }
    v38 = v76;
    if ( v76 )
    {
      v39 = v77;
      if ( (_QWORD)v77 )
      {
        v40 = 0;
        do
        {
          v41 = (__int64 *)(v38 + 24 * v40);
          v42 = *v41;
          if ( *v41 )
          {
            v41[1] = 0;
            qfree(v42);
            v38 = v76;
          }
          ++v40;
        }
        while ( v39 != v40 );
      }
      *(_QWORD *)&v77 = 0;
      qfree(v38);
    }
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
  }
  else
  {
    v31 = nullptr;
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  return v31;
}
