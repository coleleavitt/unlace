void __fastcall sub_17204D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // ebx
  unsigned int v20; // ebp
  __int64 v21; // r14
  int v22; // r15d
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rdi
  int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  char v33; // r8
  _QWORD *v34; // rdx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rbp
  unsigned __int64 v38; // rax
  unsigned int v39; // r13d
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 v43; // r14
  __int64 *v44; // rax
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rbx
  char *v52; // r14
  __int64 v53; // rax
  signed __int64 v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // r15
  __m128i v57; // xmm0
  _BYTE *v58; // rax
  _BYTE *v59; // rsi
  signed __int64 v60; // r12
  _QWORD *v61; // r15
  _QWORD *v62; // rbx
  _QWORD *v63; // rdi
  _QWORD *v64; // r15
  _QWORD *v65; // rbx
  _QWORD *v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 *v69; // rsi
  __int64 v70; // r8
  __int64 *v71; // rcx
  __int64 *v72; // rdx
  __int64 *v73; // rcx
  __int64 *v74; // rax
  __int64 *v75; // rdx
  int v76; // edx
  __int64 v77; // rsi
  int v78; // [rsp+8h] [rbp-1F0h]
  __m128i src; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v80; // [rsp+20h] [rbp-1D8h]
  __int64 *v81; // [rsp+28h] [rbp-1D0h]
  __m128 *v82; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v83; // [rsp+38h] [rbp-1C0h]
  _QWORD *v84; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v85; // [rsp+48h] [rbp-1B0h]
  unsigned int v86; // [rsp+50h] [rbp-1A8h]
  unsigned int v87; // [rsp+54h] [rbp-1A4h]
  __int64 v88; // [rsp+58h] [rbp-1A0h]
  __m128 v89; // [rsp+60h] [rbp-198h] BYREF
  int v90; // [rsp+70h] [rbp-188h]
  _BYTE v91[12]; // [rsp+74h] [rbp-184h]
  int v92; // [rsp+80h] [rbp-178h]
  void *v93[2]; // [rsp+88h] [rbp-170h]
  __int64 v94; // [rsp+98h] [rbp-160h]
  char v95; // [rsp+A0h] [rbp-158h]
  __int64 v96; // [rsp+A8h] [rbp-150h]
  __int64 v97; // [rsp+B0h] [rbp-148h]
  __int64 v98; // [rsp+B8h] [rbp-140h]
  __m128 v99; // [rsp+C0h] [rbp-138h] BYREF
  int v100; // [rsp+D0h] [rbp-128h]
  unsigned int v101; // [rsp+D4h] [rbp-124h]
  __int64 v102; // [rsp+D8h] [rbp-120h]
  int v103; // [rsp+E0h] [rbp-118h]
  void *v104[2]; // [rsp+E8h] [rbp-110h]
  char *v105; // [rsp+F8h] [rbp-100h]
  char v106; // [rsp+100h] [rbp-F8h]
  __int64 v107; // [rsp+108h] [rbp-F0h]
  __int64 v108; // [rsp+110h] [rbp-E8h]
  __int64 v109; // [rsp+118h] [rbp-E0h]
  void *ptr[2]; // [rsp+120h] [rbp-D8h] BYREF
  int v111; // [rsp+130h] [rbp-C8h]
  char v112; // [rsp+134h] [rbp-C4h]
  char v113; // [rsp+138h] [rbp-C0h] BYREF

  v81 = a1;
  v80 = a3;
  if ( a2
    && (v10 = sub_1E5F010(a2, 0) & 0xFFFFFFFFFFFFFFF0LL) != 0
    && ((v16 = *(_QWORD *)v10,
         v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 35,
         (unsigned int)v17 <= 1)
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
     && (v16 = sub_F63050(v16, 0, v17, v11)) != 0) )
  {
    v13 = sub_9C7D40(v16, 0, v17, v11, v12);
  }
  else
  {
    v13 = 0;
  }
  v88 = a7 + 232;
  v14 = operator new(0x28u);
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 32) = 0;
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v14,
    (std::__detail::_List_node_base *)(a7 + 232));
  ++*(_QWORD *)(a7 + 248);
  if ( a6 )
  {
    v67 = sub_1713960((__int64)v81, 0, v80, a4, a7);
    if ( v67 )
    {
      v68 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v67 + 32LL))(v67);
      if ( !*(_BYTE *)(a7 + 44) )
        goto LABEL_87;
      v69 = *(__int64 **)(a7 + 24);
      v70 = *(unsigned int *)(a7 + 36);
      v71 = &v69[v70];
      if ( v69 != v71 )
      {
        v72 = *(__int64 **)(a7 + 24);
        if ( v68 == *v69 )
          goto LABEL_104;
        while ( v71 != ++v72 )
        {
          if ( v68 == *v72 )
            goto LABEL_104;
        }
      }
      if ( (unsigned int)v70 < *(_DWORD *)(a7 + 32) )
      {
        *(_DWORD *)(a7 + 36) = v70 + 1;
        *v71 = v68;
        v69 = *(__int64 **)(a7 + 24);
        v72 = &v69[v70];
      }
      else
      {
LABEL_87:
        v72 = (__int64 *)sub_2236760(a7 + 24, v68);
        v69 = *(__int64 **)(a7 + 24);
        if ( !*(_BYTE *)(a7 + 44) )
        {
          v73 = &v69[*(unsigned int *)(a7 + 32)];
LABEL_89:
          if ( v73 != v72 && (unsigned __int64)*v72 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v74 = v72 + 1;
            do
            {
              v75 = v74;
              if ( v73 == v74 )
                break;
              ++v74;
            }
            while ( (unsigned __int64)*v75 >= 0xFFFFFFFFFFFFFFFELL );
          }
          goto LABEL_5;
        }
      }
