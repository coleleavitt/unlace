__int64 __fastcall sub_C4AAD0(unsigned __int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbp
  int v6; // esi
  char *v7; // rax
  char v8; // r14
  char v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r13d
  _BYTE *v13; // rdi
  __int64 v14; // r12
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  signed __int64 v23; // rsi
  bool v24; // sf
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r14d
  unsigned __int64 v28; // rdx
  _QWORD *v30; // rbp
  bool v31; // al
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rsi
  void *v44; // rdi
  unsigned __int16 *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  signed __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // r13
  unsigned __int8 v57; // al
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // eax
  int v65; // r13d
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  unsigned __int64 v76; // rdi
  unsigned __int64 v77; // rdx
  __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r9
  int v82; // eax
  unsigned __int64 v83; // rax
  int v84; // [rsp+8h] [rbp-160h]
  __int64 v85; // [rsp+8h] [rbp-160h]
  _QWORD *v86; // [rsp+8h] [rbp-160h]
  __int64 v87; // [rsp+8h] [rbp-160h]
  char *v88; // [rsp+8h] [rbp-160h]
  __int64 v89; // [rsp+8h] [rbp-160h]
  int v90; // [rsp+10h] [rbp-158h]
  void *v91; // [rsp+10h] [rbp-158h]
  int v92; // [rsp+10h] [rbp-158h]
  __int64 v93; // [rsp+18h] [rbp-150h]
  __int64 v94; // [rsp+18h] [rbp-150h]
  __int64 v95; // [rsp+18h] [rbp-150h]
  __int64 v96; // [rsp+18h] [rbp-150h]
  unsigned __int64 v99; // [rsp+30h] [rbp-138h]
  __int64 v100; // [rsp+38h] [rbp-130h]
  char *v101; // [rsp+48h] [rbp-120h] BYREF
  void *v102; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v103; // [rsp+58h] [rbp-110h]
  void *v104[2]; // [rsp+60h] [rbp-108h] BYREF
  char v105; // [rsp+70h] [rbp-F8h]
  __m128i v106; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-B8h]
  unsigned int v108; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned __int64 v109; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v110; // [rsp+C8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-98h]
  __int64 v112; // [rsp+D8h] [rbp-90h]
  _BYTE v113[64]; // [rsp+E0h] [rbp-88h] BYREF
  char v114; // [rsp+120h] [rbp-48h]
  char v115; // [rsp+121h] [rbp-47h]

  v5 = a1;
  LOBYTE(v108) = v108 | 1;
  v6 = *(_DWORD *)(a3 + 900);
  ptr = v113;
  v112 = 0x800000000LL;
  v7 = *(char **)(a3 + 24);
  v110 = 0;
  v115 = 0;
  v106 = 0u;
  v8 = *v7;
  v9 = v7[1];
  v84 = v6;
  v10 = *((_QWORD *)v7 + 1);
  v107 = 0;
  *((_QWORD *)v7 + 1) = 0;
  v93 = v10;
  *(_DWORD *)(a3 + 900) = *(_DWORD *)(a3 + 40) + 1;
  LODWORD(v7) = *(_DWORD *)(a3 + 916);
  *(_DWORD *)(a3 + 916) = 3;
  v90 = (int)v7;
  if ( (*(_BYTE *)(a1 + 1) & 6) != 0 )
  {
    BYTE4(v104[0]) &= ~1u;
    LODWORD(v104[0]) = 0;
    if ( !(unsigned __int8)sub_C3A500(a3, a1, (unsigned int *)v104) )
    {
      if ( LODWORD(v104[0]) > 1 )
        sub_A4F8E0((int *)v104);
      goto LABEL_5;
    }
    sub_C245D0((__int64)&v106, *(_QWORD **)(a3 + 16), (__int64)v104);
    if ( LODWORD(v104[0]) > 1 )
      sub_A4F8E0((int *)v104);
  }
  else
  {
    v14 = 0x1C0400000800LL;
    do
    {
      v15 = (unsigned __int16 *)sub_BFB9F0(a1);
      v18 = *v15;
      v19 = (unsigned int)(v18 + 433);
      LOWORD(v19) = (v18 + 433) & 0x1FF;
      if ( (unsigned __int16)v19 > 9u )
        break;
      v19 = (v15[1] >> 3) & 0x7B;
      v18 = (v15[1] >> 3) & 0x7F;
      if ( ((v15[1] >> 3) & 0x7B) != 1 && (_BYTE)v18 != 63 )
        break;
      a1 = *((_QWORD *)v15 + 2);
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(unsigned __int8 *)(v18 + 16);
      if ( (unsigned __int8)v19 > 0x2Cu )
        break;
      if ( !_bittest64(&v14, v19) )
      {
        if ( (_BYTE)v19 != 13 )
          break;
        v19 = *(unsigned __int16 *)(v18 + 18);
        LOWORD(v19) = ((unsigned __int16)v19 >> 3) & 0x1FF;
        if ( (_WORD)v19 != 488 )
          break;
      }
    }
    while ( (*(_BYTE *)(a1 + 1) & 6) == 0 );
    v104[0] = (void *)a3;
    v104[1] = &v106;
    v105 = 1;
    if ( !(unsigned __int8)sub_C48CF0((__m128i *)v104, (__int64)v15, v19, v18, v16, v17) )
    {
LABEL_5:
      *(_DWORD *)(a3 + 916) = v90;
      v11 = *(_QWORD *)(a3 + 24);
      *(_BYTE *)(v11 + 1) = v9;
      v12 = 0;
      *(_BYTE *)v11 = v8;
      *(_QWORD *)(v11 + 8) = v93;
      v13 = ptr;
      *(_DWORD *)(a3 + 900) = v6;
      goto LABEL_20;
    }
  }
  v23 = v93;
  v24 = v107 < 0;
  *(_DWORD *)(a3 + 916) = v90;
  v25 = *(_QWORD *)(a3 + 24);
  *(_BYTE *)v25 = v8;
  *(_BYTE *)(v25 + 1) = v9;
  *(_QWORD *)(v25 + 8) = v93;
  v13 = ptr;
  *(_DWORD *)(a3 + 900) = v84;
  if ( v24 )
    goto LABEL_19;
  v101 = nullptr;
  v27 = sub_C00A40(v5, v93, v20, v21, v22);
  if ( (v108 & 1) != 0 )
    goto LABEL_14;
  v28 = (unsigned int)v112;
  if ( (_DWORD)v112 )
  {
    if ( (_DWORD)v112 == 1 && (v108 & 4) != 0 )
      goto LABEL_58;
    if ( (a2 & 1) == 0 )
    {
LABEL_14:
      if ( a2 == 3 )
        goto LABEL_15;
LABEL_58:
      v35 = v106.m128i_i64[0];
      v103 = 1;
      v102 = nullptr;
      if ( !v106.m128i_i64[0] )
        goto LABEL_59;
      goto LABEL_48;
    }
    v30 = *(_QWORD **)(a3 + 16);
    if ( (v114 & 2) == 0 )
      goto LABEL_37;
LABEL_36:
    v26 = v108 >> 4;
    if ( (_DWORD)v112 != (_DWORD)v26 || (v108 & 8) == 0 )
      goto LABEL_37;
    v26 = (*(_BYTE *)(v30[290] + 213LL) >> 2) & 3;
    if ( ((_DWORD)v112 != 1 || (v108 & 4) == 0) && ((*(_BYTE *)(v30[290] + 213LL) >> 2) & 3) != 0 )
    {
      if ( !v109 )
      {
        if ( (_DWORD)v26 != 3 )
          goto LABEL_106;
LABEL_37:
        v102 = nullptr;
        v104[0] = (void *)v110;
        if ( (v110 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_15;
        v104[0] = (void *)sub_C1BEF0((__int64)v104, v23, v28, v26);
        if ( (unsigned __int8)sub_F62670(*(_QWORD *)((unsigned __int64)v104[0] & 0xFFFFFFFFFFFFFFF0LL), 0)
          || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v104[0]
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 25) <= 1u
          || !(unsigned __int8)sub_C0FE30(a3, v27, (__int64)v104[0], (__int64 *)&v102, 0) )
        {
          goto LABEL_15;
        }
        if ( (v108 & 8) != 0 && (unsigned int)v112 == (unsigned __int64)(v108 >> 4) )
        {
          v13 = ptr;
          v77 = *((_QWORD *)ptr + (unsigned int)v112 - 1);
          v32 = v109 - v77;
          if ( v109 <= v77 )
            v32 = 0;
        }
        else
        {
          v31 = sub_C105C0((__int64)&v108);
          v13 = ptr;
          v32 = !v31;
        }
        v33 = v107;
        v34 = (char *)(v107 + (_QWORD)v102 * v32);
        v101 = v34;
        goto LABEL_45;
      }
      if ( v109 != 1 )
        goto LABEL_37;
      v26 = (unsigned int)(v26 - 1);
      if ( (_DWORD)v26 )
        goto LABEL_37;
    }
LABEL_106:
    v91 = (void *)v106.m128i_i64[1];
    v28 = v106.m128i_i64[0];
    if ( v106.m128i_i64[0] )
    {
      if ( (v106.m128i_i8[0] & 3) == 1 )
      {
        v55 = v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_WORD *)v55 & 0x1FF) == 0x2E )
        {
          v56 = *(_QWORD *)(v55 + 24);
          v57 = *(_BYTE *)(v56 + 28) & 0x7F;
          if ( (unsigned int)v57 - 49 > 2 )
          {
            if ( v57 == 32 )
            {
              v26 = *(_QWORD *)(v56 + 56);
              v89 = v26 + 8LL * *(unsigned int *)(v56 + 64);
              while ( v89 != v26 )
              {
                v83 = *(_QWORD *)(*(_QWORD *)v26 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(*(_QWORD *)v26 + 16LL) & 4) != 0 )
                  v83 = *(_QWORD *)v83;
                if ( (*(_BYTE *)(v83 + 8) & 0x7Fu) - 58 > 3 )
                  BUG();
                if ( *(char *)(v83 - 36) >= 0 )
                {
                  v100 = *(_QWORD *)v26;
                  if ( *(_BYTE *)(v83 + 9) >> 5 != 2 )
                  {
                    v23 = v83 - 64;
                    v99 = v28;
                    v96 = v26;
                    v78 = sub_EDE580(v30, v83 - 64);
                    v82 = sub_C1D4D0(v100, v23, v79, v80, v100, v81);
                    v26 = v96;
                    v28 = v99;
                    if ( v82 + 1 != (unsigned int)((__int64)(*(_QWORD *)(v78 + 56) - *(_QWORD *)(v78 + 48)) >> 3) )
                      goto LABEL_37;
                  }
                }
                v26 += 8;
              }
            }
          }
          else
          {
            v58 = *(_QWORD *)(v56 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v56 + 16) & 4) != 0 )
              v58 = *(_QWORD *)v58;
            if ( (*(_BYTE *)(v58 + 8) & 0x7Fu) - 58 > 3 )
              BUG();
            if ( *(char *)(v58 - 36) >= 0 && *(_BYTE *)(v58 + 9) >> 5 != 2 )
            {
              v59 = v58 - 64;
              v94 = v106.m128i_i64[0];
              v85 = sub_EDE580(v30, v58 - 64);
              v64 = sub_C1D4D0(v56, v59, v60, v61, v62, v63);
              v23 = v85;
              v28 = v94;
              v26 = (unsigned int)(v64 + 1);
              if ( (_DWORD)v26 != (unsigned int)((__int64)(*(_QWORD *)(v85 + 56) - *(_QWORD *)(v85 + 48)) >> 3) )
                goto LABEL_37;
            }
          }
        }
      }
    }
    v104[0] = (void *)v28;
    v65 = 0;
    v104[1] = v91;
    v66 = sub_A4F310(v104);
    v23 = v66;
    if ( (v108 & 4) != 0 )
    {
      v67 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
      v28 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v28 + 16) == 5 )
      {
        v65 = 1;
        v23 = *(_QWORD *)(sub_A72040(v30, v23) + 32);
      }
      else
      {
        if ( *(_BYTE *)(v67 + 16) != 42 )
          v67 = sub_F63050(v67, v23, v28, v26);
        v23 = *(_QWORD *)(v67 + 32);
        v65 = 1;
      }
    }
    v92 = v112;
    if ( (_DWORD)v112 != v65 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ++v65;
          v68 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
          v26 = (__int64)ptr + 8 * (unsigned int)(v65 - 1);
          v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)(v28 - 2) <= 4u )
            break;
          if ( (_BYTE)v28 == 14 )
          {
            if ( *(_BYTE *)(v68 + 16) != 14 )
            {
              v88 = (char *)ptr + 8 * (unsigned int)(v65 - 1);
              v68 = sub_F63050(v68, v23, v28, v26);
              v26 = (__int64)v88;
            }
            if ( *(_QWORD *)v26 != 1 )
              goto LABEL_37;
            v23 = *(_QWORD *)(v68 + 32);
          }
          else
          {
            v28 = *(_QWORD *)v26 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v28 || (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 > 2 )
              goto LABEL_37;
            v70 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v28 + 16) & 4) != 0 )
              v70 = *(_QWORD *)v70;
            v26 = (*(_BYTE *)(v70 + 8) & 0x7Fu) - 58;
            if ( (unsigned int)v26 > 3 )
              BUG();
            if ( *(char *)(v70 - 36) >= 0 )
            {
              v26 = *(unsigned __int8 *)(v70 + 9);
              LOBYTE(v26) = (unsigned __int8)v26 >> 5;
              if ( (_BYTE)v26 != 2 )
              {
                v71 = v70 - 64;
                v87 = v28;
                v95 = sub_EDE580(v30, v70 - 64);
                v75 = sub_C1D4D0(v87, v71, v87, v72, v73, v74);
                v23 = v95;
                v28 = v87;
                v26 = (unsigned int)(v75 + 1);
                if ( (_DWORD)v26 != (unsigned int)((__int64)(*(_QWORD *)(v95 + 56) - *(_QWORD *)(v95 + 48)) >> 3) )
                  goto LABEL_37;
              }
            }
            v23 = *(_QWORD *)(v28 + 48);
          }
          if ( v65 == v92 )
            goto LABEL_143;
        }
        v86 = (char *)ptr + 8 * (unsigned int)(v65 - 1);
        if ( v65 == v92 )
          break;
        v69 = sub_A72040(v30, v23);
        v26 = *(_QWORD *)(v69 + 40);
        v28 = *v86 + 1LL;
        if ( (*(_BYTE *)(v69 + 19) & 2) != 0 )
        {
          v23 = *(_QWORD *)v26;
          if ( *(_DWORD *)(v26 + 8) > 0x40u )
            v26 = *(_QWORD *)v23;
          else
            v26 = *(_QWORD *)v26;
        }
        if ( v28 != v26 )
          goto LABEL_37;
        v23 = *(_QWORD *)(v69 + 32);
      }
    }
