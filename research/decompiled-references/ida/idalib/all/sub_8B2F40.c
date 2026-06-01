__int64 __fastcall sub_8B2F40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, char **a7)
{
  unsigned int v7; // ebp
  bool v9; // zf
  __int64 v10; // r12
  void *v12; // rax
  void *v13; // rdi
  char *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // r15
  char *v18; // r12
  void *v19; // rdi
  char *v20; // rdx
  __int64 v21; // rbp
  __int64 k; // rbx
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  const char *v29; // rcx
  int v30; // eax
  int *v31; // rbp
  char *v32; // rdi
  int *v33; // r15
  int v34; // eax
  int v35; // eax
  int v36; // eax
  void *v37; // r10
  __int64 v38; // rax
  _QWORD *v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rbp
  char *v44; // r12
  void *v45; // rdi
  char *v46; // rcx
  __int64 v47; // r13
  __int64 i; // rbx
  char *v49; // rdx
  void *v50; // rdi
  void *v51; // rdi
  void *v52; // rdi
  __m128i v53; // xmm0
  void *v54; // rdx
  __m128i v55; // xmm1
  void *v56; // rax
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // r12
  int *v62; // rbp
  void *v63; // rdi
  char *v64; // rdx
  __int64 v65; // r14
  __int64 j; // rbx
  char *v67; // rax
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  unsigned __int64 v71; // rdx
  __int64 v72; // rbp
  __int64 v73; // r15
  int v74; // eax
  int v75; // eax
  int v76; // eax
  void *v77; // r10
  __int64 v78; // rax
  _QWORD *v79; // rsi
  unsigned __int64 v80; // rdx
  unsigned __int8 v81; // [rsp+0h] [rbp-258h]
  __int64 v82; // [rsp+0h] [rbp-258h]
  __int64 v83; // [rsp+8h] [rbp-250h]
  void *v84; // [rsp+18h] [rbp-240h]
  void *v85; // [rsp+28h] [rbp-230h]
  void *v86; // [rsp+30h] [rbp-228h] BYREF
  __m128i v87; // [rsp+38h] [rbp-220h] BYREF
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __m128i v89; // [rsp+58h] [rbp-200h] BYREF
  __int64 v90; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v91; // [rsp+78h] [rbp-1E0h]
  size_t v92; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v93; // [rsp+98h] [rbp-1C0h]
  void *v94; // [rsp+B0h] [rbp-1A8h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-1A0h]
  void *v96; // [rsp+C8h] [rbp-190h]
  __int128 v97; // [rsp+D0h] [rbp-188h]
  void *v98; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v99; // [rsp+E8h] [rbp-170h]
  __int64 v100; // [rsp+110h] [rbp-148h]
  unsigned __int64 v101; // [rsp+118h] [rbp-140h]
  void *v102; // [rsp+140h] [rbp-118h] BYREF
  __int128 v103; // [rsp+148h] [rbp-110h]
  void *v104; // [rsp+1B8h] [rbp-A0h]
  __int64 v105; // [rsp+1C0h] [rbp-98h]
  void *v106; // [rsp+1D0h] [rbp-88h]
  __int64 v107; // [rsp+1D8h] [rbp-80h]
  int v108; // [rsp+1F4h] [rbp-64h]
  __int16 v109; // [rsp+1F8h] [rbp-60h]
  int v110; // [rsp+1FAh] [rbp-5Eh]
  __int16 v111; // [rsp+1FEh] [rbp-5Ah]
  __int128 v112; // [rsp+200h] [rbp-58h] BYREF
  __int64 v113; // [rsp+210h] [rbp-48h]
  unsigned __int64 v114; // [rsp+218h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  LOBYTE(v7) = a7 == nullptr || a2 == 0;
  if ( (_BYTE)v7 || !*(_DWORD *)(a5 + 8) || !*(_DWORD *)(a5 + 12) )
  {
    if ( !under_debugger )
      interr(3192);
    BUG();
  }
  v9 = *(_BYTE *)(a4 + 32) == 0;
  v10 = a2;
  v86 = nullptr;
  ptr = nullptr;
  v87 = 0;
  v89 = 0;
  if ( !v9 )
  {
    v12 = sub_8AE390((__int64)a1, a4, a7);
    if ( !v12 )
    {
LABEL_14:
      v13 = ptr;
      goto LABEL_15;
    }
    sub_811FE0((__int64)&v102, (int)v12);
    if ( (unsigned int)sub_812050((__int64)&v102, (__int64 *)a7) )
    {
LABEL_9:
      v102 = &off_2BFC068;
      if ( v106 )
      {
        v107 = 0;
        qfree(v106);
      }
      if ( v104 )
      {
        v105 = 0;
        qfree(v104);
      }
      v102 = &off_2BFC000;
      sub_7C16D0((__int64)&v102);
      goto LABEL_14;
    }
    v92 = 0;
    v90 = 0;
    v94 = nullptr;
    v96 = nullptr;
    v93 = 0;
    v91 = 0;
    v95 = 0;
    v97 = 0;
    sub_8AD260((__int64)&v98, (__int64)&v94, &v90, &v92);
    if ( v96 )
    {
      *(_QWORD *)&v97 = 0;
      qfree(v96);
    }
    if ( v94 )
    {
      *(_QWORD *)&v95 = 0;
      qfree(v94);
    }
    if ( (unsigned int)sub_8124F0((__int64)&v102, (__int64 *)&v98, (__int64)a7, 0) )
    {
      sub_80E310((__int64)&v98);
      goto LABEL_9;
    }
    v71 = v101;
    if ( v87.m128i_i64[1] < v101 )
    {
      v86 = (void *)qvector_reserve(&v86, v86, v101, 152);
      v71 = v101;
    }
    if ( v89.m128i_i64[1] < v71 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v71, 8);
      v71 = v101;
    }
    v72 = v100;
    v73 = v100 + 176 * v71;
    if ( v73 != v100 )
    {
      do
      {
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v111 = 0;
        LODWORD(v112) = 0;
        WORD2(v112) = 0;
        if ( !*(_DWORD *)a5 && *(_WORD *)(a5 + 4) == v109
          || *(_DWORD *)v72 == *(_DWORD *)a5 && *(_WORD *)(v72 + 4) == *(_WORD *)(a5 + 4) )
        {
          v74 = *(_DWORD *)(a5 + 8);
          if ( !v74 || v74 == *(_DWORD *)(v72 + 12) )
          {
            v75 = *(_DWORD *)(a5 + 12);
            if ( !v75 || v75 == *(_DWORD *)(v72 + 16) )
            {
              v76 = *(_DWORD *)(a5 + 16);
              if ( *(_DWORD *)(v72 + 20) == v76 || !v76 )
              {
                sub_8AD900((__int64 *)&v86, (int *)v72);
                v77 = *(void **)(v72 + 160);
                v78 = v89.m128i_i64[0];
                v79 = ptr;
                v94 = v77;
                v80 = v89.m128i_i64[0] + 1;
                if ( &v94 < ptr || &v94 >= (void **)((char *)ptr + 8 * v89.m128i_i64[1]) )
                {
                  if ( v89.m128i_i64[1] < v80 )
                  {
                    ptr = (void *)qvector_reserve(&ptr, ptr, v80, 8);
                    v79 = ptr;
                    v77 = v94;
                    v78 = v89.m128i_i64[0];
                  }
                }
                else if ( v89.m128i_i64[1] < v80 )
                {
                  v85 = v77;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v80, 8);
                  v79 = ptr;
                  v77 = v85;
                  v78 = v89.m128i_i64[0];
                }
                v79[v78] = v77;
                ++v89.m128i_i64[0];
              }
            }
          }
        }
        v72 += 176;
      }
      while ( v73 != v72 );
    }
    sub_80E310((__int64)&v98);
    v102 = &off_2BFC068;
    if ( v106 )
    {
      v107 = 0;
      qfree(v106);
    }
    if ( v104 )
    {
      v105 = 0;
      qfree(v104);
    }
    v102 = &off_2BFC000;
    sub_7C16D0((__int64)&v102);
    goto LABEL_84;
  }
  v99 = 0;
  v98 = nullptr;
  v113 = 0;
  v112 = 0;
  if ( (unsigned __int8)sub_8B2BC0(a1, (__int64 *)&v98, a4 + 40, (__int64)&v112, (__int64)a7) )
  {
    v29 = haystack;
    v102 = nullptr;
    v103 = 0;
    if ( (_QWORD)v99 )
      v29 = (const char *)v98;
    v30 = sub_8ABC60((char **)&v102, nullptr, 0, (__int64)v29, a6, (__int64 *)a7);
    v31 = (int *)v102;
    v32 = (char *)v102;
    if ( !v30 )
    {
      v33 = (int *)((char *)v102 + 152 * v103);
      if ( v33 != v102 )
      {
        do
        {
          v108 = 0;
          v109 = 0;
          LODWORD(v112) = 0;
          WORD2(v112) = 0;
          v110 = 0;
          v111 = 0;
          if ( !*(_DWORD *)a5 && *(_WORD *)(a5 + 4) == v109
            || *v31 == *(_DWORD *)a5 && *((_WORD *)v31 + 2) == *(_WORD *)(a5 + 4) )
          {
            v34 = *(_DWORD *)(a5 + 8);
            if ( !v34 || v34 == v31[3] )
            {
              v35 = *(_DWORD *)(a5 + 12);
              if ( !v35 || v35 == v31[4] )
              {
                v36 = *(_DWORD *)(a5 + 16);
                if ( v31[5] == v36 || !v36 )
                {
                  sub_8AD900((__int64 *)&v86, v31);
                  v37 = *((void **)v31 + 3);
                  v38 = v89.m128i_i64[0];
                  v39 = ptr;
                  v94 = v37;
                  v40 = v89.m128i_i64[0] + 1;
                  if ( &v94 < ptr || &v94 >= (void **)((char *)ptr + 8 * v89.m128i_i64[1]) )
                  {
                    if ( v89.m128i_i64[1] < v40 )
                    {
                      ptr = (void *)qvector_reserve(&ptr, ptr, v89.m128i_i64[0] + 1, 8);
                      v39 = ptr;
                      v37 = v94;
                      v38 = v89.m128i_i64[0];
                    }
                  }
                  else if ( v89.m128i_i64[1] < v40 )
                  {
                    v84 = v37;
                    ptr = (void *)qvector_reserve(&ptr, ptr, v89.m128i_i64[0] + 1, 8);
                    v39 = ptr;
                    v37 = v84;
                    v38 = v89.m128i_i64[0];
                  }
                  v39[v38] = v37;
                  ++v89.m128i_i64[0];
                }
              }
            }
          }
          v31 += 38;
        }
        while ( v33 != v31 );
        v32 = (char *)v102;
      }
      if ( v32 )
      {
        if ( (_QWORD)v103 )
        {
          v82 = v10;
          v41 = 0;
          v42 = 0;
          v43 = v103;
          v83 = a3;
          do
          {
            v44 = &v32[v41];
            v45 = *(void **)&v32[v41 + 128];
            if ( v45 )
            {
              *((_QWORD *)v44 + 17) = 0;
              qfree(v45);
            }
            v46 = *((char **)v44 + 10);
            if ( v46 )
            {
              v47 = *((_QWORD *)v44 + 11);
              if ( v47 )
              {
                for ( i = 0; i != v47; ++i )
                {
                  v49 = &v46[24 * i];
                  v50 = *(void **)v49;
                  if ( *(_QWORD *)v49 )
                  {
                    *((_QWORD *)v49 + 1) = 0;
                    qfree(v50);
                    v46 = *((char **)v44 + 10);
                  }
                }
              }
              *((_QWORD *)v44 + 11) = 0;
              qfree(v46);
            }
            v51 = *((void **)v44 + 7);
            if ( v51 )
            {
              *((_QWORD *)v44 + 8) = 0;
              qfree(v51);
            }
            v52 = *((void **)v44 + 4);
            if ( v52 )
            {
              *((_QWORD *)v44 + 5) = 0;
              qfree(v52);
            }
            ++v42;
            v32 = (char *)v102;
            v41 += 152;
          }
          while ( v43 != v42 );
          v10 = v82;
          a3 = v83;
        }
        *(_QWORD *)&v103 = 0;
        qfree(v32);
      }
      if ( v98 )
      {
        *(_QWORD *)&v99 = 0;
        qfree(v98);
      }
LABEL_84:
      v53 = _mm_loadu_si128((const __m128i *)(v10 + 8));
      v54 = v86;
      v55 = _mm_loadu_si128(&v87);
      v86 = *(void **)v10;
      v56 = ptr;
      *(_QWORD *)v10 = v54;
      *(__m128i *)(v10 + 8) = v55;
      v87 = v53;
      if ( a3 )
      {
        v13 = *(void **)a3;
        v57 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)a3 = v56;
        v7 = 1;
        v58 = _mm_loadu_si128(&v89);
        ptr = v13;
        v89.m128i_i64[1] = v57;
        *(__m128i *)(a3 + 8) = v58;
      }
      else
      {
        v13 = v56;
        v7 = 1;
      }
      goto LABEL_15;
    }
    if ( v102 )
    {
      v59 = v103;
      v60 = 0;
      v61 = 0;
      if ( (_QWORD)v103 )
      {
        do
        {
          v62 = &v31[v60];
          v63 = *((void **)v62 + 16);
          if ( v63 )
          {
            *((_QWORD *)v62 + 17) = 0;
            qfree(v63);
          }
          v64 = *((char **)v62 + 10);
          if ( v64 )
          {
            v65 = *((_QWORD *)v62 + 11);
            if ( v65 )
            {
              for ( j = 0; j != v65; ++j )
              {
                v67 = &v64[24 * j];
                v68 = *(void **)v67;
                if ( *(_QWORD *)v67 )
                {
                  *((_QWORD *)v67 + 1) = 0;
                  qfree(v68);
                  v64 = *((char **)v62 + 10);
                }
              }
            }
            *((_QWORD *)v62 + 11) = 0;
            qfree(v64);
          }
          v69 = *((void **)v62 + 7);
          if ( v69 )
          {
            *((_QWORD *)v62 + 8) = 0;
            qfree(v69);
          }
          v70 = *((void **)v62 + 4);
          if ( v70 )
          {
            *((_QWORD *)v62 + 5) = 0;
            qfree(v70);
          }
          ++v61;
          v31 = (int *)v102;
          v60 += 38;
        }
        while ( v59 != v61 );
      }
      *(_QWORD *)&v103 = 0;
      qfree(v31);
    }
  }
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree(v98);
  }
  v13 = ptr;
  v7 = 0;
