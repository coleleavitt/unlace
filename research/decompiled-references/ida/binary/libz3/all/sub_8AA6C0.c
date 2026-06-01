__int64 __fastcall sub_8AA6C0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned int v12; // esi
  __int64 v13; // rdx
  int *v14; // rax
  __int64 v15; // r15
  int v16; // ebx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r10
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r11
  unsigned int *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // r14
  _DWORD *v33; // rdx
  unsigned int *v34; // rax
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rax
  char *v39; // rcx
  __int64 v40; // r12
  __int64 v41; // r13
  int v42; // edx
  int *v43; // rax
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r10
  _DWORD *v48; // rdx
  unsigned int *v49; // rax
  unsigned int v50; // ebp
  __int64 v51; // rcx
  __int64 v52; // r8
  _DWORD *v53; // rcx
  int v54; // eax
  _DWORD *v55; // rdi
  __int64 v56; // r11
  unsigned int *v57; // r9
  __int64 v58; // rcx
  unsigned int *v59; // rax
  __int64 v60; // rdx
  unsigned int *v61; // rsi
  __int64 v62; // rcx
  unsigned int *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int *v66; // rdi
  size_t v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // r12d
  _QWORD *v70; // rbx
  _QWORD *v71; // rdi
  unsigned int *v72; // rax
  unsigned int *v73; // rbp
  __int64 result; // rax
  __int64 v75; // rbp
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int *v78; // rdi
  int v79; // eax
  __int64 v80; // rsi
  int v81; // edx
  unsigned int v82; // r13d
  __int64 v83; // r12
  unsigned int *v84; // r9
  __int64 v85; // rcx
  unsigned int v86; // r12d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r8
  int v93; // r9d
  int v94; // r12d
  unsigned int v95; // edi
  __int64 v96; // rbp
  unsigned int v97; // edx
  __int64 v98; // r14
  int v99; // ebx
  __int64 v100; // r11
  __int64 v101; // rsi
  unsigned int *v102; // r10
  _DWORD *v103; // rdx
  unsigned int v104; // eax
  int v105; // r8d
  char **exception; // rbx
  __int64 v107; // rdx
  _DWORD *v108; // [rsp+0h] [rbp-D8h]
  unsigned int *v109; // [rsp+8h] [rbp-D0h]
  int v110; // [rsp+8h] [rbp-D0h]
  unsigned int v111; // [rsp+14h] [rbp-C4h]
  __int64 v113; // [rsp+20h] [rbp-B8h]
  unsigned int *v114; // [rsp+28h] [rbp-B0h]
  __int64 v115; // [rsp+28h] [rbp-B0h]
  unsigned int *v116; // [rsp+30h] [rbp-A8h]
  __int64 v117; // [rsp+38h] [rbp-A0h]
  __int64 v118; // [rsp+40h] [rbp-98h]
  unsigned int v119; // [rsp+58h] [rbp-80h]
  unsigned int v120; // [rsp+5Ch] [rbp-7Ch]
  __int64 v121; // [rsp+60h] [rbp-78h]
  unsigned int **v122; // [rsp+68h] [rbp-70h]
  unsigned int v123; // [rsp+7Ch] [rbp-5Ch] BYREF
  __int64 v124[11]; // [rsp+80h] [rbp-58h] BYREF

  v5 = 3LL * a3;
  v7 = *(_QWORD *)(a1 + 224);
  v8 = *(_QWORD *)(a1 + 256);
  v9 = (unsigned int *)(v7 + 8 * v5);
  v10 = *v9;
  v11 = v9[1];
  v116 = v9;
  LODWORD(v5) = *(_DWORD *)(v7 + 24LL * a2 + 12);
  ++*(_DWORD *)(a1 + 196);
  v120 = v10;
  v119 = v5;
  *(_DWORD *)(v8 + 4LL * v10) = 0;
  v12 = v9[2];
  v123 = v10;
  *(_DWORD *)(v8 + 4LL * v11) = v12;
  v13 = *(_QWORD *)(a1 + 296);
  v111 = v11;
  LODWORD(v124[0]) = v10;
  v14 = (int *)(*(_QWORD *)(a1 + 304) + 4LL * v10);
  if ( v13 )
  {
    v15 = a1;
    v16 = *(_DWORD *)(v13 - 4);
    *v14 = v16;
    v122 = (unsigned int **)(v15 + 296);
    sub_893BD0((unsigned int **)(v15 + 296), (unsigned int *)v124);
    v17 = *(_QWORD *)(v15 + 296);
    v18 = (unsigned int)v16;
    v19 = *(_QWORD *)(v15 + 304);
    v20 = (_DWORD *)(v17 + 4LL * (unsigned int)v16);
    v21 = (unsigned int)*v20;
    v22 = 4 * v21;
    v23 = v16 >> 1;
    if ( v16 >> 1 )
    {
      v24 = **(_QWORD **)(v15 + 288);
      while ( 1 )
      {
        v20 = (_DWORD *)(v17 + 4 * v18);
        v25 = (unsigned int *)(v17 + 4LL * (unsigned int)v23);
        v26 = *v25;
        if ( *(_DWORD *)(v24 + 4 * v21) >= *(_DWORD *)(v24 + 4 * v26) )
          break;
        *v20 = v26;
        *(_DWORD *)(v19 + 4 * v26) = v16;
        v16 = v23;
        v23 >>= 1;
        if ( !v23 )
        {
          v20 = v25;
          v16 = 1;
          break;
        }
        v18 = (unsigned int)v16;
      }
    }
  }
  else
  {
    *v14 = 0;
    v122 = (unsigned int **)(a1 + 296);
    sub_893BD0((unsigned int **)(a1 + 296), (unsigned int *)v124);
    v20 = *(_DWORD **)(a1 + 296);
    v19 = *(_QWORD *)(a1 + 304);
    v16 = 0;
    v21 = (unsigned int)*v20;
    v22 = 4 * v21;
  }
  *v20 = v21;
  *(_DWORD *)(v19 + v22) = v16;
  sub_893BD0((unsigned int **)(a1 + 280), &v123);
  v121 = a4;
  v27 = *(_QWORD *)(a1 + 264);
  while ( 1 )
  {
LABEL_8:
    v28 = *(_QWORD *)(a1 + 296);
    v29 = *(_QWORD *)(a1 + 304);
    v30 = *(unsigned int *)(v28 + 4);
    v31 = *(_DWORD *)(v28 - 4);
    v32 = 4 * v30;
    v33 = (_DWORD *)(v29 + 4 * v30);
    if ( v31 == 2 )
    {
      *v33 = 0;
      --*(_DWORD *)(v28 - 4);
    }
    else
    {
      v91 = *(unsigned int *)(v28 + 4LL * (unsigned int)(v31 - 1));
      *(_DWORD *)(v28 + 4) = v91;
      *(_DWORD *)(v29 + 4 * v91) = 1;
      *v33 = 0;
      v92 = *(unsigned int *)(v28 + 4);
      v93 = *(_DWORD *)(v28 - 4) - 1;
      *(_DWORD *)(v28 - 4) = v93;
      v94 = v92;
      if ( v93 <= 2 )
      {
        v103 = (_DWORD *)(v28 + 4);
        v95 = 1;
      }
      else
      {
        v110 = v92;
        v95 = 1;
        v96 = **(_QWORD **)(a1 + 288);
        v115 = v30;
        v97 = 2;
        v117 = 4 * v30;
        v118 = v92;
        v108 = (_DWORD *)(v96 + 4 * v92);
        while ( 1 )
        {
          v104 = v97 + 1;
          v102 = (unsigned int *)(v28 + 4LL * v97);
          v101 = *v102;
          v100 = 4 * v101;
          v105 = *(_DWORD *)(v96 + 4 * v101);
          if ( v93 <= (int)(v97 + 1)
            || (v98 = *(unsigned int *)(v28 + 4LL * v104), v99 = *(_DWORD *)(v96 + 4 * v98), v99 >= v105) )
          {
            v104 = v97;
            v103 = (_DWORD *)(v28 + 4LL * v95);
            if ( *v108 <= v105 )
            {
LABEL_74:
              v94 = v110;
              v30 = v115;
              v32 = v117;
              v92 = v118;
              goto LABEL_75;
            }
          }
          else
          {
            v100 = 4 * v98;
            LODWORD(v101) = *(_DWORD *)(v28 + 4LL * v104);
            v102 = (unsigned int *)(v28 + 4LL * v104);
            v103 = (_DWORD *)(v28 + 4LL * v95);
            if ( *v108 <= v99 )
              goto LABEL_74;
          }
          *v103 = v101;
          v97 = 2 * v104;
          *(_DWORD *)(v29 + v100) = v95;
          if ( v93 <= (int)(2 * v104) )
            break;
          v95 = v104;
        }
        v94 = v110;
        v103 = v102;
        v95 = v104;
        v30 = v115;
        v32 = v117;
        v92 = v118;
      }
LABEL_75:
      *v103 = v94;
      *(_DWORD *)(v29 + 4 * v92) = v95;
    }
    *(_BYTE *)(v27 + v30) = 2;
    v27 = *(_QWORD *)(a1 + 264);
    v34 = *(unsigned int **)(*(_QWORD *)(a1 + 232) + 8 * v30);
    if ( v34 )
    {
      v114 = &v34[*(v34 - 1)];
      if ( v34 != v114 )
        break;
    }
  }
  v109 = *(unsigned int **)(*(_QWORD *)(a1 + 232) + 8 * v30);
  while ( 1 )
  {
    v35 = *v109;
    v36 = *(_QWORD *)(a1 + 224) + 24LL * *v109;
    if ( !*(_BYTE *)(v36 + 20) )
      goto LABEL_33;
    if ( v119 < *(_DWORD *)(v36 + 12) )
      goto LABEL_33;
    v37 = *(unsigned int *)(v36 + 4);
    v38 = *(_QWORD *)(a1 + 256);
    v39 = (char *)(v27 + v37);
    v40 = 4 * v37;
    LODWORD(v41) = *(_DWORD *)(v36 + 4);
    v42 = *(_DWORD *)(v38 + v32) + *(_DWORD *)(v36 + 8);
    v43 = (int *)(4 * v37 + v38);
    if ( *(_BYTE *)(v27 + v37) )
    {
      if ( v42 >= *v43 )
        goto LABEL_33;
    }
    *v43 = v42;
    *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v37) = v35;
    if ( v111 == (_DWORD)v41 && v42 <= (int)v116[2] )
      break;
    v44 = *v39;
    if ( *v39 == 1 )
    {
      v75 = *(_QWORD *)(a1 + 304);
      v76 = *(_QWORD *)(a1 + 296);
      v77 = *(unsigned int *)(v75 + v40);
      v78 = (unsigned int *)(v76 + 4 * v77);
      v79 = *(_DWORD *)(v75 + v40);
      v80 = *v78;
      v81 = v79 >> 1;
      v82 = *v78;
      if ( v79 >> 1 )
      {
        v113 = *v78;
        v83 = **(_QWORD **)(a1 + 288);
        while ( 1 )
        {
          v84 = (unsigned int *)(v76 + 4 * v77);
          v78 = (unsigned int *)(v76 + 4LL * (unsigned int)v81);
          v85 = *v78;
          if ( *(_DWORD *)(v83 + 4 * v80) >= *(_DWORD *)(v83 + 4 * v85) )
          {
            v80 = v113;
            v78 = v84;
            goto LABEL_58;
          }
          *v84 = v85;
          *(_DWORD *)(v75 + 4 * v85) = v79;
          v79 = v81;
          v81 >>= 1;
          if ( !v81 )
            break;
          v77 = (unsigned int)v79;
        }
        v80 = v113;
        v79 = 1;
      }
LABEL_58:
      *v78 = v82;
      *(_DWORD *)(v75 + 4 * v80) = v79;
      goto LABEL_33;
    }
    if ( v44 == 2 )
      goto LABEL_24;
    if ( !v44 )
    {
      v45 = *(_QWORD *)(a1 + 280);
      if ( !v45 || (v46 = *(unsigned int *)(v45 - 4), (_DWORD)v46 == *(_DWORD *)(v45 - 8)) )
      {
        sub_313C10((unsigned int **)(a1 + 280));
        v45 = *(_QWORD *)(a1 + 280);
        v46 = *(unsigned int *)(v45 - 4);
        v39 = (char *)(v37 + *(_QWORD *)(a1 + 264));
      }
      *(_DWORD *)(v45 + 4 * v46) = v41;
      ++*(_DWORD *)(v45 - 4);
LABEL_24:
      *v39 = 1;
      v47 = *(_QWORD *)(a1 + 304);
      v48 = *(_DWORD **)(a1 + 296);
      v49 = (unsigned int *)(v47 + v40);
      if ( v48 )
      {
        v50 = *(v48 - 1);
        *v49 = v50;
        v51 = (unsigned int)*(v48 - 1);
        if ( (_DWORD)v51 == *(v48 - 2) )
        {
          v86 = (unsigned int)(3 * v51 + 1) >> 1;
          v87 = 4 * v86 + 8;
          if ( 4 * (int)v51 + 8 >= (unsigned int)v87 || (unsigned int)v51 >= v86 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v124, "Overflow encountered when expanding vector", v107);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v88 = (unsigned int *)sub_186B300(v48 - 2, v87);
          v52 = v50;
          v47 = *(_QWORD *)(a1 + 304);
          *v88 = v86;
          v48 = v88 + 2;
          v89 = v88[1];
          *(_QWORD *)(a1 + 296) = v88 + 2;
          v54 = (int)v50 >> 1;
          v55 = &v48[v50];
          v53 = &v48[v89];
        }
        else
        {
          v52 = v50;
          v53 = &v48[v51];
          v54 = (int)v50 >> 1;
          v55 = &v48[v50];
        }
        *v53 = v41;
        ++*(v48 - 1);
        v41 = (unsigned int)*v55;
        v40 = 4 * v41;
        if ( v54 )
        {
          v56 = **(_QWORD **)(a1 + 288);
          while ( 1 )
          {
            v55 = &v48[v52];
            v57 = &v48[v54];
            v58 = *v57;
            if ( *(_DWORD *)(v56 + 4 * v41) >= *(_DWORD *)(v56 + 4 * v58) )
              break;
            *v55 = v58;
            *(_DWORD *)(v47 + 4 * v58) = v50;
            v50 = v54;
            v54 >>= 1;
            if ( !v54 )
            {
              v55 = v57;
              v50 = 1;
              break;
            }
            v52 = v50;
          }
        }
      }
      else
      {
        *v49 = 0;
        v50 = 0;
        v90 = sub_186B270(0x10u);
        v47 = *(_QWORD *)(a1 + 304);
        v55 = (_DWORD *)(v90 + 8);
        *(_DWORD *)(v90 + 8) = v41;
        *(_QWORD *)v90 = 2;
        *(_QWORD *)(a1 + 296) = v90 + 8;
        ++*(_DWORD *)(v90 + 4);
      }
      *v55 = v41;
      v27 = *(_QWORD *)(a1 + 264);
      *(_DWORD *)(v47 + v40) = v50;
    }
