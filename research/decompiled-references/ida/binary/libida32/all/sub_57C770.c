__int64 __fastcall sub_57C770(
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
  char v36; // [rsp+0h] [rbp-3188h]
  __m128i v38; // [rsp+10h] [rbp-3178h] BYREF
  __int64 (__fastcall ***v39)(); // [rsp+20h] [rbp-3168h]
  __int64 v40; // [rsp+28h] [rbp-3160h]
  char **v41; // [rsp+30h] [rbp-3158h]
  _QWORD *v42; // [rsp+38h] [rbp-3150h]
  __int64 v43; // [rsp+40h] [rbp-3148h]
  _DWORD *v44; // [rsp+48h] [rbp-3140h]
  __int64 v45; // [rsp+58h] [rbp-3130h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+60h] [rbp-3128h] BYREF
  __int64 v47; // [rsp+68h] [rbp-3120h]
  __int128 v48; // [rsp+70h] [rbp-3118h]
  __int64 v49; // [rsp+80h] [rbp-3108h]
  const char *v50; // [rsp+88h] [rbp-3100h]
  int v51; // [rsp+90h] [rbp-30F8h]
  __m128i v52; // [rsp+98h] [rbp-30F0h]
  int v53; // [rsp+A8h] [rbp-30E0h]
  char v54; // [rsp+B0h] [rbp-30D8h] BYREF
  int v55; // [rsp+110h] [rbp-3078h] BYREF
  __int64 v56; // [rsp+118h] [rbp-3070h]
  void *v57; // [rsp+120h] [rbp-3068h] BYREF
  __int128 v58; // [rsp+128h] [rbp-3060h]
  char s[4096]; // [rsp+140h] [rbp-3048h] BYREF
  _BYTE dest[4096]; // [rsp+1140h] [rbp-2048h] BYREF
  char v61; // [rsp+2140h] [rbp-1048h] BYREF
  unsigned __int64 v62; // [rsp+3148h] [rbp-40h]

  v9 = _mm_loadl_epi64((const __m128i *)&off_2B05140);
  v44 = a1;
  v42 = a2;
  v43 = a4;
  v40 = a6;
  v41 = a8;
  v62 = __readfsqword(0x28u);
  *a1 = 0;
  v39 = &v46;
  v38 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_2B04FA0);
  if ( !s1 || !*s1 )
  {
    v10 = _mm_load_si128(&v38);
    v46 = (__int64 (__fastcall **)())&unk_2BD1228;
    v49 = 0;
    v50 = nullptr;
    v51 = 3;
    v53 = -1;
    v47 = 0x3FF000004LL;
    v11 = (int *)&v54;
    v48 = -1;
    v52 = v10;
    do
    {
      *(_QWORD *)v11 = 0;
      v11 += 6;
      *((_OWORD *)v11 - 1) = 0;
    }
    while ( v11 != &v55 );
    v55 = 0;
    if ( ((HIDWORD(v47) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v47) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449);
        BUG();
      }
      BYTE3(v47) = ((HIDWORD(v47) >> 19) & 0x3F) - 1;
      HIDWORD(v47) &= 0xFE07FFFF;
    }
    v56 = a5;
    v46 = &off_2B04E38;
    v57 = nullptr;
    DWORD1(v48) = -2;
    v58 = 0;
    sub_3573A0((char **)&v57);
    v13 = haystack;
    if ( (_QWORD)v58 )
      v13 = (const char *)v57;
    v50 = v13;
    v45 = 0;
    callui(16, 0, (int)v39, (int)&v45, (int)&callui, v12);
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
      sub_375400();
    v20 = v42;
    *v42 = v43;
    v20[4] = *(_QWORD *)(v14 + 8);
    v21 = *(const void **)(v14 + 24);
    if ( v21 && (v22 = strlen(*(const char **)(v14 + 24)), (v23 = v22) != 0) )
    {
      v29 = v22 + 1;
      v30 = (void *)v42[1];
      if ( v42[3] < v22 + 1 )
      {
        v34 = qvector_reserve(v42 + 1, v42[1], v29, 1);
        v42[1] = v34;
        v30 = (void *)v34;
      }
      v31 = v42;
      v42[2] = v29;
      memmove(v30, v21, v23);
      *(_BYTE *)(v31[1] + v23) = 0;
    }
    else
    {
      v42[2] = 0;
    }
    qlseek(v43, *(_QWORD *)v14, 0);
    *v44 = *(_DWORD *)(v14 + 32);
    qstrncpy(s, *(_QWORD *)(v14 + 24), 4096);
    sanitize_file_name(s);
    qdirname(dest);
    v25 = (const char *)qmakepath((int)&v61, 4096, (int)dest, (int)s, 0, v24, v36);
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
    if ( v41 )
      sub_3573A0(v41);
    return 0;
  }
}

