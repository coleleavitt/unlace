__int64 __fastcall sub_36E430(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // eax
  unsigned __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rbx
  void *v9; // r13
  __m128i v10; // xmm0
  char v11; // al
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  _QWORD *v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  _QWORD *v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v31; // r14
  __int64 v32; // r12
  int v33; // r14d
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdx
  int *v39; // r12
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r15
  size_t v45; // r13
  size_t v46; // r13
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  const void *v50; // rsi
  _QWORD *v51; // rbx
  __int64 v52; // r12
  size_t v53; // r13
  __int64 v54; // rcx
  __int64 v55; // r15
  size_t v56; // r13
  void *v57; // rax
  void *v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rbx
  _QWORD *v62; // r12
  __int64 v63; // rdi
  __int64 v64; // rdi
  __m128i v65; // [rsp+0h] [rbp-168h] BYREF
  int *v66; // [rsp+10h] [rbp-158h]
  _QWORD *v67; // [rsp+18h] [rbp-150h]
  __int64 v68; // [rsp+20h] [rbp-148h]
  __int64 tinfo_size; // [rsp+28h] [rbp-140h]
  int v70; // [rsp+30h] [rbp-138h]
  int v71; // [rsp+34h] [rbp-134h]
  int *v72; // [rsp+38h] [rbp-130h]
  _BYTE v73[16]; // [rsp+40h] [rbp-128h] BYREF
  char v74; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v75; // [rsp+60h] [rbp-108h] BYREF
  __m128i v76; // [rsp+68h] [rbp-100h]
  __int64 v77; // [rsp+78h] [rbp-F0h]
  __int64 v78; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v79; // [rsp+88h] [rbp-E0h] BYREF
  __int128 v80; // [rsp+90h] [rbp-D8h]
  void *v81; // [rsp+A0h] [rbp-C8h]
  __m128i v82; // [rsp+A8h] [rbp-C0h]
  char v83; // [rsp+B8h] [rbp-B0h]
  __int64 v84; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-A0h]
  __int64 v86; // [rsp+D8h] [rbp-90h]
  __int64 v87; // [rsp+E0h] [rbp-88h] BYREF
  _DWORD v88[4]; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v89; // [rsp+F8h] [rbp-70h]
  void *v90; // [rsp+100h] [rbp-68h]
  __int128 v91; // [rsp+108h] [rbp-60h]
  char v92; // [rsp+118h] [rbp-50h]
  unsigned __int64 v93; // [rsp+128h] [rbp-40h]

  v68 = a1;
  v70 = a3;
  v66 = (int *)a4;
  v93 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 24);
  v76 = 0;
  v75 = nullptr;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = nullptr;
  v83 = 16;
  v80 = 0;
  v82 = 0;
  if ( (v5 & 0x100) != 0 )
  {
    v67 = (_QWORD *)a2;
  }
  else
  {
    v67 = nullptr;
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v67 = (_QWORD *)qalloc_or_throw(80 * v6);
      v51 = v67;
      v52 = 0;
      v65.m128i_i64[0] = (__int64)&v75;
      do
      {
        v54 = *(_QWORD *)a2 + 80 * v52;
        *(_DWORD *)v51 = 0;
        v55 = v54;
        copy_argloc(v51, v54);
        v51[2] = 0;
        *(_OWORD *)(v51 + 3) = 0;
        v56 = *(_QWORD *)(v55 + 24);
        if ( v56 )
        {
          v57 = (void *)qalloc_or_throw(*(_QWORD *)(v55 + 24));
          v51[2] = v57;
          v51[4] = v56;
          memcpy(v57, *(const void **)(v55 + 16), v56);
          v51[3] = v56;
        }
        v51[5] = 0;
        *((_OWORD *)v51 + 3) = 0;
        v53 = *(_QWORD *)(v55 + 48);
        if ( v53 )
        {
          v58 = (void *)qalloc_or_throw(*(_QWORD *)(v55 + 48));
          v51[5] = v58;
          v51[7] = v53;
          memcpy(v58, *(const void **)(v55 + 40), v53);
          v51[6] = v53;
        }
        v51[8] = 0;
        copy_tinfo_t(v51 + 8, v55 + 64);
        ++v52;
        v51 += 10;
        *((_DWORD *)v51 - 2) = *(_DWORD *)(v55 + 72);
      }
      while ( v52 != v6 );
      v59 = v75;
      if ( v75 )
      {
        v60 = v76.m128i_i64[0];
        if ( v76.m128i_i64[0] )
        {
          v61 = 0;
          do
          {
            v62 = &v59[10 * v61];
            clear_tinfo_t(v62 + 8);
            v63 = v62[5];
            if ( v63 )
            {
              v62[6] = 0;
              qfree(v63);
            }
            v64 = v62[2];
            if ( v64 )
            {
              v62[3] = 0;
              qfree(v64);
            }
            ++v61;
            cleanup_argloc(v62);
            v59 = v75;
          }
          while ( v60 != v61 );
        }
        v76.m128i_i64[0] = 0;
        qfree(v59);
      }
      v5 = *(_DWORD *)(a2 + 24);
    }
    LODWORD(v77) = v5;
    v7 = *(_DWORD *)(a2 + 28);
    v75 = v67;
    HIDWORD(v77) = v7;
    v76 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    copy_tinfo_t(&v78, a2 + 32);
    copy_argloc(&v79, a2 + 40);
    v8 = *(_QWORD *)(a2 + 72);
    v9 = nullptr;
    *((_QWORD *)&v80 + 1) = *(_QWORD *)(a2 + 56);
    if ( v8 )
    {
      v9 = (void *)qalloc_or_throw(8 * v8);
      memcpy(v9, *(const void **)(a2 + 64), 8 * v8);
    }
    v10 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v81 )
    {
      v65 = v10;
      v82.m128i_i64[0] = 0;
      qfree(v81);
      v10 = _mm_load_si128(&v65);
    }
    v81 = v9;
    v11 = *(_BYTE *)(a2 + 88);
    v82 = v10;
    v83 = v11;
    v12 = sub_364960((__int64)&v75);
    if ( !(_BYTE)v12 )
      goto LABEL_26;
    v67 = &v75;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v84 = 0;
  v85 = 0;
  if ( v13 )
  {
    v84 = qalloc_or_throw(80 * v13);
    v40 = v84;
    v41 = 0;
    *((_QWORD *)&v85 + 1) = v13;
    v65.m128i_i64[0] = (__int64)&v75;
    while ( 1 )
    {
      v42 = 80 * v41 + v40;
      v43 = *(_QWORD *)a2 + 80 * v41;
      *(_DWORD *)v42 = 0;
      v44 = v43;
      copy_argloc(v42, v43);
      *(_QWORD *)(v42 + 16) = 0;
      *(_OWORD *)(v42 + 24) = 0;
      v45 = *(_QWORD *)(v44 + 24);
      if ( v45 )
      {
        v48 = (void *)qalloc_or_throw(*(_QWORD *)(v44 + 24));
        *(_QWORD *)(v42 + 16) = v48;
        *(_QWORD *)(v42 + 32) = v45;
        memcpy(v48, *(const void **)(v44 + 16), v45);
        *(_QWORD *)(v42 + 24) = v45;
      }
      *(_QWORD *)(v42 + 40) = 0;
      *(_OWORD *)(v42 + 48) = 0;
      v46 = *(_QWORD *)(v44 + 48);
      if ( v46 )
      {
        v47 = (void *)qalloc_or_throw(*(_QWORD *)(v44 + 48));
        *(_QWORD *)(v42 + 40) = v47;
        *(_QWORD *)(v42 + 56) = v46;
        memcpy(v47, *(const void **)(v44 + 40), v46);
        *(_QWORD *)(v42 + 48) = v46;
      }
      *(_QWORD *)(v42 + 64) = 0;
      copy_tinfo_t(v42 + 64, v44 + 64);
      ++v41;
      *(_DWORD *)(v42 + 72) = *(_DWORD *)(v44 + 72);
      if ( v13 == v41 )
        break;
      v40 = v84;
    }
    *(_QWORD *)&v85 = v13;
  }
  v14 = *(_QWORD *)(a2 + 24);
  v87 = 0;
  v86 = v14;
  copy_tinfo_t(&v87, a2 + 32);
  v88[0] = 0;
  v65.m128i_i64[0] = (__int64)v88;
  copy_argloc(v88, a2 + 40);
  v15 = *(_QWORD *)(a2 + 56);
  v16 = *(_QWORD *)(a2 + 72);
  v90 = nullptr;
  v91 = 0;
  v89 = v15;
  if ( v16 )
  {
    v49 = (void *)qalloc_or_throw(8 * v16);
    v50 = *(const void **)(a2 + 64);
    v90 = v49;
    *((_QWORD *)&v91 + 1) = v16;
    memcpy(v49, v50, 8 * v16);
    *(_QWORD *)&v91 = v16;
  }
  v92 = *(_BYTE *)(a2 + 88);
  v17 = 80LL * v70;
  copy_tinfo_t(v17 + v84 + 64, v66);
  v12 = sub_364960((__int64)&v84);
  if ( !(_BYTE)v12 )
    goto LABEL_14;
  v31 = v17 + *v67;
  v32 = v84 + v17;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v31 + 64), 0);
  v66 = (int *)get_tinfo_size(0, *(_QWORD *)v66, 0);
  v33 = compare_arglocs(v31, v32);
  if ( v33 )
    goto LABEL_14;
  v71 = (int)v66;
  if ( (int)v66 > (int)tinfo_size )
  {
    v72 = (int *)v73;
    sub_1C1990((__int64)v73, v68, v32, (int)v66);
    v34 = 0;
    v35 = *(_QWORD *)(a2 + 8) == 0;
    v66 = (int *)&v74;
    if ( v35 )
    {
LABEL_46:
      cleanup_argloc(v72);
      goto LABEL_15;
    }
    while ( 1 )
    {
      if ( v70 != v33 )
      {
        v36 = 80 * v34 + v84;
        if ( (unsigned int)compare_arglocs(v36, *v67 + 80 * v34) )
          goto LABEL_72;
        v37 = get_tinfo_size(0, *(_QWORD *)(v36 + 64), 0);
        v38 = v36;
        v39 = v66;
        tinfo_size = v37;
        sub_1C1990((__int64)v66, v68, v38, v37);
        if ( (unsigned __int8)sub_1C0460(v39, (int)tinfo_size, v72, v71) )
        {
          cleanup_argloc(v66);
LABEL_72:
          cleanup_argloc(v72);
LABEL_14:
          v12 = 0;
          break;
        }
        cleanup_argloc(v66);
      }
      v34 = ++v33;
      if ( (unsigned __int64)v33 >= *(_QWORD *)(a2 + 8) )
        goto LABEL_46;
    }
  }
