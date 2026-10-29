__int64 __fastcall sub_3736B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  int v5; // eax
  unsigned __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __m128i v12; // xmm0
  char v13; // al
  unsigned int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  _QWORD *v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v35; // r12
  int v36; // r14d
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  int *v42; // r12
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rcx
  const void *v47; // rsi
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  size_t v51; // r13
  size_t v52; // r13
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  const void *v56; // rsi
  _QWORD *v57; // rbx
  __int64 v58; // r12
  size_t v59; // r13
  __int64 v60; // rcx
  const void *v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  size_t v65; // r13
  void *v66; // rax
  void *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r13
  __int64 v70; // rbx
  _QWORD *v71; // r12
  __int64 v72; // rdi
  __int64 v73; // rdi
  void *v74; // rax
  __m128i v75; // [rsp+0h] [rbp-168h] BYREF
  int *v76; // [rsp+10h] [rbp-158h]
  _QWORD *v77; // [rsp+18h] [rbp-150h]
  __int64 v78; // [rsp+20h] [rbp-148h]
  __int64 tinfo_size; // [rsp+28h] [rbp-140h]
  int v80; // [rsp+30h] [rbp-138h]
  int v81; // [rsp+34h] [rbp-134h]
  int *v82; // [rsp+38h] [rbp-130h]
  _BYTE v83[16]; // [rsp+40h] [rbp-128h] BYREF
  char v84; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v85; // [rsp+60h] [rbp-108h] BYREF
  __m128i v86; // [rsp+68h] [rbp-100h]
  __int64 v87; // [rsp+78h] [rbp-F0h]
  __int64 v88; // [rsp+80h] [rbp-E8h]
  __int64 v89; // [rsp+88h] [rbp-E0h]
  __int128 v90; // [rsp+90h] [rbp-D8h]
  __int64 v91; // [rsp+A0h] [rbp-C8h]
  __m128i v92; // [rsp+A8h] [rbp-C0h]
  char v93; // [rsp+B8h] [rbp-B0h]
  __int64 v94; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v95; // [rsp+C8h] [rbp-A0h]
  __int64 v96; // [rsp+D8h] [rbp-90h]
  __int64 v97; // [rsp+E0h] [rbp-88h]
  int v98; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v99; // [rsp+F8h] [rbp-70h]
  __int64 v100; // [rsp+100h] [rbp-68h]
  __int128 v101; // [rsp+108h] [rbp-60h]
  char v102; // [rsp+118h] [rbp-50h]
  unsigned __int64 v103; // [rsp+128h] [rbp-40h]

  v4 = a2;
  v78 = a1;
  v80 = a3;
  v76 = (int *)a4;
  v103 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 24);
  v86 = 0;
  v85 = nullptr;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v91 = 0;
  v93 = 16;
  v90 = 0;
  v92 = 0;
  if ( (v5 & 0x100) != 0 )
  {
    v77 = (_QWORD *)a2;
  }
  else
  {
    v77 = nullptr;
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      v77 = (_QWORD *)qalloc_or_throw(80 * v6, a2, a3, a4);
      v57 = v77;
      v58 = 0;
      v75.m128i_i64[0] = (__int64)&v85;
      do
      {
        v60 = *(_QWORD *)v4 + 80 * v58;
        *(_DWORD *)v57 = 0;
        v61 = (const void *)v60;
        v62 = v60;
        copy_argloc();
        v57[2] = 0;
        *(_OWORD *)(v57 + 3) = 0;
        v65 = *(_QWORD *)(v62 + 24);
        if ( v65 )
        {
          v66 = (void *)qalloc_or_throw(*(_QWORD *)(v62 + 24), (__int64)v61, v63, v64);
          v57[2] = v66;
          v57[4] = v65;
          v61 = *(const void **)(v62 + 16);
          memcpy(v66, v61, v65);
          v57[3] = v65;
        }
        v57[5] = 0;
        *((_OWORD *)v57 + 3) = 0;
        v59 = *(_QWORD *)(v62 + 48);
        if ( v59 )
        {
          v67 = (void *)qalloc_or_throw(*(_QWORD *)(v62 + 48), (__int64)v61, v63, v64);
          v57[5] = v67;
          v57[7] = v59;
          memcpy(v67, *(const void **)(v62 + 40), v59);
          v57[6] = v59;
        }
        v57[8] = 0;
        copy_tinfo_t();
        ++v58;
        v57 += 10;
        *((_DWORD *)v57 - 2) = *(_DWORD *)(v62 + 72);
      }
      while ( v58 != v6 );
      v68 = (__int64)v85;
      if ( v85 )
      {
        v69 = v86.m128i_i64[0];
        if ( v86.m128i_i64[0] )
        {
          v70 = 0;
          do
          {
            v71 = (_QWORD *)(v68 + 80 * v70);
            clear_tinfo_t();
            v72 = v71[5];
            if ( v72 )
            {
              v71[6] = 0;
              qfree(v72);
            }
            v73 = v71[2];
            if ( v73 )
            {
              v71[3] = 0;
              qfree(v73);
            }
            ++v70;
            cleanup_argloc();
            v68 = (__int64)v85;
          }
          while ( v69 != v70 );
        }
        v86.m128i_i64[0] = 0;
        qfree(v68);
      }
      v5 = *(_DWORD *)(v4 + 24);
    }
    LODWORD(v87) = v5;
    v7 = *(_DWORD *)(v4 + 28);
    v85 = v77;
    HIDWORD(v87) = v7;
    v86 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    copy_tinfo_t();
    a2 = v4 + 40;
    copy_argloc();
    v10 = *(_QWORD *)(v4 + 72);
    v11 = 0;
    *((_QWORD *)&v90 + 1) = *(_QWORD *)(v4 + 56);
    if ( v10 )
    {
      v74 = (void *)qalloc_or_throw(8 * v10, a2, v8, v9);
      a2 = *(_QWORD *)(v4 + 64);
      v11 = (__int64)v74;
      memcpy(v74, (const void *)a2, 8 * v10);
    }
    v12 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( v91 )
    {
      v75 = v12;
      v92.m128i_i64[0] = 0;
      qfree(v91);
      v12 = _mm_load_si128(&v75);
    }
    v91 = v11;
    v13 = *(_BYTE *)(v4 + 88);
    v92 = v12;
    v93 = v13;
    v14 = sub_369BE0((__int64)&v85);
    if ( !(_BYTE)v14 )
      goto LABEL_26;
    v77 = &v85;
  }
  v15 = *(_QWORD *)(v4 + 8);
  v94 = 0;
  v95 = 0;
  if ( v15 )
  {
    v94 = qalloc_or_throw(80 * v15, a2, a3, a4);
    v43 = v94;
    v44 = 0;
    *((_QWORD *)&v95 + 1) = v15;
    v75.m128i_i64[0] = (__int64)&v85;
    while ( 1 )
    {
      v45 = 80 * v44 + v43;
      v46 = *(_QWORD *)v4 + 80 * v44;
      *(_DWORD *)v45 = 0;
      v47 = (const void *)v46;
      v48 = v46;
      copy_argloc();
      *(_QWORD *)(v45 + 16) = 0;
      *(_OWORD *)(v45 + 24) = 0;
      v51 = *(_QWORD *)(v48 + 24);
      if ( v51 )
      {
        v54 = (void *)qalloc_or_throw(*(_QWORD *)(v48 + 24), (__int64)v47, v49, v50);
        *(_QWORD *)(v45 + 16) = v54;
        *(_QWORD *)(v45 + 32) = v51;
        v47 = *(const void **)(v48 + 16);
        memcpy(v54, v47, v51);
        *(_QWORD *)(v45 + 24) = v51;
      }
      *(_QWORD *)(v45 + 40) = 0;
      *(_OWORD *)(v45 + 48) = 0;
      v52 = *(_QWORD *)(v48 + 48);
      if ( v52 )
      {
        v53 = (void *)qalloc_or_throw(*(_QWORD *)(v48 + 48), (__int64)v47, v49, v50);
        *(_QWORD *)(v45 + 40) = v53;
        *(_QWORD *)(v45 + 56) = v52;
        memcpy(v53, *(const void **)(v48 + 40), v52);
        *(_QWORD *)(v45 + 48) = v52;
      }
      *(_QWORD *)(v45 + 64) = 0;
      copy_tinfo_t();
      ++v44;
      *(_DWORD *)(v45 + 72) = *(_DWORD *)(v48 + 72);
      if ( v15 == v44 )
        break;
      v43 = v94;
    }
    *(_QWORD *)&v95 = v15;
  }
  v16 = *(_QWORD *)(v4 + 24);
  v97 = 0;
  v96 = v16;
  copy_tinfo_t();
  v98 = 0;
  v75.m128i_i64[0] = (__int64)&v98;
  copy_argloc();
  v19 = *(_QWORD *)(v4 + 56);
  v20 = *(_QWORD *)(v4 + 72);
  v100 = 0;
  v101 = 0;
  v99 = v19;
  if ( v20 )
  {
    v55 = (void *)qalloc_or_throw(8 * v20, v4 + 40, v17, v18);
    v56 = *(const void **)(v4 + 64);
    v100 = (__int64)v55;
    *((_QWORD *)&v101 + 1) = v20;
    memcpy(v55, v56, 8 * v20);
    *(_QWORD *)&v101 = v20;
  }
  v102 = *(_BYTE *)(v4 + 88);
  v21 = 80LL * v80;
  copy_tinfo_t();
  v14 = sub_369BE0((__int64)&v94);
  if ( !(_BYTE)v14 )
    goto LABEL_14;
  v35 = v94 + v21;
  tinfo_size = get_tinfo_size();
  v76 = (int *)get_tinfo_size();
  v36 = compare_arglocs();
  if ( v36 )
    goto LABEL_14;
  v81 = (int)v76;
  if ( (int)v76 > (int)tinfo_size )
  {
    v82 = (int *)v83;
    sub_1C6010((__int64)v83, v78, v35, (unsigned int)v76);
    v37 = 0;
    v38 = *(_QWORD *)(v4 + 8) == 0;
    v76 = (int *)&v84;
    if ( v38 )
    {
LABEL_46:
      cleanup_argloc();
      goto LABEL_15;
    }
    while ( 1 )
    {
      if ( v80 != v36 )
      {
        v39 = 80 * v37 + v94;
        if ( (unsigned int)compare_arglocs() )
          goto LABEL_72;
        v40 = get_tinfo_size();
        v41 = v39;
        v42 = v76;
        tinfo_size = v40;
        sub_1C6010((__int64)v76, v78, v41, (unsigned int)v40);
        if ( (unsigned __int8)sub_1C4AE0(v42, (int)tinfo_size, v82, v81) )
        {
          cleanup_argloc();
LABEL_72:
          cleanup_argloc();
LABEL_14:
          v14 = 0;
          break;
        }
        cleanup_argloc();
      }
      v37 = ++v36;
      if ( (unsigned __int64)v36 >= *(_QWORD *)(v4 + 8) )
        goto LABEL_46;
    }
  }
LABEL_15:
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v22 = v94;
  if ( v94 )
  {
    v23 = v95;
    if ( (_QWORD)v95 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 80 * v24);
        clear_tinfo_t();
        v26 = v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        ++v24;
        cleanup_argloc();
        v22 = v94;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v95 = 0;
    qfree(v22);
  }
LABEL_26:
  if ( v91 )
  {
    v92.m128i_i64[0] = 0;
    qfree(v91);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v28 = (__int64)v85;
  if ( v85 )
  {
    v29 = v86.m128i_i64[0];
    if ( v86.m128i_i64[0] )
    {
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v28 + 80 * v30);
        clear_tinfo_t();
        v32 = v31[5];
        if ( v32 )
        {
          v31[6] = 0;
          qfree(v32);
        }
        v33 = v31[2];
        if ( v33 )
        {
          v31[3] = 0;
          qfree(v33);
        }
        ++v30;
        cleanup_argloc();
        v28 = (__int64)v85;
      }
      while ( v29 != v30 );
    }
    v86.m128i_i64[0] = 0;
    qfree(v28);
  }
  return v14;
}
