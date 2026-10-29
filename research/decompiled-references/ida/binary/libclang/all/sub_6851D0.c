__int64 __fastcall sub_6851D0(__m128i *a1, __int64 a2, int *a3)
{
  __m128i *v4; // rbp
  __int64 v5; // rax
  char v6; // r13
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE *v12; // r12
  _BYTE *v13; // rbx
  __m128i **v14; // r12
  bool v15; // zf
  __m128i **v17; // rdi
  __m128i *v18; // r15
  __m128i *v19; // r13
  __m128i **v20; // rdi
  __m128i **v21; // rdi
  __m128i *v22; // r13
  __m128i **v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __m128i **v27; // rbp
  __m128i **v28; // rdi
  __m128i *v29; // r12
  __m128i *v30; // rbx
  __m128i **v31; // rdi
  __m128i **v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // r12
  _QWORD *v39; // r13
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // r15
  _QWORD *v45; // r14
  __int64 v46; // rbx
  __int64 v47; // r12
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *v51; // rbx
  _QWORD *v52; // r13
  __m128i **v53; // rdi
  __m128i *v54; // r13
  __m128i *v55; // rbx
  __m128i **v56; // rdi
  __m128i **v57; // rdi
  __m128i *v58; // r12
  __int64 v59; // rbx
  __int64 v60; // r13
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // r13
  _QWORD *v65; // r15
  unsigned __int8 v66; // [rsp+2Fh] [rbp-4F9h]
  __m128i *v67; // [rsp+38h] [rbp-4F0h] BYREF
  __m128i v68; // [rsp+40h] [rbp-4E8h] BYREF
  __m128i v69; // [rsp+50h] [rbp-4D8h] BYREF
  __m128i v70; // [rsp+60h] [rbp-4C8h] BYREF
  __m128i v71[4]; // [rsp+70h] [rbp-4B8h] BYREF
  _BOOL4 v72; // [rsp+B0h] [rbp-478h]
  int v73; // [rsp+B4h] [rbp-474h]
  int v74; // [rsp+B8h] [rbp-470h]
  __int64 v75; // [rsp+C0h] [rbp-468h]
  __int64 v76; // [rsp+D0h] [rbp-458h]
  __int64 v77; // [rsp+D8h] [rbp-450h]
  int v78; // [rsp+E0h] [rbp-448h]
  __int128 v79; // [rsp+F8h] [rbp-430h]
  __int64 v80; // [rsp+128h] [rbp-400h]
  int v81; // [rsp+130h] [rbp-3F8h]
  __int64 v82; // [rsp+148h] [rbp-3E0h]
  __m128i *v83; // [rsp+1E0h] [rbp-348h]
  void *v84; // [rsp+1E8h] [rbp-340h]
  unsigned int v85; // [rsp+1F0h] [rbp-338h]
  void *v86[2]; // [rsp+200h] [rbp-328h] BYREF
  char v87; // [rsp+210h] [rbp-318h] BYREF
  __int128 v88; // [rsp+240h] [rbp-2E8h]
  _BOOL4 v89; // [rsp+250h] [rbp-2D8h]
  __int64 v90; // [rsp+254h] [rbp-2D4h]
  __int64 v91; // [rsp+260h] [rbp-2C8h]
  __int64 v92; // [rsp+270h] [rbp-2B8h]
  __int64 v93; // [rsp+278h] [rbp-2B0h]
  int v94; // [rsp+280h] [rbp-2A8h]
  __int128 v95; // [rsp+298h] [rbp-290h]
  __int64 v96; // [rsp+2C8h] [rbp-260h]
  int v97; // [rsp+2D0h] [rbp-258h]
  __int64 v98; // [rsp+2E8h] [rbp-240h]
  _BYTE *v99; // [rsp+310h] [rbp-218h]
  int v100; // [rsp+318h] [rbp-210h]
  _BYTE v101[416]; // [rsp+320h] [rbp-208h] BYREF
  void *ptr; // [rsp+4C0h] [rbp-68h]
  unsigned int v103; // [rsp+4C8h] [rbp-60h]
  char v104; // [rsp+4D0h] [rbp-58h] BYREF

  v4 = a1;
  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    ++a1[15].m128i_i32[0];
    v5 = *(_QWORD *)a3;
    v6 = *(_BYTE *)(a2 + 74);
    v67 = a1;
    v7 = (*(__int64 (__fastcall **)(int *))(v5 + 32))(a3);
    v78 = 6;
    v82 = 0;
    v72 = a3 != (int *)v7;
    v73 = v6 & 1;
    v74 = v73;
    v80 = 0;
    v81 = 0;
    v76 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v71[3] = 0;
    sub_684980((__int64)v86, a2, (__int64)a1, (__int64)&v67);
    v8 = (char *)ptr;
    v83 = &v70;
    v84 = ptr;
    v85 = v103;
    if ( (a1[2].m128i_i8[0] & 1) != 0 && v103 )
    {
      v9 = 8LL * v103;
      v10 = 0;
      while ( 1 )
      {
        v11 = *(_QWORD *)&v8[v10];
        if ( *(_QWORD *)v11 )
          sub_67E0B0((__int64)a1, *(_QWORD *)&v99[13 * v10 + 80], *(_DWORD *)(v11 + 56));
        v10 += 8;
        if ( v10 == v9 )
          break;
        v8 = (char *)ptr;
      }
    }
    sub_639160((__int64)&v68, (__int64)a3, a1[2].m128i_i64[1], 0, 1u);
    v66 = sub_680210(
            a1,
            (__int64)a3,
            a3[6],
            (__int64)&v70,
            0,
            nullptr,
            (__int128)_mm_load_si128(&v68),
            (__int128)_mm_load_si128(&v69));
    if ( ptr != &v104 )
      free(ptr);
    v12 = v99;
    v13 = &v99[104 * v100];
    if ( v99 == v13 )
    {
      if ( v13 == v101 )
        goto LABEL_14;
      goto LABEL_13;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *((__m128i ***)v13 - 1);
        v13 -= 104;
        if ( v23 )
          break;
LABEL_30:
        if ( v12 == v13 )
          goto LABEL_34;
      }
      v15 = (*((_DWORD *)v23 + 178))-- == 1;
      if ( v15 )
      {
        v17 = (__m128i **)v23[85];
        if ( v17 != v23 + 87 )
          free(v17);
        v18 = v23[21];
        v19 = (__m128i *)((char *)v18 + 248 * *((unsigned int *)v23 + 44));
        if ( v18 != v19 )
        {
          do
          {
            v20 = (__m128i **)v19[-5].m128i_i64[0];
            v19 = (__m128i *)((char *)v19 - 248);
            sub_67AA40(v20);
          }
          while ( v18 != v19 );
          v19 = v23[21];
        }
        if ( v19 != (__m128i *)(v23 + 23) )
          free(v19);
        v21 = (__m128i **)v23[1];
        if ( v21 != v23 + 3 )
          free(v21);
        --(*v23)[15].m128i_i32[0];
        v22 = *v23;
        if ( !(*v23)[15].m128i_i32[0] )
        {
          v40 = v22[13].m128i_i64[0];
          v41 = v40 + 16LL * v22[13].m128i_u32[2];
          while ( v41 != v40 )
          {
            v40 += 16;
            operator delete();
          }
          v42 = v22[10].m128i_u32[2];
          v22[13].m128i_i32[2] = 0;
          if ( (_DWORD)v42 )
          {
            v43 = (_QWORD *)v22[10].m128i_i64[0];
            v22[14].m128i_i64[0] = 0;
            v44 = v43 + 1;
            v45 = &v43[v42];
            v22[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v43, (__m128i)(unsigned __int64)(*v43 + 4096LL));
            if ( 8 * v42 != 8 )
            {
              do
              {
                ++v44;
                operator delete();
              }
              while ( v45 != v44 );
            }
            v22[10].m128i_i32[2] = 1;
          }
        }
        goto LABEL_30;
      }
      if ( v12 == v13 )
      {
LABEL_34:
        v13 = v99;
        if ( v99 == v101 )
        {
LABEL_14:
          if ( v86[0] != &v87 )
            free(v86[0]);
          v14 = (__m128i **)v82;
          if ( v82 )
          {
            v15 = (*(_DWORD *)(v82 + 712))-- == 1;
            if ( v15 )
            {
              v53 = (__m128i **)v14[85];
              if ( v53 != v14 + 87 )
                free(v53);
              v54 = v14[21];
              v55 = (__m128i *)((char *)v54 + 248 * *((unsigned int *)v14 + 44));
              if ( v54 != v55 )
              {
                do
                {
                  v56 = (__m128i **)v55[-5].m128i_i64[0];
                  v55 = (__m128i *)((char *)v55 - 248);
                  sub_67AA40(v56);
                }
                while ( v54 != v55 );
                v55 = v14[21];
              }
              if ( v55 != (__m128i *)(v14 + 23) )
                free(v55);
              v57 = (__m128i **)v14[1];
              if ( v57 != v14 + 3 )
                free(v57);
              --(*v14)[15].m128i_i32[0];
              v58 = *v14;
              if ( !v58[15].m128i_i32[0] )
              {
                v59 = v58[13].m128i_i64[0];
                v60 = v59 + 16LL * v58[13].m128i_u32[2];
                while ( v60 != v59 )
                {
                  v59 += 16;
                  operator delete();
                }
                v61 = v58[10].m128i_u32[2];
                v58[13].m128i_i32[2] = 0;
                if ( (_DWORD)v61 )
                {
                  v62 = (_QWORD *)v58[10].m128i_i64[0];
                  v63 = v61;
                  v58[14].m128i_i64[0] = 0;
                  v64 = &v62[v63];
                  v65 = v62 + 1;
                  v58[9] = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)*v62,
                             (__m128i)(unsigned __int64)(*v62 + 4096LL));
                  if ( v63 != 1 )
                  {
                    do
                    {
                      ++v65;
                      operator delete();
                    }
                    while ( v64 != v65 );
                  }
                  v58[10].m128i_i32[2] = 1;
                }
              }
            }
          }
          v15 = v4[15].m128i_i32[0]-- == 1;
          if ( v15 )
          {
            v46 = v4[13].m128i_i64[0];
            v47 = v46 + 16LL * v4[13].m128i_u32[2];
            while ( v47 != v46 )
            {
              v46 += 16;
              operator delete();
            }
            v4[13].m128i_i32[2] = 0;
            v48 = v4[10].m128i_u32[2];
            if ( (_DWORD)v48 )
            {
              v49 = (_QWORD *)v4[10].m128i_i64[0];
              v50 = v48;
              v4[14].m128i_i64[0] = 0;
              v51 = &v49[v50];
              v52 = v49 + 1;
              v4[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v49, (__m128i)(unsigned __int64)(*v49 + 4096LL));
              if ( v50 != 1 )
              {
                do
                {
                  ++v52;
                  operator delete();
                }
                while ( v51 != v52 );
              }
              goto LABEL_53;
            }
          }
          return v66;
        }
