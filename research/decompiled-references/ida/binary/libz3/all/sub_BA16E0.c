__int64 __fastcall sub_BA16E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  char **exception; // rbp
  char **v10; // rbp
  __int64 result; // rax
  __int64 v13; // r11
  __int16 v14; // bp
  __int64 v15; // rbx
  unsigned int *v16; // r12
  unsigned int *v17; // rbp
  __int64 v18; // rax
  bool v19; // zf
  _QWORD *v20; // r15
  int *v21; // rbx
  _DWORD *v22; // r13
  unsigned int v23; // ebp
  unsigned int v24; // r12d
  unsigned int v25; // esi
  _BYTE *v26; // rax
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // r12
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 ***v33; // rax
  __int64 **v34; // rdx
  __int64 **v35; // r13
  __int64 v36; // rbx
  __int64 **v37; // r12
  __int64 *v38; // rbp
  __int64 v39; // r15
  __int64 v40; // rbp
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int8 v44; // al
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // r12
  unsigned __int8 v51; // al
  unsigned __int64 v52; // rbp
  __int64 v53; // rsi
  _QWORD *v54; // r13
  __int64 v55; // rax
  int ****v56; // rbx
  int ***v57; // r12
  __int64 v58; // rdx
  int ***v59; // rsi
  unsigned int v60; // eax
  int *v61; // rbp
  int **v62; // r13
  int *v63; // rbx
  int **v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rbp
  unsigned __int8 v67; // al
  __int64 v68; // r10
  unsigned __int8 v69; // dl
  __int64 v70; // rax
  _QWORD *v71; // rbp
  __int64 v72; // rsi
  _QWORD *v73; // rbx
  __int64 v74; // rsi
  _QWORD *v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  int ***v78; // rdx
  _QWORD *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // edx
  _DWORD *v84; // rdi
  unsigned int v85; // r13d
  unsigned int v86; // ebx
  size_t v87; // rsi
  unsigned int *v88; // rax
  unsigned int v89; // esi
  char *v90; // rdx
  char *v91; // rdi
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // r13
  unsigned int v95; // eax
  _QWORD *v96; // r12
  __int64 v97; // rax
  unsigned int v98; // ebp
  unsigned int *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rsi
  __int64 v102; // [rsp+8h] [rbp-E0h]
  _QWORD *v103; // [rsp+10h] [rbp-D8h]
  unsigned int *v104; // [rsp+18h] [rbp-D0h]
  char v105; // [rsp+18h] [rbp-D0h]
  int *v106; // [rsp+20h] [rbp-C8h]
  __int64 v109; // [rsp+38h] [rbp-B0h]
  int ***v110; // [rsp+38h] [rbp-B0h]
  int *v111; // [rsp+38h] [rbp-B0h]
  __int64 v113; // [rsp+48h] [rbp-A0h]
  unsigned __int16 v115; // [rsp+54h] [rbp-94h]
  __int16 v116; // [rsp+56h] [rbp-92h]
  _QWORD *v117; // [rsp+58h] [rbp-90h]
  __int64 v118; // [rsp+60h] [rbp-88h]
  __int64 v119; // [rsp+70h] [rbp-78h]
  _QWORD *v120; // [rsp+80h] [rbp-68h]
  __int64 v121; // [rsp+80h] [rbp-68h]
  int *v122; // [rsp+88h] [rbp-60h]
  int ****v123; // [rsp+88h] [rbp-60h]
  char *v124[11]; // [rsp+90h] [rbp-58h] BYREF

  result = *(unsigned int *)(a2 + 24);
  v115 = *(_DWORD *)(a2 + 24);
  if ( !(_DWORD)result )
    return result;
  v13 = a2;
  v14 = *(_DWORD *)(a2 + 24);
  v15 = 0;
  while ( 1 )
  {
    v16 = *(unsigned int **)(a2 + 8 * v15 + 32);
    if ( !*((_WORD *)v16 + 2) && (*((_BYTE *)v16 + 30) & 1) != 0 )
      break;
    if ( result == ++v15 )
    {
      v113 = 0;
      LOWORD(v15) = 0;
      goto LABEL_7;
    }
  }
  v94 = a1[1];
  v95 = sub_952CC0(*(__int64 **)(v94 + 7472), a4);
  sub_B6F6E0(v94, (__int64)v16, 0, v95, *(double *)a7.m128_u64, a8, a9);
  v13 = a2;
  result = *(_QWORD *)(*(_QWORD *)(v94 + 8656) + 8LL * *v16);
  v113 = result;
