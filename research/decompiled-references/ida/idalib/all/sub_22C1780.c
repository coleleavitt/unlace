__int64 __fastcall sub_22C1780(__int64 *a1, __int64 a2, __int64 a3, const void *a4, size_t a5, __int64 a6, __m128i a7)
{
  size_t v9; // rax
  char *v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rax
  size_t v15; // rax
  __int64 v16; // r9
  size_t v17; // r14
  size_t v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  unsigned __int8 v26; // r13
  int v27; // ebx
  size_t v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rdx
  const char *v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __int64 v35; // rax
  __int64 v36; // rbp
  int v37; // esi
  _QWORD *v38; // rsi
  unsigned __int64 *v39; // rsi
  __int64 v40; // rbx
  char v41; // dl
  __int64 v42; // rax
  __m128 **v43; // r15
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r12
  __int64 v50; // rdi
  char v51; // bl
  char v52; // dh
  __int64 v53; // rbp
  _QWORD *v54; // r15
  int v55; // ecx
  unsigned int v56; // ecx
  __int64 v57; // rdx
  unsigned int v58; // ebp
  __int64 *v59; // rax
  __int64 *v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // rbx
  _QWORD *v63; // rbp
  __int64 v64; // rbp
  __int64 v65; // rbx
  void *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rbx
  const char *v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  const char *v73; // [rsp+0h] [rbp-328h] BYREF
  __int64 v74; // [rsp+8h] [rbp-320h]
  _QWORD *v75; // [rsp+18h] [rbp-310h]
  __m128i v76; // [rsp+20h] [rbp-308h] BYREF
  char v77; // [rsp+37h] [rbp-2F1h]
  __int64 v78; // [rsp+38h] [rbp-2F0h]
  __m128 v79; // [rsp+40h] [rbp-2E8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-2D8h]
  __int64 *v81; // [rsp+58h] [rbp-2D0h]
  __int64 v82; // [rsp+60h] [rbp-2C8h]
  __int64 v83; // [rsp+68h] [rbp-2C0h]
  const char *v84; // [rsp+70h] [rbp-2B8h]
  size_t v85; // [rsp+78h] [rbp-2B0h]
  __int64 *v86; // [rsp+80h] [rbp-2A8h]
  __int64 v87; // [rsp+88h] [rbp-2A0h]
  __int64 *v88; // [rsp+90h] [rbp-298h] BYREF
  _BYTE *v89; // [rsp+98h] [rbp-290h]
  __m128i v90; // [rsp+A0h] [rbp-288h] BYREF
  int v91; // [rsp+BCh] [rbp-26Ch]
  __int64 v92; // [rsp+C0h] [rbp-268h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-260h]
  _QWORD *v94; // [rsp+D0h] [rbp-258h] BYREF
  __m128 *v95; // [rsp+D8h] [rbp-250h] BYREF
  _QWORD v96[2]; // [rsp+E0h] [rbp-248h] BYREF
  unsigned int v97; // [rsp+F0h] [rbp-238h]
  _QWORD v98[4]; // [rsp+100h] [rbp-228h] BYREF
  __m128 *v99; // [rsp+120h] [rbp-208h] BYREF
  __int64 v100; // [rsp+130h] [rbp-1F8h]
  __int128 si128; // [rsp+140h] [rbp-1E8h] BYREF
  __int128 v102; // [rsp+150h] [rbp-1D8h]
  __m128i v103; // [rsp+160h] [rbp-1C8h]
  __int64 v104[15]; // [rsp+170h] [rbp-1B8h] BYREF
  void *v105; // [rsp+1E8h] [rbp-140h]
  void *ptr; // [rsp+218h] [rbp-110h]
  __int64 v107; // [rsp+278h] [rbp-B0h]
  unsigned int v108; // [rsp+288h] [rbp-A0h]
  __int64 v109; // [rsp+290h] [rbp-98h]
  unsigned int v110; // [rsp+298h] [rbp-90h]
  _QWORD *v111; // [rsp+2D8h] [rbp-50h]
  unsigned int v112; // [rsp+2E8h] [rbp-40h]

  v86 = a1;
  v83 = a3;
  v87 = a6;
  v9 = j__strlen("llvm.dbg.cu");
  if ( sub_20BE520((__int64)a1, (__int64)"llvm.dbg.cu", v9) )
  {
    v12 = sub_22BF6F0();
    v13 = sub_9954E0((__int64)v12, a4, a5);
    sub_995540(v13, "Skipping module with debug info\n");
    return 0;
  }
  else
  {
    v81 = v104;
    sub_2063110((__int64)v104, v86, 1, 0, v10, v11);
    v75 = (_QWORD *)*v86;
    v98[0] = v86;
    v92 = sub_20C31F0(v75);
    v98[2] = v104;
    v96[0] = 0;
    v96[1] = 0;
    v97 = 0;
    v98[1] = v96;
    v91 = 1;
    LOBYTE(v100) = 0;
    BYTE8(v102) = 0;
    v15 = j__strlen("/");
    v93 = sub_2061600((__int64)v104, v86[21], v86[22], (__int64)"/", v15, v16, a7, si128, v102, (char)v99);
    v17 = j__strlen(&byte_22F0C30);
    v18 = j__strlen("debugify");
    v78 = a2;
    v89 = (_BYTE *)sub_2061DF0(
                     v104,
                     2,
                     v93,
                     (__int64)"debugify",
                     v18,
                     1u,
                     (__int64)&byte_22F0C30,
                     v17,
                     0,
                     0,
                     0,
                     1,
                     0,
                     1u,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
    if ( v83 == a2 )
    {
      v58 = 0;
      v88 = &v92;
    }
    else
    {
      v19 = 1;
      v88 = &v92;
      v73 = (const char *)v98;
      v90 = (__m128i)_mm_loadh_ps((const double *)&v73);
      do
      {
        v20 = 0;
        if ( v78 )
          v20 = v78 - 56;
        v82 = v20;
        v77 = sub_22BF9A0(v20);
        if ( !v77 )
        {
          v21 = (__int64)v81;
          v22 = sub_2061810((__int64)v81, nullptr, 0);
          v23 = sub_20617F0(v21, v22, 0, 0);
          v24 = v82;
          v81 = (__int64 *)v21;
          v25 = v23;
          v26 = byte_2D0D058;
          v27 = ((*(_BYTE *)(v82 + 32) + 9) & 0xFu) < 2 ? 4 : 0;
          v73 = (const char *)&v94;
          v79 = _mm_loadh_ps((const double *)&v88);
          v84 = &byte_22F0C30;
          v76 = (__m128i)_mm_loadh_ps((const double *)&v73);
          v28 = j__strlen(&byte_22F0C30);
          v29 = v93;
          v85 = v28;
          v73 = sub_20CC3B0(v24);
          v74 = v30;
          v31 = sub_20CC3B0(v24);
          v94 = sub_2061BA0(
                  (__int64)v81,
                  v89,
                  (__int64)v31,
                  v32,
                  (__int64)v73,
                  v74,
                  v29,
                  v19,
                  v25,
                  v19,
                  0,
                  v27 + 24,
                  0,
                  0,
                  0,
                  0,
                  (__int64)v84,
                  v85,
                  v26);
          sub_20BE030(v24, v94);
          v33 = _mm_load_si128(&v76);
          v34 = _mm_load_si128(&v90);
          si128 = (__int128)_mm_load_si128((const __m128i *)&v79);
          v102 = (__int128)v33;
          v103 = v34;
          v35 = *(_QWORD *)(v24 + 80);
          v80 = v24 + 72;
          v76.m128i_i64[0] = v35;
          if ( v24 + 72 != v35 )
          {
            if ( !v35 )
LABEL_101:
              BUG();
            v79.m128_u64[0] = (unsigned __int64)&si128;
            while ( 1 )
            {
              v36 = *(_QWORD *)(v76.m128i_i64[0] + 32);
              v73 = (const char *)(v76.m128i_i64[0] + 24);
              if ( v76.m128i_i64[0] + 24 != v36 )
                break;
LABEL_30:
              if ( dword_2D0CC78 > 0 )
              {
                v45 = v76.m128i_i64[0] - 24;
                v46 = sub_204C240(v76.m128i_i64[0] - 24);
                if ( !v46 )
                  BUG();
                v47 = (unsigned int)*(unsigned __int8 *)(v46 - 24) - 39;
                if ( (unsigned int)v47 > 0x38 || (v48 = 0x100060000000001LL, !_bittest64(&v48, v47)) )
                {
                  v49 = (__int64)sub_204C0F0(v45);
                  if ( !v49 )
                  {
                    v49 = sub_204C1C0(v45);
                    if ( !v49 )
                    {
                      v69 = *(const char **)(v76.m128i_i64[0] + 24);
                      if ( v73 != v69 )
                      {
                        if ( !v69 )
                          BUG();
                        if ( (unsigned int)*((unsigned __int8 *)v69 - 24) - 30 <= 0xA )
                          v49 = (__int64)(v69 - 24);
                      }
                    }
                  }
                  v50 = v45;
                  v51 = 0;
                  v53 = sub_204C280(v50);
                  v54 = *(_QWORD **)(v76.m128i_i64[0] + 32);
                  if ( v53 )
                    v51 = v52;
                  if ( v54 )
                    v54 -= 3;
                  if ( v54 != (_QWORD *)v49 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        if ( *(_BYTE *)(v54[1] + 8LL) != 7 )
                        {
                          v55 = *(unsigned __int8 *)v54;
                          if ( (_BYTE)v55 != 84 )
                          {
                            v56 = v55 - 39;
                            if ( v56 > 0x38 || ((1LL << v56) & 0x100060000000001LL) == 0 )
                            {
                              v53 = v54[4];
                              v51 = 0;
                            }
                          }
                          sub_22C1360((unsigned int **)v79.m128_u64[0], (__int64)v54, v53, 0, v51);
                          v77 = 1;
                        }
                        v57 = v54[4];
                        if ( v57 == v54[5] + 48LL || !v57 )
                          break;
                        v54 = (_QWORD *)(v57 - 24);
                        if ( v49 == v57 - 24 )
                          goto LABEL_49;
                      }
                      if ( !v49 )
                        break;
                      v54 = nullptr;
                    }
                  }
                }
              }
LABEL_49:
              v76.m128i_i64[0] = *(_QWORD *)(v76.m128i_i64[0] + 8);
              if ( v80 == v76.m128i_i64[0] )
                goto LABEL_56;
              if ( !v76.m128i_i64[0] )
                goto LABEL_101;
            }
            v37 = v19;
            while ( 2 )
            {
              v40 = v36 - 24;
              v41 = 1;
              if ( !v36 )
                v40 = 0;
              v42 = v19;
              if ( !byte_2D0D058 )
              {
                v41 = 0;
                v42 = 0;
              }
              ++v19;
              v43 = (__m128 **)(v40 + 48);
              v44 = sub_20833C0(v75, v37, 1u, (__int64)v94, 0, 0, v42, v41, 0, 1);
              sub_208B2F0(&v95, (__int64)v44);
              v99 = v95;
              if ( v95 )
              {
                sub_20B2EE0((__int64)&v99, v95, 1);
                if ( v43 != &v99 )
                {
                  v38 = *(_QWORD **)(v40 + 48);
                  if ( v38 )
                    goto LABEL_16;
                  goto LABEL_17;
                }
                if ( v99 )
                  sub_20A0850((__int64)&v99, v99);
              }
              else if ( v43 != &v99 )
              {
                v38 = *(_QWORD **)(v40 + 48);
                if ( !v38 )
                  goto LABEL_29;
LABEL_16:
                sub_20A0850(v40 + 48, v38);
LABEL_17:
                v39 = (unsigned __int64 *)v99;
                *(_QWORD *)(v40 + 48) = v99;
                if ( v39 )
                  sub_20B3430((__int64)&v99, v39, v40 + 48);
              }
              if ( v95 )
              {
                sub_20A0850((__int64)&v95, v95);
                v36 = *(_QWORD *)(v36 + 8);
                if ( v73 == (const char *)v36 )
                  goto LABEL_30;
              }
              else
              {
LABEL_29:
                v36 = *(_QWORD *)(v36 + 8);
                if ( v73 == (const char *)v36 )
                  goto LABEL_30;
              }
              v37 = v19;
              continue;
            }
          }
LABEL_56:
          if ( dword_2D0CC78 == 1 && !v77 )
          {
            v70 = *(_QWORD *)(v82 + 80);
            if ( v70 )
              v70 -= 24;
            v71 = (__int64)sub_204C0F0(v70);
            if ( !v71 )
            {
              v71 = sub_204C1C0(v70);
              if ( !v71 )
              {
                v72 = *(_QWORD *)(v70 + 48);
                if ( v72 != v70 + 48 )
                {
                  if ( !v72 )
                    BUG();
                  if ( (unsigned int)*(unsigned __int8 *)(v72 - 24) - 30 <= 0xA )
                    v71 = v72 - 24;
                }
              }
            }
            sub_22C1360((unsigned int **)&si128, v71, v71 + 24, 0, 0);
          }
          if ( *(_QWORD *)(v87 + 16) )
            (*(void (__fastcall **)(__int64, __int64 *, __int64))(v87 + 24))(v87, v81, v82);
          sub_20620F0((__int64)v81, (__int64)v94);
        }
        v78 = *(_QWORD *)(v78 + 8);
      }
      while ( v83 != v78 );
      v58 = v19 - 1;
    }
    sub_20623A0((__int64)v81);
    v59 = (__int64 *)j__strlen("llvm.debugify");
    v60 = v86;
    v99 = sub_20BE620((unsigned __int64)v86, "llvm.debugify", v59);
    *(_QWORD *)&si128 = &v99;
    *((_QWORD *)&si128 + 1) = v75;
    *(_QWORD *)&v102 = v88;
    sub_22BF710((__int64 **)&si128, v58);
    sub_22BF710((__int64 **)&si128, v91 - 1);
    if ( !sub_20BE200((__int64)v60, "Debug Info Version", 0x12u) )
      sub_20BE8C0(v86, 2u, "Debug Info Version", 0x12u, 3u);
    operator delete(v96[0], 16LL * v97, 8);
    v61 = v112;
    if ( v112 )
    {
      v62 = v111;
      v63 = &v111[7 * v112];
      do
      {
        if ( *v62 != -8192 && *v62 != -4096 )
          sub_22BF4B0((__int64)(v62 + 1));
        v62 += 7;
      }
      while ( v63 != v62 );
      v61 = v112;
    }
    operator delete(v111, 56 * v61, 8);
    sub_22BF4B0((__int64)(v81 + 38));
    v64 = v109;
    v65 = v109 + 48LL * v110;
    if ( v109 != v65 )
    {
      do
      {
        v65 -= 48;
        v66 = *(void **)(v65 + 32);
        if ( v66 != (void *)(v65 + 48) )
          free(v66);
        operator delete(*(_QWORD *)(v65 + 8), 8LL * *(unsigned int *)(v65 + 24), 8);
      }
      while ( v64 != v65 );
      v65 = v109;
    }
    if ( (__int64 *)v65 != v81 + 38 )
      free((void *)v65);
    operator delete(v107, 16LL * v108, 8);
    v67 = (__int64)v81;
    sub_22BF4B0((__int64)(v81 + 27));
    if ( ptr != (void *)(v67 + 184) )
      free(ptr);
    if ( v105 != v81 + 17 )
      free(v105);
    v68 = (__int64)v81;
    sub_22BF4B0((__int64)(v81 + 9));
    sub_22BF4B0(v68 + 24);
    return 1;
  }
}
