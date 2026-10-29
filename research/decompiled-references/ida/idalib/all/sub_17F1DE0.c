__int64 __fastcall sub_17F1DE0(__int64 a1, __int64 a2, _BYTE *a3, _WORD *a4, __int64 *a5, __int64 a6)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rax
  _WORD **v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rax
  _WORD **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rax
  unsigned __int64 v18; // rax
  __int64 i; // r15
  __int64 **v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 *v23; // rcx
  const void *v24; // r9
  size_t v25; // rax
  size_t v26; // rcx
  int v27; // r8d
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // rsi
  unsigned __int64 v34; // rdx
  _WORD *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  size_t v38; // rax
  __int64 v39; // r14
  unsigned int v40; // edx
  __int64 *v41; // rsi
  __int64 *v42; // rax
  __int64 *v43; // rax
  size_t v44; // rax
  int v45; // eax
  __m128i *v46; // rbx
  signed __int64 v47; // r15
  unsigned __int64 v48; // rcx
  __m128i *v49; // r15
  __m128i *v50; // rdi
  __m128i *v51; // rbx
  signed __int64 v52; // r15
  unsigned __int64 v53; // rsi
  __m128i *v54; // r15
  __m128i *v55; // rdi
  unsigned __int8 v56; // bl
  __int64 v57; // r15
  char v58; // bl
  __int64 v59; // r13
  unsigned __int64 *v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 v63; // r14
  _QWORD *v64; // rax
  _WORD **v65; // rdx
  unsigned __int64 v66; // rax
  __int64 j; // r13
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // rax
  _QWORD *v73; // rdi
  unsigned __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 *v77; // rax
  _WORD **v78; // rax
  _WORD **v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  void *v82; // rdi
  __int64 *v83; // rax
  __int64 v84; // rcx
  _WORD **v85; // rax
  __int64 *v86; // r12
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+8h] [rbp-1D0h]
  __int64 v91; // [rsp+10h] [rbp-1C8h]
  int v93; // [rsp+20h] [rbp-1B8h]
  __int64 v94; // [rsp+20h] [rbp-1B8h]
  unsigned __int8 v95; // [rsp+28h] [rbp-1B0h]
  const void *v96; // [rsp+28h] [rbp-1B0h]
  _BYTE *v98; // [rsp+38h] [rbp-1A0h]
  size_t v100; // [rsp+48h] [rbp-190h]
  void **v101; // [rsp+48h] [rbp-190h]
  void **v102; // [rsp+48h] [rbp-190h]
  unsigned __int64 v103; // [rsp+48h] [rbp-190h]
  __m128i *v104; // [rsp+50h] [rbp-188h] BYREF
  __m128i *v105; // [rsp+58h] [rbp-180h]
  __m128i *v106; // [rsp+B0h] [rbp-128h] BYREF
  __m128i *v107; // [rsp+B8h] [rbp-120h]
  _BYTE v108[200]; // [rsp+110h] [rbp-C8h] BYREF

  v90 = a2;
  v91 = (__int64)a3;
  v98 = a4;
  if ( (a3[29] & 1) == 0 )
    goto LABEL_8;
  v6 = sub_B8C3D0((__int64)a3, a2, (__int64)a3, (__int64)a4, (__int64)a5, a6);
  a3 = (_BYTE *)*v6;
  v7 = *v6 + 8LL * *((unsigned int *)v6 + 2);
  if ( (unsigned __int64)a3 < v7 )
  {
    a4 = a3;
    a2 = *(_QWORD *)a3;
    if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 376 )
    {
      do
      {
        a4 += 4;
        if ( (_WORD *)v7 == a4 )
          goto LABEL_8;
        a2 = *(_QWORD *)a4;
      }
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 376 );
    }
    if ( (_WORD *)v7 != a4 )
      goto LABEL_57;
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  if ( a3 == (_BYTE *)v7 )
    goto LABEL_8;
  a4 = *(_WORD **)v7;
  if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 376 )
  {
    v8 = (_WORD **)(v7 + 8);
    do
    {
      a4 = v8;
      if ( a3 == (_BYTE *)v8 )
        goto LABEL_8;
      a4 = *v8++;
    }
    while ( a4[18] != 376 );
  }
