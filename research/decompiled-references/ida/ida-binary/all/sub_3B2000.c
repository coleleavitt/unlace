__int64 __fastcall sub_3B2000(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v12; // rbx
  bool v13; // zf
  const char *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // eax
  const char *idati; // rsi
  int tinfo_udt_member; // eax
  __int64 v20; // r8
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  int v23; // r15d
  unsigned __int64 v24; // r12
  __m128 v25; // xmm0
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rbp
  void *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rdi
  unsigned __int64 v35; // r11
  char *v36; // r11
  size_t v37; // r9
  unsigned __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // rbp
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rdx
  const char *v49; // r8
  size_t v50; // r14
  unsigned int tinfo_property; // eax
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rbp
  _QWORD *v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rax
  void *v59; // rax
  const void *v60; // r8
  void *v61; // rax
  size_t v62; // r14
  char *v63; // rax
  char v64; // [rsp+0h] [rbp-278h]
  __int64 v65; // [rsp+8h] [rbp-270h]
  char *s; // [rsp+18h] [rbp-260h]
  void *src; // [rsp+30h] [rbp-248h]
  const char *srca; // [rsp+30h] [rbp-248h]
  void *v69; // [rsp+38h] [rbp-240h]
  char *v70; // [rsp+38h] [rbp-240h]
  void *v71; // [rsp+38h] [rbp-240h]
  char *v72; // [rsp+38h] [rbp-240h]
  __int64 v73; // [rsp+40h] [rbp-238h]
  size_t v74; // [rsp+40h] [rbp-238h]
  size_t n; // [rsp+48h] [rbp-230h]
  size_t na; // [rsp+48h] [rbp-230h]
  __int64 v77; // [rsp+58h] [rbp-220h] BYREF
  unsigned __int64 v78; // [rsp+60h] [rbp-218h] BYREF
  __int64 v79; // [rsp+68h] [rbp-210h] BYREF
  __int64 v80; // [rsp+70h] [rbp-208h] BYREF
  __int128 v81; // [rsp+78h] [rbp-200h]
  __int64 v82; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 v83; // [rsp+98h] [rbp-1E0h]
  __int128 v84; // [rsp+A8h] [rbp-1D0h]
  __int64 v85; // [rsp+B8h] [rbp-1C0h]
  int v86; // [rsp+C0h] [rbp-1B8h]
  __int64 v87; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-1A0h]
  __int128 v89; // [rsp+E8h] [rbp-190h]
  __int64 v90; // [rsp+F8h] [rbp-180h]
  int v91; // [rsp+100h] [rbp-178h]
  _QWORD v92[2]; // [rsp+110h] [rbp-168h] BYREF
  __int64 v93; // [rsp+120h] [rbp-158h]
  __int128 v94; // [rsp+128h] [rbp-150h]
  __int64 v95; // [rsp+138h] [rbp-140h]
  __int128 v96; // [rsp+140h] [rbp-138h]
  __int128 v97[3]; // [rsp+150h] [rbp-128h] BYREF
  __int64 v98; // [rsp+180h] [rbp-F8h]
  int v99; // [rsp+188h] [rbp-F0h]
  __int64 v100; // [rsp+190h] [rbp-E8h]
  char v101; // [rsp+198h] [rbp-E0h]
  _BYTE *v102; // [rsp+1A0h] [rbp-D8h] BYREF
  __int128 v103; // [rsp+1A8h] [rbp-D0h] BYREF
  __int128 v104; // [rsp+1B8h] [rbp-C0h]
  __int64 v105; // [rsp+1C8h] [rbp-B0h]
  __int128 v106; // [rsp+1D0h] [rbp-A8h]
  _QWORD v107[7]; // [rsp+1E0h] [rbp-98h] BYREF
  int v108; // [rsp+218h] [rbp-60h]
  __int64 v109; // [rsp+220h] [rbp-58h]
  char v110; // [rsp+228h] [rbp-50h]
  unsigned __int64 v111; // [rsp+238h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 8);
  v111 = __readfsqword(0x28u);
  if ( v9 != 25 )
  {
    v10 = 0;
    if ( v9 != 58 )
      return v10;
  }
  v12 = *(_QWORD *)(a1 + 208);
  v85 = 0;
  v10 = 0;
  v86 = 1;
  v84 = 0;
  v13 = *(_BYTE *)(v12 + 31) == 13;
  v82 = 0;
  v83 = 0;
  if ( !v13 )
    return v10;
  v14 = byte_9 + 4;
  if ( (unsigned __int8)get_tinfo_details(*(_QWORD *)(v12 + 8), 13, &v82) )
  {
    v14 = (const char *)&v77;
    v17 = sub_3AE3E0(a1, &v77, (__int64 *)&v78, (__m128)0LL, a3, a4, a5, v15, v16, a8, a9);
    if ( v17 == 1 )
    {
      v58 = *(_QWORD *)(v12 + 232);
      v77 = v58;
      if ( v58 != -1 )
      {
        v78 = v58;
LABEL_8:
        v81 = 0;
        v80 = 0;
        v102 = nullptr;
        v103 = 0;
        v102 = (_BYTE *)qvector_reserve(&v102, 0, 1, 1);
        *(_QWORD *)&v103 = 1;
        *v102 = 0;
        idati = (const char *)get_idati(&v102);
        sub_3B1E40(&v80, (__int64)idati, (__int64)&v102);
        if ( v102 )
        {
          *(_QWORD *)&v103 = 0;
          qfree(v102, idati);
        }
        v92[1] = 0;
        v93 = 0;
        v98 = 1;
        v95 = 0;
        v99 = -1;
        v100 = 0;
        v101 = 0;
        v65 = v77;
        v92[0] = v77;
        v94 = 0;
        v96 = 0;
        v97[0] = 0;
        v14 = *(const char **)(v12 + 8);
        tinfo_udt_member = find_tinfo_udt_member(v92, v14, 0);
        v23 = tinfo_udt_member;
        if ( tinfo_udt_member == -1 )
        {
          v10 = 0;
LABEL_39:
          clear_tinfo_t(v97);
          if ( v95 )
          {
            *(_QWORD *)&v96 = 0;
            qfree(v95, v14);
          }
          if ( v93 )
          {
            *(_QWORD *)&v94 = 0;
            qfree(v93, v14);
          }
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree(v80, v14);
          }
          goto LABEL_29;
        }
        v24 = tinfo_udt_member;
        v25 = 0;
        v26 = v82;
        v90 = 0;
        v27 = 8LL * tinfo_udt_member;
        v91 = 1;
        v89 = 0;
        v88 = 0;
        v87 = 0;
        v28 = v82 + 144LL * tinfo_udt_member;
        v29 = *(void **)(v28 + 24);
        src = v29;
        if ( v29 )
        {
          v71 = (void *)v27;
          v62 = *(_QWORD *)(v28 + 24);
          v63 = (char *)qalloc_or_throw(v29);
          v14 = *(const char **)(v28 + 16);
          s = v63;
          memcpy(v63, v14, v62);
          v30 = v88;
          if ( v24 >= (unsigned __int64)v83 )
          {
LABEL_45:
            if ( v30 )
            {
              v14 = byte_9 + 4;
              v46 = *(_QWORD *)(v87 + 144 * v30 - 144) + *(_QWORD *)(v87 + 144 * v30 - 144 + 8);
              HIBYTE(v91) = 0;
              v79 = 0;
              *(_QWORD *)&v89 = (unsigned __int64)(v46 + 7) >> 3;
              if ( (unsigned __int8)create_tinfo(&v79, 13, 13, &v87)
                && (v14 = (_BYTE *)(&dword_0 + 2), set_tinfo_property(&v79, 2, 4))
                && (v47 = v80, v14 = (const char *)get_idati(&v79), (v10 = save_tinfo(&v79, v14, 0, v47, 1)) == 0) )
              {
                v49 = &s1;
                if ( src )
                  v49 = s;
                v104 = 0;
                v102 = (_BYTE *)v65;
                v103 = 0u;
                if ( v49 )
                {
                  srca = v49;
                  v50 = strlen(v49);
                  *((_QWORD *)&v103 + 1) = qvector_reserve((char *)&v103 + 8, 0, v50 + 1, 1);
                  *(_QWORD *)&v104 = v50 + 1;
                  memmove(*((void **)&v103 + 1), srca, v50);
                  *(_BYTE *)(*((_QWORD *)&v103 + 1) + v50) = 0;
                }
                v105 = 0;
                v106 = 0;
                v107[0] = 0;
                copy_tinfo_t(v107, &v79, v48);
                v107[1] = 0;
                v107[6] = 1;
                v108 = -1;
                v109 = 0;
                v110 = 0;
                v14 = byte_9;
                *(_QWORD *)&v103 = 8 * get_tinfo_size(0, v79, 0);
                if ( !(unsigned int)set_tinfo_property4(v12 + 8, 9, &v102, 1, -1, 4) )
                {
                  tinfo_property = get_tinfo_property(v79, 7);
                  v14 = nullptr;
                  v10 = sub_3CE4E0(tinfo_property, 0) != 0;
                }
                clear_tinfo_t(v107);
                if ( v105 )
                {
                  *(_QWORD *)&v106 = 0;
                  qfree(v105, v14);
                }
                if ( *((_QWORD *)&v103 + 1) )
                {
                  *(_QWORD *)&v104 = 0;
                  qfree(*((_QWORD *)&v103 + 1), v14);
                }
              }
              else
              {
                v10 = 0;
              }
              clear_tinfo_t(&v79);
            }
            else
            {
              sub_169630(
                (int)"Cannot create structure from undefined data",
                (__int64)v14,
                0,
                v27,
                v20,
                v26,
                v25,
                a3,
                a4,
                a5,
                v21,
                v22,
                a8,
                a9,
                v64);
              v10 = 1;
            }
            if ( s )
              qfree(s, v14);
            goto LABEL_62;
          }
          v26 = v82;
          v27 = (__int64)v71;
        }
        else
        {
          s = nullptr;
          v30 = 0;
          if ( v24 >= (unsigned __int64)v83 )
          {
            sub_169630(
              (int)"Cannot create structure from undefined data",
              (__int64)v14,
              0,
              v27,
              v20,
              v82,
              (__m128)0LL,
              a3,
              a4,
              a5,
              v21,
              v22,
              a8,
              a9,
              v64);
            v10 = 1;
LABEL_62:
            v52 = v87;
            if ( v87 )
            {
              v53 = v88;
              if ( (_QWORD)v88 )
              {
                v54 = 0;
                do
                {
                  v55 = (_QWORD *)(v52 + 144 * v54);
                  clear_tinfo_t(v55 + 8);
                  v56 = v55[5];
                  if ( v56 )
                  {
                    v55[6] = 0;
                    qfree(v56, v14);
                  }
                  v57 = v55[2];
                  if ( v57 )
                  {
                    v55[3] = 0;
                    qfree(v57, v14);
                  }
                  ++v54;
                  v52 = v87;
                }
                while ( v53 != v54 );
              }
              *(_QWORD *)&v88 = 0;
              qfree(v52, v14);
            }
            goto LABEL_39;
          }
        }
        v31 = v78;
        v25 = 0;
        while ( 1 )
        {
          v38 = v26 + 16 * (v27 + v24);
          if ( v31 < *(_QWORD *)v38 )
            break;
          if ( (*(_BYTE *)(v38 + 133) & 4) == 0 )
          {
            v39 = v87;
            if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v30 + 1) )
            {
              v87 = qvector_reserve(&v87, v87, v30 + 1, 144);
              v30 = v88;
              v39 = v87;
              v25 = 0;
            }
            v32 = 144 * v30;
            v33 = v39 + v32;
            *(__m128 *)v33 = v25;
            v34 = v39 + v32 + 16;
            *(_QWORD *)&v88 = v88 + 1;
            *(_QWORD *)(v33 + 16) = 0;
            *(_QWORD *)(v33 + 40) = 0;
            *(_QWORD *)(v33 + 112) = 1;
            *(_DWORD *)(v33 + 120) = -1;
            *(_QWORD *)(v33 + 128) = 0;
            *(_BYTE *)(v33 + 136) = 0;
            *(__m128 *)(v33 + 24) = v25;
            *(__m128 *)(v33 + 48) = v25;
            *(__m128 *)(v33 + 64) = v25;
            *(_QWORD *)v33 = *(_QWORD *)v38;
            *(_QWORD *)(v33 + 8) = *(_QWORD *)(v38 + 8);
            if ( v34 != v38 + 16 )
            {
              v35 = *(_QWORD *)(v38 + 24);
              if ( v35 > 1 )
              {
                n = v35 - 1;
                v69 = *(void **)(v38 + 16);
                v73 = *(_QWORD *)(v38 + 24);
                v59 = (void *)qvector_reserve(v34, 0, v73, 1);
                *(_QWORD *)(v33 + 16) = v59;
                *(_QWORD *)(v33 + 24) = v73;
                memmove(v59, v69, n);
                *(_BYTE *)(*(_QWORD *)(v33 + 16) + v73 - 1) = 0;
              }
            }
            if ( v33 + 40 != v38 + 40 )
            {
              v36 = *(char **)(v38 + 48);
              if ( v36 && (v37 = (size_t)(v36 - 1), v36 != (_BYTE *)&dword_0 + 1) )
              {
                v60 = *(const void **)(v38 + 40);
                v61 = *(void **)(v33 + 40);
                if ( *(_QWORD *)(v33 + 56) < (unsigned __int64)v36 )
                {
                  na = *(_QWORD *)(v38 + 40);
                  v74 = (size_t)(v36 - 1);
                  v72 = *(char **)(v38 + 48);
                  v61 = (void *)qvector_reserve(v33 + 40, *(_QWORD *)(v33 + 40), v72, 1);
                  v60 = (const void *)na;
                  v37 = v74;
                  *(_QWORD *)(v33 + 40) = v61;
                  v36 = v72;
                }
                *(_QWORD *)(v33 + 48) = v36;
                v70 = v36;
                memmove(v61, v60, v37);
                v70[*(_QWORD *)(v33 + 40) - 1] = 0;
              }
              else
              {
                *(_QWORD *)(v33 + 48) = 0;
              }
            }
            v14 = (const char *)(v38 + 64);
            copy_tinfo_t(v33 + 64, v38 + 64, v32);
            v25 = 0;
            *(__m128i *)(v33 + 72) = _mm_loadu_si128((const __m128i *)(v38 + 72));
            *(__m128i *)(v33 + 88) = _mm_loadu_si128((const __m128i *)(v38 + 88));
            a3 = (__m128)_mm_loadu_si128((const __m128i *)(v38 + 104));
            *(__m128 *)(v33 + 104) = a3;
            *(_DWORD *)(v33 + 120) = *(_DWORD *)(v38 + 120);
            *(_DWORD *)(v33 + 128) = *(_DWORD *)(v38 + 128);
            *(_DWORD *)(v33 + 132) = *(_DWORD *)(v38 + 132);
            *(_BYTE *)(v33 + 136) = *(_BYTE *)(v38 + 136);
            *(_QWORD *)v33 -= v65;
            v30 = v88;
          }
          v24 = ++v23;
          if ( v23 >= (unsigned __int64)v83 )
            break;
          v26 = v82;
          v27 = 8LL * v23;
        }
        goto LABEL_45;
      }
    }
    else if ( !v17 )
    {
      goto LABEL_8;
    }
  }
  v10 = 0;
LABEL_29:
  v40 = v82;
  if ( v82 )
  {
    v41 = v83;
    if ( (_QWORD)v83 )
    {
      v42 = 0;
      do
      {
        v43 = (_QWORD *)(v40 + 144 * v42);
        clear_tinfo_t(v43 + 8);
        v44 = v43[5];
        if ( v44 )
        {
          v43[6] = 0;
          qfree(v44, v14);
        }
        v45 = v43[2];
        if ( v45 )
        {
          v43[3] = 0;
          qfree(v45, v14);
        }
        ++v42;
        v40 = v82;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v83 = 0;
    qfree(v40, v14);
  }
  return v10;
}
