__int64 __fastcall sub_327C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const __m128i **a5, char a6)
{
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  size_t v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r14
  char v21; // al
  char v22; // al
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // r14
  __int64 v30; // rcx
  const __m128i *v31; // rax
  const __m128i *v32; // r14
  const __m128i *v33; // rdx
  const __m128i *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // rbp
  _QWORD *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  const __m128i *v44; // rdx
  __int64 tinfo_size; // rax
  unsigned __int8 v46; // al
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 idati; // rax
  int v53; // eax
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  const void *v57; // r8
  void *v58; // rax
  unsigned __int8 v59; // cl
  int v60; // eax
  int v61; // r8d
  int v62; // r9d
  const char *v63; // rsi
  __int64 v64; // rax
  const __m128i *v65; // rdx
  const __m128i *v66; // r13
  __int64 v67; // r15
  const __m128i *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __m128i v71; // xmm0
  bool v72; // cf
  __int64 v73; // rax
  const __m128i *v74; // rdx
  const __m128i *v75; // r13
  __int64 v76; // r15
  const __m128i *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __m128i v80; // xmm0
  int v81; // [rsp+0h] [rbp-108h]
  __int64 v82; // [rsp+8h] [rbp-100h]
  const __m128i *v83; // [rsp+10h] [rbp-F8h]
  __int64 v84; // [rsp+18h] [rbp-F0h]
  int v85; // [rsp+20h] [rbp-E8h]
  __int64 v86; // [rsp+20h] [rbp-E8h]
  int v87; // [rsp+20h] [rbp-E8h]
  __int64 v88; // [rsp+28h] [rbp-E0h]
  __int64 v89; // [rsp+30h] [rbp-D8h]
  int v90; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v91; // [rsp+3Fh] [rbp-C9h]
  __int64 v92; // [rsp+40h] [rbp-C8h]
  __int64 v93; // [rsp+48h] [rbp-C0h]
  __int64 v94; // [rsp+50h] [rbp-B8h]
  __int64 v95; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v96; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v97; // [rsp+58h] [rbp-B0h]
  const void *v98; // [rsp+58h] [rbp-B0h]
  __m128i v99; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v100; // [rsp+70h] [rbp-98h] BYREF
  __int128 v101; // [rsp+78h] [rbp-90h]
  __int64 v102; // [rsp+90h] [rbp-78h] BYREF
  __int128 v103; // [rsp+98h] [rbp-70h]
  __int128 v104; // [rsp+A8h] [rbp-60h]
  __int64 v105; // [rsp+B8h] [rbp-50h]
  int v106; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v107; // [rsp+C8h] [rbp-40h]

  v93 = a2;
  v88 = a1;
  v92 = a3;
  v84 = a4;
  v107 = __readfsqword(0x28u);
  v91 = sub_5B770();
  v10 = *(_DWORD *)(a1 + 408);
  if ( v91 )
  {
    v51 = 13;
    if ( v10 == 3 )
      v51 = 29;
    idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL);
    WORD4(v103) = 0;
    *(_QWORD *)&v103 = "";
    if ( !idati )
    {
      idati = get_idati();
      v51 = (unsigned int)v51;
    }
    v102 = idati;
    create_tinfo(v93, v51, 189, &v102);
    return v91;
  }
  v102 = 0;
  v105 = 0;
  v106 = 1;
  v103 = 0;
  v104 = 0;
  if ( v10 > 2 )
  {
    if ( v10 == 3 )
    {
      HIBYTE(v106) = 1;
      goto LABEL_5;
    }
LABEL_36:
    if ( under_debugger )
      BUG();
    v12 = interr(30219);
    goto LABEL_38;
  }
  if ( !v10 )
    goto LABEL_36;
