__int64 __fastcall sub_171440(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // r13
  __m128i v5; // xmm0
  int v6; // r14d
  __m128i *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 i; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdi
  __int64 *v26; // r13
  __int64 v27; // r14
  __int64 *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r14
  char v32; // al
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __m128i *v38; // rdi
  _QWORD *v39; // r13
  int v40; // r14d
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r13
  __int64 v58; // rsi
  int v59; // eax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // r13
  __int64 v65; // rcx
  __int64 v66; // r14
  __int64 v67; // r13
  int v68; // eax
  __int64 v69; // rax
  unsigned __int64 *v70; // [rsp+0h] [rbp-170h]
  __int64 v71; // [rsp+8h] [rbp-168h]
  int v72; // [rsp+14h] [rbp-15Ch]
  __int64 v73; // [rsp+18h] [rbp-158h]
  bool v74; // [rsp+28h] [rbp-148h]
  __int64 v75; // [rsp+30h] [rbp-140h]
  __int64 na; // [rsp+38h] [rbp-138h]
  unsigned __int64 *n; // [rsp+38h] [rbp-138h]
  __int64 v78; // [rsp+40h] [rbp-130h]
  size_t v79; // [rsp+50h] [rbp-120h]
  char v80; // [rsp+50h] [rbp-120h]
  unsigned __int8 v81; // [rsp+50h] [rbp-120h]
  size_t v82; // [rsp+50h] [rbp-120h]
  size_t v83; // [rsp+50h] [rbp-120h]
  __int64 v84; // [rsp+50h] [rbp-120h]
  __int64 *v85; // [rsp+58h] [rbp-118h]
  _DWORD *v86; // [rsp+68h] [rbp-108h] BYREF
  __m128i v87; // [rsp+70h] [rbp-100h] BYREF
  __int64 v88[2]; // [rsp+80h] [rbp-F0h] BYREF
  void *src; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v90; // [rsp+98h] [rbp-D8h]
  __int64 v91; // [rsp+B0h] [rbp-C0h] BYREF
  __int128 v92; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-98h]
  char v95; // [rsp+E0h] [rbp-90h]
  _QWORD v96[5]; // [rsp+F0h] [rbp-80h] BYREF
  char v97; // [rsp+118h] [rbp-58h]
  _QWORD v98[10]; // [rsp+11Ch] [rbp-54h]

  *(_QWORD *)((char *)&v98[3] + 4) = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 0;
  if ( *(_DWORD *)v2 != 42 )
    return 0;
  if ( *(_BYTE *)(v2 + 32) != 4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 25) & 0x10) != 0 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( !*(_DWORD *)(v4 + 52) )
    return 0;
  v96[0] = &off_4DDDC8;
  memset(&v96[1], 0, 32);
  v97 = 0;
  v98[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned int)sub_11E9B0(v2 + 32, (__int64)v96, 0, 0) || SLODWORD(v98[0]) <= 1 )
    return 0;
  v5 = 0;
  v88[0] = 0;
  v6 = 0;
  v88[1] = 0;
  src = nullptr;
  v90 = 0;
  do
  {
    v91 = 0;
    *(_QWORD *)&v92 = 0;
    sub_63E80(&v91, *((_DWORD *)v98 + v6 + 1), 1);
    *((_QWORD *)&v92 + 1) = 0;
    v93 = 0;
    sub_64280(v88, &v91);
    sub_316CB0(&src, (char *)&v92 + 8);
    if ( *((_QWORD *)&v92 + 1) )
    {
      *(_QWORD *)&v93 = 0;
      qfree(*((__int64 *)&v92 + 1));
    }
    qfree(v91);
    ++v6;
  }
  while ( SLODWORD(v98[0]) > v6 );
  v73 = sub_129150(a1, v88, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, 0, 0, 0x101u);
  if ( v73 )
  {
    v87 = 0u;
    v7 = &v87;
    v86 = (_DWORD *)(a1 + 72);
    v8 = sub_1711A0(&v87, (int *)(a1 + 72), &v86);
    v9 = v87.m128i_i64[1];
    v85 = (__int64 *)v87.m128i_i64[0];
    *(_QWORD *)(v8 + 32) = v73;
  }
  else
  {
    v71 = sub_110340(v4, 0);
    if ( !v71 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_141;
    }
    ++*(_DWORD *)(v71 + 24);
    v70 = (unsigned __int64 *)(*(_QWORD *)v71 + 24LL * *(int *)(a1 + 72));
    if ( SLODWORD(v98[0]) <= 0 )
    {
      v9 = 0;
      sub_104E10(v71);
      v85 = nullptr;
      goto LABEL_35;
    }
    v9 = 0;
    v85 = nullptr;
    v72 = 0;
    do
    {
      v91 = 0;
      v36 = *((int *)v98 + v72 + 1);
      BYTE8(v93) = 1;
      v95 = 1;
      *(_QWORD *)&v93 = v36;
      v92 = 0;
      v94 = 0xFFFFFFFF00000001LL;
      v37 = sub_104DF0(v70, (__int64)&v91);
      v38 = (__m128i *)v91;
      v39 = v37;
      if ( v91 )
      {
        *(_QWORD *)&v92 = 0;
        qfree(v91);
      }
      if ( !v39 )
      {
LABEL_86:
        sub_104E10(v71);
        v32 = 0;
        goto LABEL_54;
      }
      v40 = 0;
      v41 = 0;
      if ( v39[1] )
      {
LABEL_77:
        v47 = *(unsigned int *)(*v39 + 4 * v41);
        LODWORD(v86) = v47;
        if ( !(_DWORD)v47 )
          goto LABEL_86;
        if ( !v85 )
          goto LABEL_73;
        v42 = *v85 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v42 )
          goto LABEL_76;
        if ( (*(_BYTE *)(*v85 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_73;
        while ( 1 )
        {
          if ( (int)v47 < *(_DWORD *)(v42 + 24) )
          {
            v42 = *(_QWORD *)(v42 + 8);
          }
          else
          {
            if ( (int)v47 <= *(_DWORD *)(v42 + 24) )
            {
              if ( v85 == (__int64 *)v42 )
              {
LABEL_73:
                v43 = *(_QWORD *)(a1 + 64);
                if ( (unsigned int)v47 >= *(_DWORD *)(v43 + 64) )
                  sub_167AF0(v38);
                v44 = *(_QWORD *)(*(_QWORD *)(v43 + 528) + 8 * v47);
                v45 = sub_129150(v44, v88, *(_QWORD *)(v44 + 56), 0, 0, 0, 0x101u);
                if ( v45 )
                {
                  v82 = v45;
                  v38 = &v87;
                  v87.m128i_i64[1] = v9;
                  v91 = (__int64)&v86;
                  v87.m128i_i64[0] = (__int64)v85;
                  v46 = sub_1711A0(&v87, (int *)&v86, (_DWORD **)&v91);
                  v9 = v87.m128i_i64[1];
                  v85 = (__int64 *)v87.m128i_i64[0];
                  *(_QWORD *)(v46 + 32) = v82;
                  goto LABEL_76;
                }
                if ( !under_debugger )
                  sub_383060(51682);
LABEL_141:
                BUG();
              }
LABEL_76:
              v41 = ++v40;
              if ( (unsigned __int64)v40 >= v39[1] )
                break;
              goto LABEL_77;
            }
            v42 = *(_QWORD *)(v42 + 16);
          }
          if ( (*(_BYTE *)v42 & 2) != 0 )
            goto LABEL_73;
        }
      }
      ++v72;
    }
    while ( SLODWORD(v98[0]) > v72 );
    v7 = (__m128i *)v71;
    sub_104E10(v71);
  }
  if ( v85 )
  {
    if ( v9 )
    {
      v10 = v85[1];
      while ( v85 != (__int64 *)v10 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        v12 = *(unsigned int *)(v10 + 24);
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 64) )
          sub_167AF0(v7);
        v13 = *(_QWORD *)(v11 + 528);
        v14 = *(_QWORD *)(v10 + 32);
        v15 = (_QWORD *)(v11 + 1008);
        v16 = *(_QWORD **)(v11 + 1016);
        v17 = *(_QWORD *)(v13 + 8 * v12);
        v18 = *(_QWORD *)(v14 + 24);
        if ( v16 )
        {
          v19 = v15;
          do
          {
            while ( 1 )
            {
              v20 = v16[2];
              v21 = v16[3];
              if ( v16[4] < v18 )
                break;
              v19 = v16;
              v16 = (_QWORD *)v16[2];
              if ( !v20 )
                goto LABEL_24;
            }
            v16 = (_QWORD *)v16[3];
          }
          while ( v21 );
LABEL_24:
          if ( v15 != v19 && v18 >= v19[4] )
            goto LABEL_53;
        }
        sub_127A20((__int64)&v91, v17, v14, 0, v17, v14);
        if ( !(unsigned __int8)sub_64780(&v91, v88) && !(unsigned __int8)sub_318470((char *)&v92 + 8, &src) )
        {
          if ( *((_QWORD *)&v92 + 1) )
          {
            *(_QWORD *)&v93 = 0;
            qfree(*((__int64 *)&v92 + 1));
          }
          qfree(v91);
          goto LABEL_53;
        }
        if ( *((_QWORD *)&v92 + 1) )
        {
          *(_QWORD *)&v93 = 0;
          qfree(*((__int64 *)&v92 + 1));
        }
        v7 = (__m128i *)v91;
        qfree(v91);
        if ( (*(_QWORD *)v10 & 2) == 0 )
        {
          v22 = *(_QWORD *)(v10 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
            v33 = (_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL);
            v34 = *v33;
            if ( (*v33 & 2) != 0 || v33[2] != v10 )
            {
LABEL_61:
              v10 = (unsigned __int64)v33;
            }
            else
            {
              while ( 1 )
              {
                v10 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v34 & 2) != 0 )
                  break;
                v35 = v33;
                v33 = (_QWORD *)v10;
                if ( *(_QWORD **)(v10 + 16) != v35 )
                  goto LABEL_61;
              }
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v22 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
              v22 = i;
            v10 = v22;
          }
        }
      }
    }
  }
