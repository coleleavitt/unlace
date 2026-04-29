__int64 __fastcall sub_F8BC0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  _QWORD *v3; // r15
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 **v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r13
  void *v14; // rax
  unsigned __int64 *v15; // rax
  __int64 i; // r13
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // r14
  __int64 v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 *v26; // r14
  unsigned __int64 *v27; // rbp
  int **v28; // r14
  unsigned __int64 *v29; // rax
  int *v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 *v33; // r13
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rbp
  _QWORD *v39; // r12
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbp
  __int64 *v43; // r12
  __int64 v44; // rdx
  __int64 *v45; // rdi
  __int64 *v46; // rdi
  unsigned __int64 *v47; // rax
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  __int64 *v51; // rdi
  __int64 *v52; // rdi
  __int64 v53; // r13
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  unsigned __int64 *v56; // rax
  __m128i v57; // xmm0
  unsigned __int64 *v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 na; // [rsp+10h] [rbp-288h]
  size_t n; // [rsp+10h] [rbp-288h]
  unsigned __int64 **v66; // [rsp+18h] [rbp-280h]
  unsigned int v67; // [rsp+2Ch] [rbp-26Ch]
  __int64 v68; // [rsp+30h] [rbp-268h]
  unsigned __int64 *v69; // [rsp+40h] [rbp-258h] BYREF
  __int64 v70; // [rsp+48h] [rbp-250h]
  unsigned __int8 v71; // [rsp+50h] [rbp-248h]
  __int64 v72; // [rsp+60h] [rbp-238h] BYREF
  __int128 v73; // [rsp+68h] [rbp-230h]
  __int64 (__fastcall **v74)(); // [rsp+80h] [rbp-218h] BYREF
  __int64 v75; // [rsp+88h] [rbp-210h]
  void *src; // [rsp+90h] [rbp-208h] BYREF
  __int128 v77; // [rsp+98h] [rbp-200h]
  char v78; // [rsp+A8h] [rbp-1F0h]
  unsigned __int64 **v79; // [rsp+B0h] [rbp-1E8h]
  int v80; // [rsp+C0h] [rbp-1D8h] BYREF
  _QWORD *v81; // [rsp+C8h] [rbp-1D0h]
  int *v82; // [rsp+D0h] [rbp-1C8h]
  int *v83; // [rsp+D8h] [rbp-1C0h]
  __int64 v84; // [rsp+E0h] [rbp-1B8h]
  unsigned __int8 v85; // [rsp+E8h] [rbp-1B0h]
  __int64 (__fastcall **v86)(); // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-1A0h]
  unsigned __int64 v88; // [rsp+100h] [rbp-198h]
  __int64 v89; // [rsp+108h] [rbp-190h]
  __int64 v90; // [rsp+110h] [rbp-188h]
  char v91; // [rsp+118h] [rbp-180h]
  unsigned __int64 **v92; // [rsp+120h] [rbp-178h]
  __int64 *v93; // [rsp+128h] [rbp-170h]
  char v94[8]; // [rsp+130h] [rbp-168h] BYREF
  __int64 v95; // [rsp+138h] [rbp-160h]
  __int64 v96; // [rsp+140h] [rbp-158h]
  __int64 v97; // [rsp+150h] [rbp-148h]
  __int64 v98; // [rsp+158h] [rbp-140h]
  __int64 v99; // [rsp+188h] [rbp-110h]
  __int64 v100; // [rsp+190h] [rbp-108h]
  __int64 v101; // [rsp+1A0h] [rbp-F8h]
  __int64 v102; // [rsp+1A8h] [rbp-F0h]
  __int64 v103; // [rsp+1B8h] [rbp-E0h]
  __int64 v104; // [rsp+1C0h] [rbp-D8h]
  __int64 v105; // [rsp+1C8h] [rbp-D0h]
  __int64 v106; // [rsp+1D0h] [rbp-C8h]
  __int64 v107; // [rsp+1D8h] [rbp-C0h]
  __int64 v108; // [rsp+1E0h] [rbp-B8h]
  __int64 v109; // [rsp+1E8h] [rbp-B0h]
  __int128 v110; // [rsp+1F0h] [rbp-A8h]
  __int64 v111; // [rsp+200h] [rbp-98h]
  __int128 v112; // [rsp+208h] [rbp-90h]
  __int64 v113; // [rsp+218h] [rbp-80h]
  __int128 v114; // [rsp+220h] [rbp-78h]
  unsigned __int64 v115; // [rsp+230h] [rbp-68h]
  __int64 v116; // [rsp+238h] [rbp-60h]
  __int64 v117; // [rsp+240h] [rbp-58h]
  unsigned int v118; // [rsp+248h] [rbp-50h]
  unsigned __int64 v119; // [rsp+258h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v71 = 0;
  v86 = off_4D75F8;
  v69 = nullptr;
  v70 = 0;
  v87 = 0;
  v88 = 0;
  v1 = *(_QWORD *)(a1 + 1496);
  v91 = 0;
  v89 = 0;
  v90 = 0;
  v92 = &v69;
  v93 = nullptr;
  sub_D0AF0((__int64)v94, v1, 0x10u);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v87 = a1;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  sub_66AE0((_QWORD *)a1);
  v68 = sub_110320(*(_QWORD *)(a1 + 784), 0);
  if ( !v68 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v68 + 24);
  v2 = sub_10FD80(*(_QWORD *)(a1 + 784), 0);
  v3 = (_QWORD *)v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v2 + 24);
  nullsub_39(a1, v68, v2, 0xFFFFFFFFLL);
  v8 = *(unsigned __int64 ***)v68;
  v9 = *(int *)(a1 + 64);
  v72 = 0;
  v73 = 0;
  v66 = v8;
  if ( !v9 )
  {
    v15 = *v8;
    if ( !*v66 )
      goto LABEL_60;
    goto LABEL_13;
  }
  v74 = nullptr;
  v75 = 0;
  src = nullptr;
  v77 = 0;
  v10 = qvector_reserve(&v72, 0, v9, 40);
  v11 = v73;
  v72 = v10;
  if ( (unsigned __int64)v73 < v9 )
  {
    while ( 1 )
    {
      v12 = v10 + 40 * v11;
      sub_63A00((__int64 *)v12, (__int64)&v74);
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 24) = 0;
      v13 = v77;
      if ( (_QWORD)v77 )
      {
        na = 16 * v77;
        v14 = (void *)qalloc_or_throw(16 * v77);
        *(_QWORD *)(v12 + 16) = v14;
        ++v11;
        *(_QWORD *)(v12 + 32) = v13;
        memcpy(v14, src, na);
        *(_QWORD *)(v12 + 24) = v13;
        if ( v9 == v11 )
          break;
      }
      else if ( v9 == ++v11 )
      {
        break;
      }
      v10 = v72;
    }
  }
  *(_QWORD *)&v73 = v9;
  if ( src )
  {
    *(_QWORD *)&v77 = 0;
    qfree(src);
  }
  qfree(v74);
  v15 = *v66;
  if ( *v66 )
  {
LABEL_13:
    v5 = (unsigned __int64)v66;
    if ( v66[1] )
    {
      v27 = (unsigned __int64 *)v15[1];
      if ( v27 != v15 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = (int **)(v27 + 3);
            if ( (*((_BYTE *)v27 + 56) != 1
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 264LL))(
                     *(_QWORD *)(a1 + 1504),
                     *((unsigned int *)v27 + 12)))
              && (unsigned int)sub_F7AA0(a1, (__int64)(v27 + 3)) == 1 )
            {
              v74 = nullptr;
              v75 = 0;
              src = nullptr;
              v77 = 0;
              sub_1037A0(v27 + 3, a1, &v74);
              v30 = *v28;
              if ( 4 * v27[4] )
              {
                while ( 1 )
                {
                  v31 = *v30;
                  v32 = sub_104830(*v3 + 24 * v31, v27 + 3);
                  if ( !v32 )
                    break;
                  if ( *(_QWORD *)(v32 + 8) <= 1u )
                  {
                    v33 = (__int64 *)(v72 + 40 * v31);
                    sub_63C80(v33, (__int64 *)&v74);
                    sub_317070(v33 + 2, &src);
                  }
                  if ( ++v30 == &(*v28)[v27[4]] )
                    goto LABEL_56;
                }
                if ( !under_debugger )
                  sub_3835A0(50116);
LABEL_151:
                BUG();
              }
LABEL_56:
              if ( src )
              {
                *(_QWORD *)&v77 = 0;
                qfree(src);
              }
              qfree(v74);
            }
            if ( (*v27 & 2) == 0 )
              break;
LABEL_40:
            if ( *v66 == v27 )
              goto LABEL_14;
          }
          v4 = v27[2];
          if ( (*(_BYTE *)v4 & 2) == 0 )
          {
            do
            {
              v27 = (unsigned __int64 *)v4;
              v4 = *(_QWORD *)(v4 + 8);
            }
            while ( (*(_BYTE *)v4 & 2) == 0 );
            goto LABEL_40;
          }
          v29 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
          v4 = *v29;
          if ( (*v29 & 2) != 0 )
          {
LABEL_43:
            v27 = v29;
            if ( *v66 == v29 )
              break;
          }
          else
          {
            while ( 1 )
            {
              if ( (unsigned __int64 *)v29[2] != v27 )
                goto LABEL_43;
              v27 = v29;
              v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
              v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v4 & 2) != 0 )
                break;
              v29 = (unsigned __int64 *)v5;
            }
            v27 = (unsigned __int64 *)v5;
            if ( *v66 == (unsigned __int64 *)v5 )
              break;
          }
        }
      }
    }
  }
