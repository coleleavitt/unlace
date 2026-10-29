void __fastcall sub_981DF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  char *v22; // rcx
  void *v23; // rdx
  __int64 v24; // rax
  char *v25; // rcx
  char *v26; // rdx
  char *v27; // rax
  char *v28; // rcx
  char *v29; // rdx
  char *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // eax
  char *v41; // rcx
  void *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  __int64 v50; // r15
  char *v51; // rdx
  char *v52; // rsi
  char v53; // cl
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // r15
  __int64 v57; // r15
  char *v58; // rsi
  char *v59; // rdx
  __int16 v60; // cx
  __int64 v61; // rax
  char *v62; // rax
  __int64 v63; // r15
  char *v64; // rax
  char *v65; // rax
  char *v66; // rax
  __int64 v67; // [rsp+0h] [rbp-E8h]
  unsigned int v68; // [rsp+0h] [rbp-E8h]
  __int64 v69; // [rsp+0h] [rbp-E8h]
  __int64 v70; // [rsp+0h] [rbp-E8h]
  int v71; // [rsp+0h] [rbp-E8h]
  __int64 v72; // [rsp+0h] [rbp-E8h]
  __int64 v73; // [rsp+0h] [rbp-E8h]
  char v74; // [rsp+0h] [rbp-E8h]
  char v75; // [rsp+0h] [rbp-E8h]
  char *v76; // [rsp+0h] [rbp-E8h]
  __int16 v77; // [rsp+0h] [rbp-E8h]
  __int16 v78; // [rsp+0h] [rbp-E8h]
  char *v79; // [rsp+0h] [rbp-E8h]
  int v80; // [rsp+0h] [rbp-E8h]
  void *v81; // [rsp+8h] [rbp-E0h]
  void *v82; // [rsp+8h] [rbp-E0h]
  char *v83; // [rsp+8h] [rbp-E0h]
  char *v84; // [rsp+8h] [rbp-E0h]
  char *v85; // [rsp+8h] [rbp-E0h]
  char *v86; // [rsp+8h] [rbp-E0h]
  void *v87; // [rsp+8h] [rbp-E0h]
  void *v88; // [rsp+8h] [rbp-E0h]
  char *v89; // [rsp+8h] [rbp-E0h]
  char *v90; // [rsp+8h] [rbp-E0h]
  char *v91; // [rsp+8h] [rbp-E0h]
  char *v92; // [rsp+8h] [rbp-E0h]
  char *v93; // [rsp+8h] [rbp-E0h]
  char *v94; // [rsp+10h] [rbp-D8h]
  char *v95; // [rsp+10h] [rbp-D8h]
  char *v96; // [rsp+10h] [rbp-D8h]
  __int64 v97; // [rsp+10h] [rbp-D8h]
  char *v98; // [rsp+10h] [rbp-D8h]
  void *v99; // [rsp+10h] [rbp-D8h]
  char v100; // [rsp+10h] [rbp-D8h]
  __int16 v101; // [rsp+10h] [rbp-D8h]
  char *v102; // [rsp+10h] [rbp-D8h]
  char *v103; // [rsp+10h] [rbp-D8h]
  char *v104; // [rsp+10h] [rbp-D8h]
  void *v105; // [rsp+18h] [rbp-D0h]
  void *v106; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v107; // [rsp+28h] [rbp-C0h]
  char v108; // [rsp+2Ch] [rbp-BCh]
  void *v109; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v110; // [rsp+38h] [rbp-B0h]
  char *v111; // [rsp+48h] [rbp-A0h]
  unsigned int v112; // [rsp+50h] [rbp-98h]
  int v113; // [rsp+60h] [rbp-88h]
  __int64 v114; // [rsp+70h] [rbp-78h] BYREF
  int v115; // [rsp+78h] [rbp-70h]
  char v116; // [rsp+7Ch] [rbp-6Ch]
  __int64 v117; // [rsp+88h] [rbp-60h]
  unsigned int v118; // [rsp+90h] [rbp-58h]
  int v119; // [rsp+A0h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  if ( v5 != 13 )
  {
    if ( v5 == 46 )
    {
      v31 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v31 + 74) & 1) == 0 && *(_QWORD *)(v31 + 128) <= 7u || *(char *)(sub_B14A40(v4) + 76) < 0 )
        goto LABEL_3;
      v3 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
    }
    else if ( v5 != 10 )
    {
      goto LABEL_3;
    }
