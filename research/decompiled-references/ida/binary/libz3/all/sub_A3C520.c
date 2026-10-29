__int64 *__fastcall sub_A3C520(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  char *v15; // rcx
  void *v16; // rbp
  char *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  char v20; // cl
  __int64 v21; // r12
  __int64 v22; // r13
  int v23; // eax
  _DWORD *v24; // r8
  void *v25; // r14
  int v26; // eax
  __int64 v27; // rdx
  char *v28; // rcx
  void *v29; // rbp
  char *v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm0
  char v33; // cl
  int v34; // r9d
  __int64 v35; // r12
  __int64 v36; // r14
  int v37; // eax
  bool v38; // zf
  int v40; // r13d
  __int64 v41; // rax
  __int64 v42; // r14
  unsigned int v43; // ebx
  __int64 v44; // r13
  void *v45; // r15
  char *v46; // rbp
  void *v47; // rdi
  char v48; // si
  __int64 v49; // rdx
  char v50; // si
  __m128i v51; // xmm0
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rbx
  unsigned int v56; // r13d
  void *v57; // r15
  char *v58; // rbp
  void *v59; // rdi
  char v60; // si
  __int64 v61; // rdx
  char v62; // si
  __m128i v63; // xmm0
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // [rsp+8h] [rbp-5F0h]
  int v69[2]; // [rsp+10h] [rbp-5E8h]
  int v70[2]; // [rsp+10h] [rbp-5E8h]
  int v71[2]; // [rsp+10h] [rbp-5E8h]
  int v72[2]; // [rsp+10h] [rbp-5E8h]
  int v73[2]; // [rsp+10h] [rbp-5E8h]
  int v74[2]; // [rsp+10h] [rbp-5E8h]
  int v75[2]; // [rsp+10h] [rbp-5E8h]
  int v76[2]; // [rsp+10h] [rbp-5E8h]
  int v77[2]; // [rsp+10h] [rbp-5E8h]
  int v78[2]; // [rsp+10h] [rbp-5E8h]
  __int64 v80; // [rsp+20h] [rbp-5D8h]
  unsigned int v83; // [rsp+38h] [rbp-5C0h]
  char *v84; // [rsp+38h] [rbp-5C0h]
  unsigned int v85; // [rsp+38h] [rbp-5C0h]
  char *v86; // [rsp+38h] [rbp-5C0h]
  char *v87; // [rsp+40h] [rbp-5B8h]
  char *v88; // [rsp+40h] [rbp-5B8h]
  int v89; // [rsp+50h] [rbp-5A8h]
  int v90; // [rsp+50h] [rbp-5A8h]
  __int64 v92; // [rsp+60h] [rbp-598h] BYREF
  __int64 v93; // [rsp+68h] [rbp-590h]
  __int64 v94; // [rsp+70h] [rbp-588h] BYREF
  __int64 v95; // [rsp+78h] [rbp-580h]
  __int64 v96; // [rsp+80h] [rbp-578h] BYREF
  __m128i v97; // [rsp+88h] [rbp-570h] BYREF
  void *v98; // [rsp+A0h] [rbp-558h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-550h]
  _BYTE v100[640]; // [rsp+B0h] [rbp-548h] BYREF
  void *ptr; // [rsp+330h] [rbp-2C8h] BYREF
  __int64 v102; // [rsp+338h] [rbp-2C0h]
  _BYTE v103[696]; // [rsp+340h] [rbp-2B8h] BYREF

  v5 = *(_QWORD *)a4;
  v6 = *(_QWORD *)a4 + 40LL * *(unsigned int *)(a4 + 8);
  if ( *(_QWORD *)a4 == v6 )
  {
    v8 = -1;
    v98 = v100;
    ptr = v103;
    v99 = 0x1000000000LL;
    v102 = 0x1000000000LL;
  }
  else
  {
    v8 = -1;
    do
    {
      v10 = sub_9EA3C0(a2, *(_QWORD *)(v5 + 32), a5);
      if ( v8 > v10 )
        v8 = v10;
      if ( !v8 )
        break;
      v5 += 40;
    }
    while ( v6 != v5 );
    v11 = *(unsigned int *)(a4 + 8);
    v12 = *(_QWORD *)a4;
    ptr = v103;
    v80 = v12 + 40 * v11;
    v98 = v100;
    v99 = 0x1000000000LL;
    v102 = 0x1000000000LL;
    if ( v12 != v80 )
    {
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v12 + 32);
          *(_QWORD *)v70 = v12;
          v22 = sub_9EE4E0(a2, v21, a5, v8);
          v23 = sub_9EA3C0(a2, v21, a5);
          v94 = 0;
          v96 = 1;
          v24 = *(_DWORD **)v70;
          v25 = qword_1C7F2C0;
          v95 = 0;
          v97.m128i_i64[0] = 0;
          if ( v23 != v8 )
            break;
          if ( (*(_BYTE *)(*(_QWORD *)v70 + 4LL) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v94, *(_QWORD *)v70);
            v24 = *(_DWORD **)v70;
          }
          else
          {
            LODWORD(v94) = **(_DWORD **)v70;
          }
          if ( (v24[5] & 1) != 0 )
          {
            *(_QWORD *)v77 = v24;
            sub_182C690(v25, &v96, v24 + 4);
            v24 = *(_DWORD **)v77;
          }
          else
          {
            v26 = v24[4];
            BYTE4(v96) &= ~1u;
            LODWORD(v96) = v26;
          }
          v27 = (unsigned int)v99;
          v97.m128i_i64[1] = v22;
          if ( (unsigned int)v99 >= HIDWORD(v99) )
          {
            *(_QWORD *)v75 = v24;
            v52 = (unsigned int)(2 * HIDWORD(v99));
            v53 = sub_186B270(40 * v52);
            v27 = (unsigned int)v99;
            v24 = *(_DWORD **)v75;
            v28 = (char *)v53;
            if ( (_DWORD)v99 )
            {
              v88 = (char *)v53;
              v54 = v53;
              v85 = v8;
              v55 = 0;
              v90 = v52;
              v56 = 0;
              do
              {
                v57 = qword_1C7F2C0;
                ++v56;
                v54 += 40;
                v58 = (char *)v98 + v55;
                v59 = qword_1C7F2C0;
                v55 += 40;
                v60 = v58[4];
                *(_DWORD *)(v54 - 40) = *(_DWORD *)v58;
                *(_BYTE *)(v54 - 36) = v60 & 3 | *(_BYTE *)(v54 - 36) & 0xFC;
                v61 = *((_QWORD *)v58 + 1);
                *((_QWORD *)v58 + 1) = 0;
                *(_QWORD *)(v54 - 32) = v61;
                LODWORD(v61) = *((_DWORD *)v58 + 4);
                v62 = v58[20];
                v63 = _mm_loadu_si128((const __m128i *)(v58 + 24));
                *((_QWORD *)v58 + 3) = 0;
                *(_DWORD *)(v54 - 24) = v61;
                LOBYTE(v61) = *(_BYTE *)(v54 - 20);
                *(__m128i *)(v54 - 16) = v63;
                *(_BYTE *)(v54 - 20) = v62 & 3 | v61 & 0xFC;
                sub_182CBA0(v59, v58);
                sub_182CBA0(v57, v58 + 16);
                v27 = (unsigned int)v99;
              }
              while ( v56 < (unsigned int)v99 );
              v24 = *(_DWORD **)v75;
              v8 = v85;
              LODWORD(v52) = v90;
              v28 = v88;
            }
            if ( v98 != v100 && v98 )
            {
              v86 = v28;
              *(_QWORD *)v76 = v24;
              sub_186B220(v98);
              v27 = (unsigned int)v99;
              v28 = v86;
              v24 = *(_DWORD **)v76;
            }
            HIDWORD(v99) = v52;
            v22 = v97.m128i_i64[1];
            v98 = v28;
          }
          else
          {
            v28 = (char *)v98;
          }
          v29 = qword_1C7F2C0;
          v30 = &v28[40 * v27];
          *(_QWORD *)v71 = v24;
          *(_DWORD *)v30 = v94;
          v30[4] = BYTE4(v94) & 3 | v30[4] & 0xFC;
          v31 = v95;
          v95 = 0;
          *((_QWORD *)v30 + 1) = v31;
          v32 = _mm_loadl_epi64(&v97);
          LODWORD(v99) = v99 + 1;
          *((_DWORD *)v30 + 4) = v96;
          LOBYTE(v31) = v30[20];
          v33 = BYTE4(v96);
          v97.m128i_i64[0] = 0;
          *(__m128i *)(v30 + 24) = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)v22);
          v30[20] = v33 & 3 | v31 & 0xFC;
          sub_182CBA0(v29, &v94);
          sub_182CBA0(v29, &v96);
          v12 = *(_QWORD *)v71 + 40LL;
          if ( v80 == *(_QWORD *)v71 + 40LL )
            goto LABEL_24;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v70 + 4LL) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v94, *(_QWORD *)v70);
          v24 = *(_DWORD **)v70;
        }
        else
        {
          LODWORD(v94) = **(_DWORD **)v70;
        }
        if ( (v24[5] & 1) != 0 )
        {
          *(_QWORD *)v74 = v24;
          sub_182C690(v25, &v96, v24 + 4);
          v24 = *(_DWORD **)v74;
        }
        else
        {
          v13 = v24[4];
          BYTE4(v96) &= ~1u;
          LODWORD(v96) = v13;
        }
        v14 = (unsigned int)v102;
        v97.m128i_i64[1] = v22;
        if ( (unsigned int)v102 >= HIDWORD(v102) )
        {
          *(_QWORD *)v72 = v24;
          v40 = 2 * HIDWORD(v102);
          v41 = sub_186B270(40LL * (unsigned int)(2 * HIDWORD(v102)));
          v14 = (unsigned int)v102;
          v24 = *(_DWORD **)v72;
          v15 = (char *)v41;
          if ( (_DWORD)v102 )
          {
            v87 = (char *)v41;
            v83 = v8;
            v42 = 0;
            v43 = 0;
            v89 = v40;
            v44 = v41;
            do
            {
              v45 = qword_1C7F2C0;
              ++v43;
              v44 += 40;
              v46 = (char *)ptr + v42;
              v47 = qword_1C7F2C0;
              v42 += 40;
              v48 = v46[4];
              *(_DWORD *)(v44 - 40) = *(_DWORD *)v46;
              *(_BYTE *)(v44 - 36) = v48 & 3 | *(_BYTE *)(v44 - 36) & 0xFC;
              v49 = *((_QWORD *)v46 + 1);
              *((_QWORD *)v46 + 1) = 0;
              *(_QWORD *)(v44 - 32) = v49;
              LODWORD(v49) = *((_DWORD *)v46 + 4);
              v50 = v46[20];
              v51 = _mm_loadu_si128((const __m128i *)(v46 + 24));
              *((_QWORD *)v46 + 3) = 0;
              *(_DWORD *)(v44 - 24) = v49;
              LOBYTE(v49) = *(_BYTE *)(v44 - 20);
              *(__m128i *)(v44 - 16) = v51;
              *(_BYTE *)(v44 - 20) = v50 & 3 | v49 & 0xFC;
              sub_182CBA0(v47, v46);
              sub_182CBA0(v45, v46 + 16);
              v14 = (unsigned int)v102;
            }
            while ( v43 < (unsigned int)v102 );
            v24 = *(_DWORD **)v72;
            v8 = v83;
            v40 = v89;
            v15 = v87;
          }
          if ( ptr != v103 && ptr )
          {
            v84 = v15;
            *(_QWORD *)v73 = v24;
            sub_186B220(ptr);
            v14 = (unsigned int)v102;
            v15 = v84;
            v24 = *(_DWORD **)v73;
          }
          HIDWORD(v102) = v40;
          v22 = v97.m128i_i64[1];
          ptr = v15;
        }
        else
        {
          v15 = (char *)ptr;
        }
        v16 = qword_1C7F2C0;
        v17 = &v15[40 * v14];
        *(_QWORD *)v69 = v24;
        *(_DWORD *)v17 = v94;
        v17[4] = BYTE4(v94) & 3 | v17[4] & 0xFC;
        v18 = v95;
        v95 = 0;
        *((_QWORD *)v17 + 1) = v18;
        v19 = _mm_loadl_epi64(&v97);
        LODWORD(v102) = v102 + 1;
        *((_DWORD *)v17 + 4) = v96;
        LOBYTE(v18) = v17[20];
        v20 = BYTE4(v96);
        v97.m128i_i64[0] = 0;
        *(__m128i *)(v17 + 24) = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)v22);
        v17[20] = v20 & 3 | v18 & 0xFC;
        sub_182CBA0(v16, &v94);
        sub_182CBA0(v16, &v96);
        v12 = *(_QWORD *)v69 + 40LL;
      }
      while ( v80 != *(_QWORD *)v69 + 40LL );
    }
  }
