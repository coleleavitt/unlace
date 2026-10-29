__int64 __fastcall sub_686E40(__m128i *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // rcx
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 si128; // xmm0
  char *v11; // r12
  char *v12; // rbx
  __m128i **v13; // r15
  bool v14; // zf
  __m128i **v15; // rdi
  __m128i *v16; // r14
  __m128i *v17; // r13
  __m128i **v18; // rdi
  __m128i **v19; // rdi
  __m128i *v20; // r13
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // r15
  _QWORD *v26; // r14
  __m128i **v27; // r12
  __m128i **v28; // r12
  __m128i **v30; // rdi
  __m128i *v31; // r13
  __m128i *v32; // rbx
  __m128i **v33; // rdi
  __m128i **v34; // rdi
  __m128i *v35; // r12
  __int64 v36; // rbx
  __int64 v37; // r13
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r13
  _QWORD *v42; // r14
  __m128i **v43; // rdi
  __m128i *v44; // r13
  __m128i *v45; // rbx
  __m128i **v46; // rdi
  __m128i **v47; // rdi
  __m128i *v48; // r12
  __int64 v49; // rbx
  __int64 v50; // r13
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r13
  _QWORD *v55; // r14
  __int64 v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rbx
  _QWORD *v62; // r13
  int v63; // [rsp+2Ch] [rbp-5FCh]
  unsigned __int8 v64; // [rsp+2Ch] [rbp-5FCh]
  __m128i v65; // [rsp+30h] [rbp-5F8h] BYREF
  __m128i v66; // [rsp+40h] [rbp-5E8h] BYREF
  __m128i *v67; // [rsp+58h] [rbp-5D0h] BYREF
  __m128i v68; // [rsp+60h] [rbp-5C8h] BYREF
  __m128i v69[3]; // [rsp+70h] [rbp-5B8h] BYREF
  __m128i v70[4]; // [rsp+A0h] [rbp-588h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-548h]
  int v72; // [rsp+E8h] [rbp-540h]
  __int64 v73; // [rsp+100h] [rbp-528h]
  _BYTE v74[64]; // [rsp+110h] [rbp-518h] BYREF
  __int128 v75; // [rsp+150h] [rbp-4D8h]
  __int64 v76; // [rsp+160h] [rbp-4C8h]
  int v77; // [rsp+168h] [rbp-4C0h]
  __int64 v78; // [rsp+170h] [rbp-4B8h]
  __int64 v79; // [rsp+180h] [rbp-4A8h]
  __int64 v80; // [rsp+188h] [rbp-4A0h]
  int v81; // [rsp+190h] [rbp-498h]
  __int128 v82; // [rsp+1A8h] [rbp-480h]
  __int64 v83; // [rsp+1D8h] [rbp-450h]
  int v84; // [rsp+1E0h] [rbp-448h]
  __int64 v85; // [rsp+1F8h] [rbp-430h]
  _BYTE *v86; // [rsp+290h] [rbp-398h] BYREF
  int v87; // [rsp+298h] [rbp-390h]
  _QWORD *v88; // [rsp+2A0h] [rbp-388h]
  __m128i *v89; // [rsp+2A8h] [rbp-380h]
  __m128i v90; // [rsp+2B0h] [rbp-378h]
  __m128i v91; // [rsp+2C0h] [rbp-368h]
  __m128i *v92; // [rsp+2D0h] [rbp-358h]
  __int64 v93; // [rsp+2D8h] [rbp-350h]
  unsigned int v94; // [rsp+2E0h] [rbp-348h]
  void **v95; // [rsp+2E8h] [rbp-340h]
  void *v96; // [rsp+2F0h] [rbp-338h] BYREF
  int v97; // [rsp+2F8h] [rbp-330h]
  __m128i v98; // [rsp+300h] [rbp-328h] BYREF
  char v99; // [rsp+310h] [rbp-318h] BYREF
  char *v100; // [rsp+410h] [rbp-218h]
  int v101; // [rsp+418h] [rbp-210h]
  char v102; // [rsp+420h] [rbp-208h] BYREF
  void *ptr; // [rsp+5C0h] [rbp-68h]
  int v104; // [rsp+5C8h] [rbp-60h]
  char v105; // [rsp+5D0h] [rbp-58h] BYREF

  ++a1[15].m128i_i32[0];
  v67 = a1;
  v76 = 0x100000000LL;
  v81 = 4;
  v85 = 0;
  v83 = 0;
  v84 = 0;
  v77 = 1;
  v79 = 0;
  v78 = 0;
  v80 = 0;
  v87 = 1;
  v73 = 0;
  v82 = 0;
  v75 = 0;
  v70[1] = 0;
  v71 = 0;
  v3 = *(_QWORD *)(a2 + 40);
  v72 = 0;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 7) != 0 || v3 <= 7 )
    v63 = *(_DWORD *)(a2 + 24);
  else
    v63 = *(_DWORD *)(a2 + 136);
  sub_67F660((__int64)a1, v4, v70, (__int64)&v67);
  if ( (a1[2].m128i_i8[0] & 1) != 0 )
    sub_67E0B0((__int64)a1, v4, v5);
  sub_685B80(&v98, a2 + 104, (__int64)a1, (__int64)&v67);
  v88 = &v86;
  if ( v4 )
  {
    v6 = a1[2].m128i_i64[1];
    v89 = v70;
    sub_639C80((__int64)&v65, v4, v5, v6);
  }
  else
  {
    v89 = nullptr;
    clang_getNullCursor(&v65);
  }
  v90 = _mm_loadu_si128(&v65);
  v91 = _mm_loadu_si128(&v66);
  v7 = nullptr;
  v8 = a1[2].m128i_i64[1];
  if ( v5 )
    v7 = a1;
  v94 = v5;
  v92 = v7;
  v93 = 0;
  v96 = ptr;
  v97 = v104;
  v95 = &v96;
  sub_639160((__int64)&v68, a2, v8, 0, 1u);
  v9 = (__int128)_mm_load_si128(&v68);
  si128 = (__int128)_mm_load_si128(v69);
  v86 = v74;
  v69[1] = (__m128i)v9;
  v69[2] = (__m128i)si128;
  v64 = sub_680210(a1, a2, v63, (__int64)v74, 0, nullptr, v9, si128);
  if ( ptr != &v105 )
    free(ptr);
  v11 = v100;
  v12 = &v100[104 * v101];
  if ( v100 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *((__m128i ***)v12 - 1);
        v12 -= 104;
        if ( v13 )
        {
          v14 = (*((_DWORD *)v13 + 178))-- == 1;
          if ( v14 )
          {
            v15 = (__m128i **)v13[85];
            if ( v15 != v13 + 87 )
              free(v15);
            v16 = v13[21];
            v17 = (__m128i *)((char *)v16 + 248 * *((unsigned int *)v13 + 44));
            if ( v16 != v17 )
            {
              do
              {
                v18 = (__m128i **)v17[-5].m128i_i64[0];
                v17 = (__m128i *)((char *)v17 - 248);
                sub_67AA40(v18);
              }
              while ( v16 != v17 );
              v17 = v13[21];
            }
            if ( v17 != (__m128i *)(v13 + 23) )
              free(v17);
            v19 = (__m128i **)v13[1];
            if ( v19 != v13 + 3 )
              free(v19);
            --(*v13)[15].m128i_i32[0];
            v20 = *v13;
            if ( !(*v13)[15].m128i_i32[0] )
            {
              v21 = v20[13].m128i_i64[0];
              v22 = v21 + 16LL * v20[13].m128i_u32[2];
              while ( v22 != v21 )
              {
                v21 += 16;
                operator delete();
              }
              v23 = v20[10].m128i_u32[2];
              v20[13].m128i_i32[2] = 0;
              if ( (_DWORD)v23 )
                break;
            }
          }
        }
        if ( v11 == v12 )
          goto LABEL_33;
      }
      v24 = (_QWORD *)v20[10].m128i_i64[0];
      v20[14].m128i_i64[0] = 0;
      v25 = v24 + 1;
      v26 = &v24[v23];
      v20[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v24, (__m128i)(unsigned __int64)(*v24 + 4096LL));
      if ( 8 * v23 != 8 )
      {
        do
        {
          ++v25;
          operator delete();
        }
        while ( v26 != v25 );
      }
      v20[10].m128i_i32[2] = 1;
    }
    while ( v11 != v12 );
