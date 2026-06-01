__int64 *__fastcall sub_4F01B0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  char **exception; // rbx
  char **v4; // r15
  char **v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  char v12; // r14
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // rdx
  void *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v40; // rsi
  void *v41; // r14
  void *v42; // r14
  void *v43; // rdi
  void *v44; // r13
  void *v45; // r13
  unsigned int v46; // edx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // r12
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  _QWORD *v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 *v59; // rdx
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // r13d
  unsigned int v65; // edx
  unsigned int *v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  unsigned int v72; // [rsp+8h] [rbp-F8h]
  __int64 v73; // [rsp+10h] [rbp-F0h]
  __int64 *v74; // [rsp+18h] [rbp-E8h]
  int v75[2]; // [rsp+20h] [rbp-E0h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+38h] [rbp-C8h]
  __int64 v79; // [rsp+38h] [rbp-C8h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  unsigned int v81; // [rsp+50h] [rbp-B0h]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  int v83; // [rsp+60h] [rbp-A0h]
  int v85[2]; // [rsp+70h] [rbp-90h] BYREF
  int v86[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v89[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-50h] BYREF
  char v91; // [rsp+B8h] [rbp-48h]
  unsigned int v92; // [rsp+C0h] [rbp-40h] BYREF
  char v93; // [rsp+C4h] [rbp-3Ch]
  char v94; // [rsp+C8h] [rbp-38h]

  v74 = (__int64 *)a2[1];
  v6 = sub_4D6490(v74[3]);
  *a1 = 0;
  *(_QWORD *)v75 = v6;
  a1[1] = v6;
  v87[0] = v6;
  v80 = 0;
  v82 = 0;
LABEL_2:
  v7 = a2[15];
  if ( !v7 )
    goto LABEL_37;
LABEL_3:
  if ( v82 >= *(_DWORD *)(v7 - 4) - 1 )
    goto LABEL_38;
  do
  {
    v73 = v82;
    v8 = sub_15DB5C0(*(_QWORD *)v75, v82, *(_QWORD *)(a2[2] + 8LL * v82));
    v77 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    ++v82;
    v9 = a2[15];
    v10 = *(_DWORD *)(v9 + 4 * v73);
    v11 = *(_DWORD *)(v9 + 4LL * v82);
    v88[0] = 0;
    v88[1] = 0;
    v81 = v10;
    v89[0] = 1;
    v89[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v89);
    BYTE4(v89[0]) &= ~1u;
    LODWORD(v89[0]) = 1;
    if ( v10 >= v11 )
      goto LABEL_34;
    v12 = 1;
    v13 = v81;
    v14 = v81;
    do
    {
      while ( 1 )
      {
        v15 = (2 * ((*(_DWORD *)(a3 + 4LL * ((2 * v14) >> 5)) & (1 << ((2 * v14) & 0x1F))) != 0))
            | ((*(_DWORD *)(a3 + 4LL * ((2 * v14) >> 5)) & (1 << (2 * v14 + 1))) != 0);
        if ( v15 == 2 )
        {
          if ( v12 )
          {
            v44 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v88);
            sub_182CBA0(v44, v89);
            BYTE4(v89[0]) &= ~1u;
            v13 = v14;
            v40 = 0;
            LODWORD(v89[0]) = 1;
          }
          else
          {
            v40 = v14 - v13;
          }
          sub_17F6290(&v90, v40);
          v41 = qword_1C7F2C0;
          if ( (_DWORD)v90 )
          {
            if ( LODWORD(v88[0]) )
            {
              if ( (v89[0] & 0x100000000LL) != 0 || LODWORD(v89[0]) != 1 || (v93 & 1) != 0 || v92 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v88, &v90, v88);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v88, &v90, v88);
                sub_182CBA0(v41, v89);
                BYTE4(v89[0]) &= ~1u;
                LODWORD(v89[0]) = 1;
              }
            }
            else
            {
              if ( (v90 & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v88, &v90);
              }
              else
              {
                BYTE4(v88[0]) &= ~1u;
                LODWORD(v88[0]) = v90;
              }
              if ( (v93 & 1) != 0 )
              {
                sub_182C690(v41, v89, &v92);
              }
              else
              {
                BYTE4(v89[0]) &= ~1u;
                LODWORD(v89[0]) = v92;
              }
            }
          }
          else
          {
            if ( (v88[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v88, v88);
            else
              BYTE4(v88[0]) &= ~1u;
            if ( (v89[0] & 0x100000000LL) != 0 )
              sub_182C690(v41, v89, v89);
            else
              BYTE4(v89[0]) &= ~1u;
          }
          v42 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v90);
          v43 = v42;
          v12 = 0;
          sub_182CBA0(v43, &v92);
          goto LABEL_11;
        }
        if ( v15 != 3 )
        {
          if ( v15 != 1 )
          {
            sub_1872CE0("");
            sub_1873130(114, 156);
          }
          if ( v12 )
          {
            v45 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v88);
            sub_182CBA0(v45, v89);
            BYTE4(v89[0]) &= ~1u;
            v13 = v14;
            v12 = 0;
            LODWORD(v89[0]) = 1;
          }
          goto LABEL_11;
        }
        if ( !v12 )
          break;
LABEL_11:
        if ( ++v14 == v11 )
          goto LABEL_21;
      }
      sub_1674520(v74 + 6, v88, v14 - v13);
      v91 = 0;
      *(_QWORD *)v85 = v77;
      v94 = 0;
      v16 = v74[7];
      LODWORD(v90) = v14 - v81 - 1;
      v92 = v13 - v81;
      sub_15DCAD0(v16, (int)v85, 0);
      sub_15D0DF0(&v92);
      sub_15D0DF0(&v90);
      v17 = sub_15E1B70(v75[0]);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = (_QWORD *)v80;
      if ( v80 )
      {
        v20 = *(_DWORD *)(v80 - 4);
        if ( v20 == *(_DWORD *)(v80 - 8) )
        {
          v46 = (3 * v20 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v47 || v20 >= v46 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v90, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v90);
            sub_233E40((__int64)&v90);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v72 = (3 * v20 + 1) >> 1;
          v78 = v18;
          v48 = (unsigned int *)sub_186B300((void *)(v80 - 8), v47);
          v19 = v48 + 2;
          v18 = v78;
          v80 = (__int64)(v48 + 2);
          *v48 = v72;
          LODWORD(v48) = v48[1];
          v23 = &v19[(unsigned int)v48];
          v22 = (_DWORD)v48 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = (__int64 *)(v80 + 8 * v21);
        }
      }
      else
      {
        v79 = v17;
        v68 = (_QWORD *)sub_186B270(0x18u);
        *v68 = 2;
        v18 = v79;
        v80 = (__int64)(v68 + 1);
        v23 = v68 + 1;
        v19 = v68 + 1;
        v22 = 1;
      }
      ++v14;
      *v23 = v18;
      v12 = 1;
      *((_DWORD *)v19 - 1) = v22;
    }
    while ( v14 != v11 );