LABEL_57:
  v9 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) == 376 )
  {
LABEL_9:
    v10 = v90;
    v11 = v90;
    if ( (*(_BYTE *)(v90 + 29) & 1) != 0 )
      goto LABEL_10;
LABEL_61:
    v15 = 0;
    if ( (*(_BYTE *)(v91 + 29) & 1) == 0 )
    {
      sub_179E8F0(v91, v10);
      if ( !v9 )
      {
        v15 = 0;
        v16 = 0;
        i = 0;
        v28 = 1;
        goto LABEL_34;
      }
      v44 = j__strlen("default");
      v26 = *(unsigned int *)(v9 + 40);
      v24 = *(const void **)(v9 + 48);
      v95 = 0;
      v27 = *(_DWORD *)(v9 + 40);
      if ( v44 != v26 )
        return v95;
      v16 = 0;
      i = 0;
      goto LABEL_65;
    }
    goto LABEL_18;
  }
  v43 = (__int64 *)(a3 + 8);
  do
    v9 = *v43++;
  while ( *(_WORD *)(v9 + 36) != 376 );
  v10 = v90;
  v11 = v90;
  if ( (*(_BYTE *)(v90 + 29) & 1) == 0 )
    goto LABEL_61;
LABEL_10:
  v12 = sub_B8C3D0(v10, a2, (__int64)a3, (__int64)a4, (__int64)a5, a6);
  a3 = (_BYTE *)*v12;
  v13 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( (unsigned __int64)a3 < v13 )
  {
    a4 = a3;
    a2 = *(_QWORD *)a3;
    if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 376 )
    {
      do
      {
        a4 += 4;
        if ( (_WORD *)v13 == a4 )
          goto LABEL_16;
        a2 = *(_QWORD *)a4;
      }
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 376 );
    }
    if ( (_WORD *)v13 != a4 )
      goto LABEL_49;
LABEL_16:
    v15 = 0;
    goto LABEL_17;
  }
  if ( a3 == (_BYTE *)v13 )
    goto LABEL_16;
  a4 = *(_WORD **)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 376 )
  {
    v14 = (_WORD **)(v13 + 8);
    do
    {
      a4 = v14;
      if ( a3 == (_BYTE *)v14 )
        goto LABEL_16;
      a4 = *v14++;
    }
    while ( a4[18] != 376 );
  }
LABEL_49:
  v15 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 376 )
  {
    v42 = (__int64 *)(a3 + 8);
    do
      v15 = *v42++;
    while ( *(_WORD *)(v15 + 36) != 376 );
  }
LABEL_17:
  v16 = 0;
  if ( (*(_BYTE *)(v91 + 29) & 1) == 0 )
    goto LABEL_23;
LABEL_18:
  v17 = sub_B8C3D0(v91, a2, (__int64)a3, (__int64)a4, (__int64)a5, a6);
  a3 = (_BYTE *)*v17;
  v18 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( (unsigned __int64)a3 < v18 )
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(_QWORD *)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 378 )
        break;
      a4 += 4;
      if ( (_WORD *)v18 == a4 )
        goto LABEL_22;
    }
    if ( (_WORD *)v18 != a4 )
      goto LABEL_135;
LABEL_22:
    v16 = 0;
    goto LABEL_23;
  }
  if ( a3 == (_BYTE *)v18 )
    goto LABEL_22;
  a4 = *(_WORD **)v18;
  if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 378 )
  {
    v85 = (_WORD **)(v18 + 8);
    do
    {
      a4 = v85;
      if ( a3 == (_BYTE *)v85 )
        goto LABEL_22;
      a4 = *v85++;
    }
    while ( a4[18] != 378 );
  }
