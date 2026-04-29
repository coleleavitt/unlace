__int64 __fastcall sub_F9180(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 **v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r13
  void *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 i; // r13
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 *v29; // r14
  unsigned __int64 *v30; // rbp
  int **v31; // r14
  unsigned __int64 *v32; // rax
  int *v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 *v36; // r13
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r13
  __int64 v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rbp
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  unsigned __int64 v52; // r12
  __int64 v53; // r13
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  __int64 v56; // r13
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 na; // [rsp+10h] [rbp-288h]
  size_t n; // [rsp+10h] [rbp-288h]
  unsigned __int64 **v69; // [rsp+18h] [rbp-280h]
  unsigned int v70; // [rsp+2Ch] [rbp-26Ch]
  __int64 v71; // [rsp+30h] [rbp-268h]
  __int64 v72; // [rsp+40h] [rbp-258h] BYREF
  __int64 v73; // [rsp+48h] [rbp-250h]
  unsigned __int8 v74; // [rsp+50h] [rbp-248h]
  __int64 v75; // [rsp+60h] [rbp-238h] BYREF
  __int128 v76; // [rsp+68h] [rbp-230h]
  __int64 (__fastcall **v77)(); // [rsp+80h] [rbp-218h] BYREF
  __int64 v78; // [rsp+88h] [rbp-210h]
  void *src; // [rsp+90h] [rbp-208h] BYREF
  __int128 v80; // [rsp+98h] [rbp-200h]
  char v81; // [rsp+A8h] [rbp-1F0h]
  __int64 *v82; // [rsp+B0h] [rbp-1E8h]
  int v83; // [rsp+C0h] [rbp-1D8h] BYREF
  _QWORD *v84; // [rsp+C8h] [rbp-1D0h]
  int *v85; // [rsp+D0h] [rbp-1C8h]
  int *v86; // [rsp+D8h] [rbp-1C0h]
  __int64 v87; // [rsp+E0h] [rbp-1B8h]
  unsigned __int8 v88; // [rsp+E8h] [rbp-1B0h]
  __int64 (__fastcall **v89)(); // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v90; // [rsp+F8h] [rbp-1A0h]
  unsigned __int64 v91; // [rsp+100h] [rbp-198h]
  __int64 v92; // [rsp+108h] [rbp-190h]
  __int64 v93; // [rsp+110h] [rbp-188h]
  char v94; // [rsp+118h] [rbp-180h]
  __int64 *v95; // [rsp+120h] [rbp-178h]
  __int64 *v96; // [rsp+128h] [rbp-170h]
  char v97[8]; // [rsp+130h] [rbp-168h] BYREF
  __int64 v98; // [rsp+138h] [rbp-160h]
  __int64 v99; // [rsp+140h] [rbp-158h]
  __int64 v100; // [rsp+150h] [rbp-148h]
  __int64 v101; // [rsp+158h] [rbp-140h]
  __int64 v102; // [rsp+188h] [rbp-110h]
  __int64 v103; // [rsp+190h] [rbp-108h]
  __int64 v104; // [rsp+1A0h] [rbp-F8h]
  __int64 v105; // [rsp+1A8h] [rbp-F0h]
  __int64 v106; // [rsp+1B8h] [rbp-E0h]
  __int64 v107; // [rsp+1C0h] [rbp-D8h]
  __int64 v108; // [rsp+1C8h] [rbp-D0h]
  __int64 v109; // [rsp+1D0h] [rbp-C8h]
  __int64 v110; // [rsp+1D8h] [rbp-C0h]
  __int64 v111; // [rsp+1E0h] [rbp-B8h]
  __int64 v112; // [rsp+1E8h] [rbp-B0h]
  __int128 v113; // [rsp+1F0h] [rbp-A8h]
  __int64 v114; // [rsp+200h] [rbp-98h]
  __int128 v115; // [rsp+208h] [rbp-90h]
  __int64 v116; // [rsp+218h] [rbp-80h]
  __int128 v117; // [rsp+220h] [rbp-78h]
  __int64 v118; // [rsp+230h] [rbp-68h]
  __int64 v119; // [rsp+238h] [rbp-60h]
  __int64 v120; // [rsp+240h] [rbp-58h]
  unsigned int v121; // [rsp+248h] [rbp-50h]
  unsigned __int64 v122; // [rsp+258h] [rbp-40h]

  v122 = __readfsqword(0x28u);
  v74 = 0;
  v89 = off_4DCF38;
  v72 = 0;
  v73 = 0;
  v90 = 0;
  v91 = 0;
  v1 = *(_QWORD *)(a1 + 1496);
  v94 = 0;
  v92 = 0;
  v93 = 0;
  v95 = &v72;
  v96 = nullptr;
  sub_D10B0((__int64)v97, v1, 0x10u);
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v114 = 0;
  v116 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v90 = a1;
  v113 = 0;
  v115 = 0;
  v117 = 0;
  sub_670E0((_QWORD *)a1, v1, v2, v3);
  v71 = sub_1108E0(*(_QWORD *)(a1 + 784), 0);
  if ( !v71 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v71 + 24);
  v4 = sub_110340(*(_QWORD *)(a1 + 784), 0);
  v5 = (_QWORD *)v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v4 + 24);
  nullsub_39(a1, v71, v4, 0xFFFFFFFFLL);
  v10 = *(unsigned __int64 ***)v71;
  v11 = *(int *)(a1 + 64);
  v75 = 0;
  v76 = 0;
  v69 = v10;
  if ( !v11 )
  {
    v18 = *v10;
    if ( !*v69 )
      goto LABEL_60;
    goto LABEL_13;
  }
  v77 = nullptr;
  v78 = 0;
  src = nullptr;
  v80 = 0;
  v12 = qvector_reserve((__int64)&v75, 0, v11, 40);
  v13 = v76;
  v75 = v12;
  if ( (unsigned __int64)v76 < v11 )
  {
    while ( 1 )
    {
      v14 = v12 + 40 * v13;
      sub_64000((__int64 *)v14, (__int64)&v77);
      *(_QWORD *)(v14 + 16) = 0;
      *(_OWORD *)(v14 + 24) = 0;
      v16 = v80;
      if ( (_QWORD)v80 )
      {
        na = 16 * v80;
        v17 = (void *)qalloc_or_throw(16 * v80, (__int64)&v77, 16 * v80, v15);
        *(_QWORD *)(v14 + 16) = v17;
        ++v13;
        *(_QWORD *)(v14 + 32) = v16;
        memcpy(v17, src, na);
        *(_QWORD *)(v14 + 24) = v16;
        if ( v11 == v13 )
          break;
      }
      else if ( v11 == ++v13 )
      {
        break;
      }
      v12 = v75;
    }
  }
  *(_QWORD *)&v76 = v11;
  if ( src )
  {
    *(_QWORD *)&v80 = 0;
    qfree((__int64)src);
  }
  qfree((__int64)v77);
  v18 = *v69;
  if ( *v69 )
  {
LABEL_13:
    v7 = (unsigned __int64)v69;
    if ( v69[1] )
    {
      v30 = (unsigned __int64 *)v18[1];
      if ( v30 != v18 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = (int **)(v30 + 3);
            if ( (*((_BYTE *)v30 + 56) != 1
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 264LL))(
                     *(_QWORD *)(a1 + 1504),
                     *((unsigned int *)v30 + 12)))
              && (unsigned int)sub_F8060(a1, (__int64)(v30 + 3)) == 1 )
            {
              v77 = nullptr;
              v78 = 0;
              src = nullptr;
              v80 = 0;
              sub_103D60(v30 + 3, a1, &v77);
              v33 = *v31;
              if ( 4 * v30[4] )
              {
                while ( 1 )
                {
                  v34 = *v33;
                  v35 = sub_104DF0(*v5 + 24 * v34, v30 + 3);
                  if ( !v35 )
                    break;
                  if ( *(_QWORD *)(v35 + 8) <= 1u )
                  {
                    v36 = (__int64 *)(v75 + 40 * v34);
                    sub_64280(v36, (__int64 *)&v77);
                    sub_316CB0(v36 + 2, &src);
                  }
                  if ( ++v33 == &(*v31)[v30[4]] )
                    goto LABEL_56;
                }
                if ( !under_debugger )
                  sub_383060(50116);
LABEL_151:
                BUG();
              }
LABEL_56:
              if ( src )
              {
                *(_QWORD *)&v80 = 0;
                qfree((__int64)src);
              }
              qfree((__int64)v77);
            }
            if ( (*v30 & 2) == 0 )
              break;
LABEL_40:
            if ( *v69 == v30 )
              goto LABEL_14;
          }
          v6 = v30[2];
          if ( (*(_BYTE *)v6 & 2) == 0 )
          {
            do
            {
              v30 = (unsigned __int64 *)v6;
              v6 = *(_QWORD *)(v6 + 8);
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
            goto LABEL_40;
          }
          v32 = (unsigned __int64 *)(*v30 & 0xFFFFFFFFFFFFFFFCLL);
          v6 = *v32;
          if ( (*v32 & 2) != 0 )
          {
LABEL_43:
            v30 = v32;
            if ( *v69 == v32 )
              break;
          }
          else
          {
            while ( 1 )
            {
              if ( (unsigned __int64 *)v32[2] != v30 )
                goto LABEL_43;
              v30 = v32;
              v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
              v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v6 & 2) != 0 )
                break;
              v32 = (unsigned __int64 *)v7;
            }
            v30 = (unsigned __int64 *)v7;
            if ( *v69 == (unsigned __int64 *)v7 )
              break;
          }
        }
      }
    }
  }
