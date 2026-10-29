__m128i *__fastcall clang_getToken(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  _BYTE *v8; // r13
  bool v9; // r14
  __int64 v10; // rax
  __m128i si128; // xmm0
  pthread_mutex_t *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (*v15)(); // rsi
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r12
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // r12
  unsigned int v26; // ebx
  __int64 v27; // rbp
  unsigned int v28; // r8d
  __int64 v29; // r13
  int v30; // r14d
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  bool v33; // al
  __int64 v34; // r13
  int v35; // eax
  __int64 v36; // r13
  int v37; // r14d
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rsi
  __m128i *v41; // rax
  __m128i *v42; // rbx
  _BYTE *v43; // rdi
  _QWORD *v44; // roff
  char v46; // al
  pthread_mutex_t *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v51; // r15
  __int64 v52; // rax
  int *v53; // rax
  char v54; // dl
  int v55; // r15d
  int v56; // eax
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  _QWORD *v59; // r13
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  _DWORD *v62; // rax
  unsigned __int64 v63; // r13
  __int64 v64; // rax
  __int64 *v65; // r14
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // r14
  char v70; // dl
  __int64 *v71; // rdi
  __int64 v72; // rdx
  _DWORD *v73; // rax
  _DWORD *v74; // rdx
  __int64 *v75; // rdi
  __int64 v76; // rdx
  _DWORD *v77; // rax
  _DWORD *v78; // rsi
  __int64 *v79; // rdi
  __int64 v80; // rdx
  _DWORD *v81; // rax
  _DWORD *v82; // rcx
  __int64 *v83; // rdi
  __int64 v84; // rcx
  _DWORD *v85; // rax
  _DWORD *v86; // rdx
  unsigned int v87; // [rsp+24h] [rbp-354h]
  unsigned int v88; // [rsp+24h] [rbp-354h]
  unsigned int v89; // [rsp+24h] [rbp-354h]
  unsigned int v90; // [rsp+24h] [rbp-354h]
  int v91; // [rsp+24h] [rbp-354h]
  unsigned int v92; // [rsp+24h] [rbp-354h]
  unsigned int v93; // [rsp+24h] [rbp-354h]
  int v94; // [rsp+24h] [rbp-354h]
  unsigned int v95; // [rsp+24h] [rbp-354h]
  _QWORD *v96; // [rsp+28h] [rbp-350h]
  void *ptr; // [rsp+30h] [rbp-348h] BYREF
  __int64 v98; // [rsp+38h] [rbp-340h]
  _BYTE v99[824]; // [rsp+40h] [rbp-338h] BYREF

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v8 = (_BYTE *)qword_4AD21C8;
  v9 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
  {
    v9 = *v8 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_5;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_5;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
LABEL_5:
  if ( qword_4AD21C8 )
  {
    v10 = operator new(0xC0u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    v12 = (pthread_mutex_t *)v10;
    *(_DWORD *)v10 = 0;
    *(_QWORD *)(v10 + 8) = v10 + 24;
    *(_QWORD *)(v10 + 48) = v10 + 72;
    strcpy((char *)(v10 + 24), "clang_getToken");
    *(_QWORD *)(v10 + 136) = &off_49DA340;
    *(_QWORD *)(v10 + 184) = v10 + 48;
    *(_QWORD *)(v10 + 16) = 14;
    *(_BYTE *)(v10 + 40) = v9;
    *(_DWORD *)(v10 + 144) = 2;
    *(_BYTE *)(v10 + 176) = 0;
    *(_DWORD *)(v10 + 180) = 1;
    *(_QWORD *)(v10 + 168) = 0;
    *(__m128i *)(v10 + 56) = si128;
    *(_OWORD *)(v10 + 152) = 0;
    sub_2623850(v10 + 136, 0, 0, 0, v13, v14);
    ++v12->__lock;
    v15 = (__int64 (*)())a1;
    v19 = sub_60BBA0((__int64)v12, a1);
    v20 = *(_BYTE **)(v19 + 168);
    if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 160) )
    {
      v15 = (__int64 (*)())&qword_20;
      sub_26239D0(v19 + 136, 32);
    }
    else
    {
      v21 = (__int64)(v20 + 1);
      *(_QWORD *)(v19 + 168) = v20 + 1;
      *v20 = 32;
    }
    sub_60BEB0(v19, (__int64)v15, v21, v16, v17, v18, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
    v24 = v12->__lock - 1;
    v12->__lock = v24;
    if ( !v24 )
    {
      sub_60C330(v12, v15, v22, v23);
      operator delete(v12, 0xC0u);
    }
  }
  if ( !a1 )
  {
    v46 = sub_5FF160();
    sub_5FF1E0((__int64 *)&ptr, "clang_getToken", 0xEu, v46);
    v47 = (pthread_mutex_t *)ptr;
    if ( ptr )
    {
      sub_5FF0F0((__int64)ptr + 136, "called with a bad TU: ");
      sub_5FF0F0((__int64)(&v47[3].__align + 2), "<NULL TU>");
      if ( v47->__lock-- == 1 )
      {
        sub_60C330(v47, (__int64 (*)())"<NULL TU>", v48, v49);
        operator delete(v47, 0xC0u);
      }
    }
    return nullptr;
  }
  v25 = *(_QWORD **)(a1 + 8);
  if ( !v25 )
    return nullptr;
  v26 = a8;
  if ( !(_DWORD)a8 )
    return nullptr;
  v27 = v25[4];
  v28 = a8 & 0x7FFFFFFF;
  v29 = *(int *)(v27 + 408);
  v30 = v29 + 1;
  if ( (unsigned int)(v29 + 1) <= 1 )
  {
    v31 = *(_DWORD **)(v27 + 184);
    if ( v28 < (*v31 & 0x7FFFFFFFu) )
      goto LABEL_25;
    goto LABEL_16;
  }
  if ( (int)v29 >= 0 )
  {
    v31 = *(_DWORD **)(v27 + 184);
    if ( v28 < (v31[6 * v29] & 0x7FFFFFFFu) )
    {
LABEL_25:
      v87 = v28;
      v35 = sub_CA9700(v27, v28);
      v28 = v87;
      v34 = v35;
      goto LABEL_26;
    }
LABEL_16:
    if ( *(_DWORD *)(v27 + 192) != v30 )
    {
      v32 = &v31[6 * v30];
LABEL_18:
      v33 = v28 < (*v32 & 0x7FFFFFFFu);
      goto LABEL_19;
    }
    goto LABEL_45;
  }
  v60 = (unsigned int)(-2 - v29);
  v61 = *(_QWORD *)(*(_QWORD *)(v27 + 256) + 8LL * ((unsigned int)(-2 - v29) >> 6));
  if ( _bittest64(&v61, v60) )
  {
    v67 = (_QWORD *)(*(_QWORD *)(v27 + 208) + 8 * ((unsigned __int64)(int)v60 >> 5));
    v68 = *v67;
    if ( !*v67 )
    {
      v71 = (__int64 *)(*(_QWORD *)(v27 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v72 = *v71;
      v71[10] += 768;
      v73 = (_DWORD *)((v72 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v71[1] >= (unsigned __int64)(v73 + 192) && v72 )
      {
        *v71 = (__int64)(v73 + 192);
      }
      else
      {
        v96 = v67;
        v73 = (_DWORD *)sub_5F8390((__int64)v71, 768, 3);
        v67 = v96;
        v28 = v26 & 0x7FFFFFFF;
      }
      *v67 = v73;
      v74 = v73 + 192;
      do
      {
        *v73 = 0;
        v73 += 6;
        *((_OWORD *)v73 - 1) = 0;
      }
      while ( v74 != v73 );
      v68 = *v67;
    }
    v62 = (_DWORD *)(v68 + 24LL * ((-2 - (_BYTE)v29) & 0x1F));
  }
  else
  {
    v90 = a8 & 0x7FFFFFFF;
    v62 = (_DWORD *)sub_CA9380(v25[4], (unsigned int)v60, 0);
    v28 = v90;
  }
  if ( v28 < (*v62 & 0x7FFFFFFFu) )
    goto LABEL_25;
  if ( (_DWORD)v29 == -2 )
    goto LABEL_20;
  if ( v30 != *(_DWORD *)(v27 + 192) )
  {
    v63 = (unsigned int)(-2 - v30);
    v64 = *(_QWORD *)(*(_QWORD *)(v27 + 256) + 8LL * ((unsigned int)(-2 - v30) >> 6));
    if ( _bittest64(&v64, v63) )
    {
      v65 = (__int64 *)(*(_QWORD *)(v27 + 208) + 8 * ((unsigned __int64)(int)v63 >> 5));
      v66 = *v65;
      if ( !*v65 )
      {
        v83 = (__int64 *)(*(_QWORD *)(v27 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v84 = *v83;
        v83[10] += 768;
        v85 = (_DWORD *)((v84 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v83[1] >= (unsigned __int64)(v85 + 192) && v84 )
        {
          *v83 = (__int64)(v85 + 192);
        }
        else
        {
          v95 = v28;
          v85 = (_DWORD *)sub_5F8390((__int64)v83, 768, 3);
          v28 = v95;
        }
        *v65 = (__int64)v85;
        v86 = v85 + 192;
        do
        {
          *v85 = 0;
          v85 += 6;
          *((_OWORD *)v85 - 1) = 0;
        }
        while ( v86 != v85 );
        v66 = *v65;
      }
      v32 = (_DWORD *)(v66 + 24 * (v63 & 0x1F));
    }
    else
    {
      v92 = v28;
      v32 = (_DWORD *)sub_CA9380(v27, (unsigned int)v63, 0);
      v28 = v92;
    }
    goto LABEL_18;
  }
LABEL_45:
  v33 = v28 < *(_DWORD *)(v27 + 248);
LABEL_19:
  if ( !v33 )
    goto LABEL_25;
LABEL_20:
  v34 = *(int *)(v27 + 408);
LABEL_26:
  LOBYTE(ptr) = 0;
  if ( (unsigned int)(v34 + 1) <= 1 )
    goto LABEL_41;
  if ( (int)v34 >= 0 )
  {
    v36 = 24 * v34;
    v37 = *(_DWORD *)(v36 + *(_QWORD *)(v27 + 184));
    v38 = v28 + sub_1169590(v26, v27, *v25) - (v37 & 0x7FFFFFFF);
    v39 = v36 + *(_QWORD *)(v27 + 184);
    goto LABEL_29;
  }
  v51 = (unsigned int)(-2 - v34);
  v52 = *(_QWORD *)(*(_QWORD *)(v27 + 256) + 8LL * ((unsigned int)(-2 - v34) >> 6));
  if ( _bittest64(&v52, v51) )
  {
    v69 = (_QWORD *)(*(_QWORD *)(v27 + 208) + 8 * ((unsigned __int64)(int)v51 >> 5));
    if ( *v69 )
    {
      v53 = (int *)(*v69 + 24LL * ((-2 - (_BYTE)v34) & 0x1F));
      goto LABEL_54;
    }
    v79 = (__int64 *)(*(_QWORD *)(v27 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v80 = *v79;
    v79[10] += 768;
    v81 = (_DWORD *)((v80 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v79[1] >= (unsigned __int64)(v81 + 192) && v80 )
    {
      *v79 = (__int64)(v81 + 192);
      v54 = 0;
    }
    else
    {
      v93 = v28;
      v81 = (_DWORD *)sub_5F8390((__int64)v79, 768, 3);
      v54 = (char)ptr;
      v28 = v93;
    }
    *v69 = v81;
    v82 = v81 + 192;
    do
    {
      *v81 = 0;
      v81 += 6;
      *((_OWORD *)v81 - 1) = 0;
    }
    while ( v82 != v81 );
    v53 = (int *)(*v69 + 24LL * ((-2 - (_BYTE)v34) & 0x1F));
  }
  else
  {
    v88 = v28;
    v53 = (int *)sub_CA9380(v27, (unsigned int)v51, &ptr);
    v54 = (char)ptr;
    v28 = v88;
  }
  if ( v54 || !v53 )
  {
LABEL_41:
    sub_1169590(v26, v27, *v25);
LABEL_42:
    v40 = 0;
    goto LABEL_31;
  }
LABEL_54:
  v89 = v28;
  v55 = *v53;
  v56 = sub_1169590(v26, v27, *v25);
  LOBYTE(ptr) = 0;
  v38 = v89 + v56 - (v55 & 0x7FFFFFFF);
  v57 = (unsigned int)(-2 - v34);
  v58 = *(_QWORD *)(*(_QWORD *)(v27 + 256) + 8LL * ((unsigned int)(-2 - v34) >> 6));
  if ( _bittest64(&v58, v57) )
  {
    v59 = (_QWORD *)(*(_QWORD *)(v27 + 208) + 8 * ((unsigned __int64)(int)v57 >> 5));
    if ( *v59 )
    {
      v39 = *v59 + 24 * (v57 & 0x1F);
      goto LABEL_29;
    }
    v75 = (__int64 *)(*(_QWORD *)(v27 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v76 = *v75;
    v75[10] += 768;
    v77 = (_DWORD *)((v76 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v75[1] >= (unsigned __int64)(v77 + 192) && v76 )
    {
      *v75 = (__int64)(v77 + 192);
      v70 = 0;
    }
    else
    {
      v94 = v38;
      v77 = (_DWORD *)sub_5F8390((__int64)v75, 768, 3);
      v70 = (char)ptr;
      v38 = v94;
    }
    *v59 = v77;
    v78 = v77 + 192;
    do
    {
      *v77 = 0;
      v77 += 6;
      *((_OWORD *)v77 - 1) = 0;
    }
    while ( v78 != v77 );
    v39 = *v59 + 24 * (v57 & 0x1F);
  }
  else
  {
    v91 = v38;
    v39 = sub_CA9380(v27, (unsigned int)v57, &ptr);
    v70 = (char)ptr;
    v38 = v91;
  }
  if ( v70 )
    goto LABEL_42;
  if ( v39 )
  {
LABEL_29:
    v40 = v38 + (*(_DWORD *)v39 & 0x7FFFFFFFu);
    if ( *(char *)(v39 + 3) < 0 )
      v40 = (unsigned int)v40 | 0x80000000;
    goto LABEL_31;
  }
  v40 = 0;
LABEL_31:
  v98 = 0x2000000000LL;
  ptr = v99;
  sub_621320(v25, v26 | (unsigned __int64)(v40 << 32), (__int64)&ptr);
  if ( (_DWORD)v98 )
  {
    if ( (_DWORD)v98 != 1 )
      LODWORD(v98) = 1;
    v41 = (__m128i *)malloc(0x18u);
    v42 = v41;
    if ( !v41 )
      sub_25AA9F0("Allocation failed");
    v43 = ptr;
    v44 = ptr;
    *v41 = _mm_loadu_si128((const __m128i *)ptr);
    v41[1].m128i_i64[0] = v44[2];
  }
  else
  {
    v43 = ptr;
    v42 = nullptr;
  }
  if ( v43 != v99 )
    free(v43);
  return v42;
}