LABEL_33:
    if ( v114 == ++v109 )
      goto LABEL_8;
  }
  v59 = *(unsigned int **)(a1 + 280);
  if ( v59 )
  {
    v60 = *(v59 - 1);
    v61 = &v59[v60];
    if ( v59 == &v59[v60] )
      goto LABEL_41;
    v62 = *v59;
    v63 = v59 + 1;
    *(_BYTE *)(v27 + v62) = 0;
    if ( v60 != 1 )
    {
      do
      {
        v64 = *v63++;
        *(_BYTE *)(*(_QWORD *)(a1 + 264) + v64) = 0;
      }
      while ( v63 != v61 );
    }
    v61 = *(unsigned int **)(a1 + 280);
    if ( v61 )
LABEL_41:
      *(v61 - 1) = 0;
  }
  v65 = *(_QWORD *)(a1 + 296);
  if ( v65 && *(_DWORD *)(v65 - 4) == 1 )
  {
    v69 = v120;
    v70 = (_QWORD *)a1;
  }
  else
  {
    v66 = *(unsigned int **)(a1 + 304);
    if ( v66 )
      v67 = 4LL * *(v66 - 1);
    else
      v67 = 0;
    memset(v66, 0, v67);
    v68 = *(_QWORD *)(a1 + 296);
    if ( v68 )
      *(_DWORD *)(v68 - 4) = 0;
    LODWORD(v124[0]) = -1;
    sub_893B90(v122, (unsigned int *)v124);
    v69 = v120;
    v70 = (_QWORD *)a1;
  }
  while ( 1 )
  {
    v71 = *(_QWORD **)(v121 + 176);
    v72 = (unsigned int *)(v70[34] + 4 * v37);
    ++*(_DWORD *)(v70[46] + 4LL * *v72);
    v73 = (unsigned int *)(v70[28] + 24LL * *v72);
    LODWORD(v124[0]) = v73[4];
    sub_893780(v71, (unsigned int *)v124);
    result = *v73;
    if ( v69 == (_DWORD)result )
      break;
    v37 = (unsigned int)result;
  }
  return result;
}

