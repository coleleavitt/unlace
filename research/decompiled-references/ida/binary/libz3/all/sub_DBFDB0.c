__int64 __fastcall sub_DBFDB0(_QWORD *a1)
{
  char **v1; // rbp
  _QWORD *exception; // rbx
  char **v3; // rbp
  _QWORD *v4; // rbx
  char **v5; // rbp
  char **v6; // rbp
  _QWORD *v7; // rbx
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // r12d
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 *v28; // rbp
  __int64 v29; // rax
  __int64 *v30; // r15
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rsi
  int v38; // eax
  _QWORD *v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rbp
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbp
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 *v53; // rcx
  unsigned int v54; // r9d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  unsigned int v58; // r12d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rax
  unsigned int v67; // r13d
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rdx
  __int64 v76; // [rsp+8h] [rbp-70h]
  __int64 v77; // [rsp+8h] [rbp-70h]
  __int64 v78; // [rsp+8h] [rbp-70h]
  __int64 v79; // [rsp+10h] [rbp-68h]
  __int64 v80; // [rsp+10h] [rbp-68h]
  unsigned int v81; // [rsp+18h] [rbp-60h]
  unsigned int v82; // [rsp+1Ch] [rbp-5Ch]
  void *v83[11]; // [rsp+20h] [rbp-58h] BYREF

  ((void (*)(void))sub_DC28D0)();
  v9 = *((_DWORD *)a1 + 356);
  if ( v9 != 4 )
  {
    if ( v9 == 2 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid sort, unexpected ')'");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v10 = 0;
    goto LABEL_4;
  }
  v10 = 0;
  while ( 1 )
  {
    v40 = sub_DC28D0(a1);
    v41 = sub_DC2F20(a1, 0);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 16);
    v43 = *(_QWORD **)(v40 + 8);
    if ( v43 )
    {
      v44 = *((_DWORD *)v43 - 1);
      if ( v44 == *((_DWORD *)v43 - 2) )
      {
        v67 = (3 * v44 + 1) >> 1;
        v69 = 8 * v67 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v69 || v44 >= v67 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_DBF430((__int64 *)v83, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_65:
        v70 = (unsigned int *)sub_186B300(v43 - 1, v69);
        v71 = v70[1];
        v43 = v70 + 2;
        *(_QWORD *)(v40 + 8) = v70 + 2;
        *v70 = v67;
        LODWORD(v70) = v71;
        v46 = &v43[v71];
        result = (unsigned int)((_DWORD)v70 + 1);
      }
      else
      {
LABEL_37:
        v45 = v44;
        result = v44 + 1;
        v46 = &v43[v45];
      }
    }
    else
    {
      v74 = (_QWORD *)sub_186B270(0x18u);
      v43 = v74 + 1;
      *v74 = 2;
      result = 1;
      *(_QWORD *)(v40 + 8) = v43;
      v46 = v43;
    }
LABEL_38:
    *v46 = v42;
    *((_DWORD *)v43 - 1) = result;
    if ( !v10 )
      return result;
    while ( 1 )
    {
      v16 = *((_DWORD *)a1 + 356);
      if ( v16 == 4 )
        break;
      if ( v16 == 2 )
      {
        v17 = sub_1875940(a1 + 180);
        v18 = *(_QWORD *)v17;
        v81 = *(_DWORD *)(v17 + 8);
        v19 = *(_QWORD *)(sub_DC28D0(a1) + 8);
        if ( v19 )
          v20 = *(_DWORD *)(v19 - 4);
        else
          v20 = 0;
        v21 = v20 - v81;
        v22 = *(_DWORD *)(v18 + 12);
        if ( v21 != v22 && v22 != -1 )
        {
          v4 = __cxa_allocate_exception(0x30u);
          sub_305660(v4, "invalid number of parameters to sort constructor");
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        v23 = *a1;
        v24 = *(_QWORD *)(*a1 + 312LL);
        if ( !v24 )
        {
          sub_DFBCB0(*a1);
          v24 = *(_QWORD *)(v23 + 312);
        }
        v76 = v24;
        v25 = sub_DC28D0(a1);
        v26 = 8LL * v81;
        v27 = sub_DE3C80(v76, *((unsigned int *)a1 + 383), v18, v21, v26 + *(_QWORD *)(v25 + 8));
        v28 = (__int64 *)sub_DC28D0(a1);
        v29 = v28[1];
        if ( v29 )
        {
          v30 = (__int64 *)(v29 + v26);
          v31 = v29 + 8LL * *(unsigned int *)(v29 - 4);
          if ( (unsigned __int64)v30 >= v31 )
            goto LABEL_41;
          do
          {
            v32 = *v30;
            if ( *v30 )
            {
              v33 = *v28;
              if ( (*(_DWORD *)(v32 + 16))-- == 1 )
              {
                v35 = *(_QWORD **)(v33 + 80);
                if ( v35 )
                {
                  v36 = *((_DWORD *)v35 - 1);
                  if ( v36 == *((_DWORD *)v35 - 2) )
                  {
                    v54 = (3 * v36 + 1) >> 1;
                    v55 = 8 * v54 + 8;
                    if ( 8 * v36 + 8 >= (unsigned int)v55 || v36 >= v54 )
                    {
                      v5 = (char **)__cxa_allocate_exception(0x28u);
                      sub_DBF430((__int64 *)v83, "Overflow encountered when expanding vector");
                      *v5 = (char *)off_1C63128;
                      sub_2333C0(v5 + 1, v83);
                      sub_233E40((__int64)v83);
                      __cxa_throw(
                        v5,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v82 = (3 * v36 + 1) >> 1;
                    v79 = v33;
                    v77 = v32;
                    v56 = (unsigned int *)sub_186B300(v35 - 1, v55);
                    v33 = v79;
                    v57 = v56[1];
                    v35 = v56 + 2;
                    v32 = v77;
                    *(_QWORD *)(v79 + 80) = v56 + 2;
                    *v56 = v82;
                    LODWORD(v56) = v57;
                    v39 = &v35[v57];
                    v38 = (_DWORD)v56 + 1;
                  }
                  else
                  {
                    v37 = v36;
                    v38 = v36 + 1;
                    v39 = &v35[v37];
                  }
                }
                else
                {
                  v80 = v33;
                  v78 = v32;
                  v72 = (_QWORD *)sub_186B270(0x18u);
                  v33 = v80;
                  v32 = v78;
                  v35 = v72 + 1;
                  *v72 = 2;
                  v38 = 1;
                  *(_QWORD *)(v80 + 80) = v35;
                  v39 = v35;
                }
                *v39 = v32;
                *((_DWORD *)v35 - 1) = v38;
              }
              sub_DE3700(v33);
            }
            ++v30;
          }
          while ( (unsigned __int64)v30 < v31 );
          v29 = v28[1];
          if ( v29 )
LABEL_41:
            *(_DWORD *)(v29 - 4) = v81;
        }
        v47 = sub_DC28D0(a1);
        v48 = v47;
        if ( v27 )
          ++*(_DWORD *)(v27 + 16);
        v49 = *(_QWORD **)(v47 + 8);
        if ( v49 )
        {
          v50 = *((_DWORD *)v49 - 1);
          if ( v50 == *((_DWORD *)v49 - 2) )
          {
            v58 = (3 * v50 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v50 + 8 >= (unsigned int)v59 || v50 >= v58 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_DBF430((__int64 *)v83, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v83);
              sub_233E40((__int64)v83);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = (unsigned int *)sub_186B300(v49 - 1, v59);
            v61 = v60[1];
            v49 = v60 + 2;
            *(_QWORD *)(v48 + 8) = v60 + 2;
            *v60 = v58;
            LODWORD(v60) = v61;
            v53 = &v49[v61];
            v52 = (_DWORD)v60 + 1;
          }
          else
          {
            v51 = v50;
            v52 = v50 + 1;
            v53 = &v49[v51];
          }
        }
        else
        {
          v73 = (_QWORD *)sub_186B270(0x18u);
          v49 = v73 + 1;
          *v73 = 2;
          v52 = 1;
          *(_QWORD *)(v48 + 8) = v49;
          v53 = v49;
        }
        *v53 = v27;
        *((_DWORD *)v49 - 1) = v52;
        result = sub_1875B10(a1 + 180);
        if ( *((_DWORD *)a1 + 356) != 9 )
          result = sub_DC0980(a1);
        --v10;
      }
      else
      {
LABEL_4:
        sub_DBF660((__int64)a1, "invalid sort, symbol, '_' or '(' expected");
        if ( *((_DWORD *)a1 + 356) != 4 )
        {
          v7 = __cxa_allocate_exception(0x30u);
          sub_305660(v7, "invalid sort, symbol or '_' expected");
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        if ( a1[6] == a1[254] )
        {
          v62 = sub_DC28D0(a1);
          v63 = *a1;
          v40 = v62;
          v64 = *(_QWORD *)(*a1 + 312LL);
          if ( !v64 )
          {
            sub_DFBCB0(*a1);
            v64 = *(_QWORD *)(v63 + 312);
          }
          v65 = sub_DC3180(a1);
          v66 = sub_DE1240(v64, v65);
          v42 = v66;
          if ( v66 )
            ++*(_DWORD *)(v66 + 16);
          v43 = *(_QWORD **)(v40 + 8);
          if ( !v43 )
          {
            v75 = (_QWORD *)sub_186B270(0x18u);
            *v75 = 2;
            result = 1;
            v43 = v75 + 1;
            *(_QWORD *)(v40 + 8) = v43;
            v46 = v43;
            goto LABEL_38;
          }
          v44 = *((_DWORD *)v43 - 1);
          if ( v44 != *((_DWORD *)v43 - 2) )
            goto LABEL_37;
          v67 = (3 * v44 + 1) >> 1;
          v68 = 8 * v67 + 8;
          if ( 8 * v44 + 8 >= v68 || v44 >= v67 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430((__int64 *)v83, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v69 = v68;
          goto LABEL_65;
        }
        v11 = *a1;
        v83[0] = *((void **)a1 + 6);
        v12 = sub_DF89E0(v11, v83);
        if ( !v12 )
          sub_DBFCB0(v83[0]);
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        v13 = sub_1875960(a1 + 180, 16, 0);
        v14 = *(_QWORD *)(sub_DC28D0(a1) + 8);
        if ( v14 )
          result = *(unsigned int *)(v14 - 4);
        else
          result = 0;
        *(_QWORD *)v13 = v12;
        ++v10;
        *(_DWORD *)(v13 + 8) = result;
      }
      if ( !v10 )
        return result;
    }
  }
}