LABEL_104:
      v73 = &v69[*(unsigned int *)(a7 + 36)];
      goto LABEL_89;
    }
  }
LABEL_5:
  v15 = sub_15F1670((__int64)v81);
  if ( v15 )
    *(_QWORD *)(a7 + 296) = *(_QWORD *)(v15 + 40);
  ptr[1] = &word_10;
  ptr[0] = &v113;
  v111 = 0;
  v112 = 1;
  if ( v13 )
  {
    sub_1714F30(v13, 0, 0, v80, a4, v81[68], (__int64)ptr, a5, (_QWORD *)a7, 1u, 0);
    goto LABEL_9;
  }
  v18 = v81[69];
  if ( !v18 )
    goto LABEL_22;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
  if ( !v19 )
    goto LABEL_22;
  v20 = 0;
  v78 = a4;
  do
  {
    while ( 1 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v81[69] + 24LL))(v81[69], v20);
      v26 = v25;
      if ( v25 )
      {
        v27 = v81[92];
        v28 = *(_DWORD *)(v27 + 80);
        if ( !v28 )
          goto LABEL_20;
        v21 = *(_QWORD *)(v27 + 64);
        v22 = v28 - 1;
        v23 = v22 & sub_FDE780(v25);
        v24 = *(_QWORD *)(v21 + 40LL * v23);
        if ( v26 != v24 )
          break;
      }
LABEL_17:
      if ( v19 == ++v20 )
        goto LABEL_21;
    }
    if ( v24 != -1 )
    {
      v76 = 1;
      do
      {
        v23 = v22 & (v76 + v23);
        v77 = *(_QWORD *)(v21 + 40LL * v23);
        if ( v26 == v77 )
          goto LABEL_17;
        ++v76;
      }
      while ( v77 != -1 );
    }
    v27 = v81[92];
LABEL_20:
    ++v20;
    sub_18953D0(v27, v26);
  }
  while ( v19 != v20 );
LABEL_21:
  LODWORD(a4) = v78;