LABEL_35:
  v91 = 0;
  *(_QWORD *)&v92 = 0;
  sub_63E80(&v91, 5, 1);
  v24 = &v91;
  sub_648D0(v88, &v91);
  v25 = v91;
  qfree(v91);
  if ( v85 )
  {
    if ( v9 )
    {
      v26 = (__int64 *)v85[1];
      while ( v85 != v26 )
      {
        v29 = *(_QWORD *)(a1 + 64);
        v30 = *((unsigned int *)v26 + 6);
        if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 64) )
          sub_167AF0(v25);
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 528) + 8 * v30);
        v79 = *(_QWORD *)(v26[4] + 8);
        sub_64000(&v91, (__int64)v88);
        *((_QWORD *)&v92 + 1) = 0;
        v93 = 0;
        if ( (_QWORD)v90 )
        {
          v78 = v90;
          na = 16 * v90;
          *((_QWORD *)&v92 + 1) = qalloc_or_throw(16 * v90, (__int64)v88, 16 * v90, v90);
          *((_QWORD *)&v93 + 1) = v78;
          memcpy(*((void **)&v92 + 1), src, na);
          *(_QWORD *)&v93 = v78;
        }
        v24 = &v91;
        v27 = sub_A9D90(v31, &v91, v79, 0, 1u);
        if ( *((_QWORD *)&v92 + 1) )
        {
          *(_QWORD *)&v93 = 0;
          qfree(*((__int64 *)&v92 + 1));
        }
        v25 = v91;
        qfree(v91);
        if ( v27 )
          goto LABEL_53;
        if ( (*v26 & 2) == 0 )
        {
          v28 = (__int64 *)v26[2];
          if ( (*(_BYTE *)v28 & 2) != 0 )
          {
            v48 = (__int64 *)(*v26 & 0xFFFFFFFFFFFFFFFCLL);
            v49 = *v48;
            if ( (*v48 & 2) == 0 )
            {
              v24 = v85;
              while ( (__int64 *)v48[2] == v26 )
              {
                v26 = v48;
                v50 = v49 & 0xFFFFFFFFFFFFFFFCLL;
                v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v49 & 2) != 0 )
                {
                  v26 = (__int64 *)v50;
                  goto LABEL_45;
                }
                v48 = (__int64 *)v50;
              }
            }
            v26 = v48;
          }
          else
          {
            do
            {
              v26 = v28;
              v28 = (__int64 *)v28[1];
            }
            while ( (*(_BYTE *)v28 & 2) == 0 );
          }
        }