LABEL_14:
  if ( *(int *)(a1 + 64) > 0 )
  {
    for ( i = 0; v18 > (int)i; ++i )
    {
      v19 = (_QWORD *)(40 * i + v72);
      v4 = (unsigned int)sub_64280(v19);
      v18 = *(_DWORD *)(a1 + 64);
      if ( !(_BYTE)v4 || v19[3] )
      {
        if ( (unsigned int)i >= v18 )
        {
          if ( !under_debugger )
            sub_3835A0(52719);
          goto LABEL_151;
        }
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)i);
        v93 = (__int64 *)(v72 + 40 * i);
        v4 = v118;
        v20 = *(_QWORD *)(v5 + 48);
        n = v5;
        v88 = v5;
        v67 = v118;
        if ( v20 )
        {
          while ( 1 )
          {
            v89 = v20;
            sub_11E340(v20, &v86, v4, v5, v6, v7);
            sub_127460(&v74, n, v20, 1);
            v21 = v93;
            sub_64040(v93, (__int64 *)&v74, v22, v23, v24, v25);
            sub_318020(v21 + 2, &src);
            v26 = v93;
            if ( (unsigned __int8)sub_64280(v93) )
            {
              if ( !v26[3] )
                break;
            }
            if ( src )
            {
              *(_QWORD *)&v77 = 0;
              qfree(src);
            }
            qfree(v74);
            v20 = *(_QWORD *)(v20 + 8);
            if ( !v20 )
              goto LABEL_20;
          }
          if ( src )
          {
            *(_QWORD *)&v77 = 0;
            qfree(src);
          }
          qfree(v74);
LABEL_20:
          if ( v118 != v67 )
          {
            v5 = n;
            v17 = *(_DWORD *)(n + 24);
            BYTE1(v17) &= ~2u;
            LOBYTE(v17) = v17 | 0x80;
            *(_DWORD *)(n + 24) = v17;
          }
          v18 = *(_DWORD *)(a1 + 64);
        }
      }
    }
  }