LABEL_143:
    LODWORD(v104[1]) = 1;
    v104[0] = nullptr;
    if ( !v106.m128i_i64[0]
      || (v106.m128i_i8[0] & 3) != 1
      || (v76 = v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0)
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42 )
    {
      if ( a2 == 1 )
        goto LABEL_15;
      goto LABEL_37;
    }
    if ( sub_C11780(v76, v23)
      && (v23 = (signed __int64)&v106, v12 = sub_C3F5D0(*(_QWORD **)(a3 + 16), &v106, (__int64)v104), (_BYTE)v12) )
    {
      if ( !sub_9EC640((__int64)v104, 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v44 = v104[0];
        if ( LODWORD(v104[1]) <= 0x40 )
        {
          v101 = (char *)v104[0];
          goto LABEL_74;
        }
        v101 = *(char **)v104[0];
        goto LABEL_166;
      }
    }
    else if ( a2 != 1 )
    {
      if ( LODWORD(v104[1]) > 0x40 && v104[0] )
        operator delete[](v104[0]);
      goto LABEL_37;
    }
    v12 = 0;
    v44 = v104[0];
    if ( LODWORD(v104[1]) <= 0x40 )
      goto LABEL_16;
LABEL_166:
    if ( v44 )
LABEL_72:
      operator delete[](v44);
LABEL_73:
    if ( (_BYTE)v12 )
    {
LABEL_74:
      v34 = v101;
      v33 = v107;
      v13 = ptr;
      goto LABEL_45;
    }
LABEL_16:
    v13 = ptr;
    goto LABEL_20;
  }
  if ( (v114 & 2) != 0 )
  {
    v26 = v106.m128i_i64[0];
    if ( v106.m128i_i64[0] )
    {
      v23 = v106.m128i_i8[0] & 3;
      if ( v23 == 1 )
      {
        v26 = v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v26 = *(unsigned __int16 *)v26;
          LOWORD(v26) = v26 & 0x1FF;
          if ( (_WORD)v26 == 46 )
          {
            if ( (a2 & 1) == 0 )
              goto LABEL_14;
            v30 = *(_QWORD **)(a3 + 16);
            goto LABEL_36;
          }
        }
      }
    }
    v35 = v106.m128i_i64[0];
    v103 = 1;
    v102 = nullptr;
    if ( !v106.m128i_i64[0] )
      goto LABEL_15;
  }
  else
  {
    v35 = v106.m128i_i64[0];
    v103 = 1;
    v102 = nullptr;
    if ( !v106.m128i_i64[0] )
    {
LABEL_60:
      *(__m128i *)v104 = _mm_load_si128(&v106);
      if ( v106.m128i_i64[0] )
      {
        v37 = v106.m128i_i8[0] & 3;
        if ( (v106.m128i_i8[0] & 3) != 0 )
        {
          switch ( v37 )
          {
            case 1LL:
              v45 = (unsigned __int16 *)(v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
                goto LABEL_78;
              v39 = *v45;
              LOWORD(v39) = v39 & 0x1FF;
              if ( (_WORD)v39 != 76 )
                goto LABEL_78;
              v40 = *((_QWORD *)v45 + 1);
              v41 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
              break;
            case 2LL:
              v40 = sub_A4F510((__int64)v104);
              v41 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
              break;
            case 3LL:
              v40 = sub_A4F520((__int64)v104);
              v41 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
              break;
            default:
              goto LABEL_78;
          }
        }
        else
        {
          v38 = v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            goto LABEL_78;
          v39 = (*(_BYTE *)(v38 + 28) & 0x7Fu) - 40;
          if ( (unsigned int)v39 > 6 )
            goto LABEL_78;
          v40 = *(_QWORD *)(v38 + 48);
          v41 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
        }
        v104[0] = (void *)v40;
        if ( v41 )
        {
          v42 = sub_C1BEF0((__int64)v104, v23, v39, v26);
          v43 = 0;
          v104[0] = (void *)v42;
          v12 = sub_F62670(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL), 0);
          if ( (_BYTE)v12 )
          {
            v12 = 0;
          }
          else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v104[0]
                                                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                                                             + 8LL)
                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                     + 16LL)
                  - 25 > 1 )
          {
            v43 = v27;
            v12 = sub_C0FE30(a3, v27, (__int64)v104[0], (__int64 *)&v101, 0);
          }
          if ( (unsigned __int8)sub_F612F0(*v41) )
          {
            v46 = sub_F63660(*v41);
            if ( *(char *)(sub_F60F10(v46, v43, v47, v48, v49) + 74) < 0 )
            {
              if ( v106.m128i_i64[0] )
              {
                if ( (v106.m128i_i8[0] & 3) == 0 )
                {
                  v50 = v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (v106.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0
                    && (*(_BYTE *)(v50 + 28) & 0x7Fu) - 40 <= 6
                    && sub_B735C0(v50) )
                  {
                    v54 = sub_B73DE0(v50, *(_QWORD **)(a3 + 16), v51, v52, v53);
                    v101 += v54;
                  }
                }
              }
            }
          }
LABEL_70:
          if ( v103 > 0x40 )
          {
            v44 = v102;
            if ( v102 )
              goto LABEL_72;
          }
          goto LABEL_73;
        }
      }
