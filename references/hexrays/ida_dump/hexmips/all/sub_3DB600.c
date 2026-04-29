__int64 __fastcall sub_3DB600(double a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // rsi
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // r14
  void *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  int *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  _QWORD *v42; // r12
  __int64 v43; // rsi
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int64 v46; // rbp
  __int64 v47; // r14
  __int64 v48; // r10
  __int64 v49; // rax
  int v50; // edx
  _DWORD *v51; // rsi
  int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // rdi
  _DWORD *v55; // rax
  _DWORD *v56; // rsi
  int v57; // r13d
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rax
  _DWORD *v63; // rsi
  int v64; // ebp
  __int64 v65; // rax
  int *v66; // r12
  __int64 v67; // r12
  __int64 v68; // r13
  __int128 v69; // xmm0
  __int64 v70; // r12
  __int64 v71; // rax
  void *v72; // rax
  _QWORD *v73; // r10
  __int64 v74; // r13
  __int64 v75; // r8
  __int64 v76; // r11
  unsigned __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // r13
  unsigned __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // r12
  __int64 v84; // rax
  size_t na; // [rsp+8h] [rbp-1F0h]
  size_t nb; // [rsp+8h] [rbp-1F0h]
  size_t n; // [rsp+8h] [rbp-1F0h]
  size_t nc; // [rsp+8h] [rbp-1F0h]
  size_t nd; // [rsp+8h] [rbp-1F0h]
  const void **v90; // [rsp+10h] [rbp-1E8h]
  _QWORD *v92; // [rsp+28h] [rbp-1D0h]
  __int64 v93; // [rsp+30h] [rbp-1C8h]
  __int64 v94; // [rsp+38h] [rbp-1C0h]
  __int64 v95; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v96; // [rsp+48h] [rbp-1B0h]
  void *src; // [rsp+60h] [rbp-198h] BYREF
  __int128 v98; // [rsp+68h] [rbp-190h]
  _QWORD v99[5]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v100; // [rsp+A8h] [rbp-150h]
  __int128 v101; // [rsp+B8h] [rbp-140h]
  __int64 (__fastcall **v102)(); // [rsp+D0h] [rbp-128h] BYREF
  __int64 v103; // [rsp+D8h] [rbp-120h]
  __int128 v104; // [rsp+E0h] [rbp-118h]
  __int64 v105; // [rsp+F0h] [rbp-108h]
  const char *v106; // [rsp+F8h] [rbp-100h]
  int v107; // [rsp+100h] [rbp-F8h]
  __m128i v108; // [rsp+108h] [rbp-F0h]
  int v109; // [rsp+118h] [rbp-E0h]
  _BYTE v110[96]; // [rsp+120h] [rbp-D8h] BYREF
  int v111; // [rsp+180h] [rbp-78h] BYREF
  __int64 v112; // [rsp+188h] [rbp-70h]
  __int128 v113; // [rsp+190h] [rbp-68h]
  void *v114; // [rsp+1A0h] [rbp-58h]
  __int128 v115; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v116; // [rsp+1B8h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a6 + 64);
  if ( !v7 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v7 + 60) - 1) > 1 )
    return 0;
  v8 = sub_3CDC20(v7, *(unsigned int *)(a7 + 20), a1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_QWORD *)(v8 + 376);
  if ( !(_DWORD)v10 )
    return 0;
  v95 = 0;
  v11 = *(_DWORD *)(v9 + 76);
  src = nullptr;
  v96 = 0;
  v98 = 0;
  if ( v11 == 4 )
  {
    v95 = qvector_reserve(&v95, 0, 1, 24);
    v54 = v95 + 24 * v96;
    *(_QWORD *)v54 = 0;
    *(_OWORD *)(v54 + 8) = 0;
    v55 = *(_DWORD **)(v9 + 368);
    *(_QWORD *)&v96 = v96 + 1;
    sub_67670((__int64 *)v54, (__int64)"Block %d (false)", *v55);
    v56 = src;
    v57 = **(_DWORD **)(v9 + 368);
    v58 = v98;
    LODWORD(v99[0]) = v57;
    if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
    {
      src = (void *)qvector_reserve(&src, src, v98 + 1, 4);
      v56 = src;
      v58 = v98;
    }
    v56[v58] = v57;
    v59 = v96;
    *(_QWORD *)&v98 = v98 + 1;
    v60 = v95;
    if ( *((_QWORD *)&v96 + 1) < (unsigned __int64)(v96 + 1) )
    {
      v95 = qvector_reserve(&v95, v95, v96 + 1, 24);
      v59 = v96;
      v60 = v95;
    }
    v61 = v60 + 24 * v59;
    *(_QWORD *)v61 = 0;
    *(_OWORD *)(v61 + 8) = 0;
    v62 = *(_QWORD *)(v9 + 368);
    *(_QWORD *)&v96 = v96 + 1;
    sub_67670((__int64 *)v61, (__int64)"Block %d (true)", *(_DWORD *)(v62 + 4));
    v63 = src;
    v64 = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4LL);
    v65 = v98;
    LODWORD(v99[0]) = v64;
    if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
    {
      src = (void *)qvector_reserve(&src, src, v98 + 1, 4);
      v63 = src;
      v65 = v98;
    }
    v63[v65] = v64;
    v23 = v96;
    *(_QWORD *)&v98 = v98 + 1;
