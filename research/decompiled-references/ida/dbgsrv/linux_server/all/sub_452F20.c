/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452F20
// Address: 0x0000000000452F20

//----- (0000000000452F20) ----------------------------------------------------
__int64 __fastcall sub_452F20(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        const void **a6)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r11
  _QWORD **v13; // r13
  __int64 v14; // rdi
  _QWORD **v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r10
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // rdx
  __int64 v21; // r11
  unsigned __int8 *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r13
  unsigned __int8 *v25; // r14
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // bp
  unsigned __int8 v28; // al
  _QWORD **v29; // rbx
  void *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rsi
  int *v33; // rcx
  int *v34; // rdi
  __int64 v35; // r14
  unsigned __int8 *v36; // r13
  const void **v37; // r12
  size_t v38; // rbx
  const void *v39; // rbp
  _BYTE *i; // rax
  size_t v41; // rbx
  size_t v42; // rbp
  _BYTE *v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned __int64 v53; // rdx
  __int64 v54; // r13
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  const void **v57; // rcx
  __int64 v58; // r14
  const void **v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r10
  __int64 *v62; // r8
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r15
  __int64 v69; // rcx
  unsigned __int8 v70; // bl
  unsigned __int8 v71; // r12
  unsigned __int8 v72; // al
  __int64 v73; // rbx
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  __int64 v76; // rax
  int ca[2]; // [rsp+8h] [rbp-E0h]
  int c; // [rsp+8h] [rbp-E0h]
  int cb[2]; // [rsp+8h] [rbp-E0h]
  int cc[2]; // [rsp+8h] [rbp-E0h]
  __int64 v81; // [rsp+10h] [rbp-D8h]
  _BYTE *v82; // [rsp+10h] [rbp-D8h]
  __int64 v83; // [rsp+10h] [rbp-D8h]
  const void **v84; // [rsp+10h] [rbp-D8h]
  __int64 v85; // [rsp+18h] [rbp-D0h]
  __int64 v86; // [rsp+18h] [rbp-D0h]
  int v87; // [rsp+20h] [rbp-C8h]
  int v88; // [rsp+20h] [rbp-C8h]
  _QWORD **ptr; // [rsp+28h] [rbp-C0h]
  const void **ptra; // [rsp+28h] [rbp-C0h]
  _QWORD *v91; // [rsp+30h] [rbp-B8h]
  __int64 v92; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v93; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v94; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+38h] [rbp-B0h]
  _QWORD **v96; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v97; // [rsp+48h] [rbp-A0h]
  __int64 v98; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+50h] [rbp-98h]
  __int64 v100; // [rsp+58h] [rbp-90h]
  __int64 v101; // [rsp+58h] [rbp-90h]
  unsigned __int64 v102; // [rsp+60h] [rbp-88h]
  unsigned __int64 v103; // [rsp+60h] [rbp-88h]
  __int64 v104; // [rsp+68h] [rbp-80h]
  __int64 v105; // [rsp+70h] [rbp-78h]
  unsigned __int64 v106; // [rsp+78h] [rbp-70h]
  __int64 v107; // [rsp+80h] [rbp-68h]
  unsigned __int64 v108; // [rsp+88h] [rbp-60h]
  _QWORD v109[2]; // [rsp+90h] [rbp-58h] BYREF
  void *v110; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v111; // [rsp+A8h] [rbp-40h]

  v7 = a2 & 0xFFFFFFFFFFFFF000LL;
  v8 = a1;
  v111 = __readfsqword(0x28u);
  v99 = a2 - v7;
  *(_QWORD *)(a1 + 4144) = v7;
  v105 = a1 + 48;
