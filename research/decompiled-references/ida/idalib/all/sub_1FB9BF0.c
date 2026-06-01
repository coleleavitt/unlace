void __fastcall sub_1FB9BF0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // r15
  __int64 i; // rax
  __int64 v10; // rax
  __int64 *v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  _QWORD *v32; // rdi
  unsigned int v33; // r15d
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 *v36; // r12
  __int64 *v37; // rbx
  unsigned __int8 v38; // al
  __int64 v39; // rdx
  unsigned int *v40; // r14
  unsigned __int8 v41; // al
  unsigned int *v42; // r14
  unsigned int *v43; // r15
  int v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // ebx
  __int64 v50; // rdi
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  unsigned int *v55; // r14
  unsigned int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 *v65; // r10
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // rdx
  __int64 *v74; // rax
  unsigned int v75; // r8d
  unsigned int v76; // ecx
  int v77; // r11d
  __int64 *v78; // r10
  unsigned int v79; // r15d
  int v80; // r10d
  __int64 *v81; // r9
  int v82; // r9d
  unsigned int v83; // r10d
  __int64 *v84; // r8
  int v85; // ecx
  __int64 v86; // r11
  int v87; // r11d
  unsigned int v88; // ecx
  int v89; // r8d
  __int64 v90; // r10
  __int64 v91; // r11
  __int64 *v92; // rsi
  int v93; // r10d
  unsigned int v94; // r11d
  __int64 *v95; // r9
  int v96; // r8d
  __int64 v97; // r10
  __int64 v98; // r11
  __int64 *v99; // [rsp+8h] [rbp-270h]
  __int64 v100; // [rsp+8h] [rbp-270h]
  char *v101; // [rsp+18h] [rbp-260h]
  __int64 v102; // [rsp+40h] [rbp-238h]
  __m128 v103; // [rsp+50h] [rbp-228h] BYREF
  _QWORD *v104; // [rsp+60h] [rbp-218h] BYREF
  __int64 v105; // [rsp+68h] [rbp-210h]
  unsigned int v106; // [rsp+70h] [rbp-208h]
  __int64 *v107; // [rsp+78h] [rbp-200h] BYREF
  __int64 v108; // [rsp+80h] [rbp-1F8h]
  __int64 v109; // [rsp+88h] [rbp-1F0h] BYREF
  void *v110; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v111; // [rsp+98h] [rbp-1E0h]
  _QWORD v112[16]; // [rsp+A0h] [rbp-1D8h] BYREF
  void *v113; // [rsp+120h] [rbp-158h] BYREF
  __int64 v114; // [rsp+128h] [rbp-150h]
  _BYTE v115[128]; // [rsp+130h] [rbp-148h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v117; // [rsp+1B8h] [rbp-C0h]
  _BYTE v118[184]; // [rsp+1C0h] [rbp-B8h] BYREF

  v102 = (__int64)a2;
  v3 = sub_BC3640(a2);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 18360LL) != v4 + 24 && (unsigned __int8)sub_1EAB440(v4, (__int64)a2) )
  {
    a2 = nullptr;
    sub_BBFD40(v102, 0);
  }
  v5 = *(__int64 **)(v3 + 24);
  v6 = 0;
  v111 = 0x1000000000LL;
  v7 = *(unsigned int *)(v3 + 32);
  v110 = v112;
  v8 = &v5[v7];
  i = 0;
  if ( v5 != v8 )
  {
    v10 = *v5;
    v11 = v5 + 1;
    v6 = 1;
    LODWORD(v111) = 1;
    v112[0] = v10;
    for ( i = 1; v8 != v11; LODWORD(v111) = v111 + 1 )
    {
      while ( 1 )
      {
        v12 = v6 + 1;
        v13 = *v11;
        if ( v12 > HIDWORD(v111) )
          break;
        ++v11;
        *((_QWORD *)v110 + i) = v13;
        i = (unsigned int)(v111 + 1);
        LODWORD(v111) = i;
        v6 = (unsigned int)i;
        if ( v8 == v11 )
          goto LABEL_9;
      }
      a2 = v112;
      ++v11;
      sub_2237220(&v110, v112, v12, 8);
      *((_QWORD *)v110 + (unsigned int)v111) = v13;
      v6 = (unsigned int)(v111 + 1);
      i = v6;
    }
  }