LABEL_60:
  v34 = v71;
  if ( v71 )
  {
    v75 = 0;
    v79 = &v69;
    src = nullptr;
    v77 = 0u;
    v78 = 0;
    v74 = off_4D7620;
    v80 = 0;
    v81 = nullptr;
    v82 = &v80;
    v83 = &v80;
    v84 = 0;
    v85 = 0;
    sub_11F5F0(a1, &v74, v4, v5, v6, v7);
    v74 = off_4D7620;
    v34 = v85;
    sub_F5BA0(v81);
    if ( !v118 && !v71 )
      goto LABEL_65;
  }
  else if ( !v118 )
  {
    goto LABEL_65;
  }
  v35 = *(_QWORD *)(a1 + 784);
  if ( v35 )
    *(_DWORD *)(v35 + 48) = 63;
  sub_669A0(a1, 1u, (__int64)"after argument removal");
LABEL_65:
  v36 = v72;
  if ( v72 )
  {
    v37 = v73;
    if ( (_QWORD)v73 )
    {
      v38 = 0;
      do
      {
        v39 = (_QWORD *)(v36 + 40 * v38);
        v40 = v39[2];
        if ( v40 )
        {
          v39[3] = 0;
          qfree(v40);
        }
        ++v38;
        qfree(*v39);
        v36 = v72;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v73 = 0;
    qfree(v36);
  }
  sub_104850(v3);
  sub_104850(v68);
  v86 = off_4D75F8;
  v41 = v115;
  if ( v115 )
  {
    v42 = *(_QWORD *)v115;
    if ( !v116 )
    {
      *(_QWORD *)v115 = *(_QWORD *)v115 & 3LL | v115 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v115 + 8) = _mm_unpacklo_epi64((__m128i)v115, (__m128i)v115);
      *(_QWORD *)v115 &= ~1uLL;
      *(_QWORD *)v115 |= 2uLL;
LABEL_83:
      if ( v115 )
        qfree(v115);
      goto LABEL_85;
    }
    v43 = (__int64 *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
    v44 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v44 & 2) != 0 )
    {
LABEL_82:
      *(_QWORD *)v41 = v42 & 3 | v41 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v115 + 8) = _mm_unpacklo_epi64((__m128i)v115, (__m128i)v115);
      *(_QWORD *)v115 &= ~1uLL;
      *(_QWORD *)v115 |= 2uLL;
      v116 = 0;
      goto LABEL_83;
    }
    v45 = (__int64 *)v43[1];
    if ( (*(_BYTE *)v45 & 2) != 0 )
    {
      v46 = (__int64 *)v43[2];
      if ( (*(_BYTE *)v46 & 2) != 0 )
        goto LABEL_130;
    }
    else
    {
      sub_F5110(v45);
      v46 = (__int64 *)v43[2];
      if ( (*(_BYTE *)v46 & 2) != 0 )
        goto LABEL_78;
    }
    sub_F5110(v46);
