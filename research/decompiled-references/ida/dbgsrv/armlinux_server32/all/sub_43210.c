/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43210
// Address: 0x00043210

//----- (00043210) --------------------------------------------------------
unsigned __int8 *__fastcall sub_43210(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4, char a5)
{
  int v7; // r3
  unsigned __int8 *v8; // r10
  int v10; // r3
  unsigned int v11; // r1
  int v12; // r3
  int v13; // r10
  int v14; // r7
  int v15; // r3
  char *v16; // r0
  size_t v17; // r5
  unsigned __int8 *v18; // r0
  unsigned __int8 *v19; // r5
  _DWORD *v20; // r6
  int v21; // r3
  unsigned __int8 *v22; // r1
  unsigned int v23; // r4
  unsigned __int8 *v24; // r10
  unsigned int v25; // r8
  int v26; // r1
  unsigned int v27; // r5
  unsigned int v28; // r9
  char *v29; // r0
  const void *v30; // r1
  char *v31; // r0
  size_t v32; // r2
  int *v33; // r8
  int v34; // r3
  size_t v35; // r5
  unsigned int v36; // r2
  _BYTE *v37; // r1
  unsigned int v38; // r7
  size_t v39; // r11
  unsigned int v40; // r9
  size_t v41; // r2
  int v42; // r3
  unsigned int v43; // r3
  bool v44; // cf
  unsigned int v45; // r1
  unsigned int v46; // r5
  unsigned __int8 *i; // r3
  unsigned __int8 **v48; // r4
  unsigned int v49; // r2
  _DWORD *v50; // r8
  unsigned __int8 **v51; // r0
  int *v52; // r8
  unsigned __int8 *v53; // r0
  int v54; // r4
  unsigned __int8 *v55; // r8
  unsigned __int8 *v56; // r9
  unsigned __int8 *v57; // r5
  char *v58; // r7
  char *v59; // r4
  char *v60; // r3
  unsigned __int8 *v61; // r4
  const char *v62; // r9
  const char *v63; // r0
  int v64; // r0
  unsigned __int8 *v65; // r1
  int v66; // r3
  int v67; // r0
  unsigned __int8 *v68; // r3
  unsigned __int8 **v69; // r4
  unsigned int v70; // r2
  unsigned int *v71; // r0
  char *v72; // r1
  unsigned __int8 *v73; // r6
  int v74; // r0
  void *v75; // r0
  unsigned __int8 *v76; // r9
  unsigned __int8 *v77; // r4
  unsigned __int8 *v78; // r1
  int j; // r3
  int v80; // r0
  size_t v81; // r5
  unsigned __int8 *v82; // r5
  char *v83; // r0
  const char *v84; // r1
  int v85; // r0
  int *v86; // r1
  _DWORD *v87; // r6
  int v88; // r3
  int v89; // r3
  void *v90; // r0
  unsigned int v91; // r11
  unsigned __int8 *v92; // [sp+4h] [bp-E0h]
  int v93; // [sp+4h] [bp-E0h]
  unsigned int v94; // [sp+8h] [bp-DCh]
  int v96; // [sp+28h] [bp-BCh]
  unsigned __int8 **v97; // [sp+44h] [bp-A0h] BYREF
  _DWORD *v98; // [sp+48h] [bp-9Ch]
  unsigned __int8 **v99; // [sp+4Ch] [bp-98h] BYREF
  _DWORD *v100; // [sp+50h] [bp-94h]
  unsigned __int8 *v101; // [sp+54h] [bp-90h] BYREF
  _DWORD *v102; // [sp+58h] [bp-8Ch]
  unsigned int v103; // [sp+5Ch] [bp-88h] BYREF
  _DWORD *v104; // [sp+60h] [bp-84h]
  char *v105; // [sp+64h] [bp-80h] BYREF
  int v106; // [sp+68h] [bp-7Ch]
  int v107; // [sp+6Ch] [bp-78h]
  int v108; // [sp+70h] [bp-74h] BYREF
  unsigned __int8 *v109; // [sp+74h] [bp-70h] BYREF
  unsigned __int8 *v110; // [sp+78h] [bp-6Ch]
  unsigned __int8 **v111; // [sp+7Ch] [bp-68h]
  unsigned __int8 **v112; // [sp+80h] [bp-64h]
  unsigned __int8 *v113; // [sp+84h] [bp-60h]
  char *s1; // [sp+88h] [bp-5Ch] BYREF
  int v115; // [sp+8Ch] [bp-58h] BYREF
  unsigned __int8 *v116; // [sp+90h] [bp-54h]
  int *v117; // [sp+94h] [bp-50h]
  int *v118; // [sp+98h] [bp-4Ch]
  int v119; // [sp+9Ch] [bp-48h]
  unsigned __int8 v120[8]; // [sp+A0h] [bp-44h] BYREF
  int v121; // [sp+A8h] [bp-3Ch]
  int v122; // [sp+ACh] [bp-38h]
  int v123; // [sp+B0h] [bp-34h]
  int v124; // [sp+B4h] [bp-30h]
  char v125[32]; // [sp+BCh] [bp-28h] BYREF

  while ( 1 )
  {
    v7 = *a1;
    if ( v7 == 7 )
    {
      v23 = *((_DWORD *)a1 + 3);
      v24 = a1;
      if ( v23 )
      {
        --v23;
        if ( a2 >= 0 )
          goto LABEL_31;
      }
      else if ( a2 >= 0 )
      {
        goto LABEL_31;
      }
      a2 += v23;
      if ( a2 < 0 )
      {
        v25 = 0;
        goto LABEL_33;
      }
LABEL_31:
      v25 = a2;
      if ( a2 >= v23 )
        v25 = v23;
LABEL_33:
      if ( (a5 & 1) != 0 )
        a3 = v25 + 1;
      if ( a3 >= 0 || (a3 += v23, a3 >= 0) )
      {
        if ( v23 >= a3 )
          v23 = a3;
        if ( v23 < v25 )
          v23 = v25;
      }
      else
      {
        v23 = v25;
      }
      v26 = *a4;
      v120[0] = 2;
      v122 = 0;
      v121 = 0;
      v123 = 0;
      v124 = 0;
      if ( v26 != 7 )
      {
        v92 = (unsigned __int8 *)sub_45B30(v120, a4);
        if ( v92 || (v92 = (unsigned __int8 *)sub_45E50((int)v120)) != nullptr )
        {
          sub_45758(v120);
          return v92;
        }
        a4 = v120;
      }
      v27 = *((_DWORD *)a4 + 3);
      v93 = (int)(v24 + 8);
      if ( v27 )
        --v27;
      v28 = v23 - v25;
      v29 = *((char **)v24 + 2);
      if ( v23 - v25 <= v27 )
      {
        v30 = *((const void **)a4 + 2);
        v31 = &v29[v25];
        v32 = v23 - v25;
        goto LABEL_45;
      }
      v42 = *((_DWORD *)v24 + 3);
      if ( v42 )
      {
        v43 = v42 - 1;
        v44 = v28 >= v27;
        if ( v28 != v27 )
          v44 = v25 >= v43;
        if ( v44 )
        {
          v31 = &v29[v25];
          v30 = *((const void **)a4 + 2);
          v32 = v27;
          goto LABEL_45;
        }
        v45 = v23 - v27;
        if ( v43 > v23 - v27 )
        {
          v91 = v43 - v45;
          memmove(&v29[v25], &v29[v45], v43 - v45);
          v29 = *((char **)v24 + 2);
          v94 = v25 + v91;
        }
        else
        {
          v94 = v25;
        }
        if ( v94 + 1 > *((_DWORD *)v24 + 4) )
        {
          v29 = (char *)sub_78018(v93, v29, v94 + 1, 1u);
          *((_DWORD *)v24 + 2) = v29;
        }
        *((_DWORD *)v24 + 3) = v94 + 1;
        v29[v94] = 0;
        v29 = *((char **)v24 + 2);
      }
      v32 = v23 - v25;
      v30 = *((const void **)a4 + 2);
      v31 = &v29[v25];
      if ( v28 >= v27 )
        v32 = v27;
LABEL_45:
      memcpy(v31, v30, v32);
      if ( v28 >= v27 )
      {
LABEL_53:
        v92 = nullptr;
        sub_45758(v120);
        return v92;
      }
      if ( v28 | *((_DWORD *)a4 + 3) )
        v33 = (int *)(*((_DWORD *)a4 + 2) + v28);
      else
        v33 = &dword_9D278;
      v34 = *((_DWORD *)v24 + 3);
      v35 = v27 - v28;
      v36 = *((_DWORD *)v24 + 4);
      v37 = *((_BYTE **)v24 + 2);
      if ( v34 )
      {
        v38 = v34 - 1;
        v39 = v35 + v34 - 1;
        v40 = v35 + v34;
        if ( v35 + v34 <= v36 )
          goto LABEL_50;
      }
      else
      {
        v40 = v35 + 1;
        if ( v35 + 1 <= v36 )
        {
          *((_DWORD *)v24 + 3) = v40;
          v38 = 0;
          v37[v35] = 0;
LABEL_52:
          memmove((void *)(*((_DWORD *)v24 + 2) + v38), v33, v35);
          goto LABEL_53;
        }
        v38 = *((_DWORD *)v24 + 3);
        v39 = v35;
      }
      v37 = sub_78018(v93, v37, v40, 1u);
      *((_DWORD *)v24 + 2) = v37;
LABEL_50:
      *((_DWORD *)v24 + 3) = v40;
      v37[v39] = 0;
      if ( v23 < v38 )
      {
        v41 = v38 - v23;
        v38 = v23;
        memmove((void *)(*((_DWORD *)v24 + 2) + v23 + v35), (const void *)(*((_DWORD *)v24 + 2) + v23), v41);
      }
      goto LABEL_52;
    }
    if ( v7 != 10 )
      break;
    a1 = sub_45BF0(a1, 0);
    if ( !a1 )
      return (unsigned __int8 *)sub_70B7C();
  }
  v8 = a1;
  if ( v7 == 5 )
  {
    v92 = (unsigned __int8 *)(a5 & 1);
    if ( (a5 & 1) != 0 )
    {
      sub_7EBB4(v125, 32, "%u", a2);
      return sub_48E9C(v8, v125, a4, 0);
    }
    v10 = *a4;
    v111 = &v109;
    v112 = &v109;
    v109 = (unsigned __int8 *)(a5 & 1);
    v110 = v109;
    v113 = v109;
    if ( v10 != 5 )
    {
      if ( v10 != 7 )
      {
        v92 = (unsigned __int8 *)sub_70B98(1568);
        sub_459E4((int)&v108, v110);
        return v92;
      }
      v11 = *((_DWORD *)a4 + 3);
      if ( v11 <= 1 )
      {
        v12 = a5 & 1;
        goto LABEL_11;
      }
      v46 = a5 & 1;
      for ( i = (unsigned __int8 *)v46; ; i = v110 )
      {
        v48 = &v109;
        if ( !i )
          goto LABEL_94;
        do
        {
          v49 = *((_DWORD *)i + 4);
          if ( v49 < v46 )
            i = *((unsigned __int8 **)i + 3);
          else
            v48 = (unsigned __int8 **)i;
          if ( v49 >= v46 )
            i = *((unsigned __int8 **)i + 2);
        }
        while ( i );
        if ( v48 == &v109 || (unsigned int)v48[4] > v46 )
        {
LABEL_94:
          v50 = sub_808A4(0x30u);
          v50[4] = v46;
          *((_BYTE *)v50 + 24) = 2;
          v50[9] = v92;
          v50[10] = v92;
          v50[11] = v92;
          v50[8] = v92;
          sub_42F54((int *)&v99, &v108, (int)v48, v50 + 4);
          v48 = v99;
          if ( v100 )
          {
            v51 = (unsigned __int8 **)sub_42E64((int)&v108, (int)v99, v100, v50);
            v11 = *((_DWORD *)a4 + 3);
            v48 = v51;
          }
          else
          {
            sub_45758((unsigned __int8 *)v50 + 24);
            sub_809EC(v50);
            v11 = *((_DWORD *)a4 + 3);
          }
        }
        v52 = v46 | v11 ? (int *)(*((_DWORD *)a4 + 2) + v46) : &dword_9D278;
        sub_45758((unsigned __int8 *)v48 + 24);
        v48[8] = v92;
        v48[9] = v92;
        *((_BYTE *)v48 + 24) = 7;
        v48[10] = v92;
        v53 = (unsigned __int8 *)sub_78018((int)(v48 + 8), nullptr, 2u, 1u);
        v48[8] = v53;
        v48[9] = (unsigned __int8 *)2;
        *v53 = *(_BYTE *)v52;
        v48[8][1] = (unsigned __int8)v92;
        v11 = *((_DWORD *)a4 + 3);
        if ( !v11 )
          break;
        if ( ++v46 >= v11 - 1 )
          break;
      }
      goto LABEL_137;
    }
    v54 = *((_DWORD *)a4 + 2);
    s1 = (char *)(a5 & 1);
    v115 = (int)s1;
    v116 = (unsigned __int8 *)s1;
    s1 = (char *)sub_78018((int)&s1, v92, 2u, 1u);
    v115 = 2;
    *s1 = 48;
    v55 = (unsigned __int8 *)(v54 + 4);
    s1[1] = 0;
    v56 = *(unsigned __int8 **)(v54 + 8);
    if ( v56 )
    {
      v57 = (unsigned __int8 *)(v54 + 4);
      v58 = s1;
      if ( v115 )
        v59 = s1;
      else
        v59 = (char *)&dword_8DB98;
      v60 = v59;
      v61 = v56;
      v62 = v60;
      do
      {
        v63 = (const char *)&dword_8DB98;
        if ( *((_DWORD *)v61 + 5) )
          v63 = *((const char **)v61 + 4);
        v64 = strcmp(v63, v62);
        if ( v64 < 0 )
          v61 = *((unsigned __int8 **)v61 + 3);
        else
          v57 = v61;
        if ( v64 >= 0 )
          v61 = *((unsigned __int8 **)v61 + 2);
      }
      while ( v61 );
      if ( !v58 )
      {
LABEL_116:
        if ( v55 != v57 )
        {
          if ( !*((_DWORD *)v57 + 5) || (v65 = *((unsigned __int8 **)v57 + 4), (v66 = *v65) == 0) )
          {
LABEL_137:
            v12 = (int)v113;
            goto LABEL_11;
          }
          while ( 1 )
          {
            if ( v66 == 48 )
              v67 = v65[1] == 0;
            else
              v67 = sub_4250C(v65);
            if ( !v67 )
              goto LABEL_137;
            sub_7EC4C((int)v65, "%u", &s1);
            v68 = v110;
            if ( v110 )
            {
              v69 = &v109;
              do
              {
                v70 = *((_DWORD *)v68 + 4);
                if ( v70 < (unsigned int)s1 )
                  v68 = *((unsigned __int8 **)v68 + 3);
                else
                  v69 = (unsigned __int8 **)v68;
                if ( v70 >= (unsigned int)s1 )
                  v68 = *((unsigned __int8 **)v68 + 2);
              }
              while ( v68 );
              if ( v69 != &v109 && s1 >= (char *)v69[4] )
                goto LABEL_134;
            }
            else
            {
              v69 = &v109;
            }
            v71 = (unsigned int *)sub_808A4(0x30u);
            v72 = s1;
            v73 = (unsigned __int8 *)v71;
            *((_BYTE *)v71 + 24) = 2;
            v71[4] = (unsigned int)v72;
            v71[9] = 0;
            v71[10] = 0;
            v71[11] = 0;
            v71[8] = 0;
            sub_42F54((int *)&v97, &v108, (int)v69, v71 + 4);
            v69 = v97;
            if ( v98 )
            {
              v69 = (unsigned __int8 **)sub_42E64((int)&v108, (int)v97, v98, v73);
            }
            else
            {
              sub_45758(v73 + 24);
              sub_809EC(v73);
            }
LABEL_134:
            sub_45B30((unsigned __int8 *)v69 + 24, v57 + 32);
            v74 = sub_81478(v57);
            v57 = (unsigned __int8 *)v74;
            if ( v55 != (unsigned __int8 *)v74 )
            {
              if ( *(_DWORD *)(v74 + 20) )
              {
                v65 = *(unsigned __int8 **)(v74 + 16);
                v66 = *v65;
                if ( *v65 )
                  continue;
              }
            }
            goto LABEL_137;
          }
        }
LABEL_184:
        v12 = (int)v113;
LABEL_11:
        v13 = *((_DWORD *)v8 + 2);
        if ( a3 - a2 >= 0 )
          v12 -= a3 - a2;
        v96 = v12;
        if ( v12 )
        {
          v115 = 0;
          v116 = nullptr;
          v119 = 0;
          v105 = nullptr;
          v106 = 0;
          v107 = 0;
          v117 = &v115;
          v118 = &v115;
          v105 = (char *)sub_78018((int)&v105, nullptr, 2u, 1u);
          v106 = 2;
          v76 = (unsigned __int8 *)(v13 + 4);
          *v105 = 48;
          v105[1] = 0;
          v77 = (unsigned __int8 *)sub_4253C(*(_DWORD **)(v13 + 8), (_DWORD *)(v13 + 4), (int)&v105);
          if ( v105 )
          {
            v106 = 0;
            sub_77F70(v105);
          }
          if ( v77 != v76 )
          {
            if ( *((_DWORD *)v77 + 5) )
            {
              v78 = *((unsigned __int8 **)v77 + 4);
              for ( j = *v78; *v78; j = *v78 )
              {
                if ( j == 48 )
                  v80 = v78[1] == 0;
                else
                  v80 = sub_4250C(v78);
                if ( !v80 )
                  break;
                sub_7EC4C((int)v78, "%u", &v103);
                if ( v103 < a2 )
                {
                  v77 = (unsigned __int8 *)sub_81440((int)v77);
                }
                else
                {
                  if ( v103 >= a3 )
                  {
                    sub_7EBB4(v125, 32, "%u", v103 + v96);
                    v105 = nullptr;
                    v106 = 0;
                    v107 = 0;
                    v81 = strlen(v125);
                    v105 = (char *)sub_78018((int)&v105, nullptr, v81 + 1, 1u);
                    v106 = v81 + 1;
                    memmove(v105, v125, v81);
                    v105[v81] = 0;
                    v82 = (unsigned __int8 *)sub_4253C(v116, &v115, (int)&v105);
                    if ( v82 == (unsigned __int8 *)&v115
                      || (!v106 ? (v83 = (char *)&dword_8DB98) : (v83 = v105),
                          !*((_DWORD *)v82 + 5) ? (v84 = (const char *)&dword_8DB98) : (v84 = *((const char **)v82 + 4)),
                          strcmp(v83, v84) < 0) )
                    {
                      v87 = sub_808A4(0x38u);
                      v87[4] = v105;
                      v88 = v106;
                      *((_BYTE *)v87 + 32) = 2;
                      v87[11] = 0;
                      v87[5] = v88;
                      v89 = v107;
                      v87[12] = 0;
                      v87[13] = 0;
                      v87[6] = v89;
                      v87[10] = 0;
                      v105 = nullptr;
                      v106 = 0;
                      v107 = 0;
                      sub_430C8((int *)&v101, &s1, (int)v82, (const char **)v87 + 4);
                      v82 = v101;
                      if ( v102 )
                      {
                        v82 = (unsigned __int8 *)sub_42E94((int)&s1, (int)v101, v102, v87);
                      }
                      else
                      {
                        sub_45758((unsigned __int8 *)v87 + 32);
                        v90 = (void *)v87[4];
                        if ( v90 )
                        {
                          v87[5] = 0;
                          sub_77F70(v90);
                        }
                        sub_809EC(v87);
                      }
                    }
                    sub_45B30(v82 + 32, v77 + 32);
                    if ( v105 )
                    {
                      v106 = 0;
                      sub_77F70(v105);
                    }
                  }
                  v85 = sub_81440((int)v77);
                  v86 = (int *)v77;
                  v77 = (unsigned __int8 *)v85;
                  sub_46D0C(v13, v86);
                }
                if ( v76 == v77 )
                  break;
                if ( !*((_DWORD *)v77 + 5) )
                  break;
                v78 = *((unsigned __int8 **)v77 + 4);
              }
            }
          }
          sub_45ECC(v13, (int)v117, (int)&v115);
          sub_3FCE4((int)&s1, v116);
        }
        v14 = (int)v111;
        if ( v111 == &v109 )
        {
LABEL_139:
          sub_459E4((int)&v108, v110);
          return v92;
        }
        while ( 1 )
        {
          sub_7EBB4(v125, 32, "%u", a2);
          s1 = nullptr;
          v115 = 0;
          v116 = nullptr;
          v17 = strlen(v125);
          s1 = (char *)sub_78018((int)&s1, nullptr, v17 + 1, 1u);
          v115 = v17 + 1;
          memmove(s1, v125, v17);
          s1[v17] = 0;
          v18 = (unsigned __int8 *)sub_4253C(*(_DWORD **)(v13 + 8), (_DWORD *)(v13 + 4), (int)&s1);
          v19 = v18;
          if ( (unsigned __int8 *)(v13 + 4) == v18 )
          {
LABEL_25:
            v20 = sub_808A4(0x38u);
            v21 = v115;
            v20[4] = s1;
            v22 = v116;
            v20[5] = v21;
            v20[11] = 0;
            v20[6] = v22;
            *((_BYTE *)v20 + 32) = 2;
            v20[12] = 0;
            v20[13] = 0;
            v20[10] = 0;
            s1 = nullptr;
            v115 = 0;
            v116 = nullptr;
            sub_430C8((int *)&v103, (_DWORD *)v13, (int)v19, (const char **)v20 + 4);
            v19 = (unsigned __int8 *)v103;
            if ( v104 )
            {
              v19 = (unsigned __int8 *)sub_42E94(v13, v103, v104, v20);
            }
            else
            {
              sub_45758((unsigned __int8 *)v20 + 32);
              v75 = (void *)v20[4];
              if ( v75 )
              {
                v20[5] = 0;
                sub_77F70(v75);
              }
              sub_809EC(v20);
            }
            goto LABEL_18;
          }
          if ( v115 )
          {
            v15 = *((_DWORD *)v18 + 5);
            v16 = s1;
            if ( v15 )
              goto LABEL_17;
          }
          else
          {
            v16 = (char *)&dword_8DB98;
            if ( *((_DWORD *)v19 + 5) )
            {
LABEL_17:
              if ( strcmp(v16, *((const char **)v19 + 4)) < 0 )
                goto LABEL_25;
              goto LABEL_18;
            }
          }
          if ( strcmp(v16, (const char *)&dword_8DB98) < 0 )
            goto LABEL_25;
LABEL_18:
          sub_45B30(v19 + 32, (unsigned __int8 *)(v14 + 24));
          if ( s1 )
          {
            v115 = 0;
            sub_77F70(s1);
          }
          ++a2;
          v14 = sub_81440(v14);
          if ( (unsigned __int8 **)v14 == &v109 )
            goto LABEL_139;
        }
      }
    }
    else
    {
      v58 = s1;
      v57 = (unsigned __int8 *)(v54 + 4);
      if ( !s1 )
        goto LABEL_184;
    }
    v115 = 0;
    sub_77F70(v58);
    goto LABEL_116;
  }
  return (unsigned __int8 *)sub_70B98(1568);
}
// 43746: variable 'v65' is possibly undefined
// 438CE: variable 'v78' is possibly undefined
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// 8DB98: using guessed type int dword_8DB98;
// 9D278: using guessed type int dword_9D278;
