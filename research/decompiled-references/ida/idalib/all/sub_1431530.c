__int64 __fastcall sub_1431530(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __m128i a6,
        double a7)
{
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int8 *v17; // rax
  __int64 v18; // rdx
  int v19; // r15d
  int v20; // edx
  __int64 v21; // rdi
  void (*v22)(void); // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // r13d
  void *v30; // rax
  char v31; // cl
  void *v32; // rdi
  int v33; // eax
  void *v34; // rdi
  unsigned int v35; // r14d
  char v36; // r13
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  void *v41; // rdi
  __int64 v42; // rdx
  _BOOL8 v43; // rsi
  unsigned __int64 v44; // rsi
  bool v45; // zf
  __int64 v46; // rdx
  int v47; // eax
  __int16 v48; // ax
  int v49; // edx
  __int64 v50; // rsi
  int v51; // ecx
  __int64 v52; // r15
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  unsigned __int8 v56; // al
  _BYTE *v57; // rdx
  char v58; // al
  int v59; // ecx
  __int64 v60; // rax
  int v61; // ecx
  _BYTE *v62; // rax
  int v63; // ecx
  int v64; // edx
  int v65; // esi
  bool v66; // al
  unsigned int v67; // r11d
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  char v70; // r14
  unsigned int v71; // eax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned __int32 v75; // eax
  unsigned __int64 v76; // rdx
  void *v77; // rdi
  unsigned __int32 v78; // r14d
  void *v79; // rax
  unsigned __int8 *v80; // r13
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  _BYTE *v83; // rdx
  bool v84; // cl
  void *v85; // rax
  int v86; // edx
  unsigned __int64 v87; // rdx
  int v88; // eax
  int v89; // r13d
  __int64 v90; // r9
  unsigned int *v91; // rax
  const void **v92; // r13
  __int64 v93; // rax
  size_t v94; // rdx
  __int64 v95; // rdx
  void **v96; // r13
  void *v97; // rdi
  size_t v98; // rdx
  size_t v99; // rdx
  size_t v100; // rdx
  __int64 v101; // rax
  size_t v102; // rdx
  void *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r12
  __int64 v106; // r15
  __int64 v107; // r12
  void *v108; // rdi
  size_t v109; // rdx
  size_t v110; // rdx
  int v111; // [rsp+8h] [rbp-1C0h]
  int v112; // [rsp+8h] [rbp-1C0h]
  int v113; // [rsp+8h] [rbp-1C0h]
  void **v114; // [rsp+8h] [rbp-1C0h]
  int v115; // [rsp+10h] [rbp-1B8h]
  __int64 v116; // [rsp+10h] [rbp-1B8h]
  void *v117; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v118; // [rsp+10h] [rbp-1B8h]
  size_t v119; // [rsp+10h] [rbp-1B8h]
  char s1a; // [rsp+18h] [rbp-1B0h]
  __int32 s1b; // [rsp+18h] [rbp-1B0h]
  void *s1; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v123; // [rsp+20h] [rbp-1A8h]
  __int64 v124; // [rsp+20h] [rbp-1A8h]
  const void **v125; // [rsp+28h] [rbp-1A0h]
  unsigned __int8 v126; // [rsp+3Fh] [rbp-189h] BYREF
  void *v127; // [rsp+40h] [rbp-188h] BYREF
  unsigned int v128; // [rsp+48h] [rbp-180h]
  char v129; // [rsp+4Ch] [rbp-17Ch]
  void *v130; // [rsp+50h] [rbp-178h] BYREF
  _BYTE *v131; // [rsp+58h] [rbp-170h]
  void *ptr; // [rsp+A0h] [rbp-128h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-120h] BYREF
  _BYTE v134[72]; // [rsp+B8h] [rbp-110h] BYREF
  __m128 v135; // [rsp+100h] [rbp-C8h] BYREF
  void *v136; // [rsp+110h] [rbp-B8h]
  _DWORD v137[7]; // [rsp+128h] [rbp-A0h] BYREF
  char v138; // [rsp+144h] [rbp-84h]
  char v139; // [rsp+145h] [rbp-83h]
  char v140; // [rsp+146h] [rbp-82h]
  char v141; // [rsp+147h] [rbp-81h]
  __int64 *v142; // [rsp+148h] [rbp-80h]
  __int64 v143; // [rsp+160h] [rbp-68h] BYREF
  unsigned __int8 v144; // [rsp+180h] [rbp-48h]
  char v145; // [rsp+181h] [rbp-47h]

  v12 = *((unsigned __int16 *)a2 + 8);
  *(_DWORD *)a3 = 2;
  *(_QWORD *)(a1 + 8) = 0;
  if ( (_WORD)v12 == 3 )
  {
    v21 = *(_QWORD *)(a5 + 752);
    if ( v21 )
    {
      v22 = *(void (**)(void))(*(_QWORD *)v21 + 40LL);
      if ( v22 != nullsub_675 )
        v22();
    }
    v23 = *(_QWORD *)(a5 + 48);
    *(_BYTE *)(a5 + 968) = 1;
    *(_BYTE *)(v23 + 6) = 1;
    do
    {
      sub_14634E0(a5, a2);
      v12 = *((unsigned __int16 *)a2 + 8);
    }
    while ( (_WORD)v12 == 4 );
  }
  if ( (_WORD)v12 == 23 )
    goto LABEL_93;
  if ( (unsigned __int16)v12 > 0x17u )
  {
    if ( (_WORD)v12 != 40 )
    {
      if ( (unsigned __int16)v12 > 0x28u )
      {
        if ( (_WORD)v12 != 135 && (_WORD)v12 != 149 )
        {
          if ( (_WORD)v12 == 41 )
          {
            v111 = *a2;
            do
              sub_14634E0(a5, a2);
            while ( *((_WORD *)a2 + 8) == 4 );
            v13 = sub_1431530(a1, a2, a3, a4, a5);
            if ( !(_BYTE)v13 )
            {
              v14 = *(_DWORD *)(a1 + 24);
              *(_DWORD *)a1 = v111;
              if ( v14 <= 0x40 )
              {
                v69 = (*(_QWORD *)(a1 + 16) == 0) & (0xFFFFFFFFFFFFFFFFLL >> -(char)v14);
                if ( !v14 )
                  v69 = 0;
                *(_QWORD *)(a1 + 16) = v69;
              }
              else
              {
                **(_QWORD **)(a1 + 16) = v14 == (unsigned int)sub_2206780(a1 + 16);
                memset(
                  (void *)(*(_QWORD *)(a1 + 16) + 8LL),
                  0,
                  8 * ((unsigned int)(((unsigned __int64)v14 + 63) >> 6) + 0x1FFFFFFF));
              }
              v15 = *(_DWORD *)a3;
              *(_BYTE *)(a1 + 28) = 0;
              *(_QWORD *)(a1 + 8) = 0;
              if ( !v15 )
              {
                *(_DWORD *)a3 = 1;
                return v13;
              }
              if ( v15 == 1 )
              {
                *(_DWORD *)a3 = 0;
                return v13;
              }
              return 0;
            }
            return 1;
          }
          goto LABEL_95;
        }
        v42 = *(unsigned int *)(a1 + 24);
        v43 = (_WORD)v12 == 149;
        if ( (unsigned int)v42 > 0x40 )
        {
          **(_QWORD **)(a1 + 16) = v43;
          memset(
            (void *)(*(_QWORD *)(a1 + 16) + 8LL),
            0,
            8 * ((unsigned int)((unsigned __int64)(v42 + 63) >> 6) + 0x1FFFFFFF));
          v48 = *((_WORD *)a2 + 8);
          v46 = 0;
          *(_BYTE *)(a1 + 28) = 0;
          if ( (unsigned __int16)(v48 - 7) <= 0xCu || v48 == 1 )
            goto LABEL_87;
        }
        else
        {
          *(_BYTE *)(a1 + 28) = 0;
          v44 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v42) & v43;
          v45 = (_DWORD)v42 == 0;
          v46 = 0;
          if ( v45 )
            v44 = 0;
          *(_QWORD *)(a1 + 16) = v44;
          if ( (unsigned __int16)(v12 - 7) <= 0xCu )
            goto LABEL_87;
        }
        v46 = *((_QWORD *)a2 + 1);
LABEL_87:
        v47 = *a2;
        *(_QWORD *)(a1 + 8) = v46;
        *(_DWORD *)a1 = v47;
        *(_DWORD *)(a1 + 4) = v47;
        do
          sub_14634E0(a5, a2);
        while ( *((_WORD *)a2 + 8) == 4 );
        return 0;
      }
      if ( (_WORD)v12 == 33 )
      {
        v112 = *a2;
        do
          sub_14634E0(a5, a2);
        while ( *((_WORD *)a2 + 8) == 4 );
        v13 = sub_1431530(a1, a2, a3, a4, a5);
        if ( !(_BYTE)v13 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          *(_DWORD *)a1 = v112;
          return v13;
        }
        return 1;
      }
      if ( (_WORD)v12 == 36 )
      {
        v115 = *a2;
        do
          sub_14634E0(a5, a2);
        while ( *((_WORD *)a2 + 8) == 4 );
        v13 = sub_1431530(a1, a2, a3, a4, a5);
        if ( (_BYTE)v13 )
          return 1;
        *(_QWORD *)(a1 + 8) = 0;
        v70 = *(_BYTE *)(a1 + 28);
        *(_DWORD *)a1 = v115;
        v71 = *(_DWORD *)(a1 + 24);
        v135.m128_i32[2] = v71;
        if ( v71 > 0x40 )
        {
          sub_2205510(&v135);
          v71 = v135.m128_u32[2];
          if ( v135.m128_i32[2] > 0x40u )
          {
            sub_2205FC0(&v135, a1 + 16);
            goto LABEL_153;
          }
          v72 = v135.m128_u64[0];
        }
        else
        {
          v72 = *(_QWORD *)(a1 + 16);
        }
        v73 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v71) & ~v72;
        v45 = v71 == 0;
        v74 = 0;
        if ( !v45 )
          v74 = v73;
        v135.m128_u64[0] = v74;
LABEL_153:
        sub_2205900(&v135);
        v75 = v135.m128_u32[2];
        v76 = v135.m128_u64[0];
        if ( *(_DWORD *)(a1 + 24) > 0x40u )
        {
          v77 = *(void **)(a1 + 16);
          if ( v77 )
          {
            v123 = v135.m128_u64[0];
            s1b = v135.m128_i32[2];
            operator delete[](v77);
            v76 = v123;
            v75 = s1b;
          }
        }
        *(_QWORD *)(a1 + 16) = v76;
        *(_DWORD *)(a1 + 24) = v75;
        *(_BYTE *)(a1 + 28) = v70;
        if ( v70 )
          goto LABEL_82;
        v78 = v75 - 1;
        if ( v75 <= 0x40 )
        {
          if ( v76 == 1LL << v78 )
            goto LABEL_160;
        }
        else if ( ((1LL << v78) & *(_QWORD *)(v76 + 8LL * (v78 >> 6))) != 0 && (unsigned int)sub_22068B0(a1 + 16) == v78 )
        {
LABEL_160:
          if ( a4 )
          {
            sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), v115, 1375);
            v79 = *(void **)a1;
            si128.m128i_i8[0] = 1;
            ptr = v79;
            sub_AEC610((__int64 *)&v135, (__int64 *)&ptr);
            sub_AEA040((__int64)&v135);
          }
        }