LABEL_9:
  v14 = *(__int64 **)(v3 + 120);
  v15 = &v14[*(unsigned int *)(v3 + 128)];
  if ( v15 != v14 )
  {
    do
    {
      v16 = *v14;
      if ( i + 1 > (unsigned __int64)HIDWORD(v111) )
      {
        a2 = v112;
        sub_2237220(&v110, v112, i + 1, 8);
        *((_QWORD *)v110 + (unsigned int)v111) = v16;
      }
      else
      {
        *((_QWORD *)v110 + i) = v16;
      }
      ++v14;
      i = (unsigned int)(v111 + 1);
      LODWORD(v111) = v111 + 1;
    }
    while ( v15 != v14 );
    v6 = (unsigned int)i;
  }
  v113 = v115;
  v114 = 0x1000000000LL;
  v117 = 0x1000000000LL;
  ptr = v118;
  v101 = (char *)v110 + 8 * v6;
  v99 = (__int64 *)v110;
  if ( v110 != v101 )
  {
    while ( 1 )
    {
      v17 = *v99;
      v106 = 0;
      v104 = nullptr;
      v105 = 0;
      v107 = &v109;
      v108 = 0;
      v20 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      if ( v20 )
        break;
LABEL_26:
      v36 = v107;
      v37 = &v107[2 * (unsigned int)v108];
      if ( v107 == v37 )
        goto LABEL_45;
      do
      {
        while ( 1 )
        {
          v40 = (unsigned int *)v36[1];
          v41 = v40[7] & 0x7F;
          if ( *(_BYTE *)(a1 + 232) )
          {
            if ( (unsigned int)v41 - 60 > 1 )
            {
              if ( (unsigned int)v41 - 41 > 1 )
              {
                v56 = (unsigned int *)sub_B77B50(v36[1]);
                v39 = *v56;
                v40 = v56 + 2;
              }
              else
              {
                v55 = *((unsigned int **)v40 + 16);
                v39 = *v55;
                v40 = v55 + 2;
              }
            }
            else
            {
              v42 = *((unsigned int **)v40 + 21);
              v39 = *v42;
              v40 = v42 + 2;
            }
            v43 = &v40[6 * v39];
            while ( v43 != v40 )
            {
              while ( 1 )
              {
                v44 = *v40 & 0x7FFFFFFF;
                if ( v44 != 1 )
                  break;
                v38 = sub_F64090(
                        *(_QWORD *)(*((_QWORD *)v40 + 1) & 0xFFFFFFFFFFFFFFF0LL),
                        (__int64)a2,
                        v39,
                        v19,
                        v21,
                        v22);
                if ( !v38 )
                  goto LABEL_59;
LABEL_29:
                if ( v38 <= 3u )
                  goto LABEL_30;
                if ( v38 > 6u )
                  goto LABEL_59;
                v40 += 6;
                if ( v43 == v40 )
                  goto LABEL_38;
              }
              if ( v44 == 2 )
              {
                v38 = sub_B81B70(*((_QWORD *)v40 + 2));
                if ( !v38 )
                  goto LABEL_59;
                goto LABEL_29;
              }
              v40 += 6;
            }
LABEL_38:
            v40 = (unsigned int *)v36[1];
            v41 = v40[7] & 0x7F;
          }
          if ( v41 == 61 || v41 == 42 )
            break;
          v45 = (unsigned int)v114;
          v19 = HIDWORD(v114);
          v46 = (unsigned int)v114 + 1LL;
          if ( v46 > HIDWORD(v114) )
          {
            a2 = (__int64 *)v115;
            sub_2237220(&v113, v115, v46, 8);
            v45 = (unsigned int)v114;
          }
          v36 += 2;
          *((_QWORD *)v113 + v45) = v40;
          LODWORD(v114) = v114 + 1;
          if ( v37 == v36 )
            goto LABEL_44;
        }
LABEL_59:
        v53 = (unsigned int)v117;
        v19 = HIDWORD(v117);
        v54 = (unsigned int)v117 + 1LL;
        if ( v54 > HIDWORD(v117) )
        {
          a2 = (__int64 *)v118;
          sub_2237220(&ptr, v118, v54, 8);
          v53 = (unsigned int)v117;
        }
        *((_QWORD *)ptr + v53) = v40;
        LODWORD(v117) = v117 + 1;
LABEL_30:
        v36 += 2;
      }
      while ( v37 != v36 );
LABEL_44:
      v37 = v107;
LABEL_45:
      if ( v37 != &v109 )
        free(v37);
      a2 = (__int64 *)(16LL * v106);
      operator delete(v104, a2, 8);
      if ( v101 == (char *)++v99 )
        goto LABEL_48;
    }
    while ( 1 )
    {
      if ( v20[29] >= 0 )
      {
        if ( !v106 )
          goto LABEL_76;
        v23 = v104;
        v24 = *v104;
        a2 = v104;
        if ( *v104 )
        {
          v22 = (__int64)v104;
          if ( v24 != -4096 )
          {
            v85 = 1;
            v86 = 0;
            LODWORD(v21) = 0;
            while ( 1 )
            {
              if ( v86 || v24 != -8192 )
                v22 = v86;
              v87 = v85 + 1;
              v88 = (v106 - 1) & (v21 + v85);
              v21 = v88;
              a2 = &v104[2 * v88];
              v24 = *a2;
              if ( !*a2 )
                goto LABEL_19;
              if ( v24 == -4096 )
                break;
              v85 = v87;
              v86 = v22;
              v22 = (__int64)a2;
            }
            if ( !v22 )
              v22 = (__int64)&v104[2 * v88];
          }
          v18 = 3 * v106;
          v19 = (unsigned int)(v105 + 1);
          if ( 4 * (int)v19 >= (unsigned int)v18 )
          {
LABEL_76:
            sub_1FB6B40((__int64 *)&v104, 2 * v106, v18, v19, v21, v22);
            if ( !v106 )
              goto LABEL_159;
            v23 = v104;
            v63 = *v104;
            LODWORD(v19) = v105 + 1;
            v22 = (__int64)v104;
            if ( *v104 )
            {
              if ( v63 == -4096 )
                goto LABEL_82;
              v89 = 1;
              v90 = 0;
              LODWORD(v91) = 0;
              while ( 1 )
              {
                if ( v90 || v63 != -8192 )
                  v22 = v90;
                v91 = (v106 - 1) & ((_DWORD)v91 + v89);
                v92 = &v104[2 * v91];
                v63 = *v92;
                if ( !*v92 )
                  goto LABEL_130;
                if ( v63 == -4096 )
                {
LABEL_142:
                  if ( v22 )
                    goto LABEL_71;
                  v22 = (__int64)v92;
                  goto LABEL_82;
                }
                ++v89;
                v90 = v22;
                v22 = (__int64)&v104[2 * v91];
              }
            }
          }
          else
          {
            v57 = v106 - HIDWORD(v105) - (unsigned int)v19;
            if ( (unsigned int)v57 > v106 >> 3 )
            {
LABEL_71:
              v58 = *(_QWORD *)v22;
              LODWORD(v105) = v19;
              if ( v58 != -4096 )
                goto LABEL_72;
              goto LABEL_73;
            }
            sub_1FB6B40((__int64 *)&v104, v106, v57, v19, v21, v22);
            if ( !v106 )
              goto LABEL_159;
            v23 = v104;
            v64 = *v104;
            LODWORD(v19) = v105 + 1;
            v22 = (__int64)v104;
            if ( *v104 )
            {
              if ( v64 == -4096 )
              {
LABEL_82:
                LODWORD(v105) = v19;
                goto LABEL_73;
              }
              v96 = 1;
              v97 = 0;
              LODWORD(v98) = 0;
              while ( 1 )
              {
                if ( v64 != -8192 || v97 )
                  v22 = v97;
                v98 = (v106 - 1) & ((_DWORD)v98 + v96);
                v92 = &v104[2 * v98];
                v64 = *v92;
                if ( !*v92 )
                  break;
                if ( v64 == -4096 )
                  goto LABEL_142;
                ++v96;
                v97 = v22;
                v22 = (__int64)&v104[2 * v98];
              }
LABEL_130:
              v22 = (__int64)v92;
            }
          }
          LODWORD(v105) = v19;
LABEL_72:
          --HIDWORD(v105);
LABEL_73:
          *(_DWORD *)(v22 + 8) = 0;
          v59 = v106;
          a2 = (__int64 *)v22;
          *(_QWORD *)v22 = 0;
          sub_1FB4B10(&v103, (_QWORD *)v22, &v23[2 * v59], (__int64)&v104, 1);
          v60 = (unsigned int)v108;
          v61 = v103.m128_u64[0];
          v62 = (unsigned int)v108 + 1LL;
          if ( v62 > HIDWORD(v108) )
          {
            a2 = &v109;
            sub_2237220(&v107, &v109, v62, 16);
            v60 = (unsigned int)v108;
          }
          *(_OWORD *)&v107[2 * v60] = 0;
          v26 = (unsigned int)v108;
          LODWORD(v108) = v108 + 1;
          *(_DWORD *)(v61 + 8) = v26;
          goto LABEL_21;
        }
LABEL_19:
        v25 = &v104[2 * v106];
      }
      else
      {
        v27 = sub_1EAB3B0(*(_QWORD *)(*(_QWORD *)a1 + 48LL), (__int64)v20);
        v31 = v27;
        if ( !v106 )
          goto LABEL_95;
        v32 = v104;
        v33 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
        v34 = (v106 - 1) & v33;
        a2 = &v104[2 * v34];
        v35 = *a2;
        if ( v31 != *a2 )
        {
          v30 = 1;
          v65 = nullptr;
          if ( v35 != -4096 )
          {
            while ( 1 )
            {
              if ( !v65 && v35 == -8192 )
                v65 = a2;
              v34 = (v106 - 1) & (v30 + v34);
              a2 = &v104[2 * v34];
              v35 = *a2;
              if ( v31 == *a2 )
                goto LABEL_25;
              if ( v35 == -4096 )
                break;
              v30 = (unsigned int)(v30 + 1);
            }
            if ( v65 )
              a2 = v65;
          }
          v28 = 3 * v106;
          v66 = v105 + 1;
          v29 = (unsigned int)(4 * (v105 + 1));
          if ( (unsigned int)v29 >= (unsigned int)v28 )
          {
LABEL_95:
            sub_1FB6B40((__int64 *)&v104, 2 * v106, v28, v106, v29, v30);
            if ( !v106 )
              goto LABEL_159;
            v75 = v106 - 1;
            v32 = v104;
            v76 = (v106 - 1) & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
            v66 = v105 + 1;
            a2 = &v104[2 * v76];
            v69 = *a2;
            if ( v31 == *a2 )
              goto LABEL_87;
            v77 = 1;
            v78 = nullptr;
            if ( v69 == -4096 )
              goto LABEL_98;
            while ( 1 )
            {
              if ( v78 || v69 != -8192 )
                a2 = v78;
              v93 = v77 + 1;
              v94 = v76 + v77;
              v76 = v75 & v94;
              v95 = &v104[2 * (v75 & v94)];
              v69 = *v95;
              if ( v31 == *v95 )
              {
                a2 = &v104[2 * (v75 & v94)];
                goto LABEL_87;
              }
              if ( v69 == -4096 )
                break;
              v77 = v93;
              v78 = a2;
              a2 = v95;
            }
            if ( a2 )
              goto LABEL_86;
            a2 = &v104[2 * (v75 & v94)];
LABEL_98:
            LODWORD(v105) = v66;
          }
          else
          {
            v67 = v106 - HIDWORD(v105) - v66;
            v68 = v106 >> 3;
            if ( (unsigned int)v67 > (unsigned int)v68 )
              goto LABEL_86;
            sub_1FB6B40((__int64 *)&v104, v106, v67, v106, v68, v30);
            if ( !v106 )
            {
LABEL_159:
              LODWORD(v105) = v105 + 1;
              BUG();
            }
            v32 = v104;
            v79 = (v106 - 1) & v33;
            v66 = v105 + 1;
            a2 = &v104[2 * v79];
            v69 = *a2;
            if ( v31 != *a2 )
            {
              v80 = 1;
              v81 = nullptr;
              if ( v69 == -4096 )
                goto LABEL_98;
              while ( 1 )
              {
                if ( v81 || v69 != -8192 )
                  a2 = v81;
                v82 = v80 + 1;
                v83 = (v106 - 1) & (v79 + v80);
                v79 = v83;
                v84 = &v104[2 * v83];
                v69 = *v84;
                if ( v31 == *v84 )
                {
                  a2 = &v104[2 * v83];
                  goto LABEL_87;
                }
                if ( v69 == -4096 )
                  break;
                v80 = v82;
                v81 = a2;
                a2 = v84;
              }
              if ( !a2 )
              {
                a2 = &v104[2 * v83];
                goto LABEL_98;
              }
LABEL_86:
              v69 = *a2;
            }
LABEL_87:
            LODWORD(v105) = v66;
            if ( v69 != -4096 )
              --HIDWORD(v105);
          }
          *((_DWORD *)a2 + 2) = 0;
          v70 = v106;
          *a2 = v31;
          sub_1FB4B10(&v103, a2, &v32[2 * v70], (__int64)&v104, 1);
          v71 = (unsigned int)v108;
          v72 = v103.m128_u64[0];
          v73 = (unsigned int)v108 + 1LL;
          if ( v73 > HIDWORD(v108) )
          {
            a2 = &v109;
            sub_2237220(&v107, &v109, v73, 16);
            v71 = (unsigned int)v108;
          }
          v74 = &v107[2 * v71];
          *v74 = v31;
          v74[1] = 0;
          v26 = (unsigned int)v108;
          LODWORD(v108) = v108 + 1;
          *(_DWORD *)(v72 + 8) = v26;
          goto LABEL_21;
        }
LABEL_25:
        v25 = &v104[2 * v106];
      }
      sub_1FB4B10(&v103, a2, v25, (__int64)&v104, 1);
      v26 = *(unsigned int *)(v103.m128_u64[0] + 8);
LABEL_21:
      v107[2 * v26 + 1] = (__int64)v20;
      v20 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v20 + 48LL))(v20);
      if ( !v20 )
        goto LABEL_26;
    }
  }
LABEL_48:
  v47 = sub_1FA7A00(*(_QWORD *)a1, v102, (__int64)&v113, 0);
  v48 = *(unsigned int *)(a1 + 184);
  v49 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( v48 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    v100 = v47;
    sub_2237220(a1 + 176, a1 + 192, v48 + 1, 4);
    v48 = *(unsigned int *)(a1 + 184);
    v47 = v100;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v48) = v49;
  v50 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  sub_9B9C90(v50, v47);
  if ( (*(_BYTE *)(v102 + 28) & 0x7F) != 0x47 )
  {
    v51 = sub_1FA7A00(*(_QWORD *)a1, v102, (__int64)&ptr, 1);
    sub_1FB2180(a1 + 8, v51);
    v52 = ptr;
    if ( ptr == v118 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v52 = ptr;
  if ( ptr != v118 )
LABEL_52:
    free(v52);
LABEL_53:
  if ( v113 != v115 )
    free(v113);
  if ( v110 != v112 )
    free(v110);
}
