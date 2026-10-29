__int64 __fastcall sub_D31DB0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  char i; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  bool v10; // zf
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r13
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // r13
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // edx
  unsigned int v33; // ebx
  _QWORD *v35; // rax
  unsigned int v36; // r14d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r12
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  unsigned int v47; // r12d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r13d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  _QWORD *v64; // rcx
  unsigned int v65; // r12d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // r12d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  char **v77; // r12
  char **v78; // r12
  char **exception; // r12
  char **v80; // r12
  char **v81; // r12
  __int64 v82; // [rsp+0h] [rbp-78h]
  __int64 v83; // [rsp+8h] [rbp-70h]
  __int64 v84[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = a2;
  for ( i = 0; ; i = 1 )
  {
    v6 = a1[62];
    v7 = a1[18];
    v8 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v9 = a1[63];
      v10 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v10 )
      {
        v83 = v8;
        v82 = v7;
        sub_15D7BC0(v9, v6);
        v7 = v82;
        v8 = v83;
      }
    }
    a1[62] = 0;
    v11 = sub_1447860(v7 + 24, v8, 0, 0, a1 + 60);
    if ( v11 == 4 )
    {
      v15 = a1[60];
      goto LABEL_40;
    }
    if ( v11 == 5 )
    {
      ++*(_DWORD *)(v4 + 8);
      if ( !i )
      {
        v55 = (_QWORD *)a1[7];
        if ( v55 )
        {
          v56 = *((_DWORD *)v55 - 1);
          if ( v56 == *((_DWORD *)v55 - 2) )
          {
            v69 = (3 * v56 + 1) >> 1;
            v70 = 8 * v69 + 8;
            if ( 8 * v56 + 8 >= (unsigned int)v70 || v56 >= v69 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v71 = (unsigned int *)sub_186B300(v55 - 1, v70);
            v72 = v71[1];
            v55 = v71 + 2;
            *v71 = v69;
            a1[7] = v71 + 2;
            LODWORD(v71) = v72;
            v59 = &v55[v72];
            v58 = (_DWORD)v71 + 1;
          }
          else
          {
            v57 = v56;
            v58 = v56 + 1;
            v59 = &v55[v57];
          }
        }
        else
        {
          v76 = (_QWORD *)sub_186B270(0x18u);
          v55 = v76 + 1;
          *v76 = 2;
          v58 = 1;
          a1[7] = v55;
          v59 = v55;
        }
        *v59 = v4;
        *((_DWORD *)v55 - 1) = v58;
        v60 = (_QWORD *)a1[11];
        if ( v60 )
        {
          v61 = *((_DWORD *)v60 - 1);
          if ( v61 == *((_DWORD *)v60 - 2) )
          {
            v65 = (3 * v61 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v61 + 8 >= (unsigned int)v66 || v61 >= v65 )
            {
              v80 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
              *v80 = (char *)off_1C63128;
              sub_2333C0(v80 + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(v80, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v67 = (unsigned int *)sub_186B300(v60 - 1, v66);
            v68 = v67[1];
            v60 = v67 + 2;
            *v67 = v65;
            a1[11] = v67 + 2;
            LODWORD(v67) = v68;
            v64 = &v60[v68];
            v63 = (_DWORD)v67 + 1;
          }
          else
          {
            v62 = v61;
            v63 = v61 + 1;
            v64 = &v60[v62];
          }
        }
        else
        {
          v75 = (_QWORD *)sub_186B270(0x18u);
          v60 = v75 + 1;
          *v75 = 2;
          v63 = 1;
          a1[11] = v60;
          v64 = v60;
        }
        *v64 = 0;
        *((_DWORD *)v60 - 1) = v63;
        goto LABEL_35;
      }
      v13 = a1[60];
      if ( !v13 || (v14 = a1[61], v10 = *(_DWORD *)(v13 + 8) == 1, --*(_DWORD *)(v13 + 8), !v10) )
      {
        a1[60] = v4;
        v15 = v4;
        goto LABEL_18;
      }
      sub_15D7BC0(v14, v13);
      a1[60] = v4;
      v15 = v4;
LABEL_40:
      if ( !v15 )
      {
        v16 = (_QWORD *)a1[7];
        if ( v16 )
        {
LABEL_19:
          v17 = *((_DWORD *)v16 - 1);
          if ( v17 == *((_DWORD *)v16 - 2) )
          {
            v36 = (3 * v17 + 1) >> 1;
            v37 = 8 * v36 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v37 || v17 >= v36 )
            {
              v81 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v84, "Overflow encountered when expanding vector");
              *v81 = (char *)off_1C63128;
              sub_2333C0(v81 + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(v81, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v38 = (unsigned int *)sub_186B300(v16 - 1, v37);
            v39 = v38[1];
            v16 = v38 + 2;
            *v38 = v36;
            a1[7] = v38 + 2;
            LODWORD(v38) = v39;
            v20 = &v16[v39];
            v19 = (_DWORD)v38 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v16[v18];
          }
          goto LABEL_21;
        }
LABEL_42:
        v35 = (_QWORD *)sub_186B270(0x18u);
        v16 = v35 + 1;
        *v35 = 2;
        v19 = 1;
        a1[7] = v16;
        v20 = v16;
LABEL_21:
        *v20 = v15;
        v21 = a1[62];
        *((_DWORD *)v16 - 1) = v19;
        if ( v21 )
        {
          v22 = (_QWORD *)a1[11];
          ++*(_DWORD *)(v21 + 8);
          if ( v22 )
          {
            v23 = *((_DWORD *)v22 - 1);
            if ( v23 == *((_DWORD *)v22 - 2) )
            {
              v47 = (3 * v23 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v23 + 8 >= (unsigned int)v48 || v23 >= v47 )
              {
                v78 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v78 = (char *)off_1C63128;
                sub_2333C0(v78 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v78, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v49 = (unsigned int *)sub_186B300(v22 - 1, v48);
              v50 = v49[1];
              v22 = v49 + 2;
              *v49 = v47;
              a1[11] = v49 + 2;
              LODWORD(v49) = v50;
              v26 = &v22[v50];
              v25 = (_DWORD)v49 + 1;
            }
            else
            {
              v24 = v23;
              v25 = v23 + 1;
              v26 = &v22[v24];
            }
          }
          else
          {
            v73 = (_QWORD *)sub_186B270(0x18u);
            v22 = v73 + 1;
            *v73 = 2;
            v25 = 1;
            a1[11] = v22;
            v26 = v22;
          }
          *v26 = v21;
          *((_DWORD *)v22 - 1) = v25;
        }
        else
        {
          v40 = sub_15DE370(a1[1]);
          v41 = v40;
          if ( v40 )
            ++*(_DWORD *)(v40 + 8);
          v42 = (_QWORD *)a1[11];
          if ( v42 )
          {
            v43 = *((_DWORD *)v42 - 1);
            if ( v43 == *((_DWORD *)v42 - 2) )
            {
              v51 = (3 * v43 + 1) >> 1;
              v52 = 8 * v51 + 8;
              if ( 8 * v43 + 8 >= (unsigned int)v52 || v43 >= v51 )
              {
                v77 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v84, "Overflow encountered when expanding vector");
                *v77 = (char *)off_1C63128;
                sub_2333C0(v77 + 1, v84);
                sub_233E40((__int64)v84);
                __cxa_throw(v77, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v53 = (unsigned int *)sub_186B300(v42 - 1, v52);
              v54 = v53[1];
              v42 = v53 + 2;
              *v53 = v51;
              a1[11] = v53 + 2;
              LODWORD(v53) = v54;
              v46 = &v42[v54];
              v45 = (_DWORD)v53 + 1;
            }
            else
            {
              v44 = v43;
              v45 = v43 + 1;
              v46 = &v42[v44];
            }
          }
          else
          {
            v74 = (_QWORD *)sub_186B270(0x18u);
            v42 = v74 + 1;
            *v74 = 2;
            v45 = 1;
            a1[11] = v42;
            v46 = v42;
          }
          *v46 = v41;
          *((_DWORD *)v42 - 1) = v45;
        }
        v27 = a1[62];
        if ( v27 )
        {
          v28 = a1[63];
          v10 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v28, v27);
        }
        v29 = a1[60];
        a1[62] = 0;
        if ( v29 )
        {
          v30 = a1[61];
          v10 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v30, v29);
        }
        a1[60] = 0;
        v31 = a1[5];
        if ( v31 )
        {
          v32 = *(_DWORD *)(v31 - 4);
          if ( v32 )
            *(_BYTE *)(v31 + 16LL * (unsigned int)(v32 - 1) + 8) |= 2u;
        }
LABEL_35:
        v33 = 1;
        goto LABEL_36;
      }
LABEL_18:
      v16 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v15 + 8);
      if ( v16 )
        goto LABEL_19;
      goto LABEL_42;
    }
    v12 = a1[60];
    if ( *(_WORD *)(v12 + 4) || *(_DWORD *)(v12 + 24) )
      break;
    ++*(_DWORD *)(v12 + 8);
    v10 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v3, v4);
    v4 = v12;
  }
  v33 = 0;
LABEL_36:
  v10 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v3, v4);
  return v33;
}

