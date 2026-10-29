/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452620
// Address: 0x0000000000452620

//----- (0000000000452620) ----------------------------------------------------
__int64 __fastcall sub_452620(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  __int64 v13; // r9
  _QWORD *v14; // r14
  __int64 v15; // r10
  unsigned __int64 v16; // rdi
  int v17; // ebx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r10
  __int64 v25; // r9
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  unsigned __int8 v28; // bp
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  _QWORD *v31; // rbx
  void *v32; // rdi
  __int64 v33; // rax
  const void *v34; // rbp
  int *v35; // rcx
  __int64 v36; // r15
  int *v37; // rsi
  _QWORD *v38; // rax
  size_t v39; // rbx
  unsigned __int8 v40; // r13
  _BYTE *i; // rax
  char *v42; // r12
  size_t v43; // r14
  size_t v44; // r13
  __int64 v45; // r12
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  char *v48; // rax
  __int64 v50; // rax
  __int64 v51; // rbp
  bool v52; // zf
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // r13
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // r10
  int v61; // r13d
  _QWORD *v62; // r8
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rsi
  __int64 v68; // r14
  __int64 v69; // r9
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r11
  __int64 v72; // r15
  unsigned __int8 v73; // bl
  unsigned __int8 v74; // bp
  unsigned __int8 v75; // al
  char *v76; // rbx
  char *v77; // rbx
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  char *v80; // rax
  int ca[2]; // [rsp+8h] [rbp-E0h]
  int cb[2]; // [rsp+8h] [rbp-E0h]
  int c; // [rsp+8h] [rbp-E0h]
  int cc[2]; // [rsp+8h] [rbp-E0h]
  int cd[2]; // [rsp+8h] [rbp-E0h]
  __int64 v86; // [rsp+10h] [rbp-D8h]
  _QWORD *v87; // [rsp+10h] [rbp-D8h]
  __int64 v88; // [rsp+10h] [rbp-D8h]
  __int64 v89; // [rsp+10h] [rbp-D8h]
  char *v90; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+18h] [rbp-D0h]
  int v92; // [rsp+20h] [rbp-C8h]
  int *v93; // [rsp+20h] [rbp-C8h]
  char *ptr; // [rsp+28h] [rbp-C0h]
  _QWORD *ptra; // [rsp+28h] [rbp-C0h]
  __int64 v96; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v97; // [rsp+38h] [rbp-B0h]
  __int64 v98; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+40h] [rbp-A8h]
  __int64 v100; // [rsp+40h] [rbp-A8h]
  __int64 v101; // [rsp+48h] [rbp-A0h]
  __int64 v102; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v103; // [rsp+50h] [rbp-98h]
  unsigned __int64 v104; // [rsp+50h] [rbp-98h]
  _QWORD *v105; // [rsp+58h] [rbp-90h]
  unsigned __int64 v106; // [rsp+60h] [rbp-88h]
  __int64 v107; // [rsp+60h] [rbp-88h]
  unsigned __int64 v108; // [rsp+68h] [rbp-80h]
  unsigned __int64 v109; // [rsp+70h] [rbp-78h]
  __int64 v110; // [rsp+70h] [rbp-78h]
  unsigned __int64 v111; // [rsp+78h] [rbp-70h]
  __int64 v112; // [rsp+80h] [rbp-68h]
  unsigned __int64 v113; // [rsp+88h] [rbp-60h]
  _QWORD v114[2]; // [rsp+90h] [rbp-58h] BYREF
  void *v115; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v116; // [rsp+A8h] [rbp-40h]

  v6 = a1;
  v116 = __readfsqword(0x28u);
  v96 = a1 + 48;
  v8 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v8;
  v97 = a3 - v8;