LABEL_13:
        free(v13);
        goto LABEL_14;
      }
    }
  }
  v24 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a3 + 32LL))(a3);
  v25 = a1[2].m128i_i64[1];
  v94 = 0;
  v98 = 0;
  v96 = 0;
  v97 = 0;
  v89 = a3 != (int *)v24;
  v90 = 0;
  v92 = 0;
  v91 = 0;
  v93 = 0;
  v95 = 0;
  v88 = 0;
  sub_639160((__int64)&v70, (__int64)a3, v25, 0, 1u);
  v26 = sub_680210(
          a1,
          (__int64)a3,
          a3[6],
          (__int64)v86,
          0,
          nullptr,
          (__int128)_mm_load_si128(&v70),
          (__int128)_mm_load_si128(v71));
  v27 = (__m128i **)v98;
  v66 = v26;
  if ( v98 )
  {
    v15 = (*(_DWORD *)(v98 + 712))-- == 1;
    if ( v15 )
    {
      v28 = (__m128i **)v27[85];
      if ( v28 != v27 + 87 )
        free(v28);
      v29 = v27[21];
      v30 = (__m128i *)((char *)v29 + 248 * *((unsigned int *)v27 + 44));
      if ( v29 != v30 )
      {
        do
        {
          v31 = (__m128i **)v30[-5].m128i_i64[0];
          v30 = (__m128i *)((char *)v30 - 248);
          sub_67AA40(v31);
        }
        while ( v29 != v30 );
        v30 = v27[21];
      }
      if ( v30 != (__m128i *)(v27 + 23) )
        free(v30);
      v32 = (__m128i **)v27[1];
      if ( v32 != v27 + 3 )
        free(v32);
      --(*v27)[15].m128i_i32[0];
      v4 = *v27;
      if ( !v4[15].m128i_i32[0] )
      {
        v33 = v4[13].m128i_i64[0];
        v34 = v33 + 16LL * v4[13].m128i_u32[2];
        while ( v34 != v33 )
        {
          v33 += 16;
          operator delete();
        }
        v4[13].m128i_i32[2] = 0;
        v35 = v4[10].m128i_u32[2];
        if ( (_DWORD)v35 )
        {
          v36 = (_QWORD *)v4[10].m128i_i64[0];
          v37 = v35;
          v4[14].m128i_i64[0] = 0;
          v38 = &v36[v37];
          v39 = v36 + 1;
          v4[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v36, (__m128i)(unsigned __int64)(*v36 + 4096LL));
          if ( v37 != 1 )
          {
            do
            {
              ++v39;
              operator delete();
            }
            while ( v38 != v39 );
          }
LABEL_53:
          v4[10].m128i_i32[2] = 1;
        }
      }
    }
  }
  return v66;
}