LABEL_14:
  if ( *(int *)(a1 + 64) > 0 )
  {
    for ( i = 0; v21 > (int)i; ++i )
    {
      v22 = (_QWORD *)(40 * i + v75);
      v6 = (unsigned int)sub_64880(v22);
      v21 = *(_DWORD *)(a1 + 64);
      if ( !(_BYTE)v6 || v22[3] )
      {
        if ( (unsigned int)i >= v21 )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_151;
        }
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)i);
        v96 = (__int64 *)(v75 + 40 * i);
        v6 = v121;
        v23 = *(_QWORD *)(v7 + 48);
        n = v7;
        v91 = v7;
        v70 = v121;
        if ( v23 )
        {
          while ( 1 )
          {
            v92 = v23;
            sub_11E900(v23, &v89, v6, v7, v8, v9);
            sub_127A20(&v77, n, v23, 1);
            v24 = v96;
            sub_64640(v96, (__int64 *)&v77, v25, v26, v27, v28);
            sub_317C60(v24 + 2, &src);
            v29 = v96;
            if ( (unsigned __int8)sub_64880(v96) )
            {
              if ( !v29[3] )
                break;
            }
            if ( src )
            {
              *(_QWORD *)&v80 = 0;
              qfree((__int64)src);
            }
            qfree((__int64)v77);
            v23 = *(_QWORD *)(v23 + 8);
            if ( !v23 )
              goto LABEL_20;
          }
          if ( src )
          {
            *(_QWORD *)&v80 = 0;
            qfree((__int64)src);
          }
          qfree((__int64)v77);
LABEL_20:
          if ( v121 != v70 )
          {
            v7 = n;
            v20 = *(_DWORD *)(n + 24);
            BYTE1(v20) &= ~2u;
            LOBYTE(v20) = v20 | 0x80;
            *(_DWORD *)(n + 24) = v20;
          }
          v21 = *(_DWORD *)(a1 + 64);
        }
      }
    }
  }