LABEL_5:
  v11 = (*(_BYTE *)(a1 + 412) & 1) == 0;
  HIDWORD(v105) = ((*(_BYTE *)(a1 + 412) & 0x20) != 0) << 7;
  v12 = *(_QWORD *)(a1 + 392);
  if ( !v11 )
  {
    v94 = *(_QWORD *)(a1 + 416) >> 3;
    if ( v12 )
    {
LABEL_7:
      v101 = 0;
      v100 = 0;
      sub_2F400(a1, &v100, v84, a6, v8, v9);
      v83 = a5[1];
      if ( (int)v101 > 0 )
      {
        v82 = 0;
        v89 = 8LL * (unsigned int)(v101 - 1);
        while ( 1 )
        {
          v16 = v103;
          v17 = v102;
          v18 = *(_QWORD *)(v100 + v82);
          if ( *((_QWORD *)&v103 + 1) < (unsigned __int64)(v103 + 1) )
          {
            v102 = qvector_reserve(&v102, v102, v103 + 1, 144);
            v16 = v103;
            v17 = v102;
          }
          v19 = v17 + 144 * v16;
          *(_QWORD *)(v19 + 16) = 0;
          v20 = v19 + 64;
          *(_QWORD *)(v19 + 40) = 0;
          *(_QWORD *)(v19 + 112) = 1;
          *(_DWORD *)(v19 + 120) = -1;
          *(_QWORD *)(v19 + 128) = 0;
          *(_BYTE *)(v19 + 136) = 0;
          *(_OWORD *)v19 = 0;
          *(_OWORD *)(v19 + 24) = 0;
          *(_OWORD *)(v19 + 48) = 0;
          *(_OWORD *)(v19 + 64) = 0;
          *(_QWORD *)&v103 = v103 + 1;
          v21 = *(_BYTE *)(v18 + 72);
          if ( (v21 & 2) != 0 )
          {
            sub_28E60(v20, *(_QWORD *)(v18 + 80) >> 3);
            tinfo_size = get_tinfo_size(0, *(_QWORD *)(v19 + 64), 1);
          }
          else
          {
            if ( (v21 & 1) == 0 )
            {
              v46 = sub_5D750(v18 + 48, v20, v92, v84, a5, 0);
              if ( !v46 || (v96 = v46, v86 = get_tinfo_size(0, *(_QWORD *)(v19 + 64), 0), v86 == -1) )
              {
                if ( (debug & 0x400000) != 0 )
                {
                  v86 = -1;
                  v59 = 0;
                  goto LABEL_93;
                }
LABEL_70:
                v86 = 1;
LABEL_71:
                sub_28E60(v20, v86);
              }
              else if ( (unsigned int)verify_tinfo(*(_QWORD *)(v19 + 64)) )
              {
                v59 = v96;
                if ( (debug & 0x400000) != 0 )
                {
LABEL_93:
                  v97 = v59;
                  v60 = sub_81860(v18 + 88, 0, 0);
                  v63 = src;
                  if ( *(_QWORD *)(v18 + 24) )
                    v63 = *(const char **)(v18 + 16);
                  sub_88B80(
                    (unsigned int)"Couldn't serialize UDT member '%s' @ %s. Turning into dummy.\n",
                    (_DWORD)v63,
                    v60,
                    v97,
                    v61,
                    v62);
                  if ( !v97 )
                    goto LABEL_70;
                }
                goto LABEL_71;
              }
              tinfo_size = v86;
              goto LABEL_63;
            }
            v99.m128i_i8[2] = 0;
            v99.m128i_i16[0] = 0;
            v99.m128i_i8[0] = sub_5E020(
                                (int)v18 + 48,
                                1,
                                v84,
                                v13,
                                v14,
                                v15,
                                v81,
                                v82,
                                (_DWORD)v83,
                                v84,
                                (int)v18 + 48,
                                v88,
                                v89,
                                v90,
                                v92,
                                v93,
                                v94);
            v99.m128i_i8[1] = *(_QWORD *)(v18 + 80);
            v22 = sub_2F1C0((__int64 *)v18);
            v25 = v99.m128i_u8[1];
            v99.m128i_i8[2] = v22 ^ 1;
            v26 = *(_QWORD *)(v18 + 80);
            if ( !v26 )
            {
              v95 = v99.m128i_u8[1];
              v27 = sub_5E020(
                      v85,
                      1,
                      *(_QWORD *)(v18 + 8),
                      v99.m128i_u8[1],
                      v23,
                      v24,
                      v81,
                      v82,
                      (_DWORD)v83,
                      v84,
                      v85,
                      v88,
                      v89,
                      v90,
                      v92,
                      v93,
                      v94);
              v25 = v95;
              v26 = 8 * v27;
            }
            if ( v25 != v26 || !(unsigned __int8)create_tinfo(v20, 14, 14, &v99) )
            {
              if ( (debug & 0x400000) != 0 )
              {
                v87 = v99.m128i_u8[0];
                v53 = sub_81860(v18 + 88, 0, 0);
                sub_88B80(
                  (unsigned int)"Couldn't create bitfield with data @ %s. Making %d-bytes padding instead.\n",
                  v53,
                  v87,
                  v54,
                  v55,
                  v56);
              }
              sub_28E60(v20, v99.m128i_u8[0]);
              *(_BYTE *)(v18 + 72) |= 4u;
              *(_QWORD *)(v19 + 8) = 8 * (unsigned int)v99.m128i_u8[0];
              goto LABEL_19;
            }
            v50 = *(_QWORD *)(v18 + 80);
            if ( v50 )
            {
              *(_QWORD *)(v19 + 8) = v50;
              if ( v50 == -1 )
              {
                if ( v100 )
                {
                  *(_QWORD *)&v101 = 0;
                  qfree(v100);
                }
                goto LABEL_48;
              }
              goto LABEL_19;
            }
            tinfo_size = sub_5E020(
                           v85,
                           1,
                           *(_QWORD *)(v18 + 8),
                           v47,
                           v48,
                           v49,
                           v81,
                           v82,
                           (_DWORD)v83,
                           v84,
                           v85,
                           v88,
                           v89,
                           v90,
                           v92,
                           v93,
                           v94);
          }
LABEL_63:
          *(_QWORD *)(v19 + 8) = 8 * tinfo_size;
LABEL_19:
          v28 = *(_QWORD *)(v19 + 64);
          *(_QWORD *)v19 = *(_QWORD *)(v18 + 40);
          if ( (get_tinfo_property(v28, 2) & 0xF) != 0xE )
            *(_QWORD *)v19 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v19 + 16 != v18 + 16 )
          {
            v29 = *(_QWORD *)(v18 + 24);
            if ( v29 && (v15 = v29 - 1, v29 != 1) )
            {
              v57 = *(const void **)(v18 + 16);
              v58 = *(void **)(v19 + 16);
              if ( *(_QWORD *)(v19 + 32) < v29 )
              {
                v98 = *(const void **)(v18 + 16);
                v58 = (void *)qvector_reserve(v19 + 16, *(_QWORD *)(v19 + 16), *(_QWORD *)(v18 + 24), 1);
                v57 = v98;
                v15 = v29 - 1;
                *(_QWORD *)(v19 + 16) = v58;
              }
              *(_QWORD *)(v19 + 24) = v29;
              memmove(v58, v57, v15);
              *(_BYTE *)(*(_QWORD *)(v19 + 16) + v29 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v19 + 24) = 0;
            }
          }
          if ( (*(_BYTE *)(v18 + 72) & 8) != 0 && (get_tinfo_property(*(_QWORD *)(v19 + 64), 2) & 0x3F) == 0xD )
          {
            v30 = v82;
            *(_DWORD *)(v19 + 132) |= 0x20u;
            if ( v82 == v89 )
              break;
          }
          else
          {
            v30 = v82;
            if ( v82 == v89 )
              break;
          }
          v13 = v30 + 8;
          v31 = a5[1];
          v82 = v13;
          if ( v83 != v31 )
          {
            v99 = 0u;
            if ( v83 < v31 )
              goto LABEL_34;
            v32 = a5[2];
            if ( &v99 >= *a5 && &v99 < &(*a5)[(_QWORD)v32] )
            {
              if ( v32 < v83 )
              {
                v73 = qvector_reserve(a5, 0, v83, 16);
                v74 = a5[1];
                v75 = a5[2];
                v76 = v73;
                a5[2] = v32;
                v77 = *a5;
                v78 = (__int64)&v74[-1].m128i_i64[1] + 7;
                if ( v78 >= 0 )
                {
                  v79 = v73;
                  do
                  {
                    v80 = _mm_loadu_si128(v77);
                    v79 += 16;
                    ++v77;
                    *(__m128i *)(v79 - 16) = v80;
                    v72 = v78-- == 0;
                  }
                  while ( !v72 );
                  v77 = *a5;
                }
                qfree(v77);
                *a5 = (const __m128i *)v76;
                v31 = a5[1];
                a5[2] = v75;
              }
              LODWORD(v13) = (_DWORD)v83;
              if ( v31 < v83 )
              {
                do
                {
                  v33 = v31;
                  v31 = (const __m128i *)((char *)v31 + 1);
                  v34 = &(*a5)[(_QWORD)v33];
                  v34->m128i_i64[0] = 0;
                  v34->m128i_i64[1] = 0;
                }
                while ( v83 != v31 );
              }
              goto LABEL_34;
            }
            if ( v32 < v83 )
            {
              v64 = qvector_reserve(a5, 0, v83, 16);
              v65 = a5[1];
              v66 = a5[2];
              v67 = v64;
              a5[2] = v32;
              v68 = *a5;
              v69 = (__int64)&v65[-1].m128i_i64[1] + 7;
              if ( v69 >= 0 )
              {
                v70 = v64;
                do
                {
                  v71 = _mm_loadu_si128(v68);
                  v70 += 16;
                  ++v68;
                  *(__m128i *)(v70 - 16) = v71;
                  v72 = v69-- == 0;
                }
                while ( !v72 );
                v68 = *a5;
              }
              qfree(v68);
              *a5 = (const __m128i *)v67;
              v31 = a5[1];
              a5[2] = v66;
            }
            LODWORD(v13) = (_DWORD)v83;
            if ( v31 >= v83 )
            {
LABEL_34:
              a5[1] = v83;
            }
            else
            {
              do
              {
                v44 = v31;
                v31 = (const __m128i *)((char *)v31 + 1);
                (*a5)[(_QWORD)v44] = _mm_load_si128(&v99);
              }
              while ( v83 != v31 );
              a5[1] = v83;
            }
          }
        }
      }
      if ( v100 )
      {
        *(_QWORD *)&v101 = 0;
        qfree(v100);
      }
      goto LABEL_42;
    }
    goto LABEL_40;
  }