LABEL_22:
  v29 = v81[92];
  v30 = *(unsigned int *)(v29 + 80);
  v31 = *(_QWORD **)(v29 + 64);
  v32 = &v31[5 * v30];
  if ( *(_DWORD *)(v29 + 72) )
  {
    v33 = 0;
    v34 = &v31[5 * v30];
  }
  else
  {
    v33 = 1;
    v34 = &v31[5 * v30];
    v31 = v32;
  }
  sub_171EC50(&v99, v31, v34, v29 + 64, v33);
  v83 = v99.m128_u64[1];
  v35 = (_QWORD *)v99.m128_u64[0];
  v36 = v81[92];
  sub_171EC50(
    &v99,
    (_QWORD *)(*(_QWORD *)(v36 + 64) + 40LL * *(unsigned int *)(v36 + 80)),
    (_QWORD *)(*(_QWORD *)(v36 + 64) + 40LL * *(unsigned int *)(v36 + 80)),
    v36 + 64,
    1);
  v85 = v99.m128_u64[0];
  if ( v35 != (_QWORD *)v99.m128_u64[0] )
  {
    v87 = a4;
    v82 = &v89;
    v86 = a4 - 1;
    while ( 1 )
    {
      v37 = v35 + 3;
      if ( v35 != (_QWORD *)-24LL )
      {
        v38 = v35[3] & 0xFFFFFFFFFFFFFFF8LL;
        if ( v38 )
          break;
      }
LABEL_38:
      if ( v35 + 5 != (_QWORD *)v83 )
      {
        if ( v35[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v35 += 5;
          goto LABEL_44;
        }
        v45 = v35 + 10;
        while ( 1 )
        {
          v35 = v45;
          if ( v45 == (_QWORD *)v83 )
            break;
          v45 += 5;
          if ( *v35 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_44;
        }
      }
      v35 = (_QWORD *)v83;
LABEL_44:
      if ( v35 == (_QWORD *)v85 )
        goto LABEL_9;
    }
    v84 = v35;
    v39 = v87;
    while ( 1 )
    {
      v99.m128_u64[0] = *(_QWORD *)(v38 + 40);
      if ( v39 <= (unsigned int)sub_FDE930((__int64 *)&v99) )
        break;
LABEL_35:
      v44 = (__int64 *)(v37[1] & 0xFFFFFFFFFFFFFFF8LL);
      v37 = v44;
      if ( v44 )
      {
        v38 = *v44 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v38 )
          continue;
      }
      v35 = v84;
      goto LABEL_38;
    }
    if ( v39 )
    {
      v40 = v86;
      v41 = 0;
      v42 = v80;
      while ( 1 )
      {
        v43 = *(_QWORD *)(v42 + 8 * v41);
        if ( v43 != sub_FDE960((__int64 *)&v99, v41) )
          goto LABEL_35;
        if ( v40 == v41 )
          break;
        ++v41;
      }
    }
    v46 = sub_16FE9F0(a7, *v37 & 0xFFFFFFFFFFFFFFF8LL);
    v47 = *v37;
    v90 = v46;
    *(_OWORD *)v93 = 0;
    v89.m128_u64[0] = v47 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v91 = 0;
    v95 = v95 & 0x80 | 0x40;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v97 = 0;
    v98 = 0;
    sub_15A3440((unsigned int *)v82, 1, v47 & 0xFFFFFFFFFFFFFFF8LL, v48, v49, v50);
    v51 = (char *)v93[1];
    *(_DWORD *)v91 = v39;
    v52 = (char *)v93[0];
    v95 &= ~0x10u;
    v53 = v81[68];
    v101 = v39;
    v104[0] = nullptr;
    v54 = (char *)v93[1] - (char *)v93[0];
    src.m128i_i64[1] = v53;
    v104[1] = nullptr;
    v99 = v89;
    v105 = nullptr;
    v100 = v90;
    v102 = *(_QWORD *)&v91[4];
    v103 = v92;
    if ( ((char *)v93[1] - (char *)v93[0]) >> 6 )
    {
      if ( (unsigned __int64)(((char *)v93[1] - (char *)v93[0]) >> 6) > 0x3FFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      src.m128i_i64[0] = (char *)v93[1] - (char *)v93[0];
      v55 = (_QWORD *)operator new((char *)v93[1] - (char *)v93[0]);
      v51 = (char *)v93[1];
      v54 = src.m128i_i64[0];
      v52 = (char *)v93[0];
      v56 = v55;
    }
    else
    {
      v56 = nullptr;
    }
    src.m128i_i64[0] = (__int64)v56;
    v57 = _mm_loadl_epi64(&src);
    v105 = (char *)v56 + v54;
    *(__m128i *)v104 = _mm_unpacklo_epi64(v57, v57);
    if ( v52 == v51 )
    {
LABEL_62:
      v104[1] = v56;
      v106 = v95 & 0x7F | v106 & 0x80;
      v107 = v96;
      v108 = v97;
      v109 = v98;
      sub_17143A0((_QWORD *)a7, &v99, src.m128i_i64[1]);
      v61 = v104[1];
      v62 = v104[0];
      if ( v104[1] != v104[0] )
      {
        do
        {
          while ( 1 )
          {
            v63 = (_QWORD *)v62[3];
            if ( v63 == v62 + 5 )
              break;
            operator delete(v63);
            v62 += 8;
            if ( v62 == v61 )
              goto LABEL_65;
          }
          v62 += 8;
        }
        while ( v61 != v62 );
LABEL_65:
        v62 = v104[0];
      }
      if ( v62 )
        operator delete(v62);
      v64 = v93[1];
      v65 = v93[0];
      if ( v93[1] != v93[0] )
      {
        do
        {
          while ( 1 )
          {
            v66 = (_QWORD *)v65[3];
            if ( v66 == v65 + 5 )
              break;
            operator delete(v66);
            v65 += 8;
            if ( v65 == v64 )
              goto LABEL_71;
          }
          v65 += 8;
        }
        while ( v64 != v65 );
LABEL_71:
        v65 = v93[0];
      }
      if ( v65 )
        operator delete(v65);
      goto LABEL_35;
    }
    while ( 2 )
    {
      *v56 = *(_QWORD *)v52;
      *((_DWORD *)v56 + 2) = *((_DWORD *)v52 + 2);
      *(_QWORD *)((char *)v56 + 12) = *(_QWORD *)(v52 + 12);
      *((_DWORD *)v56 + 5) = *((_DWORD *)v52 + 5);
      v56[3] = v56 + 5;
      v59 = *((_BYTE **)v52 + 3);
      v60 = *((_QWORD *)v52 + 4);
      if ( &v59[v60] && !v59 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v60 > 0xF )
      {
        if ( v60 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src.m128i_i64[0] = *((_QWORD *)v52 + 3);
        v58 = (_BYTE *)operator new(v60 + 1);
        v56[5] = v60;
        v59 = (_BYTE *)src.m128i_i64[0];
        v56[3] = v58;
LABEL_61:
        memcpy(v58, v59, v60);
        v58 = (_BYTE *)v56[3];
      }
      else
      {
        v58 = (_BYTE *)v56[3];
        if ( v60 == 1 )
        {
          *v58 = *v59;
          v58 = (_BYTE *)v56[3];
        }
        else if ( v60 )
        {
          goto LABEL_61;
        }
      }
      v56[4] = v60;
      v52 += 64;
      v56 += 8;
      v58[v60] = 0;
      *((_BYTE *)v56 - 8) = *(v52 - 8);
      if ( v51 == v52 )
        goto LABEL_62;
      continue;
    }
  }
LABEL_9:
  sub_16FF8C0(v88, *(_QWORD *)(a7 + 240));
  if ( !v112 )
    free(ptr[0]);
}