LABEL_60:
  v37 = v74;
  if ( v74 )
  {
    v78 = 0;
    v82 = &v72;
    src = nullptr;
    v80 = 0u;
    v81 = 0;
    v77 = off_4DCF60;
    v83 = 0;
    v84 = nullptr;
    v85 = &v83;
    v86 = &v83;
    v87 = 0;
    v88 = 0;
    sub_11FBB0(a1, &v77, v6, v7, v8, v9);
    v77 = off_4DCF60;
    v37 = v88;
    sub_F6160(v84);
    if ( !v121 && !v74 )
      goto LABEL_65;
  }
  else if ( !v121 )
  {
    goto LABEL_65;
  }
  v38 = *(_QWORD *)(a1 + 784);
  if ( v38 )
    *(_DWORD *)(v38 + 48) = 63;
  sub_66FA0(a1, 1u, (__int64)"after argument removal");
LABEL_65:
  v39 = v75;
  if ( v75 )
  {
    v40 = v76;
    if ( (_QWORD)v76 )
    {
      v41 = 0;
      do
      {
        v42 = (__int64 *)(v39 + 40 * v41);
        v43 = v42[2];
        if ( v43 )
        {
          v42[3] = 0;
          qfree(v43);
        }
        ++v41;
        qfree(*v42);
        v39 = v75;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v76 = 0;
    qfree(v39);
  }
  sub_104E10(v5);
  sub_104E10(v71);
  v89 = off_4DCF38;
  v44 = v118;
  if ( v118 )
  {
    v45 = *(_QWORD *)v118;
    if ( !v119 )
    {
      *(_QWORD *)v118 = *(_QWORD *)v118 & 3LL | v118 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v118, (__m128i)(unsigned __int64)v118);
      *(_QWORD *)v118 &= ~1uLL;
      *(_QWORD *)v118 |= 2uLL;
LABEL_83:
      if ( v118 )
        qfree(v118);
      goto LABEL_85;
    }
    v46 = (__int64 *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
    v47 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v47 & 2) != 0 )
    {
LABEL_82:
      *(_QWORD *)v44 = v45 & 3 | v44 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v118, (__m128i)(unsigned __int64)v118);
      *(_QWORD *)v118 &= ~1uLL;
      *(_QWORD *)v118 |= 2uLL;
      v119 = 0;
      goto LABEL_83;
    }
    v48 = (__int64 *)v46[1];
    if ( (*(_BYTE *)v48 & 2) != 0 )
    {
      v49 = (__int64 *)v46[2];
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_130;
    }
    else
    {
      sub_F56D0(v48);
      v49 = (__int64 *)v46[2];
      if ( (*(_BYTE *)v49 & 2) != 0 )
        goto LABEL_78;
    }
    sub_F56D0(v49);