LABEL_33:
    v12 = v100;
  }
  if ( v12 != &v102 )
    free(v12);
  if ( (char *)v98.m128i_i64[0] != &v99 )
    free((void *)v98.m128i_i64[0]);
  v27 = (__m128i **)v73;
  if ( v73 )
  {
    v14 = (*(_DWORD *)(v73 + 712))-- == 1;
    if ( v14 )
    {
      v43 = (__m128i **)v27[85];
      if ( v43 != v27 + 87 )
        free(v43);
      v44 = v27[21];
      v45 = (__m128i *)((char *)v44 + 248 * *((unsigned int *)v27 + 44));
      if ( v44 != v45 )
      {
        do
        {
          v46 = (__m128i **)v45[-5].m128i_i64[0];
          v45 = (__m128i *)((char *)v45 - 248);
          sub_67AA40(v46);
        }
        while ( v44 != v45 );
        v45 = v27[21];
      }
      if ( v45 != (__m128i *)(v27 + 23) )
        free(v45);
      v47 = (__m128i **)v27[1];
      if ( v47 != v27 + 3 )
        free(v47);
      --(*v27)[15].m128i_i32[0];
      v48 = *v27;
      if ( !v48[15].m128i_i32[0] )
      {
        v49 = v48[13].m128i_i64[0];
        v50 = v49 + 16LL * v48[13].m128i_u32[2];
        while ( v50 != v49 )
        {
          v49 += 16;
          operator delete();
        }
        v51 = v48[10].m128i_u32[2];
        v48[13].m128i_i32[2] = 0;
        if ( (_DWORD)v51 )
        {
          v52 = (_QWORD *)v48[10].m128i_i64[0];
          v53 = v51;
          v48[14].m128i_i64[0] = 0;
          v54 = &v52[v53];
          v55 = v52 + 1;
          v48[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v52, (__m128i)(unsigned __int64)(*v52 + 4096LL));
          if ( v53 != 1 )
          {
            do
            {
              ++v55;
              operator delete();
            }
            while ( v54 != v55 );
          }
          v48[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v28 = (__m128i **)v85;
  if ( v85 )
  {
    v14 = (*(_DWORD *)(v85 + 712))-- == 1;
    if ( v14 )
    {
      v30 = (__m128i **)v28[85];
      if ( v30 != v28 + 87 )
        free(v30);
      v31 = v28[21];
      v32 = (__m128i *)((char *)v31 + 248 * *((unsigned int *)v28 + 44));
      if ( v31 != v32 )
      {
        do
        {
          v33 = (__m128i **)v32[-5].m128i_i64[0];
          v32 = (__m128i *)((char *)v32 - 248);
          sub_67AA40(v33);
        }
        while ( v31 != v32 );
        v32 = v28[21];
      }
      if ( v32 != (__m128i *)(v28 + 23) )
        free(v32);
      v34 = (__m128i **)v28[1];
      if ( v34 != v28 + 3 )
        free(v34);
      --(*v28)[15].m128i_i32[0];
      v35 = *v28;
      if ( !v35[15].m128i_i32[0] )
      {
        v36 = v35[13].m128i_i64[0];
        v37 = v36 + 16LL * v35[13].m128i_u32[2];
        while ( v37 != v36 )
        {
          v36 += 16;
          operator delete();
        }
        v38 = v35[10].m128i_u32[2];
        v35[13].m128i_i32[2] = 0;
        if ( (_DWORD)v38 )
        {
          v39 = (_QWORD *)v35[10].m128i_i64[0];
          v40 = v38;
          v35[14].m128i_i64[0] = 0;
          v41 = &v39[v40];
          v42 = v39 + 1;
          v35[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v39, (__m128i)(unsigned __int64)(*v39 + 4096LL));
          if ( v40 != 1 )
          {
            do
            {
              ++v42;
              operator delete();
            }
            while ( v41 != v42 );
          }
          v35[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  v14 = a1[15].m128i_i32[0]-- == 1;
  if ( v14 )
  {
    v56 = a1[13].m128i_i64[0];
    v57 = v56 + 16LL * a1[13].m128i_u32[2];
    while ( v57 != v56 )
    {
      v56 += 16;
      operator delete();
    }
    a1[13].m128i_i32[2] = 0;
    v58 = a1[10].m128i_u32[2];
    if ( (_DWORD)v58 )
    {
      v59 = (_QWORD *)a1[10].m128i_i64[0];
      v60 = v58;
      a1[14].m128i_i64[0] = 0;
      v61 = &v59[v60];
      v62 = v59 + 1;
      a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v59, (__m128i)(unsigned __int64)(*v59 + 4096LL));
      if ( v60 != 1 )
      {
        do
        {
          ++v62;
          operator delete();
        }
        while ( v61 != v62 );
      }
      a1[10].m128i_i32[2] = 1;
    }
  }
  return v64;
}

