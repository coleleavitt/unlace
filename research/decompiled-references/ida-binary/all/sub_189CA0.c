unsigned __int64 __fastcall sub_189CA0(_QWORD *a1, double a2, __m128 a3)
{
  volatile signed __int32 *v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  void **v7; // r15
  void **v8; // r13
  char *v9; // rdi
  void **v10; // rbp
  __int64 v11; // rax
  char *v12; // r12
  _QWORD *v13; // rbx
  void *v14; // rdi
  __int64 v15; // rax
  const char *v16; // rdx
  __int64 v17; // rax
  volatile signed __int32 *v18; // rsi
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void **v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // rax
  const char *v26; // r12
  size_t v27; // rdx
  __m128i si128; // xmm0
  _QWORD *v29; // r14
  _QWORD *v30; // r12
  void **v31; // rax
  void **v32; // r13
  void **v33; // rbp
  char *v34; // rdi
  void **v35; // rbx
  void **v36; // rbx
  void **v37; // rbp
  __int64 v38; // rax
  char *v39; // r12
  _QWORD *v40; // r15
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r12
  _OWORD *v45; // rax
  __m128i v46; // xmm0
  void **v47; // rax
  __int64 v48; // rdx
  void **v49; // r15
  void **v50; // rbp
  void **v51; // r15
  char *v52; // rdi
  void **v53; // r14
  void **v54; // rbx
  void **v55; // r15
  __int64 v56; // rax
  char *v57; // rbp
  _QWORD *v58; // r13
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v67; // rax
  __int64 v68; // r12
  _OWORD *v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rax
  __m128i v72; // xmm3
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  void **v76; // [rsp+0h] [rbp-138h]
  unsigned __int64 v77; // [rsp+0h] [rbp-138h]
  void **v79; // [rsp+10h] [rbp-128h]
  void **v80; // [rsp+20h] [rbp-118h]
  void **v81; // [rsp+20h] [rbp-118h]
  __int64 v82; // [rsp+28h] [rbp-110h]
  __int64 v83; // [rsp+38h] [rbp-100h]
  _QWORD *v84; // [rsp+40h] [rbp-F8h]
  void **v85; // [rsp+48h] [rbp-F0h]
  _QWORD *v86; // [rsp+50h] [rbp-E8h]
  __int64 v87; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v88; // [rsp+68h] [rbp-D0h]
  void *v89; // [rsp+80h] [rbp-B8h] BYREF
  void *v90[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 *v91; // [rsp+B0h] [rbp-88h]
  void *ptr[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 *v93; // [rsp+D0h] [rbp-68h]
  __int64 v94; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v95; // [rsp+E8h] [rbp-50h]
  char v96; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+F8h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  v3 = (volatile signed __int32 *)a1[14];
  if ( v3 )
  {
    if ( *v3 != -1 && !_InterlockedSub(v3, 1u) )
    {
      v4 = (_QWORD *)a1[14];
      if ( v4 )
      {
        v5 = v4[4];
        if ( v5 )
        {
          v6 = 144LL * *(_QWORD *)(v5 - 8);
          v7 = (void **)(v5 + v6);
          if ( v5 == v5 + v6 )
          {
            v15 = 0;
          }
          else
          {
            v8 = v7 - 2;
            do
            {
              v9 = (char *)*v8;
              v76 = v7;
              v7 -= 18;
              if ( *v8 )
              {
                v10 = v7;
                if ( v7 == v8 )
                  goto LABEL_19;
                do
                {
                  v11 = *(unsigned __int8 *)v10;
                  if ( (_BYTE)v11 != 0xFF )
                  {
                    v12 = &v9[32 * v11];
                    v13 = *((_QWORD **)v12 + 3);
                    while ( v13 )
                    {
                      v14 = v13;
                      v13 = (_QWORD *)v13[1];
                      operator delete(v14, 0x10u);
                    }
                    if ( *(_QWORD *)v12 && !_InterlockedSub(*(volatile signed __int32 **)v12, 1u) )
                      free(*(void **)v12);
                    v9 = (char *)*v8;
                  }
                  v10 = (void **)((char *)v10 + 1);
                }
                while ( v10 != v8 );
                if ( v9 )
LABEL_19:
                  operator delete[](v9);
              }
              v8 -= 18;
            }
            while ( (void **)v4[4] != v7 );
            v15 = 144LL * (_QWORD)*(v76 - 19);
          }
          operator delete[](v7 - 1, v15 + 8);
        }
        operator delete(v4, 0x28u);
      }
    }
  }
  v82 = 0;
  a1[14] = 0;
  a1[15] = 0;
  v83 = a1[10];
  if ( !v83 )
    return v97 - __readfsqword(0x28u);
  do
  {
    v16 = &s1;
    v17 = *(_QWORD *)(a1[9] + 8 * v82);
    v88 = 0;
    v87 = 0;
    if ( *(_QWORD *)(v17 + 40) )
      v16 = *(const char **)(v17 + 32);
    v18 = nullptr;
    sub_4B1970(&v87, 0, v16);
    if ( !(_QWORD)v88 )
    {
      v63 = v87;
      if ( v87 )
        goto LABEL_105;
      goto LABEL_106;
    }
    v77 = 0;
    v22 = &v89;
    do
    {
      v23 = v87 + 24 * v77;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v25 = v24 - 1;
        v26 = *(const char **)v23;
        v27 = v25 >> 63;
      }
      else
      {
        LOBYTE(v27) = 0;
        v25 = 0;
        v26 = &s1;
      }
      if ( !v26 || (_BYTE)v27 )
      {
        v25 = 0;
        if ( v26 )
          v25 = strlen(v26);
      }
      QT::QString::fromUtf8(v22, v25, v26);
      QT::QString::toLower_helper((QT::QString *)v90, (QT::QString *)v22);
      si128 = _mm_load_si128((const __m128i *)v90);
      v93 = v91;
      *(__m128i *)ptr = si128;
      if ( si128.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
      v18 = (volatile signed __int32 *)a1[14];
      if ( !v18 )
      {
        v86 = nullptr;
LABEL_115:
        v71 = operator new(0x28u);
        v72 = _mm_load_si128((const __m128i *)&xmmword_5DC4C0);
        v30 = (_QWORD *)v71;
        *(_QWORD *)v71 = 1;
        *(_QWORD *)(v71 + 24) = 0;
        *(_QWORD *)(v71 + 32) = 0;
        *(__m128i *)(v71 + 8) = v72;
        v73 = operator new[]((unsigned __int64)&qword_98);
        *(_QWORD *)v73 = 1;
        *(_OWORD *)(v73 + 8) = -1;
        *(_OWORD *)(v73 + 24) = -1;
        *(_OWORD *)(v73 + 40) = -1;
        *(_OWORD *)(v73 + 56) = -1;
        *(_OWORD *)(v73 + 72) = -1;
        *(_OWORD *)(v73 + 88) = -1;
        *(_OWORD *)(v73 + 104) = -1;
        *(_OWORD *)(v73 + 120) = -1;
        *(_QWORD *)(v73 + 136) = 0;
        *(_WORD *)(v73 + 144) = 0;
        v30[4] = v73 + 8;
        v30[3] = QT::QHashSeed::globalSeed((QT::QHashSeed *)&qword_98);
        goto LABEL_63;
      }
      if ( *v18 <= 1u )
      {
        sub_189540((__int64)&v94, v18, (__int64)ptr);
        v67 = *(_QWORD *)(v94 + 32) + 144 * (v95 >> 7);
        v68 = *(_QWORD *)(v67 + 128) + 32LL * *(unsigned __int8 *)(v67 + (v95 & 0x7F));
        if ( v96 )
        {
          v74 = operator new(0x10u);
          *(_OWORD *)v74 = 0;
          v20 = (unsigned int)v82;
          *(_DWORD *)v74 = v82;
          v19 = *(__int64 **)(v68 + 24);
          *(_QWORD *)(v68 + 24) = v74;
          *(_QWORD *)(v74 + 8) = v19;
        }
        else
        {
          v69 = (_OWORD *)operator new(0x10u);
          a3 = 0;
          *v69 = 0;
          v20 = (unsigned int)v82;
          *(_DWORD *)v69 = v82;
          v70 = _mm_load_si128((const __m128i *)ptr);
          *(_OWORD *)ptr = 0;
          *(__m128i *)v68 = v70;
          v19 = v93;
          v93 = nullptr;
          *(_QWORD *)(v68 + 16) = v19;
          *(_QWORD *)(v68 + 24) = v69;
        }
        ++a1[15];
        goto LABEL_89;
      }
      v86 = (_QWORD *)a1[14];
      if ( *v18 != -1 )
        _InterlockedAdd(v18, 1u);
      v29 = (_QWORD *)a1[14];
      if ( !v29 )
        goto LABEL_115;
      v30 = (_QWORD *)a1[14];
      if ( *(_DWORD *)v29 <= 1u )
        goto LABEL_64;
      v30 = (_QWORD *)operator new(0x28u);
      sub_189980((__int64)v30, (__int64)v29, *(double *)si128.m128i_i64, a3);
      if ( *(_DWORD *)v29 != -1 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
      {
        v31 = (void **)v29[4];
        if ( v31 )
        {
          v32 = &v31[18 * (_QWORD)*(v31 - 1)];
          if ( v31 == v32 )
          {
            v42 = 0;
          }
          else
          {
            v84 = v30;
            v85 = v22;
            v33 = v32 - 2;
            do
            {
              v34 = (char *)*v33;
              v35 = v32;
              v32 -= 18;
              if ( *v33 )
              {
                if ( v33 == v32 )
                  goto LABEL_58;
                v80 = v35;
                v36 = v33;
                v37 = v32;
                do
                {
                  v38 = *(unsigned __int8 *)v37;
                  if ( (_BYTE)v38 != 0xFF )
                  {
                    v39 = &v34[32 * v38];
                    v40 = *((_QWORD **)v39 + 3);
                    while ( v40 )
                    {
                      v41 = v40;
                      v40 = (_QWORD *)v40[1];
                      operator delete(v41, 0x10u);
                    }
                    if ( *(_QWORD *)v39 && !_InterlockedSub(*(volatile signed __int32 **)v39, 1u) )
                      free(*(void **)v39);
                    v34 = (char *)*v36;
                  }
                  v37 = (void **)((char *)v37 + 1);
                }
                while ( v37 != v36 );
                v33 = v36;
                v35 = v80;
                if ( v34 )
LABEL_58:
                  operator delete[](v34);
              }
              v33 -= 18;
            }
            while ( (void **)v29[4] != v32 );
            v30 = v84;
            v22 = v85;
            v42 = 144LL * (_QWORD)*(v35 - 19);
          }
          operator delete[](v32 - 1, v42 + 8);
        }
        operator delete(v29, 0x28u);
      }
LABEL_63:
      a1[14] = v30;
LABEL_64:
      v18 = (volatile signed __int32 *)v30;
      sub_189540((__int64)&v94, v30, (__int64)ptr);
      v43 = *(_QWORD *)(v94 + 32) + 144 * (v95 >> 7);
      v44 = *(_QWORD *)(v43 + 128) + 32LL * *(unsigned __int8 *)(v43 + (v95 & 0x7F));
      if ( v96 )
      {
        v75 = operator new(0x10u);
        v20 = (unsigned int)v82;
        *(_OWORD *)v75 = 0;
        *(_DWORD *)v75 = v82;
        v19 = *(__int64 **)(v44 + 24);
        *(_QWORD *)(v44 + 24) = v75;
        *(_QWORD *)(v75 + 8) = v19;
      }
      else
      {
        v45 = (_OWORD *)operator new(0x10u);
        v19 = v93;
        v20 = (unsigned int)v82;
        a3 = 0;
        *v45 = 0;
        v46 = _mm_load_si128((const __m128i *)ptr);
        *(_DWORD *)v45 = v82;
        v93 = nullptr;
        *(_QWORD *)(v44 + 16) = v19;
        *(_QWORD *)(v44 + 24) = v45;
        *(_OWORD *)ptr = 0;
        *(__m128i *)v44 = v46;
      }
      ++a1[15];
      if ( v86 )
      {
        v19 = (__int64 *)*(unsigned int *)v86;
        if ( (_DWORD)v19 != -1 && !_InterlockedSub((volatile signed __int32 *)v86, 1u) )
        {
          v47 = (void **)v86[4];
          if ( v47 )
          {
            v48 = (__int64)*(v47 - 1);
            v49 = &v47[18 * v48];
            if ( v47 == v49 )
            {
              v60 = 0;
            }
            else
            {
              v81 = v22;
              v50 = &v47[18 * v48];
              v51 = v49 - 2;
              do
              {
                v52 = (char *)*v51;
                v53 = v50;
                v50 -= 18;
                if ( *v51 )
                {
                  if ( v50 == v51 )
                    goto LABEL_84;
                  v79 = v50;
                  v54 = v51;
                  v55 = v50;
                  do
                  {
                    v56 = *(unsigned __int8 *)v55;
                    if ( (_BYTE)v56 != 0xFF )
                    {
                      v57 = &v52[32 * v56];
                      v58 = *((_QWORD **)v57 + 3);
                      while ( v58 )
                      {
                        v59 = v58;
                        v58 = (_QWORD *)v58[1];
                        operator delete(v59, 0x10u);
                      }
                      if ( *(_QWORD *)v57 && !_InterlockedSub(*(volatile signed __int32 **)v57, 1u) )
                        free(*(void **)v57);
                      v52 = (char *)*v54;
                    }
                    v55 = (void **)((char *)v55 + 1);
                  }
                  while ( v55 != v54 );
                  v50 = v79;
                  v51 = v54;
                  if ( v52 )
LABEL_84:
                    operator delete[](v52);
                }
                v51 -= 18;
              }
              while ( (void **)v86[4] != v50 );
              v49 = v50;
              v22 = v81;
              v60 = 144LL * (_QWORD)*(v53 - 19);
            }
            operator delete[](v49 - 1, v60 + 8);
          }
          v18 = (volatile signed __int32 *)&qword_28;
          operator delete(v86, 0x28u);
        }
      }
LABEL_89:
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v90[0] && !_InterlockedSub((volatile signed __int32 *)v90[0], 1u) )
        free(v90[0]);
      if ( v89 && !_InterlockedSub((volatile signed __int32 *)v89, 1u) )
        free(v89);
      ++v77;
      v61 = v88;
    }
    while ( v77 < (unsigned __int64)v88 );
    v62 = v87;
    v63 = v87;
    if ( v87 )
    {
      if ( (_QWORD)v88 )
      {
        v64 = 0;
        do
        {
          v19 = (__int64 *)(v62 + 24 * v64);
          v65 = *v19;
          if ( *v19 )
          {
            v19[1] = 0;
            qfree(v65, v18, v19, v20, v21);
            v62 = v87;
          }
          ++v64;
          v63 = v62;
        }
        while ( v61 != v64 );
      }
LABEL_105:
      *(_QWORD *)&v88 = 0;
      qfree(v63, v18, v19, v20, v21);
    }
LABEL_106:
    ++v82;
  }
  while ( v83 != v82 );
  return v97 - __readfsqword(0x28u);
}