LABEL_45:
    v32 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v3 + 8));
    v33 = *(_QWORD *)(a1 + 184);
    v114 = v32;
    sub_97E960((__int64)&v109, v33, v32, 0);
    v34 = *(_QWORD *)(a2 + 8);
    if ( v110 <= 0x40 )
      v35 = __popcountdi2();
    else
      v35 = sub_25876C0(&v109);
    v115 = 32;
    v114 = v35;
    v116 = 1;
    sub_97E3E0(a1, (__int64)&v114, v34);
    if ( v110 > 0x40 && v109 )
      operator delete[](v109);
    return;
  }
  if ( (((*(_WORD *)(v4 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
    goto LABEL_45;
LABEL_3:
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = v6;
  v9 = 2 * sub_A24BE0(13);
  v10 = sub_A1A5A0(v7, v9);
  v11 = sub_8E5480(v8);
  v12 = sub_BEE000(v11);
  v114 = sub_8CA760(*(__int64 **)(a1 + 192), v12);
  if ( *(_DWORD *)(v8 + 48) )
  {
    v15 = -1;
  }
  else
  {
    v13 = sub_8E5480(v8);
    if ( *(_DWORD *)(v8 + 32) == -1 )
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 32LL) + 12LL);
    else
      v14 = *(_DWORD *)(v13 + 8);
    v15 = *(_DWORD *)(v13 + 12) / v14;
    if ( *(_DWORD *)(v13 + 12) < v14 )
      return;
  }
  v16 = v15;
  if ( (_DWORD)v114 )
  {
    switch ( (_DWORD)v114 )
    {
      case 1:
        v50 = 0;
        do
        {
          sub_8E61F0((__int64)&v114, v8, v50);
          if ( !v119 )
            sub_8E5480((__int64)&v114);
          v75 = __popcountdi2();
          sub_8E61F0((__int64)&v109, v10, v50);
          v51 = v111;
          v52 = (char *)v109;
          v53 = v75;
          if ( !v113
            && (v100 = v75,
                v89 = v111,
                v76 = (char *)v109,
                v54 = sub_8E5480((__int64)&v109),
                v52 = v76,
                v51 = v89,
                v53 = v100,
                *(_BYTE *)(v54 + 51))
            && (char *)v112 == v76 )
          {
            v55 = &v89[v112 + 72];
          }
          else
          {
            v55 = &v52[(_QWORD)v51 + 40];
          }
          *v55 = v53;
          sub_A1C0C0(&v109);
          sub_A1C0C0(&v114);
          sub_8E61F0((__int64)&v114, v10, v50++);
          sub_A1DB00(&v114);
          sub_A1C0C0(&v114);
        }
        while ( v16 != v50 );
        break;
      case 2:
        v56 = 0;
        do
        {
          sub_8E61F0((__int64)&v114, v8, v56);
          if ( !v119 )
            sub_8E5480((__int64)&v114);
          v77 = __popcountdi2();
          sub_8E61F0((__int64)&v109, v10, v56);
          if ( v113 )
          {
            *(_WORD *)((char *)v109 + (_QWORD)v111 + 40) = v77;
            sub_A1C0C0(&v109);
          }
          else
          {
            v103 = v111;
            v92 = (char *)v109;
            if ( *(_BYTE *)(sub_8E5480((__int64)&v109) + 51) && v92 == (char *)v112 )
              v65 = &v92[(_QWORD)v103 + 72];
            else
              v65 = &v92[(_QWORD)v103 + 40];
            *(_WORD *)v65 = v77;
            sub_A1C0C0(&v109);
          }
          sub_A1C0C0(&v114);
          sub_8E61F0((__int64)&v114, v10, v56++);
          sub_A1DB00(&v114);
          sub_A1C0C0(&v114);
        }
        while ( v16 != v56 );
        break;
      case 3:
        v57 = 0;
        do
        {
          sub_8E61F0((__int64)&v114, v8, v57);
          if ( !v119 )
            sub_8E5480((__int64)&v114);
          v78 = __popcountdi2();
          sub_8E61F0((__int64)&v109, v10, v57);
          v58 = v111;
          v59 = (char *)v109;
          v60 = v78;
          if ( !v113
            && (v101 = v78,
                v90 = (char *)v109,
                v79 = v111,
                v61 = sub_8E5480((__int64)&v109),
                v58 = v79,
                v59 = v90,
                v60 = v101,
                *(_BYTE *)(v61 + 51))
            && v90 == (char *)v112 )
          {
            v62 = &v90[(_QWORD)v79 + 72];
          }
          else
          {
            v62 = &v59[(_QWORD)v58 + 40];
          }
          *(_WORD *)v62 = v60;
          sub_A1C0C0(&v109);
          sub_A1C0C0(&v114);
          sub_8E61F0((__int64)&v114, v10, v57++);
          sub_A1DB00(&v114);
          sub_A1C0C0(&v114);
        }
        while ( v16 != v57 );
        break;
      case 4:
        v63 = 0;
        do
        {
          sub_8E61F0((__int64)&v114, v8, v63);
          if ( !v119 )
            sub_8E5480((__int64)&v114);
          v80 = __popcountdi2();
          sub_8E61F0((__int64)&v109, v10, v63);
          if ( v113 )
          {
            *(_DWORD *)((char *)v109 + (_QWORD)v111 + 40) = v80;
            sub_A1C0C0(&v109);
          }
          else
          {
            v104 = v111;
            v93 = (char *)v109;
            if ( *(_BYTE *)(sub_8E5480((__int64)&v109) + 51) && v93 == (char *)v112 )
              v66 = &v93[(_QWORD)v104 + 72];
            else
              v66 = &v93[(_QWORD)v104 + 40];
            *(_DWORD *)v66 = v80;
            sub_A1C0C0(&v109);
          }
          sub_A1C0C0(&v114);
          sub_8E61F0((__int64)&v114, v10, v63++);
          sub_A1DB00(&v114);
          sub_A1C0C0(&v114);
        }
        while ( v16 != v63 );
        break;
      default:
        v17 = 0;
        switch ( (int)v114 )
        {
          case 5:
            do
            {
              sub_8E61F0((__int64)&v114, v8, v17);
              if ( !v119 )
                sub_8E5480((__int64)&v114);
              v71 = __popcountdi2();
              sub_8E61F0((__int64)&v109, v10, v17);
              v28 = v111;
              v29 = (char *)v109;
              if ( !v113
                && (v94 = (char *)v109,
                    v83 = v111,
                    v36 = sub_8E5480((__int64)&v109),
                    v28 = v83,
                    v29 = v94,
                    *(_BYTE *)(v36 + 51))
                && v94 == (char *)v112 )
              {
                v30 = &v94[(_QWORD)v83 + 72];
              }
              else
              {
                v30 = &v29[(_QWORD)v28 + 40];
              }
              *(_DWORD *)v30 = v71;
              sub_A1C0C0(&v109);
              sub_A1C0C0(&v114);
              sub_8E61F0((__int64)&v114, v10, v17++);
              sub_A1DB00(&v114);
              sub_A1C0C0(&v114);
            }
            while ( v17 != v16 );
            break;
          case 6:
            do
            {
              sub_8E61F0((__int64)&v114, v8, v17);
              if ( !v119 )
                sub_8E5480((__int64)&v114);
              v70 = (int)__popcountdi2();
              sub_8E61F0((__int64)&v109, v10, v17);
              if ( v113 )
              {
                *(_QWORD *)((char *)v109 + (_QWORD)v111 + 40) = v70;
                sub_A1C0C0(&v109);
              }
              else
              {
                v95 = v111;
                v84 = (char *)v109;
                if ( *(_BYTE *)(sub_8E5480((__int64)&v109) + 51) && v84 == (char *)v112 )
                  v37 = &v84[(_QWORD)v95 + 72];
                else
                  v37 = &v84[(_QWORD)v95 + 40];
                *(_QWORD *)v37 = v70;
                sub_A1C0C0(&v109);
              }
              sub_A1C0C0(&v114);
              sub_8E61F0((__int64)&v114, v10, v17++);
              sub_A1DB00(&v114);
              sub_A1C0C0(&v114);
            }
            while ( v17 != v16 );
            break;
          case 7:
            do
            {
              sub_8E61F0((__int64)&v114, v8, v17);
              if ( !v119 )
                sub_8E5480((__int64)&v114);
              v69 = (int)__popcountdi2();
              sub_8E61F0((__int64)&v109, v10, v17);
              v25 = v111;
              v26 = (char *)v109;
              if ( !v113
                && (v96 = (char *)v109,
                    v85 = v111,
                    v38 = sub_8E5480((__int64)&v109),
                    v25 = v85,
                    v26 = v96,
                    *(_BYTE *)(v38 + 51))
                && v96 == (char *)v112 )
              {
                v27 = &v96[(_QWORD)v85 + 72];
              }
              else
              {
                v27 = &v26[(_QWORD)v25 + 40];
              }
              *(_QWORD *)v27 = v69;
              sub_A1C0C0(&v109);
              sub_A1C0C0(&v114);
              sub_8E61F0((__int64)&v114, v10, v17++);
              sub_A1DB00(&v114);
              sub_A1C0C0(&v114);
            }
            while ( v17 != v16 );
            break;
          case 8:
            do
            {
              sub_8E61F0((__int64)&v114, v8, v17);
              v45 = v114;
              v46 = v117;
              if ( v119
                || (v88 = (void *)v114,
                    v73 = v117,
                    v47 = sub_8E5480((__int64)&v114),
                    v46 = v73,
                    v45 = (__int64)v88,
                    !*(_BYTE *)(v47 + 51))
                || (v48 = (__int64)v88 + v73 + 72, v88 != (void *)v118) )
              {
                v48 = v46 + v45 + 40;
              }
              sub_2587D60(&v109, v48);
              v108 = 1;
              v107 = v110;
              v106 = v109;
              if ( v110 <= 0x40 )
                v40 = __popcountdi2();
              else
                v40 = sub_25876C0(&v106);
              v72 = v40;
              sub_8E61F0((__int64)&v109, v10, v17);
              v41 = v111;
              v42 = v109;
              if ( !v113
                && (v99 = v109, v86 = v111, v43 = sub_8E5480((__int64)&v109), v41 = v86, v42 = v99, *(_BYTE *)(v43 + 51))
                && v99 == (void *)v112 )
              {
                v44 = (__int64)v99 + (_QWORD)v86 + 72;
              }
              else
              {
                v44 = (__int64)v42 + (_QWORD)v41 + 40;
              }
              if ( *(_DWORD *)(v44 + 8) > 0x40u && *(_QWORD *)v44 )
              {
                v87 = (void *)v44;
                operator delete[](*(void **)v44);
                v44 = (__int64)v87;
              }
              *(_DWORD *)(v44 + 8) = 0;
              *(_QWORD *)v44 = v72;
              sub_A1C0C0(&v109);
              if ( v107 > 0x40 && v106 )
                operator delete[](v106);
              sub_A1C0C0(&v114);
              sub_8E61F0((__int64)&v114, v10, v17++);
              sub_A1DB00(&v114);
              sub_A1C0C0(&v114);
            }
            while ( v17 != v16 );
            break;
          case 9:
            do
            {
              sub_8E61F0((__int64)&v114, v8, v17);
              v20 = v114;
              v19 = v117;
              if ( v119
                || (v81 = (void *)v114,
                    v67 = v117,
                    v18 = sub_8E5480((__int64)&v114),
                    v19 = v67,
                    v20 = (__int64)v81,
                    !*(_BYTE *)(v18 + 51))
                || (v21 = (__int64)v81 + v67 + 72, v81 != (void *)v118) )
              {
                v21 = v19 + v20 + 40;
              }
              sub_2587BE0(&v109, v21, *(unsigned int *)(v21 + 8));
              v68 = v110;
              v82 = v109;
              sub_8E61F0((__int64)&v109, v10, v17);
              v22 = v111;
              v23 = v109;
              if ( !v113
                && (v105 = v109,
                    v98 = v111,
                    v39 = sub_8E5480((__int64)&v109),
                    v22 = v98,
                    v23 = v105,
                    *(_BYTE *)(v39 + 51))
                && v105 == (void *)v112 )
              {
                v24 = (__int64)v105 + (_QWORD)v98 + 72;
              }
              else
              {
                v24 = (__int64)v23 + (_QWORD)v22 + 40;
              }
              if ( *(_DWORD *)(v24 + 8) > 0x40u && *(_QWORD *)v24 )
              {
                v97 = v24;
                operator delete[](*(void **)v24);
                v24 = v97;
              }
              *(_QWORD *)v24 = 0;
              *(_DWORD *)(v24 + 8) = 0;
              sub_A1C0C0(&v109);
              if ( v68 > 0x40 && v82 )
                operator delete[](v82);
              sub_A1C0C0(&v114);
              sub_8E61F0((__int64)&v114, v10, v17++);
              sub_A1DB00(&v114);
              sub_A1C0C0(&v114);
            }
            while ( v17 != v16 );
            break;
        }
        break;
    }
  }
  else
  {
    v49 = 0;
    do
    {
      sub_8E61F0((__int64)&v114, v8, v49);
      if ( !v119 )
        sub_8E5480((__int64)&v114);
      v74 = __popcountdi2();
      sub_8E61F0((__int64)&v109, v10, v49);
      if ( v113 )
      {
        *((_BYTE *)v109 + (_QWORD)v111 + 40) = v74;
        sub_A1C0C0(&v109);
      }
      else
      {
        v102 = v111;
        v91 = (char *)v109;
        if ( !*(_BYTE *)(sub_8E5480((__int64)&v109) + 51) || (v64 = &v102[v112 + 72], (char *)v112 != v91) )
          v64 = &v91[(_QWORD)v102 + 40];
        *v64 = v74;
        sub_A1C0C0(&v109);
      }
      sub_A1C0C0(&v114);
      sub_8E61F0((__int64)&v114, v10, v49++);
      sub_A1DB00(&v114);
      sub_A1C0C0(&v114);
    }
    while ( v49 != v16 );
  }
}