LABEL_78:
      v12 = 0;
      goto LABEL_70;
    }
  }
LABEL_48:
  if ( (v35 & 3) != 1
    || (v36 = v35 & 0xFFFFFFFFFFFFFFFCLL) == 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
  {
LABEL_59:
    if ( (v114 & 2) == 0 )
      goto LABEL_60;
LABEL_15:
    v12 = 0;
    goto LABEL_16;
  }
  if ( !sub_C11780(v36, v23)
    || (v23 = (signed __int64)&v106, !(unsigned __int8)sub_C3F5D0(*(_QWORD **)(a3 + 16), &v106, (__int64)&v102)) )
  {
    if ( (v114 & 2) == 0 )
      goto LABEL_60;
    if ( v103 <= 0x40 )
      goto LABEL_15;
LABEL_55:
    if ( v102 )
      operator delete[](v102);
    goto LABEL_15;
  }
  if ( sub_9EC640((__int64)&v102, 0x7FFFFFFFFFFFFFFFuLL) )
  {
    if ( v103 <= 0x40 )
      goto LABEL_15;
    goto LABEL_55;
  }
  if ( v103 <= 0x40 )
  {
    v34 = (char *)v102;
    v101 = (char *)v102;
  }
  else
  {
    v101 = *(char **)v102;
    operator delete[](v102);
    v34 = v101;
  }
  v33 = v107;
  v13 = ptr;
LABEL_45:
  if ( (__int64)v34 <= v33 )
  {
LABEL_19:
    v12 = 1;
    *a4 = 0;
    goto LABEL_20;
  }
  v12 = 1;
  *a4 = &v34[-v33];
LABEL_20:
  if ( v13 != v113 )
    free(v13);
  return v12;
}