LABEL_7:
  if ( !v14 )
    return result;
  v116 = v15;
  v117 = a1 + 71;
  v102 = 0;
  v103 = a1 + 11;
  v106 = *(int **)(v13 + 16);
  v118 = v13;
  do
  {
    v17 = *(unsigned int **)(v118 + 8 * v102 + 32);
    v104 = v17;
    v18 = sub_180C100(v117, 40);
    v19 = *((_WORD *)v17 + 2) == 1;
    v20 = (_QWORD *)v18;
    *(_WORD *)(v18 + 8) = v102;
    *(_QWORD *)v18 = v106;
    *(_WORD *)(v18 + 10) = v116;
    *(_QWORD *)(v18 + 16) = v113;
    *(_DWORD *)(v18 + 24) = a6;
    *(_QWORD *)(v18 + 32) = a3;
    if ( !v19 )
    {
      if ( (*((_BYTE *)v17 + 30) & 1) != 0 )
      {
        v47 = a1[1];
        v48 = sub_952CC0(*(__int64 **)(v47 + 7472), a4);
        sub_B6F6E0(v47, (__int64)v17, 0, v48, *(double *)a7.m128_u64, a8, a9);
        v49 = *(_QWORD *)(*(_QWORD *)(v47 + 8656) + 8LL * *v17);
        sub_B9C4A0(a1, v106);
        v50 = *(unsigned __int8 *)(v49 + 53);
        if ( (v50 & 0x80u) != 0LL )
        {
          sub_B39E50(v49, a1[1]);
          v50 = *(unsigned __int8 *)(v49 + 53);
        }
        v51 = sub_B9B270(v103, v106);
        v52 = (unsigned __int8)v50 + ((unsigned __int64)v51 << 6) + 8268;
        v53 = a1[v52];
        if ( v53 )
        {
          sub_BA1300((__int64)a1, v53, (__int64)v20, a4, a5, a7, a8, a9);
        }
        else
        {
          v96 = &a1[64 * (unsigned __int64)v51 + 8268 + v50];
          v97 = sub_180C100(a1 + 6, 16);
          *(_QWORD *)v97 = off_1C57C18;
          *(_QWORD *)(v97 + 8) = v96;
          v124[0] = (char *)v97;
          sub_B9B610(a1 + 4, v124);
          a1[v52] = sub_BA0DF0((__int64)a1, (__int64)v20, a4, a5, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
        }
        goto LABEL_30;
      }
      v21 = *((int **)v17 + 2);
      sub_B9C4A0(a1, v106);
      v22 = (_DWORD *)a1[68];
      v23 = *v21 + 0x80000000;
      v24 = *v21 - 0x7FFFFFFF;
      if ( v22 )
      {
        v25 = *(v22 - 1);
        if ( v25 >= v24 )
          goto LABEL_13;
        v83 = *(v22 - 2);
        if ( v83 >= v24 )
        {
          *(v22 - 1) = v24;
          v91 = (char *)v22 + v25;
          v90 = (char *)v22 + v24;
LABEL_82:
          memset(v91, 0, v90 - v91);
LABEL_13:
          v26 = (char *)v22 + v23;
          if ( !*v26 )
          {
            *v26 = 1;
            v27 = sub_180C100(a1 + 6, 24);
            *(_QWORD *)v27 = off_1C57AD0;
            *(_QWORD *)(v27 + 8) = a1 + 68;
            *(_DWORD *)(v27 + 16) = v23;
            v124[0] = (char *)v27;
            sub_B9B610(a1 + 4, v124);
            v28 = sub_B9B270(v103, v21);
            v29 = a1[1];
            v30 = v28;
            v31 = *(_QWORD *)(v29 + 8696);
            v32 = *v21 + 0x80000000;
            if ( v31 && (unsigned int)v32 < *(_DWORD *)(v31 - 4) )
              v33 = (__int64 ***)(v31 + 8 * v32);
            else
              v33 = (__int64 ***)(v29 + 8704);
            v34 = *v33;
            if ( *v33 )
            {
              if ( v34 != &v34[*((unsigned int *)v34 - 1)] )
              {
                v122 = v21;
                v35 = *v33;
                v36 = a1[1];
                v120 = v20;
                v37 = &v34[*((unsigned int *)v34 - 1)];
                v109 = 1LL << v30;
                while ( 1 )
                {
                  v38 = *v35;
                  v39 = **v35;
                  if ( (unsigned int)sub_8E7030(v36)
                    && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v36 + 7488) + 56LL))(
                          *(_QWORD *)(v36 + 7488),
                          v39)
                    || (v40 = v38[1], v41 = *(_QWORD *)(v40 + 96), (v41 & v109) != 0) )
                  {
                    if ( v37 == ++v35 )
                      goto LABEL_26;
                  }
                  else
                  {
                    ++v35;
                    v42 = sub_180C100(a1 + 6, 24);
                    *(_QWORD *)v42 = off_1C56EA8;
                    *(_QWORD *)(v42 + 8) = v40 + 96;
                    *(_QWORD *)(v42 + 16) = v41;
                    v124[0] = (char *)v42;
                    sub_B9B610(a1 + 4, v124);
                    *(_QWORD *)(v40 + 96) |= v109;
                    if ( v37 == v35 )
                    {
LABEL_26:
                      v20 = v120;
                      v21 = v122;
                      break;
                    }
                  }
                  v36 = a1[1];
                }
              }
            }
          }
          v43 = (unsigned __int8)sub_B9B270(v103, v21);
          v44 = sub_B9B270(v103, v106);
          v45 = v43 + ((unsigned __int64)v44 << 6) + 8268;
          v46 = a1[v45];
          if ( v46 )
          {
            sub_BA1300((__int64)a1, v46, (__int64)v20, a4, a5, a7, a8, a9);
          }
          else
          {
            v54 = &a1[64 * (unsigned __int64)v44 + 8268 + (unsigned __int8)v43];
            v55 = sub_180C100(a1 + 6, 16);
            *(_QWORD *)v55 = off_1C57C18;
            *(_QWORD *)(v55 + 8) = v54;
            v124[0] = (char *)v55;
            sub_B9B610(a1 + 4, v124);
            a1[v45] = sub_BA0DF0((__int64)a1, (__int64)v20, a4, a5, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
          }
          sub_BA16E0(a1, v104, v20, a4, a5, a6);
          goto LABEL_30;
        }
      }
      else
      {
        if ( *v21 == 0x7FFFFFFF )
          goto LABEL_13;
        v82 = sub_186B270(0xAu);
        v83 = 2;
        v25 = 0;
        v22 = (_DWORD *)(v82 + 8);
        *(_QWORD *)v82 = 2;
        a1[68] = v82 + 8;
        if ( v24 <= 2 )
        {
          *(_DWORD *)(v82 + 4) = v24;
          v91 = (char *)(v82 + 8);
          v90 = (char *)v22 + v24;
          goto LABEL_82;
        }
      }
      v111 = v21;
      v84 = v22;
      v85 = v25;
      do
      {
        v86 = (3 * v83 + 1) >> 1;
        v87 = v86 + 8;
        if ( v83 + 8 >= (unsigned int)v87 || v83 >= v86 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v124);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v88 = (unsigned int *)sub_186B300(v84 - 2, v87);
        v83 = v86;
        v84 = v88 + 2;
        *v88 = v86;
        a1[68] = v88 + 2;
      }
      while ( v86 < v24 );
      v89 = v85;
      v22 = v88 + 2;
      v88[1] = v24;
      v21 = v111;
      v90 = (char *)v84 + v24;
      v91 = (char *)v84 + v89;
      if ( v24 == v89 )
        goto LABEL_13;
      goto LABEL_82;
    }
    v56 = (int ****)(a1[12365] + 8LL * *((unsigned __int16 *)v17 + 8));
    v57 = *v56;
    if ( !*v56 )
      goto LABEL_92;
    v58 = *((unsigned int *)v57 - 1);
    v59 = &v57[v58];
    v60 = *((_DWORD *)v57 - 1);
    if ( v57 == v59 )
    {
LABEL_69:
      if ( *((_DWORD *)v59 - 2) == v60 )
      {
        v98 = (3 * v60 + 1) >> 1;
        if ( 8 * v60 + 8 >= 8 * v98 + 8 || v60 >= v98 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v124);
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v99 = (unsigned int *)sub_186B300(v59 - 1, 8 * v98 + 8);
        v100 = v99[1];
        v59 = (int ***)(v99 + 2);
        *v56 = (int ***)(v99 + 2);
        *v99 = v98;
        LODWORD(v99) = v100;
        v78 = &v59[v100];
        v77 = (_DWORD)v99 + 1;
      }
      else
      {
        v76 = v60;
        v77 = v60 + 1;
        v78 = &v59[v76];
      }
      goto LABEL_71;
    }
    v110 = &v57[v58];
    v61 = v106;
    v105 = 0;
    v123 = v56;
    while ( 1 )
    {
      v62 = *v57;
      v63 = **v57;
      if ( v61 == v63 )
      {
        v64 = *v57;
        v65 = v20;
        do
        {
          if ( *((_WORD *)v65 + 4) != *((_WORD *)v64 + 4) )
            break;
          if ( *((_DWORD *)v65 + 6) != *((_DWORD *)v64 + 6) )
            break;
          v65 = (_QWORD *)v65[4];
          v64 = (int **)v64[4];
          if ( (v65 == nullptr) != (v64 == nullptr) )
            break;
          if ( !v65 )
          {
            if ( v64 )
              BUG();
            v105 = 1;
            break;
          }
        }
        while ( (int *)*v65 == *v64 );
      }
      sub_B9C4A0(a1, v63);
      sub_B9C4A0(a1, v61);
      v66 = (unsigned __int8)sub_B9B270(v103, v61);
      v67 = sub_B9B270(v103, v63);
      if ( (_BYTE)v66 == v67 )
        break;
      v68 = (__int64)v20;
      if ( (unsigned __int8)v66 >= v67 )
      {
        v69 = v66;
        v68 = (__int64)v62;
        v66 = v67;
        v62 = (int **)v20;
        v67 = v69;
      }
      v70 = (v66 << 6) + v67;
      v71 = &a1[2 * v70];
      v72 = v71[76];
      if ( v72 )
      {
        sub_BA1300((__int64)a1, v72, v68, a4, a5, a7, a8, a9);
        sub_BA1300((__int64)a1, v71[77], (__int64)v62, a4, a5, a7, a8, a9);
      }
      else
      {
        v121 = v68;
        v79 = &a1[2 * v70 + 76];
        v119 = 2 * v70;
        v80 = sub_180C100(a1 + 6, 16);
        *(_QWORD *)v80 = off_1C57C18;
        *(_QWORD *)(v80 + 8) = v79;
        v124[0] = (char *)v80;
        sub_B9B610(a1 + 4, v124);
        v81 = sub_180C100(a1 + 6, 16);
        *(_QWORD *)v81 = off_1C57C18;
        *(_QWORD *)(v81 + 8) = &a1[v119 + 77];
        v124[0] = (char *)v81;
        sub_B9B610(a1 + 4, v124);
        v71[76] = sub_BA0DF0((__int64)a1, v121, a4, a5, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
        v71[77] = sub_BA0DF0((__int64)a1, (__int64)v62, a4, a5, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
      }
LABEL_53:
      if ( v110 == ++v57 )
        goto LABEL_66;
LABEL_54:
      v61 = (int *)*v20;
    }
    v73 = &a1[130 * v66];
    v74 = v73[76];
    if ( !v74 )
    {
      v92 = sub_180C100(a1 + 6, 16);
      *(_QWORD *)v92 = off_1C57C18;
      *(_QWORD *)(v92 + 8) = &a1[130 * v66 + 76];
      v124[0] = (char *)v92;
      sub_B9B610(a1 + 4, v124);
      v93 = sub_BA0DF0((__int64)a1, (__int64)v62, a4, a5, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9);
      v73[76] = v93;
      sub_BA1300((__int64)a1, (__int64)v93, (__int64)v20, a4, a5, a7, a8, a9);
      goto LABEL_53;
    }
    sub_BA1300((__int64)a1, v74, (__int64)v62, a4, a5, a7, a8, a9);
    if ( (int *)*v20 == *v62 )
    {
      v75 = v20;
      do
      {
        if ( *((_WORD *)v62 + 4) != *((_WORD *)v75 + 4) )
          break;
        if ( *((_DWORD *)v62 + 6) != *((_DWORD *)v75 + 6) )
          break;
        v62 = (int **)v62[4];
        v75 = (_QWORD *)v75[4];
        if ( (v62 == nullptr) != (v75 == nullptr) )
          break;
        if ( !v62 )
        {
          if ( v75 )
            BUG();
          goto LABEL_53;
        }
      }
      while ( *v62 == (int *)*v75 );
    }
    ++v57;
    sub_BA1300((__int64)a1, v73[76], (__int64)v20, a4, a5, a7, a8, a9);
    if ( v110 != v57 )
      goto LABEL_54;
LABEL_66:
    v56 = v123;
    if ( !v105 )
    {
      v59 = *v123;
      if ( *v123 )
      {
        v60 = *((_DWORD *)v59 - 1);
        goto LABEL_69;
      }
LABEL_92:
      v101 = (_QWORD *)sub_186B270(0x18u);
      *v101 = 2;
      v77 = 1;
      v59 = (int ***)(v101 + 1);
      *v56 = v59;
      v78 = v59;
LABEL_71:
      *v78 = (int **)v20;
      *((_DWORD *)v59 - 1) = v77;
    }
LABEL_30:
    result = ++v102;
  }
  while ( (unsigned __int16)v102 < v115 );
  return result;
}