LABEL_78:
    v44 = *v43;
    if ( (*v43 & 2) != 0 )
    {
LABEL_79:
      if ( v42 > 3 )
        qfree(v42 & 0xFFFFFFFFFFFFFFFCLL);
      v41 = v115;
      v42 = *(_QWORD *)v115;
      goto LABEL_82;
    }
LABEL_130:
    *v43 = v44 | 2;
    goto LABEL_79;
  }
LABEL_85:
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v111);
  }
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree(v109);
  }
  qfree(v107);
  qfree(v105);
  qfree(v103);
  if ( v101 )
  {
    v102 = 0;
    qfree(v101);
  }
  if ( v99 )
  {
    v100 = 0;
    qfree(v99);
  }
  if ( v97 )
  {
    v98 = 0;
    qfree(v97);
  }
  if ( v95 )
  {
    v96 = 0;
    qfree(v95);
  }
  v47 = v69;
  if ( v69 )
  {
    v48 = *v69;
    if ( !v70 )
    {
      *v69 = (unsigned __int64)v69 & 0xFFFFFFFFFFFFFFFCLL | *v69 & 3;
      v59 = v69;
      v60 = (__m128i)(unsigned __int64)v69;
      *v69 &= ~1uLL;
      *(__m128i *)(v59 + 1) = _mm_unpacklo_epi64(v60, v60);
      *v69 |= 2u;
LABEL_121:
      if ( v69 )
        qfree(v69);
      return v34;
    }
    v49 = v48 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_120:
      *v47 = v48 & 3 | (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFCLL;
      v56 = v69;
      v57 = (__m128i)(unsigned __int64)v69;
      *v69 &= ~1uLL;
      *(__m128i *)(v56 + 1) = _mm_unpacklo_epi64(v57, v57);
      *v69 |= 2u;
      v70 = 0;
      goto LABEL_121;
    }
    v50 = *(_QWORD *)(v49 + 8);
    if ( (*(_BYTE *)v50 & 2) != 0 )
    {
      v53 = *(_QWORD *)(v49 + 16);
      if ( (*(_BYTE *)v53 & 2) != 0 )
        goto LABEL_132;
      goto LABEL_110;
    }
    v51 = *(__int64 **)(v50 + 8);
    if ( (*(_BYTE *)v51 & 2) != 0 )
    {
      v52 = *(__int64 **)(v50 + 16);
      if ( (*(_BYTE *)v52 & 2) != 0 )
      {
LABEL_140:
        v63 = *(_QWORD *)(v50 + 32);
        if ( v63 )
        {
          *(_QWORD *)(v50 + 40) = 0;
          qfree(v63);
        }
        *(_QWORD *)v50 |= 2uLL;
LABEL_107:
        if ( v50 )
          qfree(v50);
        v53 = *(_QWORD *)(v49 + 16);
        if ( (*(_BYTE *)v53 & 2) != 0 )
        {
LABEL_116:
          if ( (*(_BYTE *)v49 & 2) != 0 )
          {
LABEL_117:
            if ( v48 > 3 )
              qfree(v48 & 0xFFFFFFFFFFFFFFFCLL);
            v47 = v69;
            v48 = *v69;
            goto LABEL_120;
          }
LABEL_132:
          v61 = *(_QWORD *)(v49 + 32);
          if ( v61 )
          {
            *(_QWORD *)(v49 + 40) = 0;
            qfree(v61);
          }
          *(_QWORD *)v49 |= 2uLL;
          goto LABEL_117;
        }
LABEL_110:
        v54 = *(__int64 **)(v53 + 8);
        if ( (*(_BYTE *)v54 & 2) != 0 )
        {
          v55 = *(__int64 **)(v53 + 16);
          if ( (*(_BYTE *)v55 & 2) != 0 )
            goto LABEL_136;
        }
        else
        {
          sub_F5240(v54);
          v55 = *(__int64 **)(v53 + 16);
          if ( (*(_BYTE *)v55 & 2) != 0 )
            goto LABEL_113;
        }
        sub_F5240(v55);
LABEL_113:
        if ( (*(_BYTE *)v53 & 2) != 0 )
        {
LABEL_114:
          if ( v53 )
            qfree(v53);
          goto LABEL_116;
        }
LABEL_136:
        v62 = *(_QWORD *)(v53 + 32);
        if ( v62 )
        {
          *(_QWORD *)(v53 + 40) = 0;
          qfree(v62);
        }
        *(_QWORD *)v53 |= 2uLL;
        goto LABEL_114;
      }
    }
    else
    {
      sub_F5240(v51);
      v52 = *(__int64 **)(v50 + 16);
      if ( (*(_BYTE *)v52 & 2) != 0 )
        goto LABEL_106;
    }
    sub_F5240(v52);
LABEL_106:
    if ( (*(_BYTE *)v50 & 2) != 0 )
      goto LABEL_107;
    goto LABEL_140;
  }
  return v34;
}
