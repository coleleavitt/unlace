__int64 __fastcall sub_83BCC0(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int8 a5)
{
  unsigned __int8 v8; // bp
  __int64 v9; // rbx
  __int64 *v10; // r15
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned int v21; // r15d
  __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  _QWORD *v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int8 **v29; // rbx
  unsigned __int8 *v30; // r12
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbp
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbp
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  unsigned __int8 **v40; // rax
  unsigned __int8 **v41; // rbx
  unsigned __int8 **v42; // rax
  unsigned __int8 **v43; // rbx
  unsigned __int8 **v44; // rax
  unsigned __int8 **v45; // rbx
  unsigned __int8 **v46; // rax
  unsigned __int8 **v47; // rbx
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rbp
  unsigned int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rax
  unsigned int v57; // r13d
  unsigned __int64 v58; // rbp
  unsigned __int8 **v59; // rax
  unsigned __int8 **v60; // r12
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned __int8 **v63; // rax
  unsigned __int8 **v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int8 **v67; // rdi
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // r13
  void *v74; // rdi
  unsigned __int8 *v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // r13
  __int64 v80; // r12
  void *v81; // rdi
  unsigned __int8 *v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // r12
  void *v88; // rdi
  unsigned int v89; // eax
  __int64 v90; // r13
  unsigned __int8 **v91; // rax
  unsigned __int8 **v92; // rbp
  __int64 v94; // [rsp+8h] [rbp-70h]
  __int64 v95; // [rsp+8h] [rbp-70h]
  __int64 v96; // [rsp+10h] [rbp-68h]
  __int64 v97; // [rsp+10h] [rbp-68h]
  __int64 v98; // [rsp+10h] [rbp-68h]
  unsigned __int8 v99; // [rsp+10h] [rbp-68h]
  __int64 *v100; // [rsp+10h] [rbp-68h]
  unsigned int v101; // [rsp+10h] [rbp-68h]
  __int64 v102; // [rsp+18h] [rbp-60h]
  __int64 v103; // [rsp+18h] [rbp-60h]
  __int64 v104; // [rsp+18h] [rbp-60h]
  __int64 v105; // [rsp+20h] [rbp-58h]
  __int64 *v106; // [rsp+28h] [rbp-50h]
  __int64 v107[8]; // [rsp+38h] [rbp-40h] BYREF

  v8 = a5;
  v9 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  v10 = (__int64 *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)sub_B07770(*v10, a2, a3) )
  {
    if ( a3 )
    {
      v42 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2185, 0);
      v43 = v42;
      if ( v42 )
      {
        sub_823450(v42, v8);
        sub_823450(v43, 0);
        sub_823450(v43, 0);
      }
    }
    return 0;
  }
  v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v11 == 41 )
  {
    if ( a3 )
    {
      v46 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2185, 0);
      v47 = v46;
      if ( v46 )
      {
        sub_823450(v46, v8);
        sub_823450(v47, 0);
        sub_823450(v47, 1);
      }
    }
    return 0;
  }
  if ( v11 == 32 )
  {
    if ( a3 )
    {
      v44 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2185, 0);
      v45 = v44;
      if ( v44 )
      {
        sub_823450(v44, v8);
        sub_823450(v45, 0);
        sub_823450(v45, 2);
      }
    }
    return 0;
  }
  if ( (v9 & 4) != 0 || (v10[1] & 4) != 0 )
  {
    if ( a3 )
    {
      v40 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2185, 0);
      v41 = v40;
      if ( v40 )
      {
        sub_823450(v40, v8);
        sub_823450(v41, 0);
        sub_823450(v41, 3);
      }
    }
    return 0;
  }
  v12 = sub_B0E890(*v10);
  v13 = v12;
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 57 <= 2 )
    {
      v96 = v12;
      sub_8226C0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104));
      v14 = v96;
      v15 = *(_QWORD *)(v96 + 128);
      if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
      {
        v56 = sub_7A2E20(v15);
        v14 = v96;
        v102 = v56;
      }
      else
      {
        v102 = *(_QWORD *)(v15 + 24);
      }
      v97 = v14;
      sub_8226C0((__int64 *)(*(_QWORD *)(v14 + 104) + 96LL), *(_QWORD *)(v14 + 104));
      v16 = v102;
      v17 = *(_QWORD *)(v97 + 104);
      v103 = v97;
      v98 = v16 + 24LL * *(unsigned int *)(*(_QWORD *)(v97 + 128) + 16LL);
      sub_8226C0((__int64 *)(v17 + 96), v17);
      v13 = v103;
      v18 = *(_QWORD *)(v103 + 128);
      if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
      {
        v61 = sub_7A2E20(v18);
        v13 = v103;
        v19 = v61;
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 24);
      }
      if ( v19 != v98 )
      {
        v105 = v13;
        v104 = v9;
        v20 = v98;
        v106 = v10;
        v21 = v8;
        v99 = v8;
        v22 = v19;
        while ( 1 )
        {
          v23 = *(_QWORD *)(**(_QWORD **)(v22 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          v24 = *(_QWORD *)(v23 + 8);
          if ( (v24 & 7) != 0 || (v23 &= 0xFFFFFFFFFFFFFFF0LL, (v24 & 8) != 0) )
            v23 = sub_B0CF30(**(_QWORD **)(v22 + 16), v23) & 0xFFFFFFFFFFFFFFF0LL;
          if ( !(unsigned __int8)sub_83BCC0(a1, v23, a3, a4, v21) )
            break;
          v22 += 24;
          if ( v22 == v20 )
          {
            v9 = v104;
            v13 = v105;
            v10 = v106;
            v8 = v99;
            goto LABEL_20;
          }
        }
        v57 = *(_DWORD *)v22;
        v107[0] = **(_QWORD **)(v22 + 16);
        v58 = sub_6B3060(v107, v23);
        if ( a3 )
        {
          v59 = (unsigned __int8 **)sub_A2DD70(a3, v57, 2184);
          v60 = v59;
          if ( v59 )
          {
            sub_8356A0(v59, v58, 8u);
            sub_823450(v60, 1);
            sub_8356A0(v60, v104, 8u);
          }
        }
        return 0;
      }
    }
LABEL_20:
    v25 = sub_7868A0(v13);
    if ( v25 )
    {
      v100 = v10;
      v26 = a4;
      v27 = v25;
LABEL_22:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 <= 1 )
      {
        if ( a3 )
        {
          v28 = sub_A2E1A0(a3, a1, 2185, 0);
          v29 = (unsigned __int8 **)v28;
          if ( v28 )
          {
            v30 = *(unsigned __int8 **)v28;
            if ( !*(_QWORD *)v28 )
            {
              v68 = *(_QWORD *)(v28 + 8);
              v69 = *(_DWORD *)(v68 + 14976);
              if ( v69 )
              {
                v70 = (unsigned int)(v69 - 1);
                *(_DWORD *)(v68 + 14976) = v70;
                v30 = *(unsigned __int8 **)(v68 + 8 * v70 + 14848);
                v71 = *((unsigned int *)v30 + 134);
                v72 = *((_QWORD *)v30 + 66);
                *v30 = 0;
                *((_DWORD *)v30 + 106) = 0;
                v73 = v72 + (v71 << 6);
                while ( v72 != v73 )
                {
                  while ( 1 )
                  {
                    v73 -= 64;
                    v74 = *(void **)(v73 + 24);
                    if ( v74 == (void *)(v73 + 40) )
                      break;
                    operator delete(v74, *(_QWORD *)(v73 + 40) + 1LL);
                    if ( v72 == v73 )
                      goto LABEL_77;
                  }
                }
LABEL_77:
                *((_DWORD *)v30 + 134) = 0;
              }
              else
              {
                v30 = (unsigned __int8 *)operator new(0x3A0u);
                *v30 = 0;
                *((_QWORD *)v30 + 12) = v30 + 112;
                *((_QWORD *)v30 + 16) = v30 + 144;
                *((_QWORD *)v30 + 20) = v30 + 176;
                *((_QWORD *)v30 + 24) = v30 + 208;
                *((_QWORD *)v30 + 28) = v30 + 240;
                *((_QWORD *)v30 + 32) = v30 + 272;
                *((_QWORD *)v30 + 36) = v30 + 304;
                *((_QWORD *)v30 + 40) = v30 + 336;
                *((_QWORD *)v30 + 44) = v30 + 368;
                *((_QWORD *)v30 + 48) = v30 + 400;
                *((_QWORD *)v30 + 49) = 0;
                *((_QWORD *)v30 + 13) = 0;
                v30[112] = 0;
                *((_QWORD *)v30 + 17) = 0;
                v30[144] = 0;
                *((_QWORD *)v30 + 21) = 0;
                v30[176] = 0;
                *((_QWORD *)v30 + 25) = 0;
                v30[208] = 0;
                *((_QWORD *)v30 + 29) = 0;
                v30[240] = 0;
                *((_QWORD *)v30 + 33) = 0;
                v30[272] = 0;
                *((_QWORD *)v30 + 37) = 0;
                v30[304] = 0;
                *((_QWORD *)v30 + 41) = 0;
                v30[336] = 0;
                *((_QWORD *)v30 + 45) = 0;
                v30[368] = 0;
                v30[400] = 0;
                *((_QWORD *)v30 + 52) = v30 + 432;
                *((_QWORD *)v30 + 53) = 0x800000000LL;
                *((_QWORD *)v30 + 66) = v30 + 544;
                *((_QWORD *)v30 + 67) = 0x600000000LL;
              }
              *v29 = v30;
            }
            v30[*v30 + 1] = 2;
            v31 = *v29;
            v32 = **v29;
            *v31 = v32 + 1;
            *(_QWORD *)&v31[8 * v32 + 16] = v8;
            v33 = *v29;
            if ( !*v29 )
            {
              v82 = v29[1];
              v83 = *((_DWORD *)v82 + 3744);
              if ( v83 )
              {
                v84 = (unsigned int)(v83 - 1);
                *((_DWORD *)v82 + 3744) = v84;
                v33 = *(unsigned __int8 **)&v82[8 * v84 + 14848];
                v85 = *((unsigned int *)v33 + 134);
                *v33 = 0;
                v86 = *((_QWORD *)v33 + 66);
                *((_DWORD *)v33 + 106) = 0;
                v87 = v86 + (v85 << 6);
                while ( v86 != v87 )
                {
                  while ( 1 )
                  {
                    v87 -= 64;
                    v88 = *(void **)(v87 + 24);
                    if ( v88 == (void *)(v87 + 40) )
                      break;
                    operator delete(v88, *(_QWORD *)(v87 + 40) + 1LL);
                    if ( v86 == v87 )
                      goto LABEL_91;
                  }
                }
LABEL_91:
                *((_DWORD *)v33 + 134) = 0;
              }
              else
              {
                v33 = (unsigned __int8 *)operator new(0x3A0u);
                *v33 = 0;
                *((_QWORD *)v33 + 12) = v33 + 112;
                *((_QWORD *)v33 + 16) = v33 + 144;
                *((_QWORD *)v33 + 20) = v33 + 176;
                *((_QWORD *)v33 + 24) = v33 + 208;
                *((_QWORD *)v33 + 25) = 0;
                *((_QWORD *)v33 + 28) = v33 + 240;
                *((_QWORD *)v33 + 29) = 0;
                *((_QWORD *)v33 + 32) = v33 + 272;
                *((_QWORD *)v33 + 33) = 0;
                *((_QWORD *)v33 + 36) = v33 + 304;
                *((_QWORD *)v33 + 37) = 0;
                *((_QWORD *)v33 + 40) = v33 + 336;
                *((_QWORD *)v33 + 41) = 0;
                *((_QWORD *)v33 + 44) = v33 + 368;
                *((_QWORD *)v33 + 48) = v33 + 400;
                *((_QWORD *)v33 + 13) = 0;
                v33[112] = 0;
                *((_QWORD *)v33 + 17) = 0;
                v33[144] = 0;
                *((_QWORD *)v33 + 21) = 0;
                v33[176] = 0;
                v33[208] = 0;
                v33[240] = 0;
                v33[272] = 0;
                v33[304] = 0;
                v33[336] = 0;
                *((_QWORD *)v33 + 45) = 0;
                v33[368] = 0;
                *((_QWORD *)v33 + 49) = 0;
                v33[400] = 0;
                *((_QWORD *)v33 + 52) = v33 + 432;
                *((_QWORD *)v33 + 53) = 0x800000000LL;
                *((_QWORD *)v33 + 66) = v33 + 544;
                *((_QWORD *)v33 + 67) = 0x600000000LL;
              }
              *v29 = v33;
            }
            v33[*v33 + 1] = 2;
            v34 = *v29;
            v35 = **v29;
            *v34 = v35 + 1;
            *(_QWORD *)&v34[8 * v35 + 16] = 1;
            v36 = *v29;
            if ( !*v29 )
            {
              v75 = v29[1];
              v76 = *((_DWORD *)v75 + 3744);
              if ( v76 )
              {
                v77 = (unsigned int)(v76 - 1);
                *((_DWORD *)v75 + 3744) = v77;
                v36 = *(unsigned __int8 **)&v75[8 * v77 + 14848];
                v78 = *((unsigned int *)v36 + 134);
                *v36 = 0;
                v79 = *((_QWORD *)v36 + 66);
                *((_DWORD *)v36 + 106) = 0;
                v80 = v79 + (v78 << 6);
                while ( v79 != v80 )
                {
                  while ( 1 )
                  {
                    v80 -= 64;
                    v81 = *(void **)(v80 + 24);
                    if ( v81 == (void *)(v80 + 40) )
                      break;
                    operator delete(v81, *(_QWORD *)(v80 + 40) + 1LL);
                    if ( v79 == v80 )
                      goto LABEL_84;
                  }
                }
LABEL_84:
                *((_DWORD *)v36 + 134) = 0;
              }
              else
              {
                v36 = (unsigned __int8 *)operator new(0x3A0u);
                *v36 = 0;
                *((_QWORD *)v36 + 12) = v36 + 112;
                *((_QWORD *)v36 + 13) = 0;
                *((_QWORD *)v36 + 16) = v36 + 144;
                *((_QWORD *)v36 + 20) = v36 + 176;
                *((_QWORD *)v36 + 24) = v36 + 208;
                *((_QWORD *)v36 + 28) = v36 + 240;
                *((_QWORD *)v36 + 32) = v36 + 272;
                *((_QWORD *)v36 + 36) = v36 + 304;
                *((_QWORD *)v36 + 40) = v36 + 336;
                *((_QWORD *)v36 + 44) = v36 + 368;
                *((_QWORD *)v36 + 48) = v36 + 400;
                v36[112] = 0;
                *((_QWORD *)v36 + 17) = 0;
                v36[144] = 0;
                *((_QWORD *)v36 + 21) = 0;
                v36[176] = 0;
                *((_QWORD *)v36 + 25) = 0;
                v36[208] = 0;
                *((_QWORD *)v36 + 29) = 0;
                v36[240] = 0;
                *((_QWORD *)v36 + 33) = 0;
                v36[272] = 0;
                *((_QWORD *)v36 + 37) = 0;
                v36[304] = 0;
                *((_QWORD *)v36 + 41) = 0;
                v36[336] = 0;
                *((_QWORD *)v36 + 45) = 0;
                v36[368] = 0;
                *((_QWORD *)v36 + 49) = 0;
                v36[400] = 0;
                *((_QWORD *)v36 + 52) = v36 + 432;
                *((_QWORD *)v36 + 53) = 0x800000000LL;
                *((_QWORD *)v36 + 66) = v36 + 544;
                *((_QWORD *)v36 + 67) = 0x600000000LL;
              }
              *v29 = v36;
            }
            v36[*v36 + 1] = 2;
            v37 = *v29;
            v38 = **v29;
            *v37 = v38 + 1;
            *(_QWORD *)&v37[8 * v38 + 16] = 4;
          }
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_83BCC0(a1, *(_QWORD *)(v27 + 48), a3, v26, a5) )
      {
        v89 = sub_77AF80(v27);
        v90 = *(_QWORD *)(v27 + 48);
        if ( a3 )
        {
          v91 = (unsigned __int8 **)sub_A2DD70(a3, v89, 2184);
          v92 = v91;
          if ( v91 )
          {
            sub_8356A0(v91, v90, 8u);
            sub_823450(v92, 0);
            sub_8356A0(v92, v9, 8u);
          }
        }
        return 0;
      }
      while ( 1 )
      {
        v48 = *(_QWORD *)(v27 + 8);
        v27 = v48 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v48 <= 7 )
          break;
        if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_22;
      }
      a4 = v26;
      v10 = v100;
    }
  }
  v49 = *v10;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v50 = sub_6CB5B0(a4, v9);
    if ( !(unsigned __int8)sub_83BCC0(a1, v50, a3, a4, v8) )
      return 0;
    v49 = *v10;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 56 > 1 )
  {
    v49 = sub_820370(v49);
    if ( !v49 )
      return 1;
  }
  v51 = *(_QWORD *)(v49 + 32);
  v52 = *(_DWORD *)(v49 + 20);
  v53 = *(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v53 + 16) == 57
    && (v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v54 + 16) == 13)
    && ((*(_WORD *)(v54 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v101 = 1;
    v55 = *(_DWORD *)(v49 + 20);
  }
  else
  {
    v95 = v49;
    v62 = sub_6F6DE0((__int64)a4, *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL));
    v49 = v95;
    v101 = v62;
    v55 = v52 * v62;
  }
  v94 = v49;
  if ( v55 % (unsigned __int64)sub_6F6DE0((__int64)a4, *(_QWORD *)(a4[2311] & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v63 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2186, 0);
    v64 = v63;
    if ( v63 )
    {
      sub_8356A0(v63, v94 & 0xFFFFFFFFFFFFFFF0LL, 8u);
      sub_8356A0(v64, v101, 3u);
      sub_8356A0(v64, v52, 3u);
      v65 = sub_6F6DE0((__int64)a4, *(_QWORD *)(a4[2311] & 0xFFFFFFFFFFFFFFF0LL));
      sub_8356A0(v64, v65, 3u);
    }
    else
    {
      sub_6F6DE0((__int64)a4, *(_QWORD *)(a4[2311] & 0xFFFFFFFFFFFFFFF0LL));
    }
    return 0;
  }
  if ( (unsigned __int8)sub_B080B0(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v66 = sub_6BF060(a4, v51);
    if ( v66 == sub_2575D30() )
    {
      v67 = (unsigned __int8 **)sub_A2E1A0(a3, a1, 2189, 0);
      if ( v67 )
        sub_8356A0(v67, v51, 8u);
      return 0;
    }
  }
  return 1;
}

