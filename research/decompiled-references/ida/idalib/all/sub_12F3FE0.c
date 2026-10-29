__m128 **__fastcall sub_12F3FE0(__m128 **a1, __int64 a2, __int32 a3, __int64 a4, __int64 *a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  _BYTE *v8; // rax
  char v9; // dl
  char v10; // al
  __int64 v11; // rbp
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // r14d
  unsigned int v17; // r14d
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // rdi
  __int64 j; // rax
  unsigned __int64 v24; // rax
  __int64 *v25; // rax
  size_t v26; // rdx
  size_t v27; // r13
  __int64 v28; // rdx
  void *v29; // rdi
  void *v30; // rax
  _BYTE *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // bl
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 k; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // r9
  __m256i *v40; // r10
  __int64 v41; // rdi
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 i; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // r9
  __m256i *v48; // r10
  bool v49; // r14
  unsigned __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdx
  __m128 *v53; // rax
  __int64 v54; // rdi
  void *v55; // rbp
  void (__fastcall *v56)(void *); // rax
  __int64 v58; // rax
  char v59; // dl
  unsigned __int64 v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // r8
  char *v63; // rax
  __int64 v64; // rdi
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  __int64 *v67; // r12
  __int64 v68; // rax
  unsigned __int64 v69; // r13
  __int64 v70; // rax
  _QWORD *v71; // r14
  unsigned __int64 v72; // r13
  __int64 v73; // rax
  _QWORD *v74; // r14
  char v75; // dl
  char v76; // dl
  _DWORD *v77; // rax
  _DWORD *v78; // rdx
  _DWORD *v79; // rax
  _DWORD *v80; // rdx
  _DWORD *v81; // rax
  _DWORD *v82; // rdx
  _DWORD *v83; // rax
  _DWORD *v84; // rdx
  __int64 v86; // [rsp+0h] [rbp-248h]
  __int64 v87; // [rsp+0h] [rbp-248h]
  __m256i *v88; // [rsp+8h] [rbp-240h]
  __m256i *v89; // [rsp+8h] [rbp-240h]
  unsigned int v90; // [rsp+18h] [rbp-230h]
  _QWORD *v91; // [rsp+18h] [rbp-230h]
  size_t v93; // [rsp+30h] [rbp-218h]
  __int64 v94; // [rsp+38h] [rbp-210h]
  char v97; // [rsp+53h] [rbp-1F5h]
  void *v99; // [rsp+58h] [rbp-1F0h]
  void *s1; // [rsp+60h] [rbp-1E8h]
  void *s1a; // [rsp+60h] [rbp-1E8h]
  _QWORD *s1b; // [rsp+60h] [rbp-1E8h]
  __int64 v103; // [rsp+68h] [rbp-1E0h]
  void *v104; // [rsp+78h] [rbp-1D0h] BYREF
  void *v105; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v106; // [rsp+88h] [rbp-1C0h]
  _BYTE v107[16]; // [rsp+90h] [rbp-1B8h] BYREF
  __int16 v108; // [rsp+A0h] [rbp-1A8h]
  _QWORD v109[3]; // [rsp+B0h] [rbp-198h] BYREF
  volatile signed __int32 *v110; // [rsp+C8h] [rbp-180h]
  __int16 v111; // [rsp+D0h] [rbp-178h]
  __int64 (__fastcall **v112)(); // [rsp+E0h] [rbp-168h] BYREF
  int v113; // [rsp+E8h] [rbp-160h]
  __int128 v114; // [rsp+F0h] [rbp-158h]
  __int64 v115; // [rsp+100h] [rbp-148h]
  char v116; // [rsp+108h] [rbp-140h]
  int v117; // [rsp+10Ch] [rbp-13Ch]
  void **v118; // [rsp+110h] [rbp-138h]
  __m128i v119; // [rsp+120h] [rbp-128h] BYREF
  __int64 v120; // [rsp+130h] [rbp-118h] BYREF
  volatile signed __int32 *v121; // [rsp+138h] [rbp-110h]
  __int16 v122; // [rsp+140h] [rbp-108h]
  char v123; // [rsp+160h] [rbp-E8h]
  char v124; // [rsp+168h] [rbp-E0h]
  char v125; // [rsp+169h] [rbp-DFh]
  bool v126; // [rsp+16Ch] [rbp-DCh]
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h] BYREF
  _BYTE v129[192]; // [rsp+188h] [rbp-C0h] BYREF

  v7 = sub_FEEE40(a4);
  v97 = 8;
  v99 = *(void **)v7;
  v93 = *(_QWORD *)(v7 + 8);
  v8 = **(_BYTE ***)(a2 + 16);
  if ( (v8[47] & 0x20) == 0 )
  {
    v97 = 10;
    if ( (v8[60] & 0x10) == 0 )
    {
      v9 = v8[1] & 8;
      if ( (v8[2] & 4) != 0 )
        v10 = (v9 != 0) + 6;
      else
        v10 = (v9 != 0) + 4;
      v97 = v10;
    }
  }
  v11 = *(_QWORD *)(a2 + 72);
  v94 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 104LL) + 632LL;
  v12 = sub_13F3D60(v94, a4);
  v13 = v12;
  if ( !v12 )
  {
    v42 = *(__int64 **)(a4 + 48);
    v43 = *v42;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = v129;
    sub_A1FE50(&ptr, (_BYTE *)v42 + 32, (_BYTE *)v42 + v43 + 32);
    LOWORD(v115) = 257;
    v122 = 257;
    v111 = 257;
    v105 = "__inferred_module.map";
    v108 = 259;
    sub_228A3B0(&ptr, &v105, v109, &v112, &v119);
    v105 = v107;
    v114 = 0;
    v112 = &off_2BEBE68;
    v106 = 0;
    v107[0] = 0;
    v113 = 0;
    v116 = 0;
    v117 = 1;
    v115 = 0;
    v118 = &v105;
    sub_227B8B0(&v112, 0, 0, 0);
    sub_FEF590((unsigned __int8 **)a4, (__int64)&v112, 0, 0);
    LOBYTE(v111) = 0;
    if ( *(_BYTE *)(a7 + 32) )
    {
      v58 = *(_QWORD *)a7;
      LOBYTE(v111) = 1;
      v109[0] = v58;
      *(_QWORD *)a7 = 0;
      v109[1] = *(_QWORD *)(a7 + 8);
      v109[2] = *(_QWORD *)(a7 + 16);
      v110 = *(volatile signed __int32 **)(a7 + 24);
      *(_OWORD *)(a7 + 16) = 0;
    }
    v44 = sub_13FC270(v94, a4);
    for ( i = *(_QWORD *)(v44 + 8); i; i = *(_QWORD *)(v46 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v46 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v46 )
        break;
      v44 = v46;
    }
    v47 = v44 + 32;
    v48 = *(__m256i **)v44;
    v49 = (*(_BYTE *)(a4 + 904) & 0x40) != 0;
    if ( ptr )
    {
      v87 = v44 + 32;
      v89 = *(__m256i **)v44;
      v119.m128i_i64[0] = (__int64)&v120;
      sub_12E9400(&v119, ptr, (__int64)ptr + si128.m128i_i64[0]);
      v47 = v87;
      v48 = v89;
    }
    else
    {
      LOBYTE(v120) = 0;
      v119.m128i_i64[0] = (__int64)&v120;
      v119.m128i_i64[1] = 0;
    }
    v123 = 0;
    v125 = 1;
    v124 = v97;
    v126 = v49;
    sub_12F1EE0((__m128 **)&v104, a2, a3, v99, v93, &v119, v47, v48, a5, a6, (__int64)v109);
    if ( (__int64 *)v119.m128i_i64[0] != &v120 )
      operator delete((void *)v119.m128i_i64[0]);
    if ( (_BYTE)v111 )
    {
      if ( v110 )
        sub_4343A0(v110);
      v64 = v109[0];
      if ( v109[0] && !_InterlockedSub((volatile signed __int32 *)(v109[0] + 8LL), 1u) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
    }
    v122 = 257;
    sub_22307C0(v109, v105, v106, &v119);
    v50 = sub_FDBF00(*((_QWORD *)v104 + 8), ptr, (char *)si128.m128i_i64[0], v106, 0);
    v51 = *((_QWORD *)v104 + 9);
    v52 = v109[0];
    v109[0] = 0;
    v119.m128i_i64[0] = v52;
    sub_10249A0(v51, v50, v119.m128i_i64);
    if ( v119.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v119.m128i_i64[0] + 8LL))(v119.m128i_i64[0]);
    v53 = (__m128 *)v104;
    v104 = nullptr;
    v54 = v109[0];
    *a1 = v53;
    if ( v54 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
      v55 = v104;
      if ( v104 )
      {
        v56 = *(void (__fastcall **)(void *))(*(_QWORD *)v104 + 8LL);
        if ( v56 == sub_12EC440 )
        {
          sub_12EBC20((__int64)v104);
          operator delete(v55, 0x178u);
        }
        else
        {
          v56(v104);
        }
      }
    }
    v112 = &off_2BEBE68;
    sub_227B7A0(&v112);
    if ( v105 != v107 )
      operator delete(v105);
    if ( ptr != v129 )
      free(ptr);
    return a1;
  }
  v14 = v12 + 1;
  LOBYTE(ptr) = 0;
  v90 = v12;
  if ( (unsigned int)(v12 + 1) <= 1 )
    goto LABEL_83;
  if ( v12 < 0 )
  {
    v69 = (unsigned int)(-2 - v12);
    v70 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)(-2 - v12) >> 6));
    if ( _bittest64(&v70, v69) )
    {
      v71 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v69 >> 5));
      if ( *v71 )
      {
        v15 = *v71 + 24 * (v69 & 0x1F);
        goto LABEL_10;
      }
      v83 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v71 = v83;
      v84 = v83 + 192;
      do
      {
        *v83 = 0;
        v83 += 6;
        *((_OWORD *)v83 - 1) = 0;
        *((_QWORD *)v83 - 1) = 0;
      }
      while ( v84 != v83 );
      v76 = (char)ptr;
      v15 = *v71 + 24 * (v69 & 0x1F);
    }
    else
    {
      v15 = sub_101F930(v11, v69, &ptr);
      v76 = (char)ptr;
    }
    if ( !v76 )
      goto LABEL_10;