LABEL_82:
        *(_DWORD *)a3 = 2;
        return v13;
      }
LABEL_95:
      if ( (unsigned __int16)v12 > 0x13u || (v55 = 1047810, !_bittest64(&v55, v12)) )
      {
        v52 = *((_QWORD *)a2 + 1);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 16);
          if ( (unsigned int)*(_QWORD *)v53 == 7
            && *(_DWORD *)(v53 + 16) == 1768318308
            && *(_WORD *)(v53 + 20) == 25966
            && *(_BYTE *)(v53 + 22) == 100 )
          {
            return (unsigned int)sub_142E860(a1, (__int64)a2, a3, a4, a5, a6, a7);
          }
          if ( (*(_BYTE *)(v52 + 3) & 0x40) == 0 )
          {
            if ( !a4 )
              goto LABEL_100;
            v89 = 1386;
            if ( (unsigned int)*(_QWORD *)v53 == 4 )
              v89 = 2 * (*(_DWORD *)(v53 + 16) == 1702195828) + 1386;
            sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), *a2, v89);
            sub_AE9DF0((unsigned __int8 **)&v135, v52, 5u);
            sub_AEA040((__int64)&v135);
            v118 = *(_QWORD *)(a5 + 48);
            if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v118 + 32), v89, *a2, v118, v118, v90) != 1 )
            {
LABEL_100:
              sub_C16580((_DWORD *)(a1 + 16), 0);
              v54 = *a2;
              *(_BYTE *)(a1 + 28) = 0;
              *(_QWORD *)(a1 + 8) = v52;
              *(_DWORD *)a1 = v54;
              *(_DWORD *)(a1 + 4) = v54;
              *(_BYTE *)(a3 + 16) = 1;
              do
                sub_14634E0(a5, a2);
              while ( *((_WORD *)a2 + 8) == 4 );
              return 0;
            }
            sub_C23620((__int64)&v130, (__int64 *)(*(_QWORD *)(v118 + 40) + 168LL));
            v91 = *(unsigned int **)(v52 + 16);
            v92 = (const void **)v130;
            s1 = v91 + 4;
            v119 = *v91;
            v124 = (__int64)v131;
            v93 = (v131 - (_BYTE *)v130) >> 7;
            if ( v93 > 0 )
            {
              v125 = (const void **)((char *)v130 + 128 * v93);
              do
              {
                v94 = (size_t)v92[1];
                if ( v119 >= v94 && (!v94 || !memcmp(s1, *v92, v94)) )
                  goto LABEL_203;
                v98 = (size_t)v92[5];
                if ( v119 >= v98 && (!v98 || !memcmp(s1, v92[4], v98)) )
                {
                  v92 += 4;
                  goto LABEL_203;
                }
                v99 = (size_t)v92[9];
                if ( v119 >= v99 && (!v99 || !memcmp(s1, v92[8], v99)) )
                {
                  v92 += 8;
                  goto LABEL_203;
                }
                v100 = (size_t)v92[13];
                if ( v119 >= v100 && (!v100 || !memcmp(s1, v92[12], v100)) )
                {
                  v92 += 12;
                  goto LABEL_203;
                }
                v92 += 16;
              }
              while ( v92 != v125 );
            }
            v101 = (v124 - (__int64)v92) >> 5;
            if ( v101 != 2 )
            {
              if ( v101 != 3 )
              {
                if ( v101 != 1 )
                  goto LABEL_207;
                goto LABEL_228;
              }
              v109 = (size_t)v92[1];
              if ( v119 >= v109 && (!v109 || !memcmp(s1, *v92, v109)) )
              {
LABEL_203:
                if ( (const void **)v124 != v92 )
                {
                  sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), *a2, 1387);
                  sub_142D560((__int64)&ptr, (__int64)v130, (__int64)v131, ",", 1u);
                  sub_142BAD0(&v135, ptr, si128.m128i_i64[0]);
                  sub_AE9DF0((unsigned __int8 **)&v135, v52, 5u);
                  if ( ptr != &si128.m128i_u64[1] )
                    operator delete(ptr);
                  sub_AEA040((__int64)&v135);
                }
                goto LABEL_207;
              }
              v92 += 4;
            }
            v110 = (size_t)v92[1];
            if ( v119 < v110 || v110 && memcmp(s1, *v92, v110) )
            {
              v92 += 4;
LABEL_228:
              v102 = (size_t)v92[1];
              if ( v119 >= v102 && (!v102 || !memcmp(s1, *v92, v102)) )
                goto LABEL_203;
LABEL_207:
              v95 = (__int64)v131;
              v96 = (void **)v130;
              if ( v131 != v130 )
              {
                do
                {
                  while ( 1 )
                  {
                    v97 = *v96;
                    if ( *v96 == v96 + 2 )
                      break;
                    v114 = (void **)v95;
                    v96 += 4;
                    operator delete(v97);
                    v95 = (__int64)v114;
                    if ( v114 == v96 )
                      goto LABEL_210;
                  }
                  v96 += 4;
                }
                while ( (void **)v95 != v96 );
              }
LABEL_210:
              if ( v130 )
                operator delete(v130);
              goto LABEL_100;
            }
            goto LABEL_203;
          }
        }
      }
      v50 = *(_QWORD *)(a5 + 48);
      v49 = *a2;
      v51 = 1130;
