__int64 __fastcall sub_766420(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _BYTE *v3; // rbp
  __int64 v4; // rax
  const __m128i ***v5; // rax
  const __m128i **v6; // rbx
  _QWORD *v7; // rax
  bool i; // zf
  const __m128i **v9; // rax
  const __m128i **v10; // rcx
  unsigned __int64 v11; // rdx
  const __m128i *v12; // rax
  const __m128i **j; // rdx
  unsigned __int8 v14; // r13
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  unsigned int *v18; // rbp
  size_t v19; // r15
  _BYTE *v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rax
  __int16 v24; // dx
  char v25; // si
  __m128i v26; // xmm0
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // r13
  void **v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r12
  char v45; // ah
  __m128i v46; // xmm7
  __int16 v47; // ax
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  char *v51; // rdi
  __m128i v52; // xmm5
  __m128i v53; // xmm0
  char v54; // al
  __m128i v55; // xmm0
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rbp
  __m128i v59; // xmm0
  __int64 v60; // rax
  char v61; // dl
  __m128i v62; // xmm0
  __int64 v63; // rdx
  void **v64; // rbp
  __int64 v65; // r13
  __int64 v66; // r15
  __m128i v67; // xmm0
  __int16 v68; // ax
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __m128i v71; // xmm6
  __int64 v72; // r13
  __int64 v73; // rcx
  int v74; // r13d
  __m128i v75; // xmm7
  char v76; // al
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  unsigned __int64 v80; // [rsp+8h] [rbp-210h]
  __m128i v81; // [rsp+10h] [rbp-208h] BYREF
  __m128i v82; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v83; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int8 **v84; // [rsp+40h] [rbp-1D8h]
  _BYTE *v85; // [rsp+48h] [rbp-1D0h]
  __int64 v86; // [rsp+50h] [rbp-1C8h]
  void **v87; // [rsp+58h] [rbp-1C0h]
  __int64 v88; // [rsp+60h] [rbp-1B8h]
  __int64 v89; // [rsp+68h] [rbp-1B0h]
  void *v90; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-1A0h]
  _BYTE v92[32]; // [rsp+88h] [rbp-190h] BYREF
  __m128i v93; // [rsp+A8h] [rbp-170h] BYREF
  __m128i v94; // [rsp+B8h] [rbp-160h] BYREF
  __m128i v95; // [rsp+C8h] [rbp-150h] BYREF
  _BYTE v96[3]; // [rsp+D8h] [rbp-140h]
  void *ptr; // [rsp+E0h] [rbp-138h] BYREF
  __m128i v98; // [rsp+E8h] [rbp-130h]
  _BYTE v99[32]; // [rsp+F8h] [rbp-120h] BYREF
  __m128i v100; // [rsp+118h] [rbp-100h] BYREF
  __m128i v101; // [rsp+128h] [rbp-F0h] BYREF
  __m128i v102; // [rsp+138h] [rbp-E0h] BYREF
  __int16 v103; // [rsp+148h] [rbp-D0h]
  char v104; // [rsp+14Ah] [rbp-CEh]
  __int16 v105; // [rsp+150h] [rbp-C8h]
  void **v106; // [rsp+158h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+160h] [rbp-B8h]
  _BYTE v108[176]; // [rsp+168h] [rbp-B0h] BYREF

  v2 = a2;
  v105 = 0;
  v87 = (void **)v108;
  v106 = (void **)v108;
  v88 = a1;
  v107 = 0x100000000LL;
  v84 = (unsigned __int8 **)&v90;
  v89 = a2;
  while ( v2 )
  {
    v86 = v2;
    v3 = (_BYTE *)v2;
    do
    {
      if ( (v3[29] & 1) == 0 )
        goto LABEL_52;
      v4 = sub_79A2B0(v3);
      v80 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
      if ( (v3[29] & 1) != 0 )
      {
        v5 = (const __m128i ***)sub_79A2B0(v3);
        v85 = v3;
        v6 = *v5;
      }
      else
      {
        v85 = v3;
        v6 = nullptr;
      }
      v7 = (_QWORD *)v80;
      for ( i = v6 == (const __m128i **)v80; (unsigned __int64)v6 >= v80; i = v6 == (const __m128i **)v80 )
      {
        if ( i )
          goto LABEL_30;
        while ( 1 )
        {
          v11 = (unsigned __int64)v7;
          if ( *(_WORD *)(*v7 + 32LL) == 136 )
            break;
          if ( v6 == ++v7 )
            goto LABEL_30;
        }
        v10 = v6;
LABEL_11:
        if ( v10 == (const __m128i **)v11 )
          goto LABEL_30;
        v12 = *v6;
        for ( j = v6 + 1; v12[2].m128i_i16[0] != 136; ++j )
        {
          v12 = *j;
          v6 = j;
        }
        v14 = v12[6].m128i_u8[0];
        v15 = _mm_loadu_si128(v12 + 5);
        v16 = _mm_loadu_si128(v12 + 4);
        v17 = _mm_loadu_si128(v12 + 3);
        v18 = *(unsigned int **)(v12[2].m128i_i64[1] + 16);
        v19 = *v18;
        v90 = v92;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
        if ( v19 > 0x20 )
        {
          v83 = v15;
          v82 = v16;
          v81 = v17;
          sub_25D6230(v84, v92, v19, 1);
          v17 = _mm_load_si128(&v81);
          v16 = _mm_load_si128(&v82);
          v15 = _mm_load_si128(&v83);
          v51 = (char *)v90 + si128.m128i_i64[0];
        }
        else
        {
          v20 = v92;
          if ( !v19 )
            goto LABEL_16;
          v51 = v92;
        }
        v83 = v15;
        v82 = v16;
        v81 = v17;
        memcpy(v51, v18 + 4, v19);
        v20 = v90;
        v19 += si128.m128i_i64[0];
        v15 = _mm_load_si128(&v83);
        v16 = _mm_load_si128(&v82);
        v17 = _mm_load_si128(&v81);
LABEL_16:
        v21 = (unsigned int)v107;
        *(_WORD *)&v96[1] = 0;
        si128.m128i_i64[0] = v19;
        v96[0] = v14;
        v93 = v17;
        v22 = (__int64)&v106[14 * (unsigned int)v107];
        v94 = v16;
        v95 = v15;
        v23 = sub_765C00((__int64)v106, v22, v20, v19);
        if ( v22 == v23 || !v23 )
        {
          if ( v21 >= HIDWORD(v107) )
          {
            v56 = sub_25D5F70(&v106, v87, 0, 112, &ptr);
            v57 = 112LL * (unsigned int)v107;
            v58 = v56 + v57;
            *(__m128i *)(v58 + 8) = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
            *(_QWORD *)v58 = v56 + v57 + 24;
            if ( si128.m128i_i64[0] )
              sub_765AA0(v56 + v57, v84);
            v59 = _mm_loadu_si128(&v93);
            v60 = (unsigned int)v107;
            *(_WORD *)(v58 + 104) = *(_WORD *)v96;
            v61 = v96[2];
            *(__m128i *)(v58 + 56) = v59;
            v62 = _mm_loadu_si128(&v94);
            *(_BYTE *)(v58 + 106) = v61;
            v63 = (__int64)v106;
            *(__m128i *)(v58 + 72) = v62;
            *(__m128i *)(v58 + 88) = _mm_loadu_si128(&v95);
            v64 = (void **)(v63 + 112 * v60);
            if ( (void **)v63 != v64 )
            {
              v65 = v56;
              v66 = v63;
              do
              {
                v71 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
                *(_QWORD *)v65 = v65 + 24;
                *(__m128i *)(v65 + 8) = v71;
                if ( *(_QWORD *)(v66 + 8) )
                  sub_765AA0(v65, (unsigned __int8 **)v66);
                v67 = _mm_loadu_si128((const __m128i *)(v66 + 56));
                v68 = *(_WORD *)(v66 + 104);
                v66 += 112;
                v65 += 112;
                *(__m128i *)(v65 - 56) = v67;
                v69 = _mm_loadu_si128((const __m128i *)(v66 - 40));
                *(_WORD *)(v65 - 8) = v68;
                LOBYTE(v68) = *(_BYTE *)(v66 - 6);
                *(__m128i *)(v65 - 40) = v69;
                v70 = _mm_loadu_si128((const __m128i *)(v66 - 24));
                *(_BYTE *)(v65 - 6) = v68;
                *(__m128i *)(v65 - 24) = v70;
              }
              while ( v64 != (void **)v66 );
              v72 = (__int64)v106;
              v73 = 14LL * (unsigned int)v107;
              v64 = &v106[v73];
              if ( v106 != &v106[v73] )
              {
                do
                {
                  v64 -= 14;
                  if ( *v64 != v64 + 3 )
                    free(*v64);
                }
                while ( (void **)v72 != v64 );
                v64 = v106;
              }
            }
            v74 = (int)ptr;
            if ( v64 != v87 )
              free(v64);
            LODWORD(v107) = v107 + 1;
            v106 = (void **)v56;
            HIDWORD(v107) = v74;
          }
          else
          {
            v52 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
            *(_QWORD *)v22 = v22 + 24;
            *(__m128i *)(v22 + 8) = v52;
            if ( si128.m128i_i64[0] )
              sub_765AA0(v22, v84);
            LODWORD(v107) = v107 + 1;
            v53 = _mm_loadu_si128(&v93);
            *(_WORD *)(v22 + 104) = *(_WORD *)v96;
            v54 = v96[2];
            *(__m128i *)(v22 + 56) = v53;
            v55 = _mm_loadu_si128(&v94);
            *(_BYTE *)(v22 + 106) = v54;
            *(__m128i *)(v22 + 72) = v55;
            *(__m128i *)(v22 + 88) = _mm_loadu_si128(&v95);
          }
        }
        else
        {
          ptr = v99;
          v98 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
          if ( v19 )
          {
            v81.m128i_i64[0] = v23;
            sub_765AA0((__int64)&ptr, v84);
            v24 = *(_WORD *)v96;
            v23 = v81.m128i_i64[0];
            v25 = v96[2];
          }
          else
          {
            v24 = v14;
            v25 = 0;
          }
          v26 = _mm_loadu_si128(&v93);
          v104 = v25;
          v103 = v24;
          v100 = v26;
          v101 = _mm_loadu_si128(&v94);
          v102 = _mm_loadu_si128(&v95);
          sub_765E40(v23, (__int64)&ptr);
          if ( ptr != v99 )
            free(ptr);
        }
        if ( v90 != v92 )
          free(v90);
        v7 = (_QWORD *)v80;
        ++v6;
      }
      v9 = v6;
      do
      {
        v10 = v9;
        if ( (*v9)[2].m128i_i16[0] == 136 )
        {
          v11 = v80;
          goto LABEL_11;
        }
        ++v9;
      }
      while ( (const __m128i **)v80 != v9 );
LABEL_30:
      v3 = v85;
      if ( (v85[29] & 1) == 0 )
        goto LABEL_52;
      v27 = sub_79A2B0(v85);
      v28 = *(_QWORD *)v27;
      v29 = *(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 8);
      if ( v28 >= v29 )
      {
        if ( v28 == v29 )
          goto LABEL_41;
        while ( *(_WORD *)(*(_QWORD *)v29 + 32LL) != 376 )
        {
          v29 += 8LL;
          if ( v28 == v29 )
            goto LABEL_41;
        }
        v30 = v28;
      }
      else
      {
        v30 = v28;
        while ( *(_WORD *)(*(_QWORD *)v30 + 32LL) != 376 )
        {
          v30 += 8LL;
          if ( v29 == v30 )
            goto LABEL_41;
        }
      }
      if ( v30 != v29 )
      {
        while ( *(_WORD *)(*(_QWORD *)v28 + 32LL) != 376 )
          v28 += 8LL;
        if ( (*(_BYTE *)(*(_QWORD *)v28 + 34LL) & 4) == 0 )
          HIBYTE(v105) = 1;
      }
LABEL_41:
      if ( (v3[29] & 1) != 0 )
      {
        v31 = sub_79A2B0(v3);
        v32 = *(_QWORD *)v31;
        v33 = *(_QWORD *)v31 + 8LL * *(unsigned int *)(v31 + 8);
        if ( v32 >= v33 )
        {
          if ( v32 == v33 )
            goto LABEL_52;
          while ( *(_WORD *)(*(_QWORD *)v33 + 32LL) != 193 )
          {
            v33 += 8LL;
            if ( v32 == v33 )
              goto LABEL_52;
          }
          v34 = v32;
        }
        else
        {
          v34 = v32;
          while ( *(_WORD *)(*(_QWORD *)v34 + 32LL) != 193 )
          {
            v34 += 8LL;
            if ( v33 == v34 )
              goto LABEL_52;
          }
        }
        if ( v34 != v33 )
        {
          while ( *(_WORD *)(*(_QWORD *)v32 + 32LL) != 193 )
            v32 += 8LL;
          if ( (*(_BYTE *)(*(_QWORD *)v32 + 34LL) & 4) == 0 )
            LOBYTE(v105) = 1;
        }
      }
LABEL_52:
      v35 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 40LL))(v3);
      v3 = (_BYTE *)v35;
    }
    while ( v86 != v35 && v35 );
    v36 = (_QWORD *)(*(_QWORD *)(v86 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v37 = v36;
    if ( (*(_QWORD *)(v86 + 16) & 4) != 0 )
    {
      v37 = (_QWORD *)*v36;
      if ( !*v36 )
        break;
    }
    else if ( !v36 )
    {
      break;
    }
    v2 = sub_79A2E0(v37);
  }
  v38 = v88;
  v39 = sub_798D40(v89);
  v40 = (__int64)v106;
  v41 = &v106[14 * (unsigned int)v107];
  v42 = sub_765C00(
          (__int64)v106,
          (__int64)v41,
          *(const void **)(*(_QWORD *)(v39 + 17288) + 352LL),
          *(_QWORD *)(*(_QWORD *)(v39 + 17288) + 360LL));
  v43 = v38 + 24;
  v44 = v42;
  v45 = HIBYTE(v105);
  if ( v41 == (void **)v44 || !v44 )
  {
    v100 = 0u;
    v75 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    v76 = v105 & 1;
    v77 = _mm_loadu_si128(&v100);
    v101 = 0u;
    *(__m128i *)(v38 + 56) = v77;
    v78 = _mm_loadu_si128(&v101);
    v102 = 0u;
    *(__m128i *)(v38 + 72) = v78;
    v79 = _mm_loadu_si128(&v102);
    ptr = v99;
    LOBYTE(v103) = 0;
    HIBYTE(v103) = v76;
    v104 = v45 & 1;
    *(_QWORD *)v38 = v43;
    *(_BYTE *)(v38 + 104) = 0;
    *(_BYTE *)(v38 + 105) = v76;
    *(_BYTE *)(v38 + 106) = v45 & 1;
    v98 = v75;
    *(__m128i *)(v38 + 8) = v75;
    *(__m128i *)(v38 + 88) = v79;
  }
  else
  {
    v46 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(_WORD *)(v44 + 105) = v105;
    *(_QWORD *)v38 = v43;
    *(__m128i *)(v38 + 8) = v46;
    if ( *(_QWORD *)(v44 + 8) )
    {
      sub_765AA0(v38, (unsigned __int8 **)v44);
      v40 = (__int64)v106;
      v41 = &v106[14 * (unsigned int)v107];
    }
    v47 = *(_WORD *)(v44 + 104);
    *(__m128i *)(v38 + 56) = _mm_loadu_si128((const __m128i *)(v44 + 56));
    v48 = _mm_loadu_si128((const __m128i *)(v44 + 72));
    *(_WORD *)(v38 + 104) = v47;
    LOBYTE(v47) = *(_BYTE *)(v44 + 106);
    *(__m128i *)(v38 + 72) = v48;
    v49 = _mm_loadu_si128((const __m128i *)(v44 + 88));
    *(_BYTE *)(v38 + 106) = v47;
    *(__m128i *)(v38 + 88) = v49;
  }
  if ( (void **)v40 != v41 )
  {
    do
    {
      v41 -= 14;
      if ( *v41 != v41 + 3 )
        free(*v41);
    }
    while ( v41 != (void **)v40 );
    v41 = v106;
  }
  if ( v41 != v87 )
    free(v41);
  return v38;
}