LABEL_2:
  v10 = 1000;
  while ( 1 )
  {
    if ( v7 >= a3 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v8 + 32) & 2) == 0 )
    {
      v109[1] = 0;
      v109[0] = off_4C3230;
      v110 = nullptr;
      off_4C7FB0(86, (unsigned int)v109, 0, (unsigned int)&off_4C7FB0, (_DWORD)a5, (_DWORD)a6);
      v52 = v51;
      v109[0] = &off_4C4590;
      sub_4826F0((char *)v110);
      if ( v52 )
        return 4294967289LL;
      v7 = *(_QWORD *)(v8 + 4144);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v8 + 16) + 288LL))(
            *(_QWORD *)(v8 + 16),
            v7,
            v105,
            4096,
            *(_QWORD *)(v8 + 40));
    v12 = *(_QWORD *)(v8 + 4144);
    if ( v11 != 4096 )
    {
      *(_QWORD *)(v8 + 4176) = v12;
      return 4294967289LL;
    }
    v13 = *(_QWORD ***)(v8 + 4152);
    v14 = a3 - v12;
    if ( a3 - v12 > 0x1000 )
      v14 = 4096;
    v96 = (_QWORD **)(v8 + 4152);
    *(_QWORD *)(v8 + 4240) = v14;
    if ( (_QWORD **)(v8 + 4152) != v13 )
    {
      v100 = v10;
      v15 = v13;
      v16 = v14;
      v102 = a3;
      while ( 1 )
      {
        v17 = v16;
        v18 = v15[4];
        a6 = (const void **)(**(_QWORD **)(v8 + 24) + 80LL * (_QWORD)v15[3]);
        v19 = (unsigned __int8 *)((_BYTE *)a6[1] - (_BYTE *)v18);
        if ( (unsigned __int64)v19 <= v16 )
          v17 = (_BYTE *)a6[1] - (_BYTE *)v18;
        a5 = (unsigned __int8 *)*a6 + (_QWORD)v18;
        v20 = nullptr;
        if ( a6[4] )
          v20 = (unsigned __int8 *)a6[3] + (_QWORD)v18;
        if ( v17 )
          break;
LABEL_51:
        if ( v16 >= (unsigned __int64)v19 )
        {
          **(_QWORD **)(v8 + 8) = v15[2];
          return 1;
        }
        if ( v16 == 4096 )
        {
          v15[4] = v18 + 512;
          v15 = (_QWORD **)*v15;
          if ( v96 == v15 )
          {
LABEL_27:
            v10 = v100;
            a3 = v102;
            v12 = *(_QWORD *)(v8 + 4144);
            goto LABEL_28;
          }
        }
        else
        {
LABEL_26:
          v29 = (_QWORD **)*v15;
          v30 = v15;
          *v15[1] = *v15;
          v31 = v15[1];
          v15 = v29;
          v29[1] = v31;
          j__free(v30);
          --*(_QWORD *)(v8 + 4168);
          if ( v96 == v29 )
            goto LABEL_27;
        }
        v16 = *(_QWORD *)(v8 + 4240);
      }
      ptr = v15;
      v21 = v8;
      LODWORD(a6) = *(_DWORD *)(v8 + 32) & 1;
      v22 = v20;
      v97 = v16;
      v23 = 0;
      v87 = *(_DWORD *)(v8 + 32) & 0x20;
      v24 = 0;
      v25 = a5;
      v91 = v18;
      v93 = v19;
      while ( 1 )
      {
        v26 = v25[v23];
        v27 = *(_BYTE *)(v21 + v23 + 48);
        if ( !(_DWORD)a6 )
        {
          v85 = v21;
          *(_QWORD *)ca = v23;
          v27 = toupper(v27);
          v28 = toupper(v26);
          v21 = v85;
          LODWORD(a6) = 0;
          v23 = *(_QWORD *)ca;
          v26 = v28;
        }
        if ( !v22 )
          goto LABEL_18;
        if ( v87 )
          break;
        if ( v22 != (unsigned __int8 *)255 )
        {
          if ( v22[v24] )
          {
LABEL_18:
            if ( v27 != v26 )
              goto LABEL_25;
          }
LABEL_19:
          v24 = (int)++v23;
          if ( (int)v23 >= v17 )
            goto LABEL_50;
          continue;
        }
        if ( v26 != 0xFF )
          goto LABEL_18;
        v24 = (int)++v23;
        if ( (int)v23 >= v17 )
        {
LABEL_50:
          v15 = ptr;
          v18 = v91;
          v8 = v21;
          v19 = v93;
          v16 = v97;
          goto LABEL_51;
        }
      }
      if ( (v22[v24] & (unsigned __int8)(v27 ^ v26)) != 0 )
      {
LABEL_25:
        v15 = ptr;
        v8 = v21;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    v32 = *(_QWORD *)(v8 + 4192);
    v33 = *(int **)(v8 + 4184);
    v34 = v33;
    if ( 4 * v32 )
    {
      v92 = v10;
      v81 = v12;
      v94 = a3;
      v35 = v8;
      do
      {
        a6 = (const void **)(**(_QWORD **)(v35 + 24) + 80LL * *v34);
        a5 = (unsigned __int8 *)*a6;
        v36 = (unsigned __int8 *)a6[1];
        v37 = a6;
        if ( *(_QWORD *)(v35 + 4240) != v99 )
        {
          v38 = *(_QWORD *)(v35 + 4240) - v99;
          c = *(unsigned __int8 *)*a6;
          v39 = (const void *)(v99 + v105);
          for ( i = memchr((const void *)(v99 + v105), c, v38); ; i = memchr(v39, c, v38) )
          {
            v47 = i;
            if ( !i )
              break;
            v41 = v38 - (i - (_BYTE *)v39);
            v42 = v41;
            if ( (unsigned __int64)v36 <= v41 )
              v42 = (size_t)v36;
            if ( !memcmp(i, *v37, v42) )
            {
              v43 = &v47[v81 - v105];
              v82 = v43;
              if ( v41 >= (unsigned __int64)v36 )
              {
                **(_QWORD **)(v35 + 8) = v43;
                return 1;
              }
              v86 = *v34;
              v44 = sub_4814F0(40);
              v44[4] = v42;
              v44[2] = v82;
              *v44 = v96;
              v44[3] = v86;
              v45 = *(_QWORD **)(v35 + 4160);
              v44[1] = v45;
              *v45 = v44;
              *(_QWORD *)(v35 + 4160) = v44;
              v46 = *(_QWORD *)(v35 + 4144);
              ++*(_QWORD *)(v35 + 4168);
              v81 = v46;
            }
            v39 = v47 + 1;
            v38 = v41 - 1;
            if ( !v38 )
              break;
          }
          v33 = *(int **)(v35 + 4184);
          v32 = *(_QWORD *)(v35 + 4192);
        }
        ++v34;
      }
      while ( v34 != &v33[v32] );
      v8 = v35;
      v10 = v92;
      v12 = v81;
      a3 = v94;
    }
    if ( *(_QWORD *)(v8 + 4216) )
    {
      v53 = *(_QWORD *)(v8 + 4240);
      if ( v99 < v53 )
        break;
    }
LABEL_44:
    v99 = 0;
    v7 = v12 + 4096;
    *(_QWORD *)(v8 + 4144) = v12 + 4096;
    if ( !--v10 )
    {
      v48 = sub_481E10();
      v49 = HIDWORD(v48);
      if ( (unsigned int)(HIDWORD(v48) - *(_DWORD *)(v8 + 4232)) > 4 )
      {
        sub_411B10(*(_QWORD *)(v8 + 16), "");
        *(_DWORD *)(v8 + 4232) = v49;
      }
      v7 = *(_QWORD *)(v8 + 4144);
      goto LABEL_2;
    }
  }
  v107 = v10;
  v54 = v8;
  v108 = a3;
  v104 = v12;
  a6 = *(const void ***)(v8 + 4208);
  v55 = *(_QWORD *)(v8 + 4216);
  v56 = v99;
LABEL_62:
  v57 = a6;
  v95 = v53 - v56;
  if ( !(4 * v55) )
    goto LABEL_81;
  v106 = v56;
  v58 = v54;
  v59 = a6;
  v60 = v105 + v56;
  while ( 2 )
  {
    while ( 2 )
    {
      v61 = *(int *)v57;
      v62 = (__int64 *)(**(_QWORD **)(v58 + 24) + 80 * v61);
      v63 = v95;
      v64 = v62[1];
      v65 = *v62;
      if ( v95 > v64 )
        v63 = v62[1];
      v66 = 0;
      if ( v62[4] )
        v66 = v62[3];
      if ( v63 )
      {
        ptra = v57;
        v67 = 0;
        LODWORD(a5) = *(_DWORD *)(v58 + 32) & 1;
        v68 = v66;
        v69 = 0;
        v88 = *(_DWORD *)(v58 + 32) & 0x20;
        v101 = v61;
        v103 = v64;
        v98 = v55;
        while ( 1 )
        {
          v70 = *(_BYTE *)(v65 + v69);
          v71 = *(_BYTE *)(v60 + v69);
          if ( !(_DWORD)a5 )
          {
            v83 = v69;
            *(_QWORD *)cb = v67;
            v71 = toupper(v71);
            v72 = toupper(v70);
            LODWORD(a5) = 0;
            v69 = v83;
            v67 = *(_QWORD *)cb;
            v70 = v72;
          }
          if ( !v68 )
          {
LABEL_72:
            if ( v71 != v70 )
              goto LABEL_79;
            goto LABEL_73;
          }
          if ( v88 )
            break;
          if ( v68 == 255 )
          {
            if ( v70 != 0xFF )
              goto LABEL_72;
            v67 = (int)++v69;
            if ( (int)v69 >= v63 )
            {
LABEL_85:
              v61 = v101;
              v64 = v103;
              v57 = ptra;
              goto LABEL_86;
            }
          }
          else
          {
            if ( *(_BYTE *)(v68 + v67) )
              goto LABEL_72;
LABEL_73:
            v67 = (int)++v69;
            if ( (int)v69 >= v63 )
              goto LABEL_85;
          }
        }
        if ( (*(_BYTE *)(v68 + v67) & (unsigned __int8)(v71 ^ v70)) != 0 )
        {
LABEL_79:
          v55 = v98;
          v57 = (const void **)((char *)ptra + 4);
          if ( (char *)ptra + 4 != (char *)v59 + 4 * v98 )
            continue;
LABEL_80:
          v56 = v106;
          v53 = *(_QWORD *)(v58 + 4240);
          v54 = v58;
          a6 = v59;
LABEL_81:
          if ( ++v56 >= v53 )
          {
            v10 = v107;
            v12 = v104;
            v8 = v54;
            a3 = v108;
            goto LABEL_44;
          }
          goto LABEL_62;
        }
        goto LABEL_73;
      }
      break;
    }
LABEL_86:
    v73 = v106 + v104;
    if ( v95 < v64 )
    {
      v84 = v57;
      *(_QWORD *)cc = v61;
      v74 = sub_4814F0(40);
      v74[2] = v73;
      v74[3] = *(_QWORD *)cc;
      v74[4] = v63;
      v57 = (const void **)((char *)v84 + 4);
      *v74 = v96;
      v75 = *(_QWORD **)(v58 + 4160);
      v74[1] = v75;
      *v75 = v74;
      v55 = *(_QWORD *)(v58 + 4216);
      *(_QWORD *)(v58 + 4160) = v74;
      v59 = *(const void ***)(v58 + 4208);
      v76 = *(_QWORD *)(v58 + 4144);
      ++*(_QWORD *)(v58 + 4168);
      v104 = v76;
      if ( (char *)v84 + 4 == (char *)v59 + 4 * v55 )
        goto LABEL_80;
      continue;
    }
    break;
  }
  **(_QWORD **)(v58 + 8) = v73;
  return 1;
}
// 453449: variable 'a5' is possibly undefined
// 453449: variable 'a6' is possibly undefined
// 453453: variable 'v51' is possibly undefined
// 4C3230: using guessed type __int64 (__fastcall *off_4C3230[2])();
// 4C4590: using guessed type _UNKNOWN *off_4C4590;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