LABEL_15:
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree(v90);
  }
  cleanup_argloc(v65.m128i_i64[0]);
  clear_tinfo_t(&v87);
  v18 = v84;
  if ( v84 )
  {
    v19 = v85;
    if ( (_QWORD)v85 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 80 * v20);
        clear_tinfo_t(v21 + 8);
        v22 = v21[5];
        if ( v22 )
        {
          v21[6] = 0;
          qfree(v22);
        }
        v23 = v21[2];
        if ( v23 )
        {
          v21[3] = 0;
          qfree(v23);
        }
        ++v20;
        cleanup_argloc(v21);
        v18 = v84;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v85 = 0;
    qfree(v18);
  }
LABEL_26:
  if ( v81 )
  {
    v82.m128i_i64[0] = 0;
    qfree(v81);
  }
  cleanup_argloc(&v79);
  clear_tinfo_t(&v78);
  v24 = v75;
  if ( v75 )
  {
    v25 = v76.m128i_i64[0];
    if ( v76.m128i_i64[0] )
    {
      v26 = 0;
      do
      {
        v27 = &v24[10 * v26];
        clear_tinfo_t(v27 + 8);
        v28 = v27[5];
        if ( v28 )
        {
          v27[6] = 0;
          qfree(v28);
        }
        v29 = v27[2];
        if ( v29 )
        {
          v27[3] = 0;
          qfree(v29);
        }
        ++v26;
        cleanup_argloc(v27);
        v24 = v75;
      }
      while ( v25 != v26 );
    }
    v76.m128i_i64[0] = 0;
    qfree(v24);
  }
  return v12;
}