LABEL_83:
    LOBYTE(ptr) = 0;
    if ( v14 > 1 )
      goto LABEL_25;
    goto LABEL_84;
  }
  v15 = *(_QWORD *)(v11 + 184) + 24LL * (unsigned int)v12;
LABEL_10:
  if ( !v15 || *(char *)(v15 + 3) < 0 || (v16 = *(_DWORD *)(v15 + 8)) == 0 )
  {
LABEL_24:
    LOBYTE(ptr) = 0;
    goto LABEL_25;
  }
  while ( (unsigned int)sub_1021680(v11, v16) - 3 <= 1 )
  {
    v17 = v16 & 0x7FFFFFFF;
    if ( v17 < *(_DWORD *)(v11 + 476) || v17 >= *(_DWORD *)(v11 + 480) )
      v13 = sub_101D590(v11, v17);
    else
      v13 = *(_DWORD *)(v11 + 472);
    v14 = v13 + 1;
    LOBYTE(ptr) = 0;
    v18 = v13;
    if ( (unsigned int)(v13 + 1) <= 1 )
    {
LABEL_88:
      v90 = v18;
      goto LABEL_83;
    }
    if ( v13 >= 0 )
    {
      v19 = *(_QWORD *)(v11 + 184) + 24LL * (unsigned int)v13;
      goto LABEL_20;
    }
    v60 = (unsigned int)(-2 - v13);
    v61 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)(-2 - v13) >> 6));
    if ( _bittest64(&v61, v60) )
    {
      v62 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v60 >> 5));
      if ( *v62 )
      {
        v19 = *v62 + 24LL * ((-2 - (_BYTE)v13) & 0x1F);
        goto LABEL_20;
      }
      v91 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v60 >> 5));
      v77 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v18 = v13;
      v78 = v77 + 192;
      *v91 = v77;
      do
      {
        *v77 = 0;
        v77 += 6;
        *((_OWORD *)v77 - 1) = 0;
        *((_QWORD *)v77 - 1) = 0;
      }
      while ( v78 != v77 );
      v59 = (char)ptr;
      v19 = *v91 + 24LL * ((-2 - (_BYTE)v13) & 0x1F);
    }
    else
    {
      v19 = sub_101F930(v11, v60, &ptr);
      v59 = (char)ptr;
      v18 = v13;
    }
    if ( v59 )
      goto LABEL_88;