LABEL_45:
        ;
      }
    }
  }
  if ( v73 )
    goto LABEL_95;
  v64 = *(_QWORD *)(a1 + 48);
  sub_64000(&v91, (__int64)v88);
  v66 = v90;
  v5 = 0;
  *((_QWORD *)&v92 + 1) = 0;
  v93 = 0;
  if ( (_QWORD)v90 )
  {
    v84 = 16 * v90;
    *((_QWORD *)&v92 + 1) = qalloc_or_throw(16 * v90, 0, 16 * v90, v65);
    *((_QWORD *)&v93 + 1) = v66;
    memcpy(*((void **)&v92 + 1), src, v84);
    *(_QWORD *)&v93 = v66;
  }
  v24 = &v91;
  v67 = sub_A9D90(a1, &v91, v64, 0, 1u);
  if ( *((_QWORD *)&v92 + 1) )
  {
    *(_QWORD *)&v93 = 0;
    qfree(*((__int64 *)&v92 + 1));
  }
  v25 = v91;
  qfree(v91);
  if ( !v67 )
  {
LABEL_95:
    *(_QWORD *)&v92 = 5;
    v91 = 0x100000001LL;
    v51 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v51 + 32) == 4 )
    {
      v74 = **(_DWORD **)(v51 + 40) == 6;
      n = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( !v85 )
      {
LABEL_116:
        if ( v74 )
        {
          sub_1207E0((char *)&v91, (__int64)n, 6, *(_QWORD *)(v51 + 24), 1);
          v51 = *(_QWORD *)(a1 + 56);
        }
        goto LABEL_118;
      }
    }
    else
    {
      if ( !v85 )
      {
LABEL_118:
        sub_11CA10((char *)(v51 + 32), (char *)&v91);
        v63 = *(_QWORD *)(a1 + 64);
        if ( !v73 )
        {
          v68 = *(_DWORD *)(a1 + 24);
          BYTE1(v68) &= ~2u;
          LOBYTE(v68) = v68 | 0x80;
          *(_DWORD *)(a1 + 24) = v68;
          v69 = *(_QWORD *)(v63 + 784);
          if ( v69 )
          {
            *(_DWORD *)(v69 + 48) = 63;
            v63 = *(_QWORD *)(a1 + 64);
          }
        }
        *(_DWORD *)(a1 + 24) |= 0x1000u;
        sub_66FA0(v63, 1u, (__int64)"BACKPROP_CC %d", *(_DWORD *)(a1 + 72));
        sub_11CDA0((__int64)&v91);
        v32 = 1;
        goto LABEL_54;
      }
      v74 = 0;
      n = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    if ( v9 )
    {
      v52 = v85[1];
      if ( v85 != (__int64 *)v52 )
      {
        do
        {
          v54 = *(_QWORD *)(a1 + 64);
          v55 = *(unsigned int *)(v52 + 24);
          if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 64) )
            sub_167AF0(v25);
          v56 = *(_QWORD *)(v54 + 528);
          v75 = *(_QWORD *)(v56 + 8 * v55);
          v83 = *(_QWORD *)(v52 + 32);
          v57 = j__qalloc_or_throw(80, (__int64)v24, v56, v52 + 24);
          v58 = *(_QWORD *)(v83 + 24);
          *(_QWORD *)(v57 + 40) = 0;
          *(_QWORD *)(v57 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v57 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v57 + 56) = 0;
          *(_QWORD *)(v57 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v57 + 72) = 0;
          sub_330970(v57, v58);
          *(_DWORD *)v57 = 4;
          sub_125180(v57 + 32, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
          if ( v74 )
            sub_1207E0((char *)(v57 + 32), (__int64)n, 6, *(_QWORD *)(v57 + 24), 1);
          sub_125180(v57 + 64, (unsigned __int8 *)&v91);
          sub_15BC70((unsigned int *)v57, n, 0, 0, nullptr, nullptr, v5, 0);
          v24 = (__int64 *)v57;
          v25 = v75;
          sub_A3160(v75, (_QWORD *)v57, v83);
          v59 = *(_DWORD *)(v75 + 24);
          BYTE1(v59) &= ~2u;
          LOBYTE(v59) = v59 | 0x80;
          *(_DWORD *)(v75 + 24) = v59;
          if ( (*(_QWORD *)v52 & 2) == 0 )
          {
            v53 = *(_QWORD *)(v52 + 16);
            if ( (*(_BYTE *)v53 & 2) != 0 )
            {
              v60 = (_QWORD *)(*(_QWORD *)v52 & 0xFFFFFFFFFFFFFFFCLL);
              v61 = *v60;
              if ( (*v60 & 2) == 0 )
              {
                v24 = v85;
                v62 = (_QWORD *)v52;
                while ( v62 == (_QWORD *)v60[2] )
                {
                  v62 = v60;
                  v52 = v61 & 0xFFFFFFFFFFFFFFFCLL;
                  v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v61 & 2) != 0 )
                    goto LABEL_102;
                  v60 = (_QWORD *)v52;
                }
              }
              v52 = (unsigned __int64)v60;
            }
            else
            {
              do
              {
                v52 = v53;
                v53 = *(_QWORD *)(v53 + 8);
              }
              while ( (*(_BYTE *)v53 & 2) == 0 );
            }
          }
LABEL_102:
          ;
        }
        while ( v85 != (__int64 *)v52 );
        v51 = *(_QWORD *)(a1 + 56);
      }
    }
    goto LABEL_116;
  }
LABEL_53:
  v32 = 0;
LABEL_54:
  if ( src )
  {
    v80 = v32;
    *(_QWORD *)&v90 = 0;
    qfree((__int64)src);
    v32 = v80;
  }
  v81 = v32;
  qfree(v88[0]);
  v87.m128i_i64[1] = v9;
  v87.m128i_i64[0] = (__int64)v85;
  sub_1708A0(v87.m128i_i64);
  return v81;
}
