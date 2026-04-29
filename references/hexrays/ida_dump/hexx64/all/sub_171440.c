__int64 __fastcall sub_171440(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // r13
  int v5; // r14d
  __m128i *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r9
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 i; // rax
  __int64 v23; // rdi
  _QWORD *v24; // r13
  __int64 v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r14
  char v30; // al
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __m128i *v36; // rdi
  _QWORD *v37; // r13
  int v38; // r14d
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rsi
  int v56; // eax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // r13
  int v64; // eax
  __int64 v65; // rax
  unsigned __int64 *v66; // [rsp+0h] [rbp-170h]
  __int64 v67; // [rsp+8h] [rbp-168h]
  int v68; // [rsp+14h] [rbp-15Ch]
  __int64 v69; // [rsp+18h] [rbp-158h]
  bool v70; // [rsp+28h] [rbp-148h]
  __int64 v71; // [rsp+30h] [rbp-140h]
  __int64 na; // [rsp+38h] [rbp-138h]
  size_t n; // [rsp+38h] [rbp-138h]
  __int64 v74; // [rsp+40h] [rbp-130h]
  size_t v75; // [rsp+50h] [rbp-120h]
  char v76; // [rsp+50h] [rbp-120h]
  unsigned __int8 v77; // [rsp+50h] [rbp-120h]
  size_t v78; // [rsp+50h] [rbp-120h]
  size_t v79; // [rsp+50h] [rbp-120h]
  __int64 v80; // [rsp+50h] [rbp-120h]
  _QWORD *v81; // [rsp+58h] [rbp-118h]
  _DWORD *v82; // [rsp+68h] [rbp-108h] BYREF
  __m128i v83; // [rsp+70h] [rbp-100h] BYREF
  __int64 v84[2]; // [rsp+80h] [rbp-F0h] BYREF
  void *src; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v86; // [rsp+98h] [rbp-D8h]
  __int64 v87; // [rsp+B0h] [rbp-C0h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v89; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+D8h] [rbp-98h]
  char v91; // [rsp+E0h] [rbp-90h]
  _QWORD v92[5]; // [rsp+F0h] [rbp-80h] BYREF
  char v93; // [rsp+118h] [rbp-58h]
  _QWORD v94[10]; // [rsp+11Ch] [rbp-54h]

  *(_QWORD *)((char *)&v94[3] + 4) = __readfsqword(0x28u);
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
  v92[0] = &off_4DDDC8;
  memset(&v92[1], 0, 32);
  v93 = 0;
  v94[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned int)sub_11E9B0(v2 + 32, (__int64)v92, nullptr, 0) || SLODWORD(v94[0]) <= 1 )
    return 0;
  v84[0] = 0;
  v5 = 0;
  v84[1] = 0;
  src = nullptr;
  v86 = 0;
  do
  {
    v87 = 0;
    *(_QWORD *)&v88 = 0;
    sub_63E80(&v87, *((_DWORD *)v94 + v5 + 1), 1);
    *((_QWORD *)&v88 + 1) = 0;
    v89 = 0;
    sub_64280(v84, &v87);
    sub_316CB0(&src, (char *)&v88 + 8);
    if ( *((_QWORD *)&v88 + 1) )
    {
      *(_QWORD *)&v89 = 0;
      qfree(*((_QWORD *)&v88 + 1));
    }
    qfree(v87);
    ++v5;
  }
  while ( SLODWORD(v94[0]) > v5 );
  v69 = sub_129150(a1, v84, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, nullptr, 0, 0x101u);
  if ( v69 )
  {
    v83 = 0u;
    v6 = &v83;
    v82 = (_DWORD *)(a1 + 72);
    v7 = sub_1711A0(&v83, (int *)(a1 + 72), &v82);
    v8 = v83.m128i_i64[1];
    v81 = (_QWORD *)v83.m128i_i64[0];
    *(_QWORD *)(v7 + 32) = v69;
  }
  else
  {
    v67 = sub_110340(v4, 0);
    if ( !v67 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_140;
    }
    ++*(_DWORD *)(v67 + 24);
    v66 = (unsigned __int64 *)(*(_QWORD *)v67 + 24LL * *(int *)(a1 + 72));
    if ( SLODWORD(v94[0]) <= 0 )
    {
      v8 = 0;
      sub_104E10(v67);
      v81 = nullptr;
      goto LABEL_35;
    }
    v8 = 0;
    v81 = nullptr;
    v68 = 0;
    do
    {
      v87 = 0;
      v34 = *((int *)v94 + v68 + 1);
      BYTE8(v89) = 1;
      v91 = 1;
      *(_QWORD *)&v89 = v34;
      v88 = 0;
      v90 = 0xFFFFFFFF00000001LL;
      v35 = sub_104DF0(v66, (__int64)&v87);
      v36 = (__m128i *)v87;
      v37 = v35;
      if ( v87 )
      {
        *(_QWORD *)&v88 = 0;
        qfree(v87);
      }
      if ( !v37 )
      {
LABEL_86:
        sub_104E10(v67);
        v30 = 0;
        goto LABEL_54;
      }
      v38 = 0;
      v39 = 0;
      if ( v37[1] )
      {
LABEL_77:
        v45 = *(unsigned int *)(*v37 + 4 * v39);
        LODWORD(v82) = v45;
        if ( !(_DWORD)v45 )
          goto LABEL_86;
        if ( !v81 )
          goto LABEL_73;
        v40 = *v81 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v40 )
          goto LABEL_76;
        if ( (*(_BYTE *)(*v81 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_73;
        while ( 1 )
        {
          if ( (int)v45 < *(_DWORD *)(v40 + 24) )
          {
            v40 = *(_QWORD *)(v40 + 8);
          }
          else
          {
            if ( (int)v45 <= *(_DWORD *)(v40 + 24) )
            {
              if ( v81 == (_QWORD *)v40 )
              {
LABEL_73:
                v41 = *(_QWORD *)(a1 + 64);
                if ( (unsigned int)v45 >= *(_DWORD *)(v41 + 64) )
                  sub_167AF0(v36);
                v42 = *(_QWORD *)(*(_QWORD *)(v41 + 528) + 8 * v45);
                v43 = sub_129150(v42, v84, *(_QWORD *)(v42 + 56), 0, nullptr, 0, 0x101u);
                if ( v43 )
                {
                  v78 = v43;
                  v36 = &v83;
                  v83.m128i_i64[1] = v8;
                  v87 = (__int64)&v82;
                  v83.m128i_i64[0] = (__int64)v81;
                  v44 = sub_1711A0(&v83, (int *)&v82, (_DWORD **)&v87);
                  v8 = v83.m128i_i64[1];
                  v81 = (_QWORD *)v83.m128i_i64[0];
                  *(_QWORD *)(v44 + 32) = v78;
                  goto LABEL_76;
                }
                if ( !under_debugger )
                  sub_383060(51682);
LABEL_140:
                BUG();
              }
LABEL_76:
              v39 = ++v38;
              if ( (unsigned __int64)v38 >= v37[1] )
                break;
              goto LABEL_77;
            }
            v40 = *(_QWORD *)(v40 + 16);
          }
          if ( (*(_BYTE *)v40 & 2) != 0 )
            goto LABEL_73;
        }
      }
      ++v68;
    }
    while ( SLODWORD(v94[0]) > v68 );
    v6 = (__m128i *)v67;
    sub_104E10(v67);
  }
  if ( v81 )
  {
    if ( v8 )
    {
      v9 = v81[1];
      while ( v81 != (_QWORD *)v9 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        v11 = *(unsigned int *)(v9 + 24);
        if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
          sub_167AF0(v6);
        v12 = *(_QWORD *)(v10 + 528);
        v13 = *(_QWORD *)(v9 + 32);
        v14 = (_QWORD *)(v10 + 1008);
        v15 = *(_QWORD **)(v10 + 1016);
        v16 = *(_QWORD *)(v12 + 8 * v11);
        v17 = *(_QWORD *)(v13 + 24);
        if ( v15 )
        {
          v18 = v14;
          do
          {
            while ( 1 )
            {
              v19 = v15[2];
              v20 = v15[3];
              if ( v15[4] < v17 )
                break;
              v18 = v15;
              v15 = (_QWORD *)v15[2];
              if ( !v19 )
                goto LABEL_24;
            }
            v15 = (_QWORD *)v15[3];
          }
          while ( v20 );
LABEL_24:
          if ( v14 != v18 && v17 >= v18[4] )
            goto LABEL_53;
        }
        sub_127A20((__int64)&v87, v16, v13, 0);
        if ( !(unsigned __int8)sub_64780(&v87, v84) && !(unsigned __int8)sub_318470((char *)&v88 + 8, &src) )
        {
          if ( *((_QWORD *)&v88 + 1) )
          {
            *(_QWORD *)&v89 = 0;
            qfree(*((_QWORD *)&v88 + 1));
          }
          qfree(v87);
          goto LABEL_53;
        }
        if ( *((_QWORD *)&v88 + 1) )
        {
          *(_QWORD *)&v89 = 0;
          qfree(*((_QWORD *)&v88 + 1));
        }
        v6 = (__m128i *)v87;
        qfree(v87);
        if ( (*(_QWORD *)v9 & 2) == 0 )
        {
          v21 = *(_QWORD *)(v9 + 16);
          if ( (*(_BYTE *)v21 & 2) != 0 )
          {
            v31 = (_QWORD *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
            v32 = *v31;
            if ( (*v31 & 2) != 0 || v31[2] != v9 )
            {
LABEL_61:
              v9 = (unsigned __int64)v31;
            }
            else
            {
              while ( 1 )
              {
                v9 = v32 & 0xFFFFFFFFFFFFFFFCLL;
                v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v32 & 2) != 0 )
                  break;
                v33 = v31;
                v31 = (_QWORD *)v9;
                if ( *(_QWORD **)(v9 + 16) != v33 )
                  goto LABEL_61;
              }
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v21 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
              v21 = i;
            v9 = v21;
          }
        }
      }
    }
  }
LABEL_35:
  v87 = 0;
  *(_QWORD *)&v88 = 0;
  sub_63E80(&v87, 5, 1);
  sub_648D0(v84, &v87);
  v23 = v87;
  qfree(v87);
  if ( v81 )
  {
    if ( v8 )
    {
      v24 = (_QWORD *)v81[1];
      while ( v81 != v24 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        v28 = *((unsigned int *)v24 + 6);
        if ( (unsigned int)v28 >= *(_DWORD *)(v27 + 64) )
          sub_167AF0(v23);
        v29 = *(_QWORD *)(*(_QWORD *)(v27 + 528) + 8 * v28);
        v75 = *(_QWORD *)(v24[4] + 8LL);
        sub_64000(&v87, (__int64)v84);
        *((_QWORD *)&v88 + 1) = 0;
        v89 = 0;
        if ( (_QWORD)v86 )
        {
          v74 = v86;
          na = 16 * v86;
          *((_QWORD *)&v88 + 1) = qalloc_or_throw(16 * v86);
          *((_QWORD *)&v89 + 1) = v74;
          memcpy(*((void **)&v88 + 1), src, na);
          *(_QWORD *)&v89 = v74;
        }
        v25 = sub_A9D90(v29, &v87, v75, 0, 1u);
        if ( *((_QWORD *)&v88 + 1) )
        {
          *(_QWORD *)&v89 = 0;
          qfree(*((_QWORD *)&v88 + 1));
        }
        v23 = v87;
        qfree(v87);
        if ( v25 )
          goto LABEL_53;
        if ( (*v24 & 2) == 0 )
        {
          v26 = (_QWORD *)v24[2];
          if ( (*(_BYTE *)v26 & 2) != 0 )
          {
            v46 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
            v47 = *v46;
            if ( (*v46 & 2) == 0 )
            {
              while ( (_QWORD *)v46[2] == v24 )
              {
                v24 = v46;
                v48 = v47 & 0xFFFFFFFFFFFFFFFCLL;
                v47 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v47 & 2) != 0 )
                {
                  v24 = (_QWORD *)v48;
                  goto LABEL_45;
                }
                v46 = (_QWORD *)v48;
              }
            }
            v24 = v46;
          }
          else
          {
            do
            {
              v24 = v26;
              v26 = (_QWORD *)v26[1];
            }
            while ( (*(_BYTE *)v26 & 2) == 0 );
          }
        }
LABEL_45:
        ;
      }
    }
  }
  if ( v69 )
    goto LABEL_94;
  v61 = *(_QWORD *)(a1 + 48);
  sub_64000(&v87, (__int64)v84);
  v62 = v86;
  *((_QWORD *)&v88 + 1) = 0;
  v89 = 0;
  if ( (_QWORD)v86 )
  {
    v80 = 16 * v86;
    *((_QWORD *)&v88 + 1) = qalloc_or_throw(16 * v86);
    *((_QWORD *)&v89 + 1) = v62;
    memcpy(*((void **)&v88 + 1), src, v80);
    *(_QWORD *)&v89 = v62;
  }
  v63 = sub_A9D90(a1, &v87, v61, 0, 1u);
  if ( *((_QWORD *)&v88 + 1) )
  {
    *(_QWORD *)&v89 = 0;
    qfree(*((_QWORD *)&v88 + 1));
  }
  v23 = v87;
  qfree(v87);
  if ( !v63 )
  {
LABEL_94:
    *(_QWORD *)&v88 = 5;
    v87 = 0x100000001LL;
    v49 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v49 + 32) == 4 )
    {
      v70 = **(_DWORD **)(v49 + 40) == 6;
      n = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( !v81 )
      {
LABEL_115:
        if ( v70 )
        {
          sub_1207E0((char *)&v87, n, 6, *(_QWORD *)(v49 + 24), 1);
          v49 = *(_QWORD *)(a1 + 56);
        }
        goto LABEL_117;
      }
    }
    else
    {
      if ( !v81 )
      {
LABEL_117:
        sub_11CA10((char *)(v49 + 32), (char *)&v87);
        v60 = *(_QWORD *)(a1 + 64);
        if ( !v69 )
        {
          v64 = *(_DWORD *)(a1 + 24);
          BYTE1(v64) &= ~2u;
          LOBYTE(v64) = v64 | 0x80;
          *(_DWORD *)(a1 + 24) = v64;
          v65 = *(_QWORD *)(v60 + 784);
          if ( v65 )
          {
            *(_DWORD *)(v65 + 48) = 63;
            v60 = *(_QWORD *)(a1 + 64);
          }
        }
        *(_DWORD *)(a1 + 24) |= 0x1000u;
        sub_66FA0(v60, 1u, (__int64)"BACKPROP_CC %d", *(_DWORD *)(a1 + 72));
        sub_11CDA0((__int64)&v87);
        v30 = 1;
        goto LABEL_54;
      }
      v70 = 0;
      n = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    if ( v8 )
    {
      v50 = v81[1];
      if ( v81 != (_QWORD *)v50 )
      {
        do
        {
          v52 = *(_QWORD *)(a1 + 64);
          v53 = *(unsigned int *)(v50 + 24);
          if ( (unsigned int)v53 >= *(_DWORD *)(v52 + 64) )
            sub_167AF0(v23);
          v71 = *(_QWORD *)(*(_QWORD *)(v52 + 528) + 8 * v53);
          v79 = *(_QWORD *)(v50 + 32);
          v54 = j__qalloc_or_throw(80);
          v55 = *(_QWORD *)(v79 + 24);
          *(_QWORD *)(v54 + 40) = 0;
          *(_QWORD *)(v54 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v54 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v54 + 56) = 0;
          *(_QWORD *)(v54 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v54 + 72) = 0;
          sub_330970(v54, v55);
          *(_DWORD *)v54 = 4;
          sub_125180(v54 + 32, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
          if ( v70 )
            sub_1207E0((char *)(v54 + 32), n, 6, *(_QWORD *)(v54 + 24), 1);
          sub_125180(v54 + 64, (unsigned __int8 *)&v87);
          sub_15BC70(v54, n, 0, 0, 0, 0, 0);
          v23 = v71;
          sub_A3160(v71, (_QWORD *)v54, v79);
          v56 = *(_DWORD *)(v71 + 24);
          BYTE1(v56) &= ~2u;
          LOBYTE(v56) = v56 | 0x80;
          *(_DWORD *)(v71 + 24) = v56;
          if ( (*(_QWORD *)v50 & 2) == 0 )
          {
            v51 = *(_QWORD *)(v50 + 16);
            if ( (*(_BYTE *)v51 & 2) != 0 )
            {
              v57 = (_QWORD *)(*(_QWORD *)v50 & 0xFFFFFFFFFFFFFFFCLL);
              v58 = *v57;
              if ( (*v57 & 2) == 0 )
              {
                v59 = (_QWORD *)v50;
                while ( v59 == (_QWORD *)v57[2] )
                {
                  v59 = v57;
                  v50 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                  v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v58 & 2) != 0 )
                    goto LABEL_101;
                  v57 = (_QWORD *)v50;
                }
              }
              v50 = (unsigned __int64)v57;
            }
            else
            {
              do
              {
                v50 = v51;
                v51 = *(_QWORD *)(v51 + 8);
              }
              while ( (*(_BYTE *)v51 & 2) == 0 );
            }
          }
LABEL_101:
          ;
        }
        while ( v81 != (_QWORD *)v50 );
        v49 = *(_QWORD *)(a1 + 56);
      }
    }
    goto LABEL_115;
  }
LABEL_53:
  v30 = 0;
LABEL_54:
  if ( src )
  {
    v76 = v30;
    *(_QWORD *)&v86 = 0;
    qfree(src);
    v30 = v76;
  }
  v77 = v30;
  qfree(v84[0]);
  v83.m128i_i64[1] = v8;
  v83.m128i_i64[0] = (__int64)v81;
  sub_1708A0(v83.m128i_i64);
  return v77;
}