LABEL_61:
    if ( !v23 )
    {
LABEL_33:
      if ( src )
      {
        *(_QWORD *)&v98 = 0;
        qfree(src);
      }
      goto LABEL_35;
    }
    v105 = 0;
    v102 = (__int64 (__fastcall **)())&unk_4CBCC8;
    v66 = (int *)v110;
    v35 = &v111;
    v103 = 0x3FF000004LL;
    v106 = "Select target block";
    v104 = -1;
    v107 = 1;
    v109 = -1;
    v108 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C9E78), (__m128i)(unsigned __int64)&off_4C9D48);
    do
    {
      *(_QWORD *)v66 = 0;
      v66 += 6;
      *((_OWORD *)v66 - 1) = 0;
    }
    while ( v66 != &v111 );
    v111 = 0;
    v25 = ((HIDWORD(v103) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v103) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v103) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, v25, HIDWORD(v103), v18, v19);
        goto LABEL_90;
      }
      BYTE3(v103) = ((HIDWORD(v103) >> 19) & 0x3F) - 1;
      HIDWORD(v103) &= 0xFE07FFFF;
    }
    v112 = 0;
    v102 = off_4C9B60;
    v113 = 0;
    v112 = qalloc_or_throw(24 * v23);
    v67 = v112;
    v68 = 0;
    v69 = 0;
    *((_QWORD *)&v113 + 1) = v23;
    while ( 1 )
    {
      v70 = 24 * v68 + v67;
      v71 = v95 + 24 * v68;
      *(_OWORD *)(v70 + 8) = v69;
      *(_QWORD *)v70 = 0;
      if ( *(_QWORD *)(v71 + 8) )
      {
        v90 = (const void **)v71;
        na = *(_QWORD *)(v71 + 8);
        v72 = (void *)qalloc_or_throw(na);
        *(_QWORD *)v70 = v72;
        *(_QWORD *)(v70 + 16) = na;
        v25 = (__int64)*v90;
        memcpy(v72, *v90, na);
        v69 = 0;
        *(_QWORD *)(v70 + 8) = na;
      }
      if ( v23 == ++v68 )
        break;
      v67 = v112;
    }
    v83 = v98;
    *(_QWORD *)&v113 = v23;
    v114 = nullptr;
    v115 = 0;
    if ( (_QWORD)v98 )
    {
      v24 = (void *)qalloc_or_throw(4 * v98);
      v25 = (__int64)src;
      v114 = v24;
      *((_QWORD *)&v115 + 1) = v83;
      memcpy(v24, src, 4 * v83);
      *(_QWORD *)&v115 = v83;
      if ( (_QWORD)v113 == v83 )
      {
        v99[0] = 0;
        v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                16,
                0,
                &v102,
                v99,
                &callui,
                v26);
        if ( v27 >= 0 && v27 < (unsigned __int64)v98 )
        {
          v28 = *((_DWORD *)src + v27);
          v99[0] = off_4C97D0;
          *(_QWORD *)((char *)&v99[3] + 4) = 0x4900000000LL;
          *(_QWORD *)((char *)&v99[1] + 4) = 3;
          *(_QWORD *)((char *)&v99[2] + 4) = 0;
          v100 = -1;
          v101 = -1;
          if ( (unsigned __int8)sub_3D0410(a6, v99, v7, v28, 0, NAN) )
            sub_3DAF80(a6, v99, 4u, *(_DWORD *)(a6 + 56), NAN, COERCE_DOUBLE(&off_4C9D48), a3, a4);
        }
        v102 = off_4C9B60;
        if ( v114 )
        {
          *(_QWORD *)&v115 = 0;
          qfree(v114);
        }
        v29 = v112;
        if ( v112 )
        {
          v30 = v113;
          if ( (_QWORD)v113 )
          {
            v31 = 0;
            do
            {
              v32 = (__int64 *)(v29 + 24 * v31);
              v33 = *v32;
              if ( *v32 )
              {
                v32[1] = 0;
                qfree(v33);
                v29 = v112;
              }
              ++v31;
            }
            while ( v30 != v31 );
          }
          *(_QWORD *)&v113 = 0;
          qfree(v29);
        }
        v102 = (__int64 (__fastcall **)())&unk_4CBCC8;
        do
        {
          v34 = *((_QWORD *)v35 - 3);
          v35 -= 6;
          if ( v34 )
          {
            *((_QWORD *)v35 + 1) = 0;
            qfree(v34);
          }
        }
        while ( v35 != (int *)v110 );
        goto LABEL_33;
      }
    }
    if ( !under_debugger )
      sub_37E160(0, v25, 0.0);