LABEL_135:
  v16 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 378 )
  {
    v77 = (__int64 *)(a3 + 8);
    do
      v16 = *v77++;
    while ( *(_WORD *)(v16 + 36) != 378 );
  }
LABEL_23:
  i = 0;
  if ( (*(_BYTE *)(v90 + 29) & 1) != 0 )
  {
    v20 = (__int64 **)sub_B8C3D0(v90, a2, (__int64)a3, (__int64)a4, (__int64)a5, a6);
    v21 = *v20;
    v22 = (unsigned __int64)&(*v20)[*((unsigned int *)v20 + 2)];
    if ( (unsigned __int64)v21 >= v22 )
    {
      if ( v21 == (__int64 *)v22 )
        goto LABEL_29;
      if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 378 )
      {
LABEL_131:
        for ( i = *v21; *(_WORD *)(*v21 + 36) != 378; i = *v21 )
          ++v21;
        goto LABEL_29;
      }
      v83 = (__int64 *)(v22 + 8);
      while ( v21 != v83 )
      {
        v84 = *v83++;
        if ( *(_WORD *)(v84 + 36) == 378 )
          goto LABEL_131;
      }
    }
    else
    {
      v23 = v21;
      while ( *(_WORD *)(*v23 + 36) != 378 )
      {
        if ( (__int64 *)v22 == ++v23 )
          goto LABEL_28;
      }
      if ( (__int64 *)v22 != v23 )
        goto LABEL_131;
    }
LABEL_28:
    i = 0;
  }