LABEL_21:
    if ( !v12 )
    {
      if ( v13 != v81 )
      {
        v24 = sub_1674520(v74 + 6, v88, v11 - v13);
        v25 = v24;
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        v91 = 0;
        v94 = 0;
        *(_QWORD *)v86 = v77;
        v92 = v13 - v81;
        v26 = v74[7];
        LODWORD(v90) = v11 - v81 - 1;
        sub_15DCAD0(v26, (int)v86, 0);
        sub_15D0DF0(&v92);
        sub_15D0DF0(&v90);
        v27 = sub_15E1B70(v75[0]);
        v28 = v27;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v29 = (_QWORD *)v80;
        if ( v80 )
        {
          v30 = *(_DWORD *)(v80 - 4);
          if ( v30 == *(_DWORD *)(v80 - 8) )
          {
            v60 = (3 * v30 + 1) >> 1;
            v61 = 8 * v60 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v61 || v30 >= v60 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v90, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, &v90);
              sub_233E40((__int64)&v90);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (unsigned int *)sub_186B300((void *)(v80 - 8), v61);
            v63 = v62[1];
            v29 = v62 + 2;
            *v62 = v60;
            v80 = (__int64)v29;
            LODWORD(v62) = v63;
            v33 = &v29[v63];
            v32 = (_DWORD)v62 + 1;
          }
          else
          {
            v31 = v30;
            v32 = v30 + 1;
            v33 = (__int64 *)(v80 + 8 * v31);
          }
        }
        else
        {
          v69 = (_QWORD *)sub_186B270(0x18u);
          *v69 = 2;
          v80 = (__int64)(v69 + 1);
          v33 = v69 + 1;
          v29 = v69 + 1;
          v32 = 1;
        }
        *v33 = v28;
        *((_DWORD *)v29 - 1) = v32;
        goto LABEL_31;
      }
      v49 = *(_QWORD *)(a2[2] + 8 * v73);
      if ( (unsigned __int8)sub_1673B10(v74 + 6, v49) )
      {
        v52 = sub_16746C0(v74 + 6, v88, v49);
LABEL_67:
        v25 = v52;
      }
      else
      {
        v50 = (_QWORD *)v74[5];
        if ( v49 != v50[105] )
        {
          v51 = sub_182D020(qword_1C7F2C0, v88);
          v52 = sub_1625BE0(v74 + 9, v51, v49);
          goto LABEL_67;
        }
        if ( LODWORD(v88[0]) )
          v25 = v50[107];
        else
          v25 = v50[108];
      }
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      v53 = sub_15E1B70(v75[0]);
      v54 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v55 = (_QWORD *)v80;
      if ( v80 )
      {
        v56 = *(_DWORD *)(v80 - 4);
        if ( v56 == *(_DWORD *)(v80 - 8) )
        {
          v64 = (3 * v56 + 1) >> 1;
          v65 = 8 * v64 + 8;
          if ( 8 * v56 + 8 >= v65 || v56 >= v64 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v90, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v90);
            sub_233E40((__int64)&v90);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v66 = (unsigned int *)sub_186B300((void *)(v80 - 8), v65);
          v67 = v66[1];
          v55 = v66 + 2;
          *v66 = v64;
          v80 = (__int64)v55;
          LODWORD(v66) = v67;
          v59 = &v55[v67];
          v58 = (_DWORD)v66 + 1;
        }
        else
        {
          v57 = v56;
          v58 = v56 + 1;
          v59 = (__int64 *)(v80 + 8 * v57);
        }
      }
      else
      {
        v70 = (_QWORD *)sub_186B270(0x18u);
        *v70 = 2;
        v80 = (__int64)(v70 + 1);
        v59 = v70 + 1;
        v55 = v70 + 1;
        v58 = 1;
      }
      *v59 = v54;
      *((_DWORD *)v55 - 1) = v58;
LABEL_31:
      if ( v25 )
      {
        if ( (*(_DWORD *)(v25 + 8))-- == 1 )
          sub_15D7BC0(*(_QWORD *)v75, v25);
      }
    }
LABEL_34:
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v88);
    sub_182CBA0(v35, v89);
    if ( !v77 )
      goto LABEL_2;
    v83 = *(_DWORD *)(v77 + 8);
    *(_DWORD *)(v77 + 8) = v83 - 1;
    if ( v83 != 1 )
      goto LABEL_2;
    sub_15D7BC0(*(_QWORD *)v75, v77);
    v7 = a2[15];
    if ( v7 )
      goto LABEL_3;
LABEL_37:
    ;
  }
  while ( v82 != -1 );
LABEL_38:
  if ( v80 )
    v36 = *(unsigned int *)(v80 - 4);
  else
    v36 = 0;
  v37 = sub_15EC1C0(*(_QWORD *)v75, v36);
  v38 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  sub_4EBFD0(*a1, a1[1]);
  *a1 = v38;
  v87[1] = v80;
  sub_2334C0(v87);
  return a1;
}