LABEL_24:
  sub_A3CFC0(&v92, a2, (unsigned int)(a3 + 1), &v98, 0);
  v35 = v92;
  v36 = v93;
  if ( !(_DWORD)v102 )
  {
    *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)(unsigned __int64)v93);
    if ( v35 )
      goto LABEL_26;
    if ( !v8 )
    {
LABEL_50:
      v94 = 0;
      sub_98C750((_QWORD *)(a2 + 1464), &v94);
      goto LABEL_28;
    }
LABEL_51:
    v35 = 0;
    goto LABEL_52;
  }
  sub_A3C520((unsigned int)&v94, a2, a3 + 1, (unsigned int)&ptr, a5, v34);
  v66 = v94;
  v68 = v95;
  v67 = sub_15E1B70(*(_QWORD *)(a2 + 408));
  if ( !v67 )
  {
    sub_98B270(v35, v36);
    sub_98B270(v66, v68);
    *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v36);
    if ( !v8 )
      goto LABEL_50;
    goto LABEL_51;
  }
  ++*(_DWORD *)(v67 + 8);
  *(_QWORD *)v78 = v67;
  sub_98B270(v35, v36);
  sub_98B270(v66, v68);
  v35 = *(_QWORD *)v78;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v78, (__m128i)(unsigned __int64)v36);