LABEL_29:
  sub_179E8F0(v91, v90);
  if ( !v9 )
  {
LABEL_33:
    v28 = v16 == 0 ? 1 : 5;
LABEL_34:
    v95 = sub_17BD4A0(a1, v90, v91, 1, v28, (__int64)v24);
    if ( v95 || (v33 = (char *)v91, (v95 = sub_17C1140(a1, v91, v29, v30, v31, v32)) != 0) )
    {
      sub_B88650(v91, 1);
      return v95;
    }
    if ( v9
      && (v38 = j__strlen("default"), v34 = *(unsigned int *)(v9 + 40), v38 == v34)
      && (!v38 || (v33 = "default", !memcmp(*(const void **)(v9 + 48), "default", v38))) )
    {
      if ( !v15 )
        goto LABEL_188;
      if ( !v16 || !sub_17A1CC0(v16) )
      {
        if ( (unsigned __int8)sub_17C1140(a1, v90, v34, (__int64)v35, v36, v37) )
        {
LABEL_44:
          v39 = v91;
          v40 = *(_DWORD *)(v91 + 24);
          v41 = (__int64 *)(a1 + 8);
LABEL_184:
          sub_168B9F0((__int64)v108, v41, v40, 0x17D0u, 0);
          sub_15F7200(v108);
          sub_B88650(v39, 1);
          return 1;
        }
LABEL_75:
        (*(void (__fastcall **)(__m128i **, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL)
                                                                   + 496LL))(
          &v104,
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
          *(_QWORD *)(v15 + 48),
          *(unsigned int *)(v15 + 40));
        v46 = v105;
        if ( v105 != v104 )
        {
          v47 = (char *)v105 - (char *)v104;
          v101 = (void **)v104;
          _BitScanReverse64(&v48, ((char *)v105 - (char *)v104) >> 5);
          sub_17F1770(v104, v105, 2LL * (int)(63 - (v48 ^ 0x3F)));
          if ( v47 <= 512 )
          {
            sub_179DA70((__int64)v101, (__int64)v46);
          }
          else
          {
            v49 = (__m128i *)(v101 + 64);
            sub_179DA70((__int64)v101, (__int64)(v101 + 64));
            if ( v46 != (__m128i *)(v101 + 64) )
            {
              do
              {
                v50 = v49;
                v49 += 2;
                sub_179D7C0(v50);
              }
              while ( v46 != v49 );
            }
          }
        }
        (*(void (__fastcall **)(__m128i **, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL)
                                                                   + 496LL))(
          &v106,
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
          *(_QWORD *)(v9 + 48),
          *(unsigned int *)(v9 + 40));
        v51 = v107;
        if ( v107 != v106 )
        {
          v102 = (void **)v106;
          v52 = (char *)v107 - (char *)v106;
          _BitScanReverse64(&v53, ((char *)v107 - (char *)v106) >> 5);
          sub_17F1770(v106, v107, 2LL * (int)(63 - (v53 ^ 0x3F)));
          if ( v52 <= 512 )
          {
            sub_179DA70((__int64)v102, (__int64)v51);
          }
          else
          {
            v54 = (__m128i *)(v102 + 64);
            sub_179DA70((__int64)v102, (__int64)(v102 + 64));
            if ( v51 != (__m128i *)(v102 + 64) )
            {
              do
              {
                v55 = v54;
                v54 += 2;
                sub_179D7C0(v55);
              }
              while ( v51 != v54 );
            }
          }
        }
        v33 = (char *)&v106;
        v56 = sub_17A1990((__int64 *)&v104, (__int64 *)&v106);
        if ( v56 )
        {
          sub_168B9F0((__int64)v108, (__int64 *)(a1 + 8), *(_DWORD *)(v91 + 24), 0x1088u, 0);
          sub_15F7200(v108);
          sub_168B9F0((__int64)v108, (__int64 *)(a1 + 8), *(_DWORD *)(v90 + 24), 0x70u, 0);
          sub_15F7200(v108);
          sub_B88650(v91, 1);
          sub_9B4A30((void ***)&v106);
          sub_9B4A30((void ***)&v104);
          return v56;
        }
        sub_9B4A30((void ***)&v106);
        sub_9B4A30((void ***)&v104);
LABEL_85:
        v57 = v90;
        v58 = 0;
        v94 = v16;
        v59 = v11;
        if ( (*(_BYTE *)(v90 + 29) & 1) == 0 )
          goto LABEL_118;
LABEL_86:
        v60 = sub_B8C3D0(v59, (__int64)v33, v34, (__int64)v35, v36, v37);
        v61 = *v60;
        v62 = *v60 + 8LL * *((unsigned int *)v60 + 2);
        if ( v61 >= v62 )
        {
          if ( v61 != v62 )
          {
            v35 = *(_WORD **)v62;
            if ( *(_WORD *)(*(_QWORD *)v62 + 36LL) == 376 )
            {
LABEL_140:
              v63 = *(_QWORD *)v61;
              if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) != 376 )
              {
                v61 += 8LL;
                do
                {
                  v63 = *(_QWORD *)v61;
                  v61 += 8LL;
                }
                while ( *(_WORD *)(v63 + 36) != 376 );
              }
LABEL_91:
              if ( (*(_BYTE *)(v57 + 29) & 1) != 0 )
              {
                v64 = sub_B8C3D0(v59, (__int64)v33, v61, (__int64)v35, v36, v37);
                v65 = (_WORD **)*v64;
                v66 = *v64 + 8LL * *((unsigned int *)v64 + 2);
                if ( (unsigned __int64)v65 >= v66 )
                {
                  if ( v65 != (_WORD **)v66 )
                  {
                    v35 = *(_WORD **)v66;
                    if ( *(_WORD *)(*(_QWORD *)v66 + 36LL) == 378 )
                    {
LABEL_145:
                      for ( j = (__int64)*v65; (*v65)[18] != 378; j = (__int64)*v65 )
                        ++v65;
LABEL_97:
                      v68 = *(_QWORD *)(v57 + 104);
                      v69 = v68;
                      if ( (v68 & 1) != 0 )
                      {
LABEL_119:
                        while ( !v58 )
                        {
                          v34 = v68 & 0xFFFFFFFFFFFFFFFELL;
                          v58 = 1;
LABEL_121:
                          v74 = v69 & 0xFFFFFFFFFFFFFFF8LL;
                          v35 = (_WORD *)v74;
                          if ( v34 )
                          {
                            v34 &= 4u;
                            if ( (_DWORD)v34 )
                            {
                              v35 = nullptr;
                              if ( v74 )
                              {
                                v75 = *(_QWORD **)v74;
                                v34 = *(unsigned int *)(*(_QWORD *)v74 + 12LL);
                                if ( *(_DWORD *)(v74 + 8) != (_DWORD)v34 )
                                {
                                  *(_DWORD *)(v74 + 8) = v34;
                                  v33 = (char *)v57;
                                  v103 = v74;
                                  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v75 + 152LL))(
                                    v75,
                                    v57,
                                    *v75,
                                    0);
                                  v74 = v103;
                                }
                                v35 = *(_WORD **)(v74 + 16);
                              }
                            }
                          }
                          v57 = (__int64)v35;
LABEL_115:
                          if ( v90 == v57 || !v57 )
                            break;
                          v59 = v57;
                          if ( (*(_BYTE *)(v57 + 29) & 1) != 0 )
                            goto LABEL_86;
LABEL_118:
                          v68 = *(_QWORD *)(v57 + 104);
                          v63 = 0;
                          j = 0;
                          v69 = v68;
                          if ( (v68 & 1) == 0 )
                            goto LABEL_98;
                        }
                        goto LABEL_162;
                      }
LABEL_98:
                      if ( (v68 & 2) != 0 )
                      {
LABEL_161:
                        if ( !v58 )
                        {
                          v58 = 1;
                          goto LABEL_112;
                        }
LABEL_162:
                        v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 32LL))(v90);
                        *(_BYTE *)(v80 + 84) |= 0x80u;
                        v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 32LL))(v91);
                        *(_BYTE *)(v81 + 84) |= 0x80u;
                        *v98 = 0;
                        *a5 = 0;
                        v82 = *(void **)(a6 + 88);
                        *(_DWORD *)a6 = 0;
                        *(_DWORD *)(a6 + 16) = 0;
                        if ( v82 )
                          sub_1A39780(v82);
                        *(_OWORD *)(a6 + 88) = 0;
                        *(_BYTE *)(a6 + 166) = 0;
                        return v95;
                      }
                      v70 = v69 & 0xFFFFFFFFFFFFFFFCLL;
                      if ( v70 )
                      {
                        v71 = v70;
                        while ( 1 )
                        {
                          v72 = sub_B8BF30(v71);
                          if ( (unsigned int)sub_B75130(v72) )
                            break;
                          v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 48LL))(v71);
                          if ( !v71 )
                            goto LABEL_109;
                        }
                        if ( v9 && (!v63 || (*(_BYTE *)(v63 + 38) & 1) != 0) )
                        {
                          v86 = (__int64 *)(a1 + 8);
                          sub_168B9F0((__int64)v108, (__int64 *)(a1 + 8), *(_DWORD *)(v57 + 24), 0x108Cu, 0);
                          v87 = 0;
                        }
                        else
                        {
                          if ( !v94 || j && (*(_BYTE *)(j + 38) & 1) == 0 )
                          {
LABEL_109:
                            v68 = *(_QWORD *)(v57 + 104);
                            goto LABEL_110;
                          }
                          v86 = (__int64 *)(a1 + 8);
                          sub_168B9F0((__int64)v108, (__int64 *)(a1 + 8), *(_DWORD *)(v57 + 24), 0x108Cu, 0);
                          v87 = 2 * (v9 == 0);
                        }
                        LODWORD(v106) = v87;
                        sub_1587D10((__int64)v108, (int *)&v106);
                        sub_15F7200(v108);
                        v39 = v91;
                        v41 = v86;
                        v40 = *(_DWORD *)(v91 + 24);
                        goto LABEL_184;
                      }