LABEL_15:
  if ( v13 )
  {
    v89.m128i_i64[0] = 0;
    qfree(v13);
  }
  v14 = (char *)v86;
  if ( v86 )
  {
    if ( v87.m128i_i64[0] )
    {
      v81 = v7;
      v15 = 0;
      v16 = 0;
      v17 = v87.m128i_i64[0];
      do
      {
        v18 = &v14[v15];
        v19 = *(void **)&v14[v15 + 128];
        if ( v19 )
        {
          *((_QWORD *)v18 + 17) = 0;
          qfree(v19);
        }
        v20 = *((char **)v18 + 10);
        if ( v20 )
        {
          v21 = *((_QWORD *)v18 + 11);
          if ( v21 )
          {
            for ( k = 0; k != v21; ++k )
            {
              v23 = &v20[24 * k];
              v24 = *(void **)v23;
              if ( *(_QWORD *)v23 )
              {
                *((_QWORD *)v23 + 1) = 0;
                qfree(v24);
                v20 = *((char **)v18 + 10);
              }
            }
          }
          *((_QWORD *)v18 + 11) = 0;
          qfree(v20);
        }
        v25 = *((void **)v18 + 7);
        if ( v25 )
        {
          *((_QWORD *)v18 + 8) = 0;
          qfree(v25);
        }
        v26 = *((void **)v18 + 4);
        if ( v26 )
        {
          *((_QWORD *)v18 + 5) = 0;
          qfree(v26);
        }
        ++v16;
        v14 = (char *)v86;
        v15 += 152;
      }
      while ( v17 != v16 );
      v7 = v81;
    }
    v87.m128i_i64[0] = 0;
    qfree(v14);
  }
  return v7;
}