LABEL_20:
    if ( v19 )
    {
      if ( *(char *)(v19 + 3) >= 0 )
      {
        v16 = *(_DWORD *)(v19 + 8);
        if ( v16 )
          continue;
      }
    }
    v90 = v18;
    goto LABEL_24;
  }
  v90 = v13;
  v14 = v13 + 1;
  LOBYTE(ptr) = 0;
LABEL_25:
  if ( v13 < 0 )
  {
    v72 = (unsigned int)(-2 - v13);
    v73 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)(-2 - v13) >> 6));
    if ( _bittest64(&v73, v72) )
    {
      v74 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v72 >> 5));
      if ( *v74 )
      {
        v20 = *v74 + 24LL * ((-2 - (_BYTE)v13) & 0x1F);
        goto LABEL_27;
      }
      v81 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v74 = v81;
      v82 = v81 + 192;
      do
      {
        *v81 = 0;
        v81 += 6;
        *((_OWORD *)v81 - 1) = 0;
        *((_QWORD *)v81 - 1) = 0;
      }
      while ( v81 != v82 );
      v75 = (char)ptr;
      v20 = *v74 + 24LL * ((-2 - (_BYTE)v13) & 0x1F);
    }
    else
    {
      v20 = sub_101F930(v11, v72, &ptr);
      v75 = (char)ptr;
    }
    if ( !v75 )
      goto LABEL_27;
  }
  else
  {
    v20 = *(_QWORD *)(v11 + 184) + 24LL * v90;
LABEL_27:
    if ( v20 && *(char *)(v20 + 3) >= 0 )
    {
      v21 = *(_QWORD **)((*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      goto LABEL_30;
    }
  }
LABEL_84:
  v21 = nullptr;
LABEL_30:
  v22 = v21;
  v103 = *(_QWORD *)(a2 + 64);
  for ( j = v21[1]; j; j = *(_QWORD *)(v24 + 8) )
  {
    if ( (j & 4) == 0 )
      break;
    v24 = j & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v24 )
      break;
    v22 = (_QWORD *)v24;
  }
  s1 = (void *)sub_228AA60(v22 + 4, *v22, 0);
  v25 = (__int64 *)v21[2];
  v27 = v26;
  v28 = *v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v129;
  sub_A1FE50(&ptr, (_BYTE *)v25 + 32, (_BYTE *)v25 + v28 + 32);
  if ( j__strlen("module_private.map") != v27 )
  {
    if ( v27 == j__strlen("module.private.modulemap") )
    {
      if ( v27 )
        goto LABEL_94;
      goto LABEL_95;
    }
    goto LABEL_38;
  }
  if ( !v27 || !memcmp(s1, "module_private.map", v27) )
  {
    v122 = 257;
    LOWORD(v115) = 257;
    v111 = 257;
    v63 = "module.map";
LABEL_96:
    v105 = v63;
    v108 = 259;
    sub_228A3B0(&ptr, &v105, v109, &v112, &v119);
    sub_FD9C70((__int64)&v119, v103, ptr, si128.m128i_u64[0], 0, 1, 1);
    if ( (v119.m128i_i8[8] & 1) != 0 )
    {
      v112 = (__int64 (__fastcall **)())v119.m128i_i64[0];
      v119.m128i_i64[0] = 0;
      sub_A0E8E0(&v112);
      if ( v112 )
        (*((void (__fastcall **)(__int64 (__fastcall **)()))*v112 + 1))(v112);
      sub_A04D90(v119.m128i_i64);
      v29 = ptr;
      if ( ptr != v129 )
        goto LABEL_39;
    }
    else
    {
      s1b = (_QWORD *)v119.m128i_i64[0];
      sub_A04D90(v119.m128i_i64);
      if ( ptr != v129 )
        free(ptr);
      if ( s1b )
        v21 = s1b;
    }
  }
  else
  {
    if ( v27 != j__strlen("module.private.modulemap") )
      goto LABEL_38;
LABEL_94:
    if ( !memcmp(s1, "module.private.modulemap", v27) )
    {
LABEL_95:
      v122 = 257;
      LOWORD(v115) = 257;
      v111 = 257;
      v63 = "module.modulemap";
      goto LABEL_96;
    }
LABEL_38:
    v29 = ptr;
    if ( ptr != v129 )
LABEL_39:
      free(v29);
  }
  v30 = (void *)*v21;
  v31 = v21 + 4;
  s1a = v30;
  if ( v14 <= 1 )
  {
    v32 = *(_QWORD *)(v11 + 184);
  }
  else if ( v13 < 0 )
  {
    v65 = (unsigned int)(-2 - v13);
    v66 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)v65 >> 6));
    if ( _bittest64(&v66, v65) )
    {
      v67 = (__int64 *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v65 >> 5));
      v68 = *v67;
      if ( !*v67 )
      {
        v79 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        *v67 = (__int64)v79;
        v80 = v79 + 192;
        do
        {
          *v79 = 0;
          v79 += 6;
          *((_OWORD *)v79 - 1) = 0;
          *((_QWORD *)v79 - 1) = 0;
        }
        while ( v79 != v80 );
        v68 = *v67;
      }
      v32 = v68 + 24 * (v65 & 0x1F);
    }
    else
    {
      v32 = sub_101F930(v11, v65, nullptr);
    }
  }
  else
  {
    v32 = *(_QWORD *)(v11 + 184) + 24LL * v90;
  }
  v33 = *(_QWORD *)(v32 + 16);
  LOBYTE(v122) = 0;
  v34 = (v33 & 7) != 3 && (v33 & 7) != 0;
  if ( *(_BYTE *)(a7 + 32) )
  {
    v35 = *(_QWORD *)a7;
    LOBYTE(v122) = 1;
    v119.m128i_i64[0] = v35;
    *(_QWORD *)a7 = 0;
    v119.m128i_i64[1] = *(_QWORD *)(a7 + 8);
    v120 = *(_QWORD *)(a7 + 16);
    v121 = *(volatile signed __int32 **)(a7 + 24);
    *(_OWORD *)(a7 + 16) = 0;
  }
  v36 = sub_13FC270(v94, a4);
  for ( k = *(_QWORD *)(v36 + 8); k; k = *(_QWORD *)(v38 + 8) )
  {
    if ( (k & 4) == 0 )
      break;
    v38 = k & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v38 )
      break;
    v36 = v38;
  }
  v39 = v36 + 32;
  v40 = *(__m256i **)v36;
  if ( v31 )
  {
    v86 = v36 + 32;
    v88 = *(__m256i **)v36;
    ptr = &si128.m128i_u64[1];
    sub_12E9400(&ptr, v31, (__int64)s1a + (_QWORD)v31);
    v39 = v86;
    v40 = v88;
  }
  else
  {
    si128.m128i_i8[8] = 0;
    si128.m128i_i64[0] = 0;
    ptr = &si128.m128i_u64[1];
  }
  v129[40] = 0;
  v129[49] = 1;
  v129[48] = v97;
  v129[52] = v34;
  sub_12F1EE0(a1, a2, a3, v99, v93, (__m128i *)&ptr, v39, v40, a5, a6, (__int64)&v119);
  if ( ptr != &si128.m128i_u64[1] )
    operator delete(ptr);
  if ( (_BYTE)v122 )
  {
    if ( v121 )
      sub_4343A0(v121);
    v41 = v119.m128i_i64[0];
    if ( v119.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)(v119.m128i_i64[0] + 8), 1u) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
  }
  return a1;
}