LABEL_38:
  v94 = *(_QWORD *)(a1 + 368);
  if ( v94 != -1 )
  {
    if ( v12 )
      goto LABEL_7;
LABEL_40:
    v35 = 8 * v94;
    goto LABEL_41;
  }
  if ( v12 )
  {
    v94 = 0;
    goto LABEL_7;
  }
  v35 = 8;
LABEL_41:
  v94 = sub_2CDF0(&v102, v92, v84, (__int64)a5, v35);
LABEL_42:
  *(_QWORD *)&v104 = v94;
  if ( !v94 )
  {
    if ( (_QWORD)v103 )
      *(_QWORD *)&v104 = (unsigned __int64)(*(_QWORD *)(v102 + 16 * (9 * v103 - 9))
                                          + *(_QWORD *)(v102 + 16 * (9 * v103 - 9) + 8)
                                          + 7LL) >> 3;
    else
      *(_QWORD *)&v104 = 1;
  }
  v36 = 13;
  if ( *(_DWORD *)(v88 + 408) == 3 )
    v36 = 29;
  create_tinfo(v93, v36, 13, &v102);
  set_tinfo_property(v93, 2, 4);
  v91 = 1;
LABEL_48:
  v37 = v102;
  if ( v102 )
  {
    v38 = v103;
    if ( (_QWORD)v103 )
    {
      v39 = 0;
      do
      {
        v40 = (_QWORD *)(v37 + 144 * v39);
        clear_tinfo_t(v40 + 8);
        v41 = v40[5];
        if ( v41 )
        {
          v40[6] = 0;
          qfree(v41);
        }
        v42 = v40[2];
        if ( v42 )
        {
          v40[3] = 0;
          qfree(v42);
        }
        ++v39;
        v37 = v102;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v103 = 0;
    qfree(v37);
  }
  return v91;
}