LABEL_110:
                      v69 = v68;
                      if ( (v68 & 1) != 0 )
                        goto LABEL_119;
                      if ( (v68 & 2) == 0 )
                      {
LABEL_112:
                        v73 = (_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v68 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                        {
                          v34 = v68 & 2;
                          if ( !(_DWORD)v34 )
                          {
                            v57 = (__int64)v73;
                            goto LABEL_115;
                          }
                          v33 = (char *)v57;
                          v34 = sub_6E2500(v73, v57, v34, (__int64)v35, v36, v37) & 0xFFFFFFFFFFFFFFFELL;
                          v69 = v34 | 1;
                          *(_QWORD *)(v57 + 104) = v34 | 1;
                        }
                        else
                        {
                          v34 = v68 & 0xFFFFFFFFFFFFFFFELL;
                        }
                        goto LABEL_121;
                      }
                      goto LABEL_161;
                    }
                    v78 = (_WORD **)(v66 + 8);
                    while ( 1 )
                    {
                      v35 = v78;
                      if ( v65 == v78 )
                        break;
                      v35 = *v78++;
                      if ( v35[18] == 378 )
                        goto LABEL_145;
                    }
                  }
                }
                else
                {
                  v35 = v65;
                  while ( 1 )
                  {
                    v33 = *(char **)v35;
                    if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 378 )
                      break;
                    v35 += 4;
                    if ( (_WORD *)v66 == v35 )
                      goto LABEL_96;
                  }
                  if ( (_WORD *)v66 != v35 )
                    goto LABEL_145;
                }
              }