LABEL_94:
      sub_FC70B0((__int64)&v135, v50, v49, v51);
      sub_AEA040((__int64)&v135);
      return 1;
    }
    v113 = *a2;
    do
      sub_14634E0(a5, a2);
    while ( *((_WORD *)a2 + 8) == 4 );
    v13 = sub_1431530(a1, a2, a3, a4, a5);
    if ( (_BYTE)v13 )
      return 1;
    v35 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = 0;
    v36 = *(_BYTE *)(a1 + 28);
    *(_DWORD *)a1 = v113;
    v135.m128_i32[2] = v35;
    if ( v35 > 0x40 )
    {
      sub_2205510(&v135);
      v35 = v135.m128_u32[2];
      if ( v135.m128_i32[2] > 0x40u )
      {
        sub_2205FC0(&v135, a1 + 16);
        v39 = v135.m128_u64[0];
        v38 = *(_DWORD *)(a1 + 24);
        v35 = v135.m128_u32[2];
LABEL_78:
        if ( v38 > 0x40 )
        {
          v41 = *(void **)(a1 + 16);
          if ( v41 )
            operator delete[](v41);
        }
        *(_QWORD *)(a1 + 16) = v39;
        *(_DWORD *)(a1 + 24) = v35;
        *(_BYTE *)(a1 + 28) = v36;
        goto LABEL_82;
      }
      v37 = v135.m128_u64[0];
      v38 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 16);
      v38 = v35;
    }
    v39 = 0;
    v40 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v35) & ~v37;
    if ( v35 )
      v39 = v40;
    goto LABEL_78;
  }
  if ( (unsigned __int16)v12 > 0xDu )
  {
    if ( (_WORD)v12 == 22 )
    {
      v19 = *a2;
      do
        sub_14634E0(a5, a2);
      while ( *((_WORD *)a2 + 8) == 4 );
      if ( (unsigned __int8)sub_1431530(a1, a2, a3, a4, a5) )
        return 1;
      if ( *((_WORD *)a2 + 8) == 23 )
      {
        v20 = *a2;
      }
      else
      {
        if ( (unsigned __int8)sub_1432A50(a1, 1, a2, a4, a3 + 16, a5) )
          return 1;
        v20 = *a2;
        if ( *((_WORD *)a2 + 8) != 23 )
        {
          sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), v20, 1125);
          v85 = *(void **)a1;
          si128.m128i_i8[0] = 1;
          ptr = v85;
          sub_AEC610((__int64 *)&v135, (__int64 *)&ptr);
          sub_AEA040((__int64)&v135);
          v86 = v19;
          v13 = 1;
          sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), v86, 109);
          sub_AE9DF0((unsigned __int8 **)&v135, 22, 4u);
          sub_AEA040((__int64)&v135);
          return v13;
        }
        *(_DWORD *)a3 = 2;
      }
      *(_DWORD *)a1 = v19;
      *(_DWORD *)(a1 + 4) = v20;
      *(_QWORD *)(a1 + 8) = 0;
      do
        sub_14634E0(a5, a2);
      while ( *((_WORD *)a2 + 8) == 4 );
      return 0;
    }
    goto LABEL_95;
  }
  if ( (unsigned __int16)v12 >= 9u )
  {
    if ( (*((_BYTE *)a2 + 18) & 0x20) != 0 )
    {
      sub_FC70B0((__int64)&v135, *(_QWORD *)(a5 + 48), *a2, 1145);
      v80 = (unsigned __int8 *)v135.m128_u64[0];
      if ( !v135.m128_u64[0] )
      {
        v87 = v135.m128_u64[1];
        v88 = *(_DWORD *)(v135.m128_u64[1] + 14976);
        if ( v88 )
        {
          v104 = (unsigned int)(v88 - 1);
          *(_DWORD *)(v135.m128_u64[1] + 14976) = v104;
          v80 = *(unsigned __int8 **)(v87 + 8 * v104 + 14848);
          v105 = *((unsigned int *)v80 + 134);
          *v80 = 0;
          v106 = *((_QWORD *)v80 + 66);
          *((_DWORD *)v80 + 106) = 0;
          v107 = v106 + (v105 << 6);
          while ( v106 != v107 )
          {
            while ( 1 )
            {
              v107 -= 64;
              v108 = *(void **)(v107 + 24);
              if ( v108 == (void *)(v107 + 40) )
                break;
              operator delete(v108);
              if ( v106 == v107 )
                goto LABEL_241;
            }
          }
LABEL_241:
          *((_DWORD *)v80 + 134) = 0;
        }
        else
        {
          v80 = (unsigned __int8 *)operator new(0x3A0u);
          *v80 = 0;
          *((_QWORD *)v80 + 12) = v80 + 112;
          *((_QWORD *)v80 + 16) = v80 + 144;
          *((_QWORD *)v80 + 20) = v80 + 176;
          *((_QWORD *)v80 + 24) = v80 + 208;
          *((_QWORD *)v80 + 28) = v80 + 240;
          *((_QWORD *)v80 + 32) = v80 + 272;
          *((_QWORD *)v80 + 36) = v80 + 304;
          *((_QWORD *)v80 + 40) = v80 + 336;
          *((_QWORD *)v80 + 44) = v80 + 368;
          *((_QWORD *)v80 + 48) = v80 + 400;
          *((_QWORD *)v80 + 52) = v80 + 432;
          *((_QWORD *)v80 + 13) = 0;
          v80[112] = 0;
          *((_QWORD *)v80 + 17) = 0;
          v80[144] = 0;
          *((_QWORD *)v80 + 21) = 0;
          v80[176] = 0;
          *((_QWORD *)v80 + 25) = 0;
          v80[208] = 0;
          *((_QWORD *)v80 + 29) = 0;
          v80[240] = 0;
          *((_QWORD *)v80 + 33) = 0;
          v80[272] = 0;
          *((_QWORD *)v80 + 37) = 0;
          v80[304] = 0;
          *((_QWORD *)v80 + 41) = 0;
          v80[336] = 0;
          *((_QWORD *)v80 + 45) = 0;
          v80[368] = 0;
          *((_QWORD *)v80 + 49) = 0;
          v80[400] = 0;
          *((_QWORD *)v80 + 53) = 0x800000000LL;
          *((_QWORD *)v80 + 66) = v80 + 544;
          *((_QWORD *)v80 + 67) = 0x600000000LL;
        }
        v135.m128_u64[0] = (unsigned __int64)v80;
      }
      v80[*v80 + 1] = 2;
      v81 = v135.m128_u64[0];
      v82 = *(unsigned __int8 *)v135.m128_u64[0];
      *(_BYTE *)v135.m128_u64[0] = v82 + 1;
      *(_QWORD *)(v81 + 8 * v82 + 16) = 0;
      sub_AEA040((__int64)&v135);
    }
    v126 = 0;
    ptr = v134;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v24 = sub_145C740(a5, a2, &ptr, &v126);
    v13 = v126;
    if ( v126 )
      goto LABEL_28;
    sub_13EE630((__int64)&v135, v24, (_BYTE *)(v24 + v25), *a2, a5, *((_WORD *)a2 + 8));
    v13 = v135.m128_u8[11];
    if ( v135.m128_i8[11] )
    {
LABEL_69:
      v34 = v136;
      if ( v136 == v137 )
        goto LABEL_28;
      goto LABEL_70;
    }
    v116 = *(_QWORD *)(a5 + 64);
    if ( v135.m128_i8[10] )
    {
      v26 = *(unsigned __int8 *)(*(_QWORD *)(a5 + 64) + 14LL);
    }
    else
    {
      switch ( v135.m128_i16[4] )
      {
        case 0xA:
          v26 = sub_102DB30((unsigned __int8 *)v116, *(_DWORD *)(v116 + 152));
          break;
        case 0xC:
          v26 = sub_102DB30((unsigned __int8 *)v116, *(_DWORD *)(v116 + 160));
          break;
        case 0xD:
          v26 = sub_102DB30((unsigned __int8 *)v116, *(_DWORD *)(v116 + 164));
          break;
        default:
          v128 = 8;
          goto LABEL_55;
      }
    }
    v128 = v26;
    if ( v26 > 0x40 )
    {
      sub_2205470(&v127, 0, 0);
LABEL_56:
      v129 = 1;
      sub_C16580(&v127, v135.m128_i64[0]);
      if ( v135.m128_i16[4] == 10 )
      {
        v84 = !sub_102DCD0(*(_DWORD *)(v116 + 152));
        v129 = v84;
      }
      else
      {
        if ( (unsigned __int16)(v135.m128_i16[4] - 12) <= 1u )
          goto LABEL_58;
        v83 = *(_BYTE **)(a5 + 56);
        if ( v135.m128_i16[4] == 11 )
        {
          if ( (v83[1] & 8) == 0 )
          {
LABEL_58:
            v27 = *(unsigned int *)(a1 + 24);
            v28 = v128;
            v129 = 1;
            if ( v128 < (unsigned int)v27 )
              goto LABEL_59;
            goto LABEL_178;
          }
          if ( (v83[3] & 0x20) != 0 )
          {
            v27 = *(unsigned int *)(a1 + 24);
            v28 = v128;
            v129 = 1;
            if ( (unsigned int)v27 > v128 )
              goto LABEL_59;
            goto LABEL_178;
          }
        }
        v129 = ((v83[46] >> 6) ^ 1) & 1;
        v84 = v129;
      }
      v27 = *(unsigned int *)(a1 + 24);
      v28 = v128;
      if ( (unsigned int)v27 > v128 )
      {
        if ( !v84 )
        {
          sub_2206B70(&v130, &v127, v27);
          v29 = (int)v131;
          v30 = v130;
          v31 = 0;
LABEL_60:
          if ( *(_DWORD *)(a1 + 24) > 0x40u )
          {
            v32 = *(void **)(a1 + 16);
            if ( v32 )
            {
              s1a = v31;
              v117 = v30;
              operator delete[](v32);
              v31 = s1a;
              v30 = v117;
            }
          }
          *(_QWORD *)(a1 + 16) = v30;
          *(_DWORD *)(a1 + 24) = v29;
          *(_BYTE *)(a1 + 28) = v31;
          goto LABEL_64;
        }
LABEL_59:
        sub_2206CD0(&v130, &v127, v27);
        v29 = (int)v131;
        v30 = v130;
        v31 = 1;
        goto LABEL_60;
      }
LABEL_178:
      if ( v28 <= 0x40 && (unsigned int)v27 <= 0x40 )
      {
        v103 = v127;
        *(_DWORD *)(a1 + 24) = v28;
        *(_QWORD *)(a1 + 16) = v103;
      }
      else
      {
        sub_22056A0(a1 + 16, &v127);
      }
      *(_BYTE *)(a1 + 28) = v129;
LABEL_64:
      v33 = *a2;
      *(_DWORD *)a1 = *a2;
      *(_DWORD *)(a1 + 4) = v33;
      do
        sub_14634E0(a5, a2);
      while ( *((_WORD *)a2 + 8) == 4 );
      if ( v128 > 0x40 && v127 )
        operator delete[](v127);
      goto LABEL_69;
    }
LABEL_55:
    v127 = nullptr;
    goto LABEL_56;
  }
  if ( (_WORD)v12 == 2 )
  {
LABEL_93:
    v49 = *a2;
    v50 = *(_QWORD *)(a5 + 48);
    v51 = 1126;
    goto LABEL_94;
  }
  if ( (_WORD)v12 != 7 )
    goto LABEL_95;
  LOBYTE(v127) = 0;
  ptr = v134;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v17 = (unsigned __int8 *)sub_145C740(a5, a2, &ptr, &v127);
  v13 = (unsigned __int8)v127;
  if ( !(_BYTE)v127 )
  {
    sub_13E2260(
      &v135,
      v17,
      v18,
      *a2,
      *(_QWORD *)(a5 + 88),
      *(char **)(a5 + 56),
      *(_QWORD *)(a5 + 64),
      *(_QWORD *)(a5 + 48));
    v56 = v144;
    v13 = v144 & 1;
    if ( (v144 & 1) == 0 )
    {
      if ( (v139 || v138) && !v141 || (v13 = v144, LOBYTE(v13) = v144 >> 7, (v144 & 0x80u) != 0) )
      {
        v13 = 1;
        sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, 1136);
        sub_AEA040((__int64)&v130);
      }
      else
      {
        if ( v140 )
        {
          sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, 1145);
          sub_AE9DF0((unsigned __int8 **)&v130, 1, 2u);
          sub_AEA040((__int64)&v130);
          v56 = v144;
        }
        v57 = *(_BYTE **)(a5 + 56);
        if ( (*v57 & 1) == 0 && (v56 & 8) != 0 )
        {
          v58 = v57[1];
          if ( (v58 & 8) != 0 )
            v59 = (v58 & 0x10) == 0 ? 90 : 134;
          else
            v59 = 86;
          sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, v59);
          sub_AEA040((__int64)&v130);
          v56 = v144;
        }
        if ( (v56 & 0x10) != 0 )
        {
          v60 = *(_QWORD *)(a5 + 56);
          v61 = 9;
          if ( (*(_BYTE *)(v60 + 1) & 8) != 0 )
            v61 = (*(_BYTE *)(v60 + 2) & 1) == 0 ? 91 : 133;
          sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, v61);
          sub_AEA040((__int64)&v130);
        }
        if ( (v145 & 0x10) != 0 )
        {
          v62 = *(_BYTE **)(a5 + 56);
          v63 = 92;
          if ( (v62[1] & 8) == 0 )
            v63 = (*v62 & 8) == 0 ? 85 : 128;
          sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, v63);
          sub_AEA040((__int64)&v130);
        }
        if ( (unsigned __int8)sub_13E3040((__int64)&v135, (void **)(a1 + 16)) )
        {
          sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), *a2, 23);
          sub_AE9DF0((unsigned __int8 **)&v130, 1, 2u);
          sub_AEA040((__int64)&v130);
          *(_BYTE *)(a1 + 28) = 1;
          v65 = *a2;
        }
        else
        {
          v64 = *a2;
          v65 = *a2;
          v66 = (v144 & 2) != 0;
          *(_BYTE *)(a1 + 28) = v66;
          if ( !v66 )
          {
            v67 = *(_DWORD *)(a1 + 24);
            v68 = *(_QWORD *)(a1 + 16);
            if ( v67 > 0x40 )
              v68 = *(_QWORD *)(v68 + 8LL * ((v67 - 1) >> 6));
            if ( (v68 & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
            {
              if ( a4 && v137[6] == 10 )
              {
                sub_FC70B0((__int64)&v130, *(_QWORD *)(a5 + 48), v64, 94);
                sub_AEA040((__int64)&v130);
                v64 = *a2;
              }
              *(_BYTE *)(a1 + 28) = 1;
              v65 = v64;
            }
          }
        }
        *(_DWORD *)a1 = v65;
        *(_DWORD *)(a1 + 4) = v65;
        do
          sub_14634E0(a5, a2);
        while ( *((_WORD *)a2 + 8) == 4 );
      }
    }
    v34 = v142;
    if ( v142 != &v143 )
LABEL_70:
      free(v34);
  }
LABEL_28:
  if ( ptr != v134 )
    free(ptr);
  return v13;
}
