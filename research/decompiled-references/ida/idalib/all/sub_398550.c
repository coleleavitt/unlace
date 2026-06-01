unsigned __int64 __fastcall sub_398550(__int64 a1, __int64 a2, int *a3, time_t *a4, __int64 a5)
{
  size_t v7; // r15
  size_t v8; // r15
  size_t v9; // r15
  size_t v10; // r8
  bool v11; // al
  int v12; // edx
  void *v13; // r15
  char *v14; // r14
  void *v15; // r15
  char *v16; // r14
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  time_t v20; // rax
  time_t v21; // rsi
  time_t v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  unsigned __int8 v25; // al
  size_t v27; // r8
  const void *v28; // r9
  void *v29; // rdi
  _QWORD *v30; // r14
  __int64 v31; // r15
  void **v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  size_t v36; // r15
  size_t v37; // r15
  size_t v38; // r15
  signed __int64 v39; // r15
  __int64 v40; // rax
  __m128i v41; // xmm0
  char *v42; // rdx
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  char *v45; // rax
  char *v46; // r14
  char *v47; // r15
  void *v48; // rdi
  __int64 v49; // rdx
  char *v50; // rsi
  char *v51; // rax
  _BYTE *v52; // rax
  const char *v53; // rsi
  char *v54; // rdx
  __int64 v55; // r15
  __int64 v56; // r14
  char *v57; // rax
  void *v58; // rdi
  __int64 v59; // r15
  char *v60; // r14
  void *v61; // rdi
  void *v62; // rdi
  void *v63; // rdi
  const void *v64; // r14
  void *v65; // rdi
  size_t n; // [rsp+8h] [rbp-1B8h]
  void *v67; // [rsp+10h] [rbp-1B0h]
  void **v68; // [rsp+10h] [rbp-1B0h]
  void *v69; // [rsp+10h] [rbp-1B0h]
  char *v70; // [rsp+10h] [rbp-1B0h]
  char *v71; // [rsp+10h] [rbp-1B0h]
  char *v72; // [rsp+10h] [rbp-1B0h]
  void *src; // [rsp+20h] [rbp-1A0h] BYREF
  __int128 v75; // [rsp+28h] [rbp-198h]
  void *v76; // [rsp+40h] [rbp-180h] BYREF
  __int128 v77; // [rsp+48h] [rbp-178h]
  void *v78; // [rsp+60h] [rbp-160h] BYREF
  __int128 v79; // [rsp+68h] [rbp-158h]
  void *v80; // [rsp+80h] [rbp-140h] BYREF
  __int128 v81; // [rsp+88h] [rbp-138h]
  int v82; // [rsp+A2h] [rbp-11Eh]
  __int16 v83; // [rsp+A6h] [rbp-11Ah]
  int v84; // [rsp+A8h] [rbp-118h]
  __int16 v85; // [rsp+ACh] [rbp-114h]
  int v86; // [rsp+AEh] [rbp-112h]
  __int16 v87; // [rsp+B2h] [rbp-10Eh]
  int v88; // [rsp+B4h] [rbp-10Ch]
  __int16 v89; // [rsp+B8h] [rbp-108h]
  int v90; // [rsp+BAh] [rbp-106h]
  __int16 v91; // [rsp+BEh] [rbp-102h]
  void *v92; // [rsp+C0h] [rbp-100h] BYREF
  size_t v93[2]; // [rsp+C8h] [rbp-F8h]
  __int16 v94; // [rsp+D8h] [rbp-E8h]
  char v95; // [rsp+DAh] [rbp-E6h]
  char v96; // [rsp+E0h] [rbp-E0h]
  void *dest; // [rsp+E8h] [rbp-D8h] BYREF
  size_t v98[2]; // [rsp+F0h] [rbp-D0h]
  void *ptr; // [rsp+100h] [rbp-C0h] BYREF
  size_t v100[2]; // [rsp+108h] [rbp-B8h]
  int v101; // [rsp+118h] [rbp-A8h]
  __int16 v102; // [rsp+11Ch] [rbp-A4h]
  void *v103; // [rsp+120h] [rbp-A0h]
  __m128i v104; // [rsp+128h] [rbp-98h] BYREF
  __int16 v105; // [rsp+138h] [rbp-88h]
  char v106; // [rsp+13Ah] [rbp-86h]
  _BYTE v107[21]; // [rsp+13Bh] [rbp-85h] BYREF
  __m128i v108; // [rsp+150h] [rbp-70h] BYREF
  void *v109; // [rsp+160h] [rbp-60h]
  __m128i v110; // [rsp+168h] [rbp-58h] BYREF
  __int64 v111; // [rsp+178h] [rbp-48h]
  unsigned __int64 v112; // [rsp+188h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  if ( !a3[2] || a5 && (*(_BYTE *)(a5 + 20) & 1) != 0 )
    return v112 - __readfsqword(0x28u);
  v95 = 1;
  v94 = 0;
  v7 = *(_QWORD *)(a2 + 8);
  v92 = nullptr;
  v96 = 0;
  dest = nullptr;
  ptr = nullptr;
  v101 = 0;
  v102 = 0;
  *(_OWORD *)v93 = 0;
  *(_OWORD *)v98 = 0;
  *(_OWORD *)v100 = 0;
  if ( v7 > 1 )
  {
    v69 = *(void **)a2;
    v92 = (void *)qvector_reserve(&v92, 0, v7, 1);
    v93[0] = v7;
    memmove(v92, v69, v7 - 1);
    *((char *)v92 + v7 - 1) = 0;
  }
  v8 = *(_QWORD *)(a2 + 48);
  v94 = *(_WORD *)(a2 + 24);
  v95 = *(_BYTE *)(a2 + 26);
  v96 = *(_BYTE *)(a2 + 32);
  if ( !v8 || (v27 = v8 - 1, v8 == 1) )
  {
    v98[0] = 0;
  }
  else
  {
    v28 = *(const void **)(a2 + 40);
    v29 = dest;
    if ( v98[1] < v8 )
    {
      n = *(_QWORD *)(a2 + 40);
      dest = (void *)qvector_reserve(&dest, dest, v8, 1);
      v28 = (const void *)n;
      v29 = dest;
      v27 = v8 - 1;
    }
    v98[0] = v8;
    memmove(v29, v28, v27);
    *((char *)dest + v8 - 1) = 0;
  }
  v9 = *(_QWORD *)(a2 + 72);
  if ( v9 && (v10 = v9 - 1, v9 != 1) )
  {
    v64 = *(const void **)(a2 + 64);
    v65 = ptr;
    if ( v100[1] < v9 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v10 = v9 - 1;
      v65 = ptr;
    }
    v100[0] = v9;
    memmove(v65, v64, v10);
    *((char *)ptr + v9 - 1) = 0;
  }
  else
  {
    v100[0] = 0;
  }
  v101 = *a3;
  v102 = *((_WORD *)a3 + 2);
  if ( v96 )
    v11 = v93[0] > 1;
  else
    v11 = v98[0] > 1;
  if ( v11 )
  {
    v12 = v101;
    LODWORD(v103) = 0;
    WORD2(v103) = 0;
    v82 = 0;
    v83 = 0;
    v90 = 0;
    v91 = 0;
    if ( v101 || v102 )
    {
      LODWORD(v103) = 0;
      WORD2(v103) = 0;
      v86 = 0;
      v87 = 0;
      v90 = 0;
      v91 = 0;
      if ( v101 || v102 )
        goto LABEL_18;
      if ( a4 )
        goto LABEL_17;
LABEL_36:
      v20 = time(nullptr);
      v21 = *((_QWORD *)a3 + 13);
      goto LABEL_37;
    }
  }
  if ( !a4 )
    goto LABEL_36;
  LODWORD(v103) = 0;
  WORD2(v103) = 0;
  v12 = v101;
  v84 = 0;
  v85 = 0;
  v90 = 0;
  v91 = 0;
  if ( !v101 && !v102 )
    goto LABEL_129;
  if ( !v11 || (LODWORD(v103) = 0, WORD2(v103) = 0, v86 = 0, v87 = 0, v90 = 0, v91 = 0, !v101) && !v102 )
  {
LABEL_17:
    LODWORD(v103) = 0;
    WORD2(v103) = 0;
    v90 = 0;
    v91 = 0;
    v88 = 0;
    v89 = 0;
    if ( !v12 && !v102 )
    {
LABEL_129:
      v20 = time(nullptr);
      v21 = *((_QWORD *)a3 + 13);
      goto LABEL_31;
    }
  }
LABEL_18:
  src = nullptr;
  v75 = 0;
  sub_397490((char **)&src);
  v13 = (void *)v75;
  if ( (_QWORD)v75 )
  {
    v14 = (char *)src;
    if ( sub_395AF0((__int64)src, (__int64)&v92) )
    {
      v67 = v13;
      if ( !v14 )
        goto LABEL_30;
      goto LABEL_21;
    }
  }
  if ( (debug & 0x200) != 0 )
  {
    v78 = nullptr;
    v79 = 0;
    sub_35A790((char **)&v78);
    sub_8AE2F0(&v80, &v92);
    sub_3879F0();
  }
  v30 = src;
  v31 = 96LL * (_QWORD)v13;
  v68 = (void **)((char *)src + v31);
  if ( src != (char *)src + v31 )
  {
    v32 = (void **)src;
    while ( !sub_395AF0((__int64)&v92, (__int64)v32) )
    {
      v32 += 12;
      if ( v68 == v32 )
        goto LABEL_75;
    }
    if ( v68 != v32 )
    {
      v33 = v32[8];
      if ( v33 )
      {
        v32[9] = nullptr;
        qfree(v33);
      }
      v34 = v32[5];
      if ( v34 )
      {
        v32[6] = nullptr;
        qfree(v34);
      }
      v35 = *v32;
      if ( *v32 )
      {
        v32[1] = nullptr;
        qfree(v35);
      }
      memmove(v32, v32 + 12, (_BYTE *)src + 96 * v75 - (_BYTE *)v32 - 96);
      *(_QWORD *)&v75 = v75 - 1;
      v30 = src;
    }
  }
LABEL_75:
  v36 = v93[0];
  v103 = nullptr;
  v104 = 0;
  if ( v93[0] )
  {
    v103 = (void *)qalloc_or_throw(v93[0]);
    v104.m128i_i64[1] = v36;
    memcpy(v103, v92, v36);
    v104.m128i_i64[0] = v36;
  }
  v37 = v98[0];
  *(_QWORD *)&v107[13] = 0;
  v108 = 0;
  v105 = v94;
  v106 = v95;
  v107[5] = v96;
  if ( v98[0] )
  {
    *(_QWORD *)&v107[13] = qalloc_or_throw(v98[0]);
    v108.m128i_i64[1] = v37;
    memcpy(*(void **)&v107[13], dest, v37);
    v108.m128i_i64[0] = v37;
  }
  v38 = v100[0];
  v109 = nullptr;
  v110 = 0;
  if ( v100[0] )
  {
    v109 = (void *)qalloc_or_throw(v100[0]);
    v110.m128i_i64[1] = v38;
    memcpy(v109, ptr, v38);
    v110.m128i_i64[0] = v38;
  }
  LODWORD(v111) = v101;
  v39 = (char *)v30 - (_BYTE *)src;
  WORD2(v111) = v102;
  v40 = v75;
  if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
  {
    src = (void *)qvector_reserve(&src, src, v75 + 1, 96);
    v30 = (char *)src + v39;
    v40 = v75;
  }
  memmove(v30 + 12, v30, 96 * v40 - v39);
  v41 = _mm_loadu_si128(&v104);
  *v30 = v103;
  *(__m128i *)(v30 + 1) = v41;
  v42 = (char *)v75;
  *((_WORD *)v30 + 12) = v105;
  *((_BYTE *)v30 + 26) = v106;
  *((_BYTE *)v30 + 32) = v107[5];
  v43 = _mm_load_si128(&v108);
  v30[5] = *(_QWORD *)&v107[13];
  *((__m128i *)v30 + 3) = v43;
  v44 = _mm_loadu_si128(&v110);
  v30[8] = v109;
  *(__m128i *)(v30 + 9) = v44;
  *((_DWORD *)v30 + 22) = v111;
  *((_WORD *)v30 + 46) = WORD2(v111);
  v45 = v42 + 1;
  *(_QWORD *)&v75 = v42 + 1;
  if ( (unsigned __int64)(v42 + 1) > 0xA )
  {
    v111 = 0;
    v59 = 10;
    memset(v107, 0, sizeof(v107));
    v103 = nullptr;
    v105 = 0;
    v106 = 1;
    v109 = nullptr;
    v104 = 0;
    v108 = 0;
    v110 = 0;
    while ( 1 )
    {
      v60 = (char *)src + 96 * v59;
      v61 = *((void **)v60 + 8);
      if ( v61 )
      {
        *((_QWORD *)v60 + 9) = 0;
        v70 = v42;
        qfree(v61);
        v42 = v70;
      }
      v62 = *((void **)v60 + 5);
      if ( v62 )
      {
        *((_QWORD *)v60 + 6) = 0;
        v71 = v42;
        qfree(v62);
        v42 = v71;
      }
      v63 = *(void **)v60;
      if ( *(_QWORD *)v60 )
      {
        *((_QWORD *)v60 + 1) = 0;
        v72 = v42;
        qfree(v63);
        v42 = v72;
      }
      if ( v42 == (char *)v59 )
        break;
      ++v59;
    }
    *(_QWORD *)&v75 = 10;
    if ( v109 )
    {
      v110.m128i_i64[0] = 0;
      qfree(v109);
    }
    if ( *(_QWORD *)&v107[13] )
    {
      v108.m128i_i64[0] = 0;
      qfree(*(void **)&v107[13]);
    }
    if ( v103 )
    {
      v104.m128i_i64[0] = 0;
      qfree(v103);
    }
    v45 = (char *)v75;
  }
  v46 = (char *)src + 96 * (_QWORD)v45;
  v47 = (char *)src;
  v76 = nullptr;
  v77 = 0;
  if ( src != v46 )
  {
    do
    {
      v80 = nullptr;
      v81 = 0;
      if ( (unsigned __int8)sub_3966E0((__int64)v47, (__int64)&v80) )
      {
        v49 = v77;
        v50 = (char *)v76;
        if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
        {
          v76 = (void *)qvector_reserve(&v76, v76, v77 + 1, 24);
          v49 = v77;
          v50 = (char *)v76;
        }
        v51 = &v50[24 * v49];
        *(_QWORD *)v51 = 0;
        *(_OWORD *)(v51 + 8) = 0;
        *(_QWORD *)&v77 = v77 + 1;
        v48 = *(void **)v51;
        *(_QWORD *)v51 = v80;
        *(_OWORD *)(v51 + 8) = v81;
        v80 = v48;
        *((_QWORD *)&v81 + 1) = 0;
      }
      else
      {
        v48 = v80;
      }
      if ( v48 )
      {
        *(_QWORD *)&v81 = 0;
        qfree(v48);
      }
      v47 += 96;
    }
    while ( v46 != v47 );
  }
  v79 = 0;
  v78 = nullptr;
  v80 = nullptr;
  v81 = 0;
  v52 = (_BYTE *)qvector_reserve(&v80, 0, 4, 1);
  v80 = v52;
  *(_QWORD *)&v81 = 4;
  *(_WORD *)v52 = 11833;
  v52[2] = 51;
  *((_BYTE *)v80 + 3) = 0;
  sub_35A790((char **)&v78);
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  v53 = haystack;
  if ( (_QWORD)v79 )
    v53 = (const char *)v78;
  reg_write_strlist(&v76, v53);
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  v54 = (char *)v76;
  if ( v76 )
  {
    v55 = v77;
    if ( (_QWORD)v77 )
    {
      v56 = 0;
      do
      {
        v57 = &v54[24 * v56];
        v58 = *(void **)v57;
        if ( *(_QWORD *)v57 )
        {
          *((_QWORD *)v57 + 1) = 0;
          qfree(v58);
          v54 = (char *)v76;
        }
        ++v56;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v77 = 0;
    qfree(v54);
  }
  v14 = (char *)src;
  if ( src )
  {
    v67 = (void *)v75;
    if ( !(_QWORD)v75 )
    {
LABEL_29:
      *(_QWORD *)&v75 = 0;
      qfree(v14);
      goto LABEL_30;
    }
LABEL_21:
    v15 = nullptr;
    do
    {
      v16 = &v14[96 * (_QWORD)v15];
      v17 = *((void **)v16 + 8);
      if ( v17 )
      {
        *((_QWORD *)v16 + 9) = 0;
        qfree(v17);
      }
      v18 = *((void **)v16 + 5);
      if ( v18 )
      {
        *((_QWORD *)v16 + 6) = 0;
        qfree(v18);
      }
      v19 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        *((_QWORD *)v16 + 1) = 0;
        qfree(v19);
      }
      v15 = (char *)v15 + 1;
      v14 = (char *)src;
    }
    while ( v15 != v67 );
    goto LABEL_29;
  }
LABEL_30:
  v20 = time(nullptr);
  v21 = *((_QWORD *)a3 + 13);
  if ( !a4 )
  {
LABEL_37:
    v22 = *((_QWORD *)a3 + 14);
    goto LABEL_38;
  }
LABEL_31:
  v22 = *a4;
LABEL_38:
  if ( v21 <= v20 || (v23 = 0, v21 == -1) )
  {
    v23 = 1;
    if ( v22 )
    {
      if ( v22 - 2592000 <= v20 )
      {
        v23 = 2;
        if ( v22 - 1296000 <= v20 )
        {
          v23 = 3;
          if ( v22 <= v20 )
          {
            v23 = 4;
            if ( v22 + 1296000 <= v20 )
              v23 = (v22 + 2592000 <= v20) + 5;
          }
        }
      }
    }
  }
  v24 = a1;
  if ( *(_BYTE *)(a1 + 36) || (v24 = a1, *(_DWORD *)(a1 + 32) == 6) )
  {
    *(_DWORD *)(v24 + 32) = v23;
    *(_WORD *)(v24 + 36) = 0;
  }
  else
  {
    v25 = *(_BYTE *)(a1 + 37);
    *(_DWORD *)(a1 + 32) = v23;
    *(_WORD *)(a1 + 36) = 0;
    if ( ((v23 == 6) & (v25 ^ 1)) != 0 )
    {
      byte_2CCB590 = 1;
      hook_event_listener(3, a1 + 8, 0, 0);
    }
  }
  if ( ptr )
  {
    v100[0] = 0;
    qfree(ptr);
  }
  if ( dest )
  {
    v98[0] = 0;
    qfree(dest);
  }
  if ( v92 )
  {
    v93[0] = 0;
    qfree(v92);
  }
  return v112 - __readfsqword(0x28u);
}