LABEL_78:
    v47 = *v46;
    if ( (*v46 & 2) != 0 )
    {
LABEL_79:
      if ( v45 > 3 )
        qfree(v45 & 0xFFFFFFFFFFFFFFFCLL);
      v44 = v118;
      v45 = *(_QWORD *)v118;
      goto LABEL_82;
    }
LABEL_130:
    *v46 = v47 | 2;
    goto LABEL_79;
  }
LABEL_85:
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree(v116);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree(v112);
  }
  qfree(v110);
  qfree(v108);
  qfree(v106);
  if ( v104 )
  {
    v105 = 0;
    qfree(v104);
  }
  if ( v102 )
  {
    v103 = 0;
    qfree(v102);
  }
  if ( v100 )
  {
    v101 = 0;
    qfree(v100);
  }
  if ( v98 )
  {
    v99 = 0;
    qfree(v98);
  }
  v50 = v72;
  if ( v72 )
  {
    v51 = *(_QWORD *)v72;
    if ( !v73 )
    {
      *(_QWORD *)v72 = v72 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v72 & 3LL;
      v62 = v72;
      v63 = (__m128i)(unsigned __int64)v72;
      *(_QWORD *)v72 &= ~1uLL;
      *(__m128i *)(v62 + 8) = _mm_unpacklo_epi64(v63, v63);
      *(_QWORD *)v72 |= 2uLL;
LABEL_121:
      if ( v72 )
        qfree(v72);
      return v37;
    }
    v52 = v51 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v51 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_120:
      *(_QWORD *)v50 = v51 & 3 | v50 & 0xFFFFFFFFFFFFFFFCLL;
      v59 = v72;
      v60 = (__m128i)(unsigned __int64)v72;
      *(_QWORD *)v72 &= ~1uLL;
      *(__m128i *)(v59 + 8) = _mm_unpacklo_epi64(v60, v60);
      *(_QWORD *)v72 |= 2uLL;
      v73 = 0;
      goto LABEL_121;
    }
    v53 = *(_QWORD *)(v52 + 8);
    if ( (*(_BYTE *)v53 & 2) != 0 )
    {
      v56 = *(_QWORD *)(v52 + 16);
      if ( (*(_BYTE *)v56 & 2) != 0 )
        goto LABEL_132;
      goto LABEL_110;
    }
    v54 = *(__int64 **)(v53 + 8);
    if ( (*(_BYTE *)v54 & 2) != 0 )
    {
      v55 = *(__int64 **)(v53 + 16);
      if ( (*(_BYTE *)v55 & 2) != 0 )
      {
LABEL_140:
        v66 = *(_QWORD *)(v53 + 32);
        if ( v66 )
        {
          *(_QWORD *)(v53 + 40) = 0;
          qfree(v66);
        }
        *(_QWORD *)v53 |= 2uLL;
LABEL_107:
        if ( v53 )
          qfree(v53);
        v56 = *(_QWORD *)(v52 + 16);
        if ( (*(_BYTE *)v56 & 2) != 0 )
        {
LABEL_116:
          if ( (*(_BYTE *)v52 & 2) != 0 )
          {
LABEL_117:
            if ( v51 > 3 )
              qfree(v51 & 0xFFFFFFFFFFFFFFFCLL);
            v50 = v72;
            v51 = *(_QWORD *)v72;
            goto LABEL_120;
          }
LABEL_132:
          v64 = *(_QWORD *)(v52 + 32);
          if ( v64 )
          {
            *(_QWORD *)(v52 + 40) = 0;
            qfree(v64);
          }
          *(_QWORD *)v52 |= 2uLL;
          goto LABEL_117;
        }
LABEL_110:
        v57 = *(__int64 **)(v56 + 8);
        if ( (*(_BYTE *)v57 & 2) != 0 )
        {
          v58 = *(__int64 **)(v56 + 16);
          if ( (*(_BYTE *)v58 & 2) != 0 )
            goto LABEL_136;
        }
        else
        {
          sub_F5800(v57);
          v58 = *(__int64 **)(v56 + 16);
          if ( (*(_BYTE *)v58 & 2) != 0 )
            goto LABEL_113;
        }
        sub_F5800(v58);
LABEL_113:
        if ( (*(_BYTE *)v56 & 2) != 0 )
        {
LABEL_114:
          if ( v56 )
            qfree(v56);
          goto LABEL_116;
        }
LABEL_136:
        v65 = *(_QWORD *)(v56 + 32);
        if ( v65 )
        {
          *(_QWORD *)(v56 + 40) = 0;
          qfree(v65);
        }
        *(_QWORD *)v56 |= 2uLL;
        goto LABEL_114;
      }
    }
    else
    {
      sub_F5800(v54);
      v55 = *(__int64 **)(v53 + 16);
      if ( (*(_BYTE *)v55 & 2) != 0 )
        goto LABEL_106;
    }
    sub_F5800(v55);
LABEL_106:
    if ( (*(_BYTE *)v53 & 2) != 0 )
      goto LABEL_107;
    goto LABEL_140;
  }
  return v37;
}