LABEL_90:
    BUG();
  }
  if ( v11 == 5 )
  {
    v42 = *(_QWORD **)(*(_QWORD *)(v9 + 56) + 56LL);
    if ( !v42[4] )
      goto LABEL_35;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    while ( 1 )
    {
      if ( v44 < v45 + 1 )
      {
        v95 = qvector_reserve(&v95, v43, v45 + 1, 24);
        v45 = v96;
        v43 = v95;
      }
      v47 = v43 + 24 * v45;
      *(_QWORD *)v47 = 0;
      *(_OWORD *)(v47 + 8) = 0;
      *(_QWORD *)&v96 = v96 + 1;
      v48 = *v42 + 24 * v46;
      v49 = *(_QWORD *)(v48 + 8);
      v50 = *(_DWORD *)(v42[3] + 4 * v46);
      if ( v49 )
      {
        if ( v49 == 1 )
        {
          sub_67670((__int64 *)v47, (__int64)"Block %d (case %lld)", v50, **(_QWORD **)v48);
          goto LABEL_48;
        }
        nb = *v42 + 24 * v46;
        sub_67670((__int64 *)v47, (__int64)"Block %d (cases ", v50);
        v73 = (_QWORD *)nb;
        v74 = 0;
        if ( *(_QWORD *)(nb + 8) )
        {
          while ( 1 )
          {
            n = (size_t)v73;
            sub_F68D0((__int64 *)v47, (__int64)"%lld", *(_QWORD *)(*v73 + 8 * v74));
            v73 = (_QWORD *)n;
            if ( (unsigned __int64)++v74 >= *(_QWORD *)(n + 8) )
              break;
            v75 = *(_QWORD *)(v47 + 8);
            if ( v75 )
            {
              v76 = v75 + 1;
              v77 = v75 + 2;
              v78 = *(_QWORD *)v47;
              --v75;
              if ( *(_QWORD *)(v47 + 16) >= v77 )
                goto LABEL_77;
            }
            else
            {
              v78 = *(_QWORD *)v47;
              v77 = 3;
              v76 = 2;
              if ( *(_QWORD *)(v47 + 16) >= 3u )
                goto LABEL_77;
            }
            v94 = v76;
            v93 = v75;
            v92 = (_QWORD *)n;
            nc = v77;
            v79 = qvector_reserve(v47, v78, v77, 1);
            v76 = v94;
            v75 = v93;
            *(_QWORD *)v47 = v79;
            v78 = v79;
            v73 = v92;
            v77 = nc;
LABEL_77:
            *(_QWORD *)(v47 + 8) = v77;
            *(_BYTE *)(v78 + v76) = 0;
            *(_WORD *)(*(_QWORD *)v47 + v75) = 8236;
          }
        }
        v80 = *(_QWORD *)(v47 + 8);
        v81 = 2;
        if ( v80 )
          v81 = v80-- + 1;
        v82 = *(_QWORD *)v47;
        if ( *(_QWORD *)(v47 + 16) < v81 )
        {
          nd = v81;
          v84 = qvector_reserve(v47, v82, v81, 1);
          *(_QWORD *)v47 = v84;
          v81 = nd;
          v82 = v84;
        }
        *(_QWORD *)(v47 + 8) = v81;
        *(_BYTE *)(v82 + v80) = 41;
        *(_BYTE *)(*(_QWORD *)v47 + v80 + 1) = 0;
      }
      else
      {
        sub_67670((__int64 *)v47, (__int64)"Block %d (default)", v50);
      }
LABEL_48:
      v18 = 4 * v46;
      v51 = src;
      v52 = *(_DWORD *)(v42[3] + 4 * v46);
      v53 = v98;
      if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
      {
        src = (void *)qvector_reserve(&src, src, v98 + 1, 4);
        v51 = src;
        v53 = v98;
      }
      v51[v53] = v52;
      v45 = v96;
      ++v46;
      *(_QWORD *)&v98 = v98 + 1;
      v23 = v96;
      if ( v46 >= v42[4] )
        goto LABEL_61;
      v44 = *((_QWORD *)&v96 + 1);
      v43 = v95;
    }
  }
  if ( (int)v10 > 0 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 < v15 + 1 )
      {
        v95 = qvector_reserve(&v95, v13, v15 + 1, 24);
        v15 = v96;
        v13 = v95;
      }
      v16 = v13 + 24 * v15;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      v17 = *(_QWORD *)(v9 + 368);
      *(_QWORD *)&v96 = v96 + 1;
      sub_67670((__int64 *)v16, (__int64)"Block %d", *(_DWORD *)(v17 + 4 * v12));
      v20 = src;
      v21 = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4 * v12);
      v22 = v98;
      LODWORD(v99[0]) = v21;
      if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
      {
        src = (void *)qvector_reserve(&src, src, v98 + 1, 4);
        v20 = src;
        v22 = v98;
      }
      v20[v22] = v21;
      v15 = v96;
      ++v12;
      *(_QWORD *)&v98 = v98 + 1;
      v23 = v96;
      if ( *(_DWORD *)(v9 + 376) <= (int)v12 )
        break;
      v14 = *((_QWORD *)&v96 + 1);
      v13 = v95;
    }
    goto LABEL_61;
  }
LABEL_35:
  v36 = v95;
  if ( v95 )
  {
    v37 = v96;
    if ( (_QWORD)v96 )
    {
      v38 = 0;
      do
      {
        v39 = (__int64 *)(v36 + 24 * v38);
        v40 = *v39;
        if ( *v39 )
        {
          v39[1] = 0;
          qfree(v40);
          v36 = v95;
        }
        ++v38;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v96 = 0;
    qfree(v36);
  }
  return 0;
}