LABEL_2:
  v112 = 1000;
  while ( 1 )
  {
    if ( a2 >= v8 + 4096 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v6 + 32) & 2) == 0 )
    {
      v114[1] = 0;
      v114[0] = off_4C3230;
      v115 = nullptr;
      off_4C7FB0(86, (unsigned int)v114, 0, (unsigned int)&off_4C7FB0, (_DWORD)a5, a6);
      v51 = v50;
      v114[0] = &off_4C4590;
      sub_4826F0((char *)v115);
      if ( v51 )
        return 4294967289LL;
      v8 = *(_QWORD *)(v6 + 4144);
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v6 + 16) + 288LL))(
           *(_QWORD *)(v6 + 16),
           v8,
           v96,
           4096,
           *(_QWORD *)(v6 + 40));
    ptr = *(char **)(v6 + 4144);
    if ( v9 != 4096 )
    {
      *(_QWORD *)(v6 + 4176) = *(_QWORD *)(v6 + 4144);
      return 4294967289LL;
    }
    v10 = *(_QWORD **)(v6 + 4152);
    v11 = 0;
    if ( (unsigned __int64)ptr < a2 )
      v11 = a2 - (_QWORD)ptr;
    *(_QWORD *)(v6 + 4240) = v11;
    v12 = v11;
    v105 = (_QWORD *)(v6 + 4152);
    if ( v10 != (_QWORD *)(v6 + 4152) )
    {
      v109 = a2;
      v13 = v6;
      v14 = v10;
      while ( 1 )
      {
        v15 = v14[4];
        v16 = 4096 - v12;
        v17 = *(_DWORD *)(v13 + 32);
        a5 = (_QWORD *)(**(_QWORD **)(v13 + 24) + 80LL * v14[3]);
        v18 = 4096 - v12;
        v19 = a5[1] - v15;
        if ( v19 <= 4096 - v12 )
          v18 = a5[1] - v15;
        v20 = 0;
        v21 = a5[1] - v15 - v18;
        v22 = v21 + *a5;
        if ( a5[4] )
          v20 = a5[3] + v21;
        if ( v18 )
          break;
LABEL_46:
        if ( v16 >= v19 )
        {
          **(_QWORD **)(v13 + 8) = v14[2];
          return 1;
        }
        if ( v12 )
        {
LABEL_26:
          v31 = (_QWORD *)*v14;
          v32 = v14;
          *(_QWORD *)cb = v13;
          *(_QWORD *)v14[1] = *v14;
          v33 = v14[1];
          v14 = v31;
          v31[1] = v33;
          j__free(v32);
          v13 = *(_QWORD *)cb;
          --*(_QWORD *)(*(_QWORD *)cb + 4168LL);
          v12 = *(_QWORD *)(*(_QWORD *)cb + 4240LL);
          if ( v105 == v31 )
            goto LABEL_27;
        }
        else
        {
          v14[4] = v15 + 4096;
          v14 = (_QWORD *)*v14;
          v12 = *(_QWORD *)(v13 + 4240);
          if ( v105 == v14 )
          {
LABEL_27:
            a2 = v109;
            v6 = v13;
            ptr = *(char **)(v13 + 4144);
            goto LABEL_28;
          }
        }
      }
      ptra = v14;
      LODWORD(a5) = *(_DWORD *)(v13 + 32) & 1;
      v23 = v96 + 4096 - v18;
      v101 = v15;
      v24 = 0;
      v98 = v13;
      v25 = 0;
      v26 = v20;
      v27 = v18;
      v103 = v19;
      v106 = 4096 - v12;
      v108 = v12;
      v92 = v17 & 0x20;
      while ( 1 )
      {
        v28 = *(_BYTE *)(v22 + v25);
        v29 = *(_BYTE *)(v23 + v25);
        if ( !(_DWORD)a5 )
        {
          v86 = v25;
          *(_QWORD *)ca = v24;
          v29 = toupper(v29);
          v30 = toupper(v28);
          LODWORD(a5) = 0;
          v25 = v86;
          v24 = *(_QWORD *)ca;
          v28 = v30;
        }
        if ( !v26 )
          goto LABEL_18;
        if ( v92 )
          break;
        if ( v26 != 255 )
        {
          if ( *(_BYTE *)(v26 + v24) )
          {
LABEL_18:
            if ( v29 != v28 )
              goto LABEL_25;
          }
LABEL_19:
          v24 = (int)++v25;
          if ( (int)v25 >= v27 )
            goto LABEL_45;
          continue;
        }
        if ( v28 != 0xFF )
          goto LABEL_18;
        v24 = (int)++v25;
        if ( (int)v25 >= v27 )
        {
LABEL_45:
          v14 = ptra;
          v15 = v101;
          v19 = v103;
          v16 = v106;
          v12 = v108;
          v13 = v98;
          goto LABEL_46;
        }
      }
      if ( (*(_BYTE *)(v26 + v24) & (unsigned __int8)(v29 ^ v28)) != 0 )
      {
LABEL_25:
        v14 = ptra;
        v13 = v98;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    a6 = *(_QWORD *)(v6 + 4192);
    v34 = (const void *)(v96 + v12);
    if ( 4 * a6 )
    {
      v99 = a2;
      v35 = *(int **)(v6 + 4184);
      v36 = v6;
      v37 = v35;
      while ( 1 )
      {
        v38 = (_QWORD *)(**(_QWORD **)(v36 + 24) + 80LL * *v35);
        v39 = v38[1];
        LODWORD(a5) = (_DWORD)v38;
        v40 = *(_BYTE *)(*v38 + v39 - 1);
        if ( v97 != v12 )
        {
          v87 = (_QWORD *)(**(_QWORD **)(v36 + 24) + 80LL * *v35);
          c = v40;
          v93 = v35;
          for ( i = memrchr(v34, v40, v97 - v12); i; i = memrchr(v34, c, v43 - 1) )
          {
            v42 = i + 1;
            v43 = i + 1 - (_BYTE *)v34;
            v44 = v43;
            if ( v39 <= v43 )
              v44 = v39;
            if ( !memcmp(&i[1 - v44], (const void *)(*v87 + v39 - v44), v44) )
            {
              v90 = &v42[(_QWORD)&ptr[-v39] - v96];
              if ( v43 >= v39 )
              {
                **(_QWORD **)(v36 + 8) = v90;
                return 1;
              }
              v45 = *v93;
              v46 = sub_4814F0(40);
              v46[3] = v45;
              v46[2] = v90;
              v46[4] = v44;
              *v46 = v105;
              v47 = *(_QWORD **)(v36 + 4160);
              v46[1] = v47;
              *v47 = v46;
              *(_QWORD *)(v36 + 4160) = v46;
              v48 = *(char **)(v36 + 4144);
              ++*(_QWORD *)(v36 + 4168);
              ptr = v48;
            }
            if ( v43 == 1 )
              break;
          }
          v35 = v93;
          v37 = *(int **)(v36 + 4184);
          a6 = *(_QWORD *)(v36 + 4192);
        }
        if ( ++v35 == &v37[a6] )
          break;
        v12 = *(_QWORD *)(v36 + 4240);
      }
      a2 = v99;
      v6 = v36;
    }
    if ( *(_QWORD *)(v6 + 4216) )
    {
      v55 = *(_QWORD *)(v6 + 4240);
      if ( v55 < v97 )
        break;
    }
LABEL_56:
    v97 = 4096;
    v8 = (unsigned __int64)(ptr - 4096);
    v52 = v112-- == 1;
    *(_QWORD *)(v6 + 4144) = ptr - 4096;
    if ( v52 )
    {
      v53 = sub_481E10();
      v54 = HIDWORD(v53);
      if ( (unsigned int)(HIDWORD(v53) - *(_DWORD *)(v6 + 4232)) > 4 )
      {
        sub_411B10(*(_QWORD *)(v6 + 16), "");
        *(_DWORD *)(v6 + 4232) = v54;
      }
      v8 = *(_QWORD *)(v6 + 4144);
      goto LABEL_2;
    }
  }
  v113 = a2;
  v56 = *(_QWORD *)(v6 + 4208);
  v57 = v6;
  v58 = *(_QWORD *)(v6 + 4216);
LABEL_63:
  a6 = v56;
  v104 = v97 - v55;
  if ( !(4 * v58) )
    goto LABEL_82;
  v59 = v57;
  while ( 2 )
  {
    while ( 2 )
    {
      v60 = *(int *)a6;
      v61 = *(_DWORD *)(v59 + 32);
      v62 = (_QWORD *)(**(_QWORD **)(v59 + 24) + 80 * v60);
      v63 = v104;
      v64 = v62[1];
      if ( v104 > v64 )
        v63 = v62[1];
      v65 = 0;
      v66 = v62[1] - v63;
      v67 = v66 + *v62;
      if ( v62[4] )
        v65 = v62[3] + v66;
      if ( v63 )
      {
        v100 = a6;
        v102 = v59;
        LODWORD(a5) = *(_DWORD *)(v59 + 32) & 1;
        v68 = 0;
        v69 = 0;
        v107 = v56;
        v70 = v63;
        v71 = v65;
        v72 = v96 + v97 - v63;
        v110 = v60;
        v111 = v64;
        while ( 1 )
        {
          v73 = *(_BYTE *)(v67 + v69);
          v74 = *(_BYTE *)(v72 + v69);
          if ( !(_DWORD)a5 )
          {
            v88 = v69;
            *(_QWORD *)cc = v71;
            v74 = toupper(v74);
            v75 = toupper(v73);
            LODWORD(a5) = 0;
            v69 = v88;
            v71 = *(_QWORD *)cc;
            v73 = v75;
          }
          if ( !v71 )
          {
LABEL_73:
            if ( v74 != v73 )
              goto LABEL_80;
            goto LABEL_74;
          }
          if ( (v61 & 0x20) != 0 )
            break;
          if ( v71 == 255 )
          {
            if ( v73 != 0xFF )
              goto LABEL_73;
            v68 = (int)++v69;
            if ( (int)v69 >= v70 )
            {
LABEL_86:
              v63 = v70;
              a6 = v100;
              v60 = v110;
              v64 = v111;
              v59 = v102;
              goto LABEL_87;
            }
          }
          else
          {
            if ( *(_BYTE *)(v71 + v68) )
              goto LABEL_73;
LABEL_74:
            v68 = (int)++v69;
            if ( (int)v69 >= v70 )
              goto LABEL_86;
          }
        }
        if ( (*(_BYTE *)(v71 + v68) & (unsigned __int8)(v74 ^ v73)) != 0 )
        {
LABEL_80:
          v56 = v107;
          v59 = v102;
          a6 = v100 + 4;
          if ( v100 + 4 != v107 + 4 * v58 )
            continue;
LABEL_81:
          v55 = *(_QWORD *)(v59 + 4240);
          v57 = v59;
LABEL_82:
          if ( v55 >= --v97 )
          {
            a2 = v113;
            v6 = v57;
            goto LABEL_56;
          }
          goto LABEL_63;
        }
        goto LABEL_74;
      }
      break;
    }
LABEL_87:
    v76 = &ptr[v97];
    if ( v104 < v64 )
    {
      v91 = v63;
      v77 = &v76[-v64];
      v89 = a6;
      *(_QWORD *)cd = v60;
      v78 = sub_4814F0(40);
      v78[2] = v77;
      v78[3] = *(_QWORD *)cd;
      v78[4] = v91;
      a6 = v89 + 4;
      *v78 = v105;
      v79 = *(_QWORD **)(v59 + 4160);
      v78[1] = v79;
      *v79 = v78;
      v58 = *(_QWORD *)(v59 + 4216);
      *(_QWORD *)(v59 + 4160) = v78;
      v56 = *(_QWORD *)(v59 + 4208);
      v80 = *(char **)(v59 + 4144);
      ++*(_QWORD *)(v59 + 4168);
      ptr = v80;
      if ( v89 + 4 == v56 + 4 * v58 )
        goto LABEL_81;
      continue;
    }
    break;
  }
  **(_QWORD **)(v59 + 8) = &v76[-v63];
  return 1;
}
// 452B20: variable 'a5' is possibly undefined
// 452B20: variable 'a6' is possibly undefined
// 452B2A: variable 'v50' is possibly undefined
// 4C3230: using guessed type __int64 (__fastcall *off_4C3230[2])();
// 4C4590: using guessed type _UNKNOWN *off_4C4590;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
