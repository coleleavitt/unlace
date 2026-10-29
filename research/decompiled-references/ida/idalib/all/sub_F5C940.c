unsigned __int64 __fastcall sub_F5C940(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int64 a5,
        __int16 *a6)
{
  __int64 v6; // r10
  unsigned __int64 v9; // rbp
  char v10; // dl
  __int16 v11; // ax
  char v12; // di
  char v13; // dl
  char v14; // di
  __int16 v15; // dx
  __int16 v16; // ax
  char v17; // al
  unsigned __int16 v18; // si
  __int16 v19; // r8
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rsi
  _WORD *v24; // rax
  char v25; // dl
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 result; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rdi
  char v34; // al
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  char v37; // dl
  __int64 v38; // r13
  __int64 v39; // r14
  unsigned __int64 v40; // r15
  _BOOL8 v41; // r15
  char v42; // bp
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r13
  unsigned int v45; // edx
  unsigned __int64 v46; // rax
  __int64 v47; // r13
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  char v51; // r15
  _BOOL8 v52; // r8
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r14
  unsigned int v55; // edx
  _BYTE *v56; // r8
  unsigned __int64 v57; // rsi
  __int64 v58; // r15
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __m128i v61; // xmm0
  _BYTE *v62; // rbp
  _BYTE *v63; // rdx
  __int64 v64; // r14
  __int64 *v65; // rbp
  unsigned __int64 v66; // rax
  char v67; // r15
  _BOOL8 v68; // rsi
  unsigned __int64 v69; // r12
  int v70; // edx
  unsigned __int64 v71; // r13
  unsigned int v72; // edx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rax
  __m128i v81; // xmm1
  unsigned __int64 *v82; // rbp
  unsigned __int64 *v83; // rdx
  unsigned __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rsi
  _WORD *v87; // rdx
  unsigned __int64 v88; // rax
  char v89; // dl
  _BOOL8 v90; // r9
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 i; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  char v96; // al
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  unsigned __int64 v101; // [rsp+8h] [rbp-D0h]
  _BOOL8 v102; // [rsp+18h] [rbp-C0h]
  unsigned int v103; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v104; // [rsp+70h] [rbp-68h]
  __int64 v105; // [rsp+94h] [rbp-44h] BYREF
  int v106; // [rsp+9Ch] [rbp-3Ch]

  v6 = a3;
  v9 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v11 = *a6;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)a1 = a1;
  v12 = v10;
  v13 = *(_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 16) = 26;
  v14 = v12 & 0x1F;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a5 = v9;
  *(_BYTE *)(a1 + 17) = v14 | v13 & 0xE0;
  v15 = 4 * v11;
  v16 = *(_WORD *)(a1 + 20);
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  *(_QWORD *)(a1 + 8) = a5;
  *(_WORD *)(a1 + 20) = v15 | v16 & 3;
  LOBYTE(v16) = (32 * *((_BYTE *)a6 + 8)) | *(_BYTE *)(a1 + 18) & 0x1F;
  *(_BYTE *)(a1 + 18) = v16;
  LOBYTE(v15) = *((_BYTE *)a6 + 16);
  *(_WORD *)(a1 + 22) = a4;
  *(_BYTE *)(a1 + 18) = (8 * (v15 & 3)) | v16 & 0xE7;
  LOBYTE(v15) = (2 * (a6[12] & 0xF)) | *(_BYTE *)(a1 + 19) & 0xE1;
  *(_BYTE *)(a1 + 19) = v15;
  LOBYTE(v16) = v15 & 0xDF | (32 * (*((_QWORD *)a6 + 9) != 0));
  *(_BYTE *)(a1 + 19) = v16;
  v17 = (*((_BYTE *)a6 + 2) << 7) | v16 & 0x7F;
  *(_BYTE *)(a1 + 19) = v17;
  LOBYTE(v15) = ((a6[1] & 2) != 0) | *(_BYTE *)(a1 + 20) & 0xFE;
  *(_BYTE *)(a1 + 20) = v15;
  *(_BYTE *)(a1 + 20) = (*((_BYTE *)a6 + 2) >> 1) & 2 | v15 & 0xFD;
  if ( *((_DWORD *)a6 + 6) == 2 || (a6[1] & 0xFF8) != 0 || *((_QWORD *)a6 + 12) )
  {
    *(_BYTE *)(a1 + 19) = v17 | 0x40;
    *(_WORD *)((a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * a4 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 19) = v17 & 0xBF;
  }
  v18 = a6[1];
  v19 = v18 & 0xFF8;
  if ( (v18 & 0xFF8) != 0 )
  {
    v20 = (_BYTE *)sub_F56640(a1);
    v20[1] &= ~1u;
    *v20 = 0;
    v21 = (a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
    *(_BYTE *)(v21 + 1) |= 4u;
  }
  if ( *(_WORD *)(a1 + 22) )
  {
    v22 = 0;
    do
    {
      v23 = v22++;
      v23 *= 8;
      *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0x1F
                          | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + v23) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x17
                          | *(_BYTE *)(a1 + 17) & 0xE0;
      *(_QWORD *)(a1 + v23 + 48) = *(_QWORD *)(v6 + v23);
    }
    while ( v22 != *(unsigned __int16 *)(a1 + 22) );
    v18 = a6[1];
    v19 = v18 & 0xFF8;
  }
  if ( v19 )
  {
    v24 = (_WORD *)sub_F56640(a1);
    *v24 = *v24 & 0xFE00 | (v18 >> 3) & 0x1FF;
  }
  v25 = *(_BYTE *)(a1 + 19);
  v26 = ((unsigned __int8)v25 >> 1) & 0xF;
  if ( v26 == 2 )
  {
    v86 = *((_QWORD *)a6 + 5);
    v87 = (_WORD *)((a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
                  & 0xFFFFFFFFFFFFFFF8LL);
    *v87 = v86 & 0x3FF | *v87 & 0xFC00;
    v88 = sub_F56640(a1);
    v89 = *(_BYTE *)(a1 + 19);
    v90 = 0;
    if ( (v89 & 0x40) != 0 )
      v90 = (*(_BYTE *)(((a1 + ((v89 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                      + 1)
           & 4) != 0;
    v91 = *((_QWORD *)a6 + 4);
    if ( v91 != v91 + 8 * v86 )
    {
      v92 = 8 * v86;
      for ( i = 0; ; ++i )
      {
        v94 = *(_QWORD *)(v91 + 8 * i);
        *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0x1F
                            | *(_BYTE *)(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 3
                            | *(_BYTE *)(a1 + 17) & 0xE0;
        *(_QWORD *)(v88 + 8 * (v90 + (unsigned int)i)) = v94;
        if ( (unsigned __int64)(v92 - 8) >> 3 == i )
          break;
      }
    }
LABEL_18:
    v27 = *(_QWORD *)(a1 + 8);
    if ( v27 != v9 )
      goto LABEL_19;
    goto LABEL_31;
  }
  if ( (unsigned int)(v26 - 6) > 2 )
  {
    if ( v26 == 10 )
    {
      v98 = (a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((*(_QWORD *)(a1 + 16) >> 24) & 0x40) != 0 )
        v98 += 8 * (((*(_BYTE *)(v98 + 1) & 4) != 0) + 1LL);
      *(_QWORD *)v98 = *((_QWORD *)a6 + 7);
      *(_QWORD *)(v98 + 8) = *((_QWORD *)a6 + 8);
    }
    else if ( v26 == 9 )
    {
      v95 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
      v96 = BYTE3(*(_QWORD *)(a1 + 16));
      v97 = (v96 & 0x40) != 0;
      if ( (v25 & 0x40) != 0 )
        v97 += (*(_BYTE *)(((a1 + v95 + ((v25 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      *(_QWORD *)(((a1 + v95 + ((v96 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v97) = *((_QWORD *)a6 + 7);
    }
    goto LABEL_18;
  }
  v38 = 0;
  v40 = (a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
      & 0xFFFFFFFFFFFFFFF8LL;
  if ( ((*(_QWORD *)(a1 + 16) >> 24) & 0x40) != 0 )
    v38 = ((*(_BYTE *)(v40 + 1) & 4) != 0) + 1LL;
  v39 = *((_QWORD *)a6 + 6);
  *(_QWORD *)(v40 + 8 * (v38 + (unsigned int)sub_F56890(a1))) = v39;
  sub_F56840(&v105, (**((_DWORD **)a6 + 6) >> 14) & 0x1F);
  *(_BYTE *)(a1 + 17) |= sub_F565F0(v105) & 3;
  v27 = *(_QWORD *)(a1 + 8);
  if ( v27 != v9 )
  {
LABEL_19:
    result = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(result + 17) & 4) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_31:
  result = (*(_BYTE *)(a1 + 19) >> 1) & 0xB;
  if ( (_BYTE)result != 2 )
  {
    v29 = *((_QWORD *)a6 + 9);
    if ( !v29 )
      goto LABEL_33;
    goto LABEL_22;
  }
LABEL_20:
  *(_BYTE *)(a1 + 17) |= 6u;
LABEL_21:
  v29 = *((_QWORD *)a6 + 9);
  if ( !v29 )
    goto LABEL_33;
LABEL_22:
  v30 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
  v31 = BYTE3(*(_QWORD *)(a1 + 16));
  v32 = (v31 & 0x40) != 0;
  v33 = a1 + v30 + ((v31 >> 5) & 4) + 7;
  v34 = *(_BYTE *)(a1 + 19);
  v35 = v33 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v34 & 0x40) != 0 )
    v32 += (*(_BYTE *)(((a1 + v30 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
  v36 = v35 + 8 * v32;
  v37 = ((unsigned __int8)v34 >> 1) & 0xF;
  if ( v37 != 2 )
    __asm { jmp     rax }
  result = *(_WORD *)((a1 + v30 + ((v34 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF;
  v84 = v36 + 8LL * (unsigned int)result;
  if ( *(_WORD *)(a1 + 22) )
  {
    LODWORD(result) = 0;
    do
    {
      v85 = (unsigned int)result;
      result = (unsigned int)(result + 1);
      *(_BYTE *)(v84 + v85) = *(_BYTE *)(v29 + v85);
    }
    while ( (_DWORD)result != *(unsigned __int16 *)(a1 + 22) );
    if ( (*((_QWORD *)a6 + 1) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_86;
    goto LABEL_34;
  }
LABEL_33:
  if ( (*((_QWORD *)a6 + 1) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_86:
    *(_BYTE *)(a1 + 19) &= ~1u;
    goto LABEL_39;
  }
LABEL_34:
  v41 = 0;
  v42 = *(_BYTE *)(a1 + 19) | 1;
  *(_BYTE *)(a1 + 19) = v42;
  v43 = sub_F56640(a1);
  if ( (v42 & 0x40) != 0 )
    v41 = (*(_BYTE *)(((a1 + ((v42 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                    + 1)
         & 4) != 0;
  v103 = sub_F56890(a1);
  v44 = ((unsigned __int64)sub_F56890(a1) >> 32) + v103;
  sub_F56890(a1);
  v46 = 8 * (v41 + v44 + v45);
  if ( (v42 & 0x20) != 0 )
    v46 += *(unsigned __int16 *)(a1 + 22);
  result = (v43 + v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)result = *((_QWORD *)a6 + 1);
LABEL_39:
  if ( (a6[1] & 1) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 22);
    *(_DWORD *)(a1 + 8 * result + 48) = *((_DWORD *)a6 + 20);
  }
  v47 = *((_QWORD *)a6 + 12);
  if ( v47 )
  {
    v48 = *((_QWORD *)a6 + 11);
    v49 = (a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
    v101 = v49;
    *(_BYTE *)(v49 + 1) = (16 * v47) | *(_BYTE *)(v49 + 1) & 0xF;
    v50 = sub_F56640(a1);
    v51 = *(_BYTE *)(a1 + 19);
    v52 = 0;
    v53 = v50;
    if ( (v51 & 0x40) != 0 )
      v52 = (*(_BYTE *)(((a1 + ((v51 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                      + 1)
           & 4) != 0;
    v102 = v52;
    v104 = sub_F56890(a1);
    v54 = ((unsigned __int64)sub_F56890(a1) >> 32) + v104;
    sub_F56890(a1);
    result = 8 * (v102 + v54 + v55);
    if ( (v51 & 0x20) != 0 )
      result += *(unsigned __int16 *)(a1 + 22);
    v56 = (_BYTE *)(v48 + v47);
    v57 = (v53 + result + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v58 = 8LL * (v51 & 1);
    v59 = v57 + v58;
    if ( v48 != v48 + v47 )
    {
      v60 = v57 + v58;
      if ( (v59 >= v48 + 16 || v48 >= v58 + v57 + 16) && (unsigned __int64)(v47 - 1) > 0xE )
      {
        do
        {
          v61 = _mm_loadu_si128((const __m128i *)(v60 + v48 - v59));
          v60 += 16LL;
          *(__m128i *)(v60 - 16) = v61;
        }
        while ( v59 + (v47 & 0xFFFFFFFFFFFFFFF0LL) != v60 );
        result = v47 & 0xFFFFFFFFFFFFFFF0LL;
        v62 = (_BYTE *)((v47 & 0xFFFFFFFFFFFFFFF0LL) + v48);
        v63 = (_BYTE *)((v47 & 0xFFFFFFFFFFFFFFF0LL) + v59);
        if ( v47 != (v47 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          *v63 = *v62;
          result = (unsigned __int64)(v62 + 1);
          if ( v56 != v62 + 1 )
          {
            v63[1] = v62[1];
            result = (unsigned __int64)(v62 + 2);
            if ( v56 != v62 + 2 )
            {
              v63[2] = v62[2];
              result = (unsigned __int64)(v62 + 3);
              if ( v56 != v62 + 3 )
              {
                v63[3] = v62[3];
                result = (unsigned __int64)(v62 + 4);
                if ( v56 != v62 + 4 )
                {
                  v63[4] = v62[4];
                  result = (unsigned __int64)(v62 + 5);
                  if ( v56 != v62 + 5 )
                  {
                    v63[5] = v62[5];
                    result = (unsigned __int64)(v62 + 6);
                    if ( v56 != v62 + 6 )
                    {
                      v63[6] = v62[6];
                      result = (unsigned __int64)(v62 + 7);
                      if ( v56 != v62 + 7 )
                      {
                        v63[7] = v62[7];
                        result = (unsigned __int64)(v62 + 8);
                        if ( v56 != v62 + 8 )
                        {
                          v63[8] = v62[8];
                          result = (unsigned __int64)(v62 + 9);
                          if ( v56 != v62 + 9 )
                          {
                            v63[9] = v62[9];
                            result = (unsigned __int64)(v62 + 10);
                            if ( v56 != v62 + 10 )
                            {
                              v63[10] = v62[10];
                              result = (unsigned __int64)(v62 + 11);
                              if ( v56 != v62 + 11 )
                              {
                                v63[11] = v62[11];
                                result = (unsigned __int64)(v62 + 12);
                                if ( v56 != v62 + 12 )
                                {
                                  v63[12] = v62[12];
                                  result = (unsigned __int64)(v62 + 13);
                                  if ( v56 != v62 + 13 )
                                  {
                                    v63[13] = v62[13];
                                    result = (unsigned __int64)(v62 + 14);
                                    if ( v56 != v62 + 14 )
                                    {
                                      result = (unsigned __int8)v62[14];
                                      v63[14] = result;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        for ( result = 0; result != v47; ++result )
          *(_BYTE *)(v59 + result) = *(_BYTE *)(v48 + result);
      }
    }
    v64 = *((_QWORD *)a6 + 14);
    if ( v64 )
    {
      v65 = *((__int64 **)a6 + 13);
      *(_BYTE *)(v101 + 1) |= 8u;
      v66 = sub_F56640(a1);
      v67 = *(_BYTE *)(a1 + 19);
      v68 = 0;
      v69 = v66;
      if ( (v67 & 0x40) != 0 )
        v68 = (*(_BYTE *)(((a1 + ((v67 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                        + 1)
             & 4) != 0;
      v105 = sub_F56890(a1);
      v106 = v70;
      v71 = ((unsigned __int64)sub_F56890(a1) >> 32) + (unsigned int)v105;
      sub_F56890(a1);
      v73 = 8 * (v68 + v71 + v72);
      if ( (v67 & 0x20) != 0 )
        v73 += *(unsigned __int16 *)(a1 + 22);
      v74 = (v69 + v73 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v75 = 8LL * (v67 & 1);
      if ( (v67 & 0x40) != 0 )
        v76 = v75
            + (*(_BYTE *)(((a1 + ((v67 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
                        + 1) >> 4)
            + v74;
      else
        v76 = v75 + v74;
      result = (unsigned __int64)&v65[v64];
      v77 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (__int64 *)result != v65 )
      {
        v78 = (unsigned __int64)(8 * v64 - 8) >> 3;
        if ( ((unsigned __int64)v65 >= v77 + 16 || v77 >= (unsigned __int64)(v65 + 2))
          && (v78 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
        {
          v79 = v78 + 1;
          v80 = v77;
          do
          {
            v81 = _mm_loadu_si128((const __m128i *)((char *)v65 + v80 - v77));
            v80 += 16LL;
            *(__m128i *)(v80 - 16) = v81;
          }
          while ( v77 + 16 * (v79 >> 1) != v80 );
          result = 8 * (v79 & 0xFFFFFFFFFFFFFFFELL);
          v82 = (unsigned __int64 *)((char *)v65 + result);
          v83 = (unsigned __int64 *)(result + v77);
          if ( (v79 & 0xFFFFFFFFFFFFFFFELL) != v79 )
          {
            result = *v82;
            *v83 = *v82;
          }
        }
        else
        {
          v99 = v77 - (_QWORD)v65;
          do
          {
            v100 = *v65++;
            *(__int64 *)((char *)v65 + v99 - 8) = v100;
          }
          while ( (__int64 *)result != v65 );
        }
      }
      *(_BYTE *)(a1 + 17) |= 6u;
    }
  }
  return result;
}
