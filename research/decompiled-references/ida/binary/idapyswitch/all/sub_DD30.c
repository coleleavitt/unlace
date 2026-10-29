unsigned __int64 __fastcall sub_DD30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(int *, int *))
{
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __m128i v12; // xmm2
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __int64 v15; // rax
  const __m128i *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm6
  char *v26; // rcx
  __int64 v27; // rsi
  __int64 i; // rbx
  char *v29; // rdx
  void *v30; // rdi
  __m128i v31; // xmm2
  void *v32; // rdi
  __m128i v33; // xmm3
  void *v34; // rdi
  __m128i v35; // xmm4
  char *v36; // rcx
  __int64 v37; // rsi
  __int64 j; // rbx
  char *v39; // rdx
  void *v40; // rdi
  __m128i v41; // xmm5
  __int8 v42; // al
  __int64 (__fastcall *v43)(__int64, __int64); // rax
  __int64 v44; // r15
  __int64 v45; // r14
  __int64 (__fastcall *v46)(__int64, __int64); // r13
  __int64 v47; // rax
  void *v48; // r12
  __m128i v49; // xmm3
  __m128i v50; // xmm4
  __m128i v51; // xmm5
  __int64 v52; // rax
  void *v53; // rax
  __int64 v54; // rbx
  __m128i v55; // xmm0
  void *v56; // rdi
  __int64 v57; // rbx
  __m128i v58; // xmm0
  void *v59; // rdi
  __int64 v60; // rdx
  __m128i v61; // xmm0
  __int64 v62; // rbp
  char *v63; // rcx
  __int64 v64; // rbx
  char *v65; // rdx
  void *v66; // rdi
  __m128i v67; // xmm3
  __int64 v68; // rbx
  __m128i v69; // xmm4
  __m128i v70; // xmm5
  void *v71; // rax
  __int64 v72; // rbp
  __int64 v73; // rbx
  void **v74; // r12
  void *v75; // rdi
  int v77; // [rsp+0h] [rbp-1A8h]
  void *v78; // [rsp+0h] [rbp-1A8h]
  __int64 v79; // [rsp+8h] [rbp-1A0h]
  __int64 v80; // [rsp+8h] [rbp-1A0h]
  __int64 v81; // [rsp+8h] [rbp-1A0h]
  __int64 v82; // [rsp+8h] [rbp-1A0h]
  char v83; // [rsp+8h] [rbp-1A0h]
  void *v84; // [rsp+8h] [rbp-1A0h]
  __m128i v85; // [rsp+10h] [rbp-198h] BYREF
  __m128i v86; // [rsp+20h] [rbp-188h] BYREF
  __m128i v87; // [rsp+30h] [rbp-178h] BYREF
  __m128i v88; // [rsp+40h] [rbp-168h] BYREF
  __m128i v89; // [rsp+50h] [rbp-158h] BYREF
  __int64 v90; // [rsp+60h] [rbp-148h]
  const __m128i *v91; // [rsp+68h] [rbp-140h]
  __m128i v92; // [rsp+70h] [rbp-138h] BYREF
  __m128i v93; // [rsp+80h] [rbp-128h] BYREF
  unsigned __int64 v94; // [rsp+90h] [rbp-118h]
  __int64 v95; // [rsp+98h] [rbp-110h]
  __int64 v96; // [rsp+A0h] [rbp-108h]
  int v97; // [rsp+A8h] [rbp-100h]
  void *v98; // [rsp+B0h] [rbp-F8h]
  __m128i v99; // [rsp+B8h] [rbp-F0h]
  __int64 v100; // [rsp+C8h] [rbp-E0h]
  __m128i v101; // [rsp+D0h] [rbp-D8h]
  void *v102; // [rsp+E0h] [rbp-C8h]
  __m128i v103; // [rsp+E8h] [rbp-C0h]
  char v104; // [rsp+F8h] [rbp-B0h]
  __int64 (__fastcall *v105)(__int64, __int64); // [rsp+100h] [rbp-A8h] BYREF
  int v106; // [rsp+108h] [rbp-A0h]
  void *v107; // [rsp+110h] [rbp-98h]
  __m128i v108; // [rsp+118h] [rbp-90h]
  void *v109; // [rsp+128h] [rbp-80h]
  __m128i v110; // [rsp+130h] [rbp-78h]
  void *ptr; // [rsp+140h] [rbp-68h]
  __m128i v112; // [rsp+148h] [rbp-60h]
  char v113; // [rsp+158h] [rbp-50h]
  unsigned __int64 v114; // [rsp+168h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 1536 )
  {
    v5 = a2;
    while ( a3 )
    {
      v9 = a1 + 96;
      v10 = v5;
      sub_DC90(
        (__int64 *)a1,
        (int *)(a1 + 96),
        (int *)(a1
              + 32
              * (((0xAAAAAAAAAAAAAAABLL * (v4 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
               + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 5)) >> 1))),
        (int *)(v5 - 96),
        a4);
      while ( 1 )
      {
        while ( a4((int *)v9, (int *)a1) )
          v9 += 96LL;
        do
          v10 -= 96LL;
        while ( a4((int *)a1, (int *)v10) );
        if ( v9 >= v10 )
          break;
        v11 = *(_QWORD *)v9;
        v12 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        v13 = _mm_loadu_si128((const __m128i *)(v9 + 48));
        *(_OWORD *)(v9 + 24) = 0;
        v14 = _mm_loadu_si128((const __m128i *)(v9 + 72));
        v90 = v11;
        LODWORD(v11) = *(_DWORD *)(v9 + 8);
        *(_OWORD *)(v9 + 48) = 0;
        v77 = v11;
        v15 = *(_QWORD *)(v9 + 16);
        *(_OWORD *)(v9 + 72) = 0;
        v89.m128i_i64[0] = v15;
        v16 = *(const __m128i **)(v9 + 40);
        *(_QWORD *)(v9 + 16) = 0;
        v91 = v16;
        v17 = *(_QWORD *)(v9 + 64);
        *(_QWORD *)(v9 + 40) = 0;
        v87.m128i_i64[0] = v17;
        LOBYTE(v17) = *(_BYTE *)(v9 + 88);
        *(_QWORD *)(v9 + 64) = 0;
        v88.m128i_i8[0] = v17;
        LODWORD(v17) = *(_DWORD *)v10;
        v86 = v12;
        *(_DWORD *)v9 = v17;
        LODWORD(v17) = *(_DWORD *)(v10 + 4);
        v92 = v13;
        *(_DWORD *)(v9 + 4) = v17;
        LODWORD(v17) = *(_DWORD *)(v10 + 8);
        v93 = v14;
        *(_DWORD *)(v9 + 8) = v17;
        v18 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = 0;
        v19 = _mm_loadu_si128((const __m128i *)(v10 + 24));
        *(_OWORD *)(v10 + 24) = 0;
        v20 = *(void **)(v9 + 16);
        if ( v20 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v79 = v18;
          v85 = v19;
          j__free(v20);
          v19 = _mm_load_si128(&v85);
          v18 = v79;
        }
        *(_QWORD *)(v9 + 16) = v18;
        *(__m128i *)(v9 + 24) = v19;
        v21 = *(_QWORD *)(v10 + 40);
        v22 = _mm_loadu_si128((const __m128i *)(v10 + 48));
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 48) = 0;
        v23 = *(void **)(v9 + 40);
        if ( v23 )
        {
          *(_QWORD *)(v9 + 48) = 0;
          v80 = v21;
          v85 = v22;
          j__free(v23);
          v22 = _mm_load_si128(&v85);
          v21 = v80;
        }
        *(_QWORD *)(v9 + 40) = v21;
        *(__m128i *)(v9 + 48) = v22;
        v24 = *(_QWORD *)(v10 + 64);
        v25 = _mm_loadu_si128((const __m128i *)(v10 + 72));
        *(_QWORD *)(v10 + 64) = 0;
        *(_OWORD *)(v10 + 72) = 0;
        v26 = *(char **)(v9 + 64);
        v81 = v24;
        v85 = v25;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v9 + 72);
          if ( v27 )
          {
            v94 = v10;
            v95 = a3;
            for ( i = 0; i != v27; ++i )
            {
              v29 = &v26[24 * i];
              v30 = *(void **)v29;
              if ( *(_QWORD *)v29 )
              {
                *((_QWORD *)v29 + 1) = 0;
                j__free(v30);
                v26 = *(char **)(v9 + 64);
              }
            }
            v10 = v94;
            a3 = v95;
          }
          *(_QWORD *)(v9 + 72) = 0;
          j__free(v26);
        }
        v31 = _mm_load_si128(&v85);
        *(_QWORD *)(v9 + 64) = v81;
        *(__m128i *)(v9 + 72) = v31;
        *(_BYTE *)(v9 + 88) = *(_BYTE *)(v10 + 88);
        v32 = *(void **)(v10 + 16);
        *(_QWORD *)v10 = v90;
        *(_DWORD *)(v10 + 8) = v77;
        if ( v32 )
        {
          *(_QWORD *)(v10 + 24) = 0;
          j__free(v32);
        }
        v33 = _mm_load_si128(&v86);
        v34 = *(void **)(v10 + 40);
        *(_QWORD *)(v10 + 16) = v89.m128i_i64[0];
        *(__m128i *)(v10 + 24) = v33;
        if ( v34 )
        {
          *(_QWORD *)(v10 + 48) = 0;
          j__free(v34);
        }
        v35 = _mm_load_si128(&v92);
        v36 = *(char **)(v10 + 64);
        *(_QWORD *)(v10 + 40) = v91;
        *(__m128i *)(v10 + 48) = v35;
        if ( v36 )
        {
          v37 = *(_QWORD *)(v10 + 72);
          if ( v37 )
          {
            v82 = a3;
            for ( j = 0; j != v37; ++j )
            {
              v39 = &v36[24 * j];
              v40 = *(void **)v39;
              if ( *(_QWORD *)v39 )
              {
                *((_QWORD *)v39 + 1) = 0;
                j__free(v40);
                v36 = *(char **)(v10 + 64);
              }
            }
            a3 = v82;
          }
          *(_QWORD *)(v10 + 72) = 0;
          j__free(v36);
        }
        v9 += 96LL;
        v41 = _mm_load_si128(&v93);
        *(_QWORD *)(v10 + 64) = v87.m128i_i64[0];
        v42 = v88.m128i_i8[0];
        *(__m128i *)(v10 + 72) = v41;
        *(_BYTE *)(v10 + 88) = v42;
      }
      sub_DD30(v9, v5, --a3, a4);
      v4 = v9 - a1;
      if ( (__int64)(v9 - a1) <= 1536 )
        return v114 - __readfsqword(0x28u);
      v5 = v9;
    }
    v43 = (__int64 (__fastcall *)(__int64, __int64))a4;
    v44 = a1;
    v45 = v5;
    v105 = v43;
    v46 = v43;
    v91 = (const __m128i *)&v105;
    sub_D770(v44, v5, &v105);
    if ( v5 - v44 > 96 )
    {
      do
      {
        v47 = *(_QWORD *)(v45 - 96);
        v48 = *(void **)(v45 - 80);
        v45 -= 96;
        v49 = _mm_loadu_si128((const __m128i *)(v45 + 24));
        v50 = _mm_loadu_si128((const __m128i *)(v45 + 48));
        *(_OWORD *)(v45 + 24) = 0;
        v86.m128i_i64[0] = v47;
        v51 = _mm_loadu_si128((const __m128i *)(v45 + 72));
        v96 = v47;
        LODWORD(v47) = *(_DWORD *)(v45 + 8);
        v98 = v48;
        LODWORD(v90) = v47;
        v97 = v47;
        v52 = *(_QWORD *)(v45 + 40);
        v87 = v49;
        v85.m128i_i64[0] = v52;
        v100 = v52;
        v53 = *(void **)(v45 + 64);
        *(_QWORD *)(v45 + 40) = 0;
        v78 = v53;
        v102 = v53;
        LOBYTE(v53) = *(_BYTE *)(v45 + 88);
        *(_QWORD *)(v45 + 64) = 0;
        v83 = (char)v53;
        v104 = (char)v53;
        v99 = v49;
        v88 = v50;
        v101 = v50;
        *(_OWORD *)(v45 + 48) = 0;
        v89 = v51;
        v103 = v51;
        *(_OWORD *)(v45 + 72) = 0;
        *(_QWORD *)(v45 + 16) = 0;
        *(_DWORD *)v45 = *(_DWORD *)v44;
        *(_DWORD *)(v45 + 4) = *(_DWORD *)(v44 + 4);
        *(_DWORD *)(v45 + 8) = *(_DWORD *)(v44 + 8);
        v54 = *(_QWORD *)(v44 + 16);
        v55 = _mm_loadu_si128((const __m128i *)(v44 + 24));
        *(_QWORD *)(v44 + 16) = 0;
        *(_OWORD *)(v44 + 24) = 0;
        v56 = *(void **)(v45 + 16);
        if ( v56 )
        {
          *(_QWORD *)(v45 + 24) = 0;
          v92 = v55;
          j__free(v56);
          v55 = _mm_load_si128(&v92);
        }
        *(_QWORD *)(v45 + 16) = v54;
        *(__m128i *)(v45 + 24) = v55;
        v57 = *(_QWORD *)(v44 + 40);
        v58 = _mm_loadu_si128((const __m128i *)(v44 + 48));
        *(_QWORD *)(v44 + 40) = 0;
        *(_OWORD *)(v44 + 48) = 0;
        v59 = *(void **)(v45 + 40);
        if ( v59 )
        {
          *(_QWORD *)(v45 + 48) = 0;
          v92 = v58;
          j__free(v59);
          v58 = _mm_load_si128(&v92);
        }
        *(_QWORD *)(v45 + 40) = v57;
        *(__m128i *)(v45 + 48) = v58;
        v60 = *(_QWORD *)(v44 + 64);
        v61 = _mm_loadu_si128((const __m128i *)(v44 + 72));
        *(_QWORD *)(v44 + 64) = 0;
        *(_OWORD *)(v44 + 72) = 0;
        if ( *(_QWORD *)(v45 + 64) )
        {
          v62 = *(_QWORD *)(v45 + 72);
          if ( v62 )
          {
            v92.m128i_i64[0] = v60;
            v63 = *(char **)(v45 + 64);
            v64 = 0;
            v93 = v61;
            do
            {
              v65 = &v63[24 * v64];
              v66 = *(void **)v65;
              if ( *(_QWORD *)v65 )
              {
                *((_QWORD *)v65 + 1) = 0;
                j__free(v66);
                v63 = *(char **)(v45 + 64);
              }
              ++v64;
            }
            while ( v62 != v64 );
            v61 = _mm_load_si128(&v93);
            v60 = v92.m128i_i64[0];
          }
          else
          {
            v63 = *(char **)(v45 + 64);
          }
          *(_QWORD *)(v45 + 72) = 0;
          v92.m128i_i64[0] = v60;
          v93 = v61;
          j__free(v63);
          v60 = v92.m128i_i64[0];
          v61 = _mm_load_si128(&v93);
        }
        *(_QWORD *)(v45 + 64) = v60;
        v67 = _mm_load_si128(&v87);
        *(__m128i *)(v45 + 72) = v61;
        v68 = v45 - v44;
        v69 = _mm_load_si128(&v88);
        *(_BYTE *)(v45 + 88) = *(_BYTE *)(v44 + 88);
        v70 = _mm_load_si128(&v89);
        v107 = v48;
        v105 = (__int64 (__fastcall *)(__int64, __int64))v86.m128i_i64[0];
        v98 = nullptr;
        v106 = v90;
        v100 = 0;
        v109 = (void *)v85.m128i_i64[0];
        v102 = nullptr;
        ptr = v78;
        v108 = v67;
        v113 = v83;
        v99 = 0;
        v110 = v69;
        v101 = 0;
        v112 = v70;
        v103 = 0;
        sub_CEC0(v44, 0, 0xAAAAAAAAAAAAAAABLL * ((v45 - v44) >> 5), v91, v46);
        v71 = ptr;
        if ( ptr )
        {
          if ( v112.m128i_i64[0] )
          {
            v84 = ptr;
            v72 = v112.m128i_i64[0];
            v73 = 0;
            v74 = (void **)ptr;
            do
            {
              v75 = *v74;
              if ( *v74 )
              {
                v74[1] = nullptr;
                j__free(v75);
              }
              ++v73;
              v74 += 3;
            }
            while ( v72 != v73 );
            v68 = v45 - v44;
            v71 = v84;
          }
          j__free(v71);
        }
        if ( v109 )
          j__free(v109);
        if ( v107 )
          j__free(v107);
      }
      while ( v68 > 96 );
    }
  }
  return v114 - __readfsqword(0x28u);
}

