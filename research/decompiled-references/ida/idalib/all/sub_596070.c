__int64 __fastcall sub_596070(
        _DWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *s1,
        char **a8)
{
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  int *v11; // rax
  int v12; // r9d
  const char *v13; // rax
  __int64 v14; // r13
  __int64 v15; // r15
  const char *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v20; // rcx
  const void *v21; // rbp
  size_t v22; // rax
  size_t v23; // rbx
  int v24; // r9d
  const char *v25; // rax
  const char *v26; // rbx
  size_t v27; // rax
  size_t v28; // rbp
  size_t v29; // r12
  void *v30; // rdi
  _QWORD *v31; // r14
  size_t v32; // r12
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v37; // [rsp+10h] [rbp-3178h] BYREF
  __int64 (__fastcall ***v38)(); // [rsp+20h] [rbp-3168h]
  __int64 v39; // [rsp+28h] [rbp-3160h]
  char **v40; // [rsp+30h] [rbp-3158h]
  _QWORD *v41; // [rsp+38h] [rbp-3150h]
  __int64 v42; // [rsp+40h] [rbp-3148h]
  _DWORD *v43; // [rsp+48h] [rbp-3140h]
  __int64 v44; // [rsp+58h] [rbp-3130h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+60h] [rbp-3128h] BYREF
  __int64 v46; // [rsp+68h] [rbp-3120h]
  __int128 v47; // [rsp+70h] [rbp-3118h]
  __int64 v48; // [rsp+80h] [rbp-3108h]
  const char *v49; // [rsp+88h] [rbp-3100h]
  int v50; // [rsp+90h] [rbp-30F8h]
  __m128i v51; // [rsp+98h] [rbp-30F0h]
  int v52; // [rsp+A8h] [rbp-30E0h]
  char v53; // [rsp+B0h] [rbp-30D8h] BYREF
  int v54; // [rsp+110h] [rbp-3078h] BYREF
  __int64 v55; // [rsp+118h] [rbp-3070h]
  void *v56; // [rsp+120h] [rbp-3068h] BYREF
  __int128 v57; // [rsp+128h] [rbp-3060h]
  char s[4096]; // [rsp+140h] [rbp-3048h] BYREF
  _BYTE dest[4096]; // [rsp+1140h] [rbp-2048h] BYREF
  char v60; // [rsp+2140h] [rbp-1048h] BYREF
  unsigned __int64 v61; // [rsp+3148h] [rbp-40h]

  v9 = _mm_loadl_epi64((const __m128i *)&off_2B2F100);
  v43 = a1;
  v41 = a2;
  v42 = a4;
  v39 = a6;
  v40 = a8;
  v61 = __readfsqword(0x28u);
  *a1 = 0;
  v38 = &v45;
  v37 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_2B2EF60);
  if ( !s1 || !*s1 )
  {
    v10 = _mm_load_si128(&v37);
    v45 = (__int64 (__fastcall **)())&unk_2BFB228;
    v48 = 0;
    v49 = nullptr;
    v50 = 3;
    v52 = -1;
    v46 = 0x3FF000004LL;
    v11 = (int *)&v53;
    v47 = -1;
    v51 = v10;
    do
    {
      *(_QWORD *)v11 = 0;
      v11 += 6;
      *((_OWORD *)v11 - 1) = 0;
    }
    while ( v11 != &v54 );
    v54 = 0;
    if ( ((HIDWORD(v46) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v46) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449);
        BUG();
      }
      BYTE3(v46) = ((HIDWORD(v46) >> 19) & 0x3F) - 1;
      HIDWORD(v46) &= 0xFE07FFFF;
    }
    v55 = a5;
    v45 = &off_2B2EDF8;
    v56 = nullptr;
    DWORD1(v47) = -2;
    v57 = 0;
    sub_35A790((char **)&v56);
    v13 = haystack;
    if ( (_QWORD)v57 )
      v13 = (const char *)v56;
    v49 = v13;
    v44 = 0;
    callui(16, 0, (int)v38, (int)&v44, (int)&callui, v12);
  }
  if ( *(int *)(a5 + 8) <= 0 )
    goto LABEL_18;
  v15 = 0;
  while ( 1 )
  {
    v16 = (const char *)qbasename(*(_QWORD *)(*(_QWORD *)a5 + 40 * v15 + 24));
    v17 = strcmp(s1, v16);
    v18 = *(int *)(a5 + 8);
    if ( !v17 )
      break;
    if ( ++v15 >= v18 )
      goto LABEL_18;
  }
  if ( v18 > v15 )
  {
    v14 = *(_QWORD *)a5 + 40 * v15;
    if ( (*(_DWORD *)(v14 + 32) & 0xFFFFFFF7) != 0 )
      sub_378D50();
    v20 = v41;
    *v41 = v42;
    v20[4] = *(_QWORD *)(v14 + 8);
    v21 = *(const void **)(v14 + 24);
    if ( v21 && (v22 = strlen(*(const char **)(v14 + 24)), (v23 = v22) != 0) )
    {
      v29 = v22 + 1;
      v30 = (void *)v41[1];
      if ( v41[3] < v22 + 1 )
      {
        v34 = qvector_reserve(v41 + 1, v41[1], v29, 1);
        v41[1] = v34;
        v30 = (void *)v34;
      }
      v31 = v41;
      v41[2] = v29;
      memmove(v30, v21, v23);
      *(_BYTE *)(v31[1] + v23) = 0;
    }
    else
    {
      v41[2] = 0;
    }
    qlseek(v42, *(_QWORD *)v14, 0);
    *v43 = *(_DWORD *)(v14 + 32);
    qstrncpy(s, *(_QWORD *)(v14 + 24), 4096);
    sanitize_file_name(s);
    qdirname(dest);
    v25 = (const char *)qmakepath((unsigned int)&v60, 4096, (unsigned int)dest, (unsigned int)s, 0, v24);
    v26 = v25;
    if ( v25 && (v27 = strlen(v25), (v28 = v27) != 0) )
    {
      v32 = v27 + 1;
      v33 = (void *)*a3;
      if ( a3[2] < v27 + 1 )
      {
        v35 = qvector_reserve(a3, *a3, v32, 1);
        *a3 = v35;
        v33 = (void *)v35;
      }
      a3[1] = v32;
      memmove(v33, v26, v28);
      *(_BYTE *)(*a3 + v28) = 0;
    }
    else
    {
      a3[1] = 0;
    }
    return 1;
  }
  else
  {
LABEL_18:
    if ( v40 )
      sub_35A790(v40);
    return 0;
  }
}
