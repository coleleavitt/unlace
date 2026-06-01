void __fastcall sub_DC4C60(__int64 *a1)
{
  int v1; // r14d
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  __int64 *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // r13d
  size_t v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r15
  __int64 *v35; // rax
  __int64 *v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r13
  __int64 v40; // rdi
  __int64 *v42; // r13
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  _DWORD *v48; // r12
  __int64 v49; // rax
  int v50; // eax
  __int64 *v51; // rax
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // r13d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  char **v67; // rbp
  _QWORD *exception; // rbx
  char **v69; // rbp
  char **v70; // rbp
  __int64 *v71; // [rsp+0h] [rbp-98h]
  unsigned int v72; // [rsp+0h] [rbp-98h]
  __int64 v73; // [rsp+0h] [rbp-98h]
  __int64 v74; // [rsp+0h] [rbp-98h]
  __int64 v75; // [rsp+0h] [rbp-98h]
  __int64 v76; // [rsp+8h] [rbp-90h]
  unsigned int v77; // [rsp+8h] [rbp-90h]
  __int64 v78; // [rsp+8h] [rbp-90h]
  unsigned int v79; // [rsp+8h] [rbp-90h]
  __int64 v80; // [rsp+8h] [rbp-90h]
  __int64 v81; // [rsp+8h] [rbp-90h]
  __int64 v82; // [rsp+8h] [rbp-90h]
  __int64 v83; // [rsp+8h] [rbp-90h]
  __int64 v84; // [rsp+8h] [rbp-90h]
  __int64 v85; // [rsp+10h] [rbp-88h]
  __int64 v86; // [rsp+18h] [rbp-80h]
  __int64 v87; // [rsp+18h] [rbp-80h]
  int v88; // [rsp+20h] [rbp-78h] BYREF
  char v89; // [rsp+24h] [rbp-74h]
  __int64 v90; // [rsp+28h] [rbp-70h]
  int v91; // [rsp+30h] [rbp-68h]
  char v92; // [rsp+34h] [rbp-64h]
  __int64 v93; // [rsp+38h] [rbp-60h]
  __int64 v94[11]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  sub_DC0880(a1);
  do
  {
    v3 = *((_DWORD *)a1 + 9);
    v4 = *((_DWORD *)a1 + 10);
    switch ( *((_DWORD *)a1 + 356) )
    {
      case 1:
        v48 = (_DWORD *)sub_1875960(a1 + 180, 4, 0);
        v49 = sub_DC0880(a1)[1];
        if ( v49 )
          v50 = *(_DWORD *)(v49 - 4);
        else
          v50 = 0;
        *v48 = v50;
        ++v1;
        break;
      case 2:
        if ( !v1 )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_305660(exception, "invalid s-expression, unexpected ')'");
LABEL_77:
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        --v1;
        v72 = *(_DWORD *)sub_1875940(a1 + 180);
        v32 = sub_DC0880(a1)[1];
        if ( v32 )
          v33 = *(_DWORD *)(v32 - 4);
        else
          v33 = 0;
        v34 = *(_QWORD *)(*a1 + 320);
        v77 = v33 - v72;
        if ( !v34 )
        {
          v87 = *a1;
          v34 = sub_186B270(0x210u);
          sub_17F71C0(v34);
          *(_QWORD *)(v87 + 320) = v34;
        }
        v35 = sub_DC0880(a1);
        v86 = 8LL * v72;
        v78 = sub_17F71E0(v34, v77, v35[1] + v86, v3, v4);
        v36 = sub_DC0880(a1);
        v37 = v36[1];
        if ( !v37 )
          goto LABEL_46;
        v38 = v37 + 8LL * *(unsigned int *)(v37 - 4);
        v39 = v37 + v86;
        if ( v37 + v86 >= v38 )
          goto LABEL_45;
        do
        {
          while ( 1 )
          {
            v40 = *v36;
            if ( (*(_DWORD *)(*(_QWORD *)v39 + 4LL))-- == 1 )
              break;
            v39 += 8LL;
            if ( v39 >= v38 )
              goto LABEL_44;
          }
          sub_17F9000(v40);
          v39 += 8LL;
        }
        while ( v39 < v38 );
LABEL_44:
        v37 = v36[1];
        if ( v37 )
LABEL_45:
          *(_DWORD *)(v37 - 4) = v72;
LABEL_46:
        v42 = sub_DC0880(a1);
        v43 = (_QWORD *)v42[1];
        ++*(_DWORD *)(v78 + 4);
        if ( v43 )
        {
          v44 = *((_DWORD *)v43 - 1);
          if ( v44 == *((_DWORD *)v43 - 2) )
          {
            v60 = (3 * v44 + 1) >> 1;
            v61 = 8 * v60 + 8;
            if ( 8 * v44 + 8 >= (unsigned int)v61 || v44 >= v60 )
              goto LABEL_75;
            v62 = (unsigned int *)sub_186B300(v43 - 1, v61);
            v63 = v62[1];
            v43 = v62 + 2;
            v42[1] = (__int64)(v62 + 2);
            *v62 = v60;
            LODWORD(v62) = v63;
            v47 = &v43[v63];
            v46 = (_DWORD)v62 + 1;
          }
          else
          {
            v45 = v44;
            v46 = v44 + 1;
            v47 = &v43[v45];
          }
        }
        else
        {
          v66 = (_QWORD *)sub_186B270(0x18u);
          v43 = v66 + 1;
          *v66 = 2;
          v46 = 1;
          v42[1] = (__int64)v43;
          v47 = v43;
        }
        *v47 = v78;
        *((_DWORD *)v43 - 1) = v46;
        sub_1875B10(a1 + 180);
        break;
      case 3:
        v15 = sub_DC0880(a1);
        v28 = *(_QWORD *)(*a1 + 320);
        if ( !v28 )
        {
          v81 = *a1;
          v73 = sub_186B270(0x210u);
          sub_17F71C0(v73);
          v28 = v73;
          *(_QWORD *)(v81 + 320) = v73;
        }
        v29 = sub_17F7540(v28, a1 + 6, v3, v4);
        v18 = (_QWORD *)v15[1];
        ++*(_DWORD *)(v29 + 4);
        v19 = v29;
        if ( !v18 )
          goto LABEL_69;
        v20 = *((_DWORD *)v18 - 1);
        if ( v20 != *((_DWORD *)v18 - 2) )
          goto LABEL_17;
        v26 = (3 * v20 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v20 + 8 < (unsigned int)v27 && v20 < v26 )
          goto LABEL_32;
        goto LABEL_75;
      case 4:
        v15 = sub_DC0880(a1);
        v24 = *(_QWORD *)(*a1 + 320);
        if ( !v24 )
        {
          v83 = *a1;
          v75 = sub_186B270(0x210u);
          sub_17F71C0(v75);
          v24 = v75;
          *(_QWORD *)(v83 + 320) = v75;
        }
        v25 = sub_17F7570(v24, a1 + 6, v3, v4);
        v18 = (_QWORD *)v15[1];
        ++*(_DWORD *)(v25 + 4);
        v19 = v25;
        if ( !v18 )
          goto LABEL_69;
        v20 = *((_DWORD *)v18 - 1);
        if ( v20 != *((_DWORD *)v18 - 2) )
          goto LABEL_17;
        v26 = (3 * v20 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v27 || v20 >= v26 )
          goto LABEL_75;
        goto LABEL_32;
      case 5:
        v15 = sub_DC0880(a1);
        v16 = *(_QWORD *)(*a1 + 320);
        if ( !v16 )
        {
          v82 = *a1;
          v74 = sub_186B270(0x210u);
          sub_17F71C0(v74);
          v16 = v74;
          *(_QWORD *)(v82 + 320) = v74;
        }
        v17 = sub_17F7490(v16, a1[173], v3, v4);
        v18 = (_QWORD *)v15[1];
        ++*(_DWORD *)(v17 + 4);
        v19 = v17;
        if ( v18 )
        {
          v20 = *((_DWORD *)v18 - 1);
          if ( v20 == *((_DWORD *)v18 - 2) )
          {
            v26 = (3 * v20 + 1) >> 1;
            v27 = 8 * v26 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v27 || v20 >= v26 )
            {
LABEL_75:
              v67 = (char **)__cxa_allocate_exception(0x28u);
              sub_DBF430(v94, "Overflow encountered when expanding vector");
              *v67 = (char *)off_1C63128;
              sub_2333C0(v67 + 1, v94);
              sub_233E40((__int64)v94);
              __cxa_throw(v67, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_32:
            v30 = (unsigned int *)sub_186B300(v18 - 1, v27);
            v31 = v30[1];
            v18 = v30 + 2;
            v15[1] = (__int64)(v30 + 2);
            *v30 = v26;
            LODWORD(v30) = v31;
            v23 = &v18[v31];
            v22 = (_DWORD)v30 + 1;
          }
          else
          {
LABEL_17:
            v21 = v20;
            v22 = v20 + 1;
            v23 = &v18[v21];
          }
        }
        else
        {
LABEL_69:
          v64 = (_QWORD *)sub_186B270(0x18u);
          v18 = v64 + 1;
          *v64 = 2;
          v22 = 1;
          v15[1] = (__int64)v18;
          v23 = v18;
        }
        *v23 = v19;
        *((_DWORD *)v18 - 1) = v22;
        break;
      case 6:
      case 8:
        v5 = sub_DC0880(a1);
        v6 = *a1;
        v71 = v5;
        v7 = *(_QWORD *)(*a1 + 320);
        if ( !v7 )
        {
          v84 = sub_186B270(0x210u);
          sub_17F71C0(v84);
          v7 = v84;
          *(_QWORD *)(v6 + 320) = v84;
        }
        v89 &= 0xFCu;
        v92 &= 0xFCu;
        v76 = v7;
        v88 = 0;
        v90 = 0;
        v91 = 1;
        v93 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v88, (int *)a1 + 14);
        v8 = sub_17F7240(v76, &v88, v3, v4);
        ++*(_DWORD *)(v8 + 4);
        v9 = v8;
        v10 = (_QWORD *)v71[1];
        if ( !v10 )
          goto LABEL_72;
        v11 = *((_DWORD *)v10 - 1);
        if ( v11 != *((_DWORD *)v10 - 2) )
          goto LABEL_7;
        v56 = (3 * v11 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v57 || v11 >= v56 )
        {
          v70 = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430(v94, "Overflow encountered when expanding vector");
          *v70 = (char *)off_1C63128;
          sub_2333C0(v70 + 1, v94);
          sub_233E40((__int64)v94);
          __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_59;
      case 7:
        v51 = sub_DC0880(a1);
        v52 = *a1;
        v71 = v51;
        v53 = *(_QWORD *)(*a1 + 320);
        if ( !v53 )
        {
          v80 = sub_186B270(0x210u);
          sub_17F71C0(v80);
          v53 = v80;
          *(_QWORD *)(v52 + 320) = v80;
        }
        v85 = v53;
        v54 = *((_DWORD *)a1 + 22);
        v89 &= 0xFCu;
        v92 &= 0xFCu;
        v79 = v54;
        v88 = 0;
        v90 = 0;
        v91 = 1;
        v93 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v88, (int *)a1 + 14);
        v55 = sub_17F7300(v85, &v88, v79, v3, v4);
        ++*(_DWORD *)(v55 + 4);
        v9 = v55;
        v10 = (_QWORD *)v71[1];
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v56 = (3 * v11 + 1) >> 1;
            v57 = 8 * v56 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v57 || v11 >= v56 )
            {
              v69 = (char **)__cxa_allocate_exception(0x28u);
              sub_DBF430(v94, "Overflow encountered when expanding vector");
              *v69 = (char *)off_1C63128;
              sub_2333C0(v69 + 1, v94);
              sub_233E40((__int64)v94);
              __cxa_throw(v69, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_59:
            v58 = (unsigned int *)sub_186B300(v10 - 1, v57);
            v10 = v58 + 2;
            v71[1] = (__int64)(v58 + 2);
            v59 = v58[1];
            *v58 = v56;
            LODWORD(v58) = v59;
            v14 = &v10[v59];
            v13 = (_DWORD)v58 + 1;
          }
          else
          {
LABEL_7:
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
LABEL_72:
          v65 = (_QWORD *)sub_186B270(0x18u);
          v10 = v65 + 1;
          *v65 = 2;
          v14 = v65 + 1;
          v71[1] = (__int64)(v65 + 1);
          v13 = 1;
        }
        *v14 = v9;
        *((_DWORD *)v10 - 1) = v13;
        sub_25A130((char *)&v88);
        break;
      case 9:
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid s-expression, unexpected end of file");
        goto LABEL_77;
      default:
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid s-expression, unexpected input");
        goto LABEL_77;
    }
    if ( *((_DWORD *)a1 + 356) != 9 )
      sub_DC0980(a1);
  }
  while ( v1 );
}