LABEL_96:
              j = 0;
              goto LABEL_97;
            }
            v79 = (_WORD **)(v62 + 8);
            while ( 1 )
            {
              v35 = v79;
              if ( (_WORD **)v61 == v79 )
                break;
              v35 = *v79++;
              if ( v35[18] == 376 )
                goto LABEL_140;
            }
          }
        }
        else
        {
          v35 = (_WORD *)v61;
          while ( 1 )
          {
            v33 = *(char **)v35;
            if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 376 )
              break;
            v35 += 4;
            if ( (_WORD *)v62 == v35 )
              goto LABEL_90;
          }
          if ( (_WORD *)v62 != v35 )
            goto LABEL_140;
        }
LABEL_90:
        v63 = 0;
        goto LABEL_91;
      }
    }
    else if ( !v16 || !sub_17A1CC0(v16) )
    {
      if ( !(v15 | i) )
        goto LABEL_74;
      goto LABEL_71;
    }
    if ( i )
    {
LABEL_71:
      v33 = (char *)v90;
      if ( (unsigned __int8)sub_17C1140(a1, v90, v34, (__int64)v35, v36, v37) )
        goto LABEL_44;
LABEL_74:
      if ( !v9 )
        goto LABEL_85;
      goto LABEL_75;
    }
LABEL_188:
    *v98 = 1;
    *a5 = v90;
    v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 32LL))(v90);
    *(_BYTE *)(v88 + 84) |= 0x80u;
    v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 32LL))(v91);
    *(_BYTE *)(v89 + 84) |= 0x80u;
    return v95;
  }
  v25 = j__strlen("default");
  v26 = *(unsigned int *)(v9 + 40);
  v24 = *(const void **)(v9 + 48);
  v27 = *(_DWORD *)(v9 + 40);
  if ( v25 != v26 )
    goto LABEL_31;
LABEL_65:
  v93 = v27;
  if ( !v26 )
    goto LABEL_33;
  v100 = v26;
  v96 = v24;
  v45 = memcmp(v24, "default", v26);
  v24 = v96;
  v26 = v100;
  v27 = v93;
  if ( !v45 )
    goto LABEL_33;
LABEL_31:
  if ( !v15 )
    return 0;
  if ( *(_DWORD *)(v15 + 40) != v27 )
    goto LABEL_33;
  v95 = 0;
  if ( v26 )
  {
    if ( memcmp(*(const void **)(v15 + 48), v24, v26) )
      goto LABEL_33;
  }
  return v95;
}