LABEL_26:
  v37 = *(_DWORD *)(v35 + 8);
  *(_DWORD *)(v35 + 8) = v37 + 1;
  if ( !v8 )
  {
    v94 = v35;
    *(_DWORD *)(v35 + 8) = v37 + 2;
    sub_98C750((_QWORD *)(a2 + 1464), &v94);
    v38 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( !v38 )
      goto LABEL_28;
LABEL_56:
    sub_15D7BC0(v36, v35);
    goto LABEL_28;
  }
LABEL_52:
  sub_9C0480(a2, a5, v8);
  v64 = sub_15E1B70(*(_QWORD *)(a2 + 408));
  v65 = v64;
  if ( v64 )
  {
    ++*(_DWORD *)(v64 + 8);
    sub_98B270(*a1, a1[1]);
    *a1 = v65;
    v94 = v65;
    ++*(_DWORD *)(v65 + 8);
  }
  else
  {
    sub_98B270(*a1, a1[1]);
    *a1 = 0;
    v94 = 0;
  }
  sub_98C750((_QWORD *)(a2 + 1464), &v94);
  if ( v35 )
  {
    v38 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v38 )
      goto LABEL_56;
  }
LABEL_28:
  sub_A3C490((char **)&ptr);
  sub_A3C490((char **)&v98);
  return a1;
}

