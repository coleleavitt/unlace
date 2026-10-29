__int64 __fastcall sub_E53360(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  _QWORD **v10; // rbp
  _QWORD **v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int *v18; // rdx
  _QWORD *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // r15
  __int64 v26; // r12
  __int64 *v27; // r12
  __int64 *v28; // rdi
  void *v29; // r12
  _DWORD *v30; // rdi
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r10d
  unsigned int *v36; // r8
  unsigned int v37; // eax
  unsigned int *v38; // r8
  unsigned int v39; // eax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  unsigned int **v50; // rdi
  _DWORD *v51; // rsi
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // r9d
  unsigned int v55; // eax
  unsigned int *v56; // rax
  unsigned int v57; // r9d
  unsigned int *v58; // rax
  __int64 v59; // rdi
  _QWORD *v60; // rax
  _QWORD *v61; // rsi
  char **exception; // rbp
  _QWORD *v63; // [rsp+8h] [rbp-90h]
  unsigned int *v64; // [rsp+8h] [rbp-90h]
  _QWORD *v65; // [rsp+8h] [rbp-90h]
  _QWORD *v66; // [rsp+8h] [rbp-90h]
  unsigned int *v67; // [rsp+8h] [rbp-90h]
  unsigned int v68; // [rsp+8h] [rbp-90h]
  unsigned int v69; // [rsp+8h] [rbp-90h]
  _QWORD *v70; // [rsp+8h] [rbp-90h]
  _QWORD *v71; // [rsp+10h] [rbp-88h]
  __int64 v72; // [rsp+10h] [rbp-88h]
  _QWORD *v73; // [rsp+10h] [rbp-88h]
  _QWORD *v74; // [rsp+10h] [rbp-88h]
  _QWORD *v75; // [rsp+10h] [rbp-88h]
  __int64 v76; // [rsp+10h] [rbp-88h]
  unsigned int v77; // [rsp+18h] [rbp-80h]
  __int64 v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+18h] [rbp-80h]
  unsigned int *v80; // [rsp+18h] [rbp-80h]
  unsigned int *v81; // [rsp+20h] [rbp-78h]
  unsigned int *v82; // [rsp+20h] [rbp-78h]
  __int64 v83[11]; // [rsp+40h] [rbp-58h] BYREF

  result = (__int64)&off_1C62200;
  a1[5] = &off_1C62200;
  v3 = (void *)a1[11];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = (void *)a1[8];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = (__int64 *)a1[4];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[3];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = (__int64 *)a1[4];
    if ( v5 )
LABEL_13:
      result = sub_186B220(v5 - 1);
  }
  v10 = (_QWORD **)a1[2];
  if ( v10 )
  {
    result = *((unsigned int *)v10 - 1);
    v11 = &v10[result];
    if ( v10 == v11 )
      goto LABEL_45;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        v13 = v12[5];
        if ( v13 )
        {
          v14 = *(unsigned int *)(v13 - 4);
          if ( (_DWORD)v14 )
          {
            v15 = v13 + 48 * v14;
            do
            {
              v21 = *(_QWORD *)(v13 + 32);
              if ( v21 )
              {
                v22 = *(_QWORD *)(v13 + 40);
                v9 = (*(_DWORD *)(v21 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v22, v21);
              }
              v16 = *(_QWORD *)(v13 + 16);
              if ( v16 )
              {
                v17 = *(_QWORD *)(v13 + 24);
                v9 = (*(_DWORD *)(v16 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v17, v16);
              }
              v18 = *(unsigned int **)v13;
              if ( *(_QWORD *)v13 )
              {
                v19 = *(_QWORD **)(v13 + 8);
                v20 = (*v18 + 0x3FFFFFFF) & 0x3FFFFFFF | *v18 & 0xC0000000;
                *v18 = v20;
                if ( (v20 & 0x3FFFFFFF) == 0 )
                {
                  v30 = (_DWORD *)v19[83];
                  if ( v30 )
                  {
                    v31 = (unsigned int)*(v30 - 1);
                    if ( (_DWORD)v31 != *(v30 - 2) )
                    {
                      v32 = v31 + 1;
                      *(_QWORD *)&v30[2 * v31] = v18;
                      *(v30 - 1) = v31 + 1;
                      goto LABEL_50;
                    }
                    v40 = (unsigned int)(3 * v31 + 1) >> 1;
                    v41 = 8 * v40 + 8;
                    if ( 8 * (int)v31 + 8 < (unsigned int)v41 && (unsigned int)v31 < v40 )
                    {
                      v77 = (unsigned int)(3 * v31 + 1) >> 1;
                      v71 = v19;
                      v64 = v18;
                      v42 = (unsigned int *)sub_186B300(v30 - 2, v41);
                      v19 = v71;
                      v30 = v42 + 2;
                      v71[83] = v42 + 2;
                      *v42 = v77;
                      v43 = v42[1];
                      v32 = v43 + 1;
                      *(_QWORD *)&v42[2 * v43 + 2] = v64;
                      v42[1] = v43 + 1;
                      goto LABEL_50;
                    }
LABEL_79:
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v83, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v83);
                    sub_233E40((__int64)v83);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v73 = v19;
                  v67 = v18;
                  v53 = sub_186B270(0x18u);
                  v19 = v73;
                  v32 = 1;
                  v30 = (_DWORD *)(v53 + 8);
                  *(_QWORD *)v53 = 2;
                  v73[83] = v53 + 8;
                  *(_QWORD *)(v53 + 8) = v67;
                  *(_DWORD *)(v53 + 4) = 1;
LABEL_50:
                  while ( v32 )
                  {
                    v33 = (unsigned int)(v32 - 1);
                    v34 = *(_QWORD *)&v30[2 * v33];
                    v35 = v32 - 1;
                    *(v30 - 1) = v33;
                    if ( *(char *)(v34 + 3) < 0 )
                    {
                      v44 = *(_QWORD *)(v34 + 8);
                      if ( v44 )
                      {
                        v45 = v19[81];
                        v9 = (*(_DWORD *)(v44 + 8))-- == 1;
                        if ( v9 )
                        {
                          v72 = v34;
                          v66 = v19;
                          sub_15D7BC0(v45, v44);
                          v34 = v72;
                          v19 = v66;
                        }
                      }
                      v65 = v19;
                      sub_17E9C40(v19[82], 16, v34);
                      v19 = v65;
                    }
                    else
                    {
                      v36 = *(unsigned int **)(v34 + 8);
                      v37 = (*v36 + 0x3FFFFFFF) & 0x3FFFFFFF | *v36 & 0xC0000000;
                      *v36 = v37;
                      if ( (v37 & 0x3FFFFFFF) == 0 )
                      {
                        if ( v35 == *(v30 - 2) )
                        {
                          v81 = v36;
                          v54 = (3 * v35 + 1) >> 1;
                          v78 = v34;
                          v55 = 8 * v54 + 8;
                          v74 = v19;
                          if ( 8 * v32 >= v55 )
                            goto LABEL_79;
                          v68 = (3 * v35 + 1) >> 1;
                          if ( v35 >= v54 )
                            goto LABEL_79;
                          v56 = (unsigned int *)sub_186B300(v30 - 2, v55);
                          v19 = v74;
                          v51 = v56 + 2;
                          v34 = v78;
                          v36 = v81;
                          v74[83] = v56 + 2;
                          *v56 = v68;
                        }
                        else
                        {
                          v51 = (_DWORD *)v19[83];
                        }
                        v52 = *(v51 - 1);
                        *(_QWORD *)&v51[2 * v52] = v36;
                        *(v51 - 1) = v52 + 1;
                      }
                      v38 = *(unsigned int **)(v34 + 16);
                      v39 = (*v38 + 0x3FFFFFFF) & 0x3FFFFFFF | *v38 & 0xC0000000;
                      *v38 = v39;
                      if ( (v39 & 0x3FFFFFFF) == 0 )
                      {
                        v46 = (_QWORD *)v19[83];
                        if ( v46 )
                        {
                          v47 = *((_DWORD *)v46 - 1);
                          if ( v47 == *((_DWORD *)v46 - 2) )
                          {
                            v82 = v38;
                            v57 = (3 * v47 + 1) >> 1;
                            v79 = v34;
                            v75 = v19;
                            if ( 8 * v47 + 8 >= 8 * v57 + 8 )
                              goto LABEL_79;
                            v69 = (3 * v47 + 1) >> 1;
                            if ( v47 >= v57 )
                              goto LABEL_79;
                            v58 = (unsigned int *)sub_186B300(v46 - 1, 8 * v57 + 8);
                            v19 = v75;
                            v59 = v58[1];
                            v46 = v58 + 2;
                            v34 = v79;
                            v75[83] = v58 + 2;
                            v38 = v82;
                            *v58 = v69;
                            LODWORD(v58) = v59;
                            v50 = (unsigned int **)&v46[v59];
                            v49 = (_DWORD)v58 + 1;
                          }
                          else
                          {
                            v48 = v47;
                            v49 = v47 + 1;
                            v50 = (unsigned int **)&v46[v48];
                          }
                        }
                        else
                        {
                          v80 = v38;
                          v76 = v34;
                          v70 = v19;
                          v60 = (_QWORD *)sub_186B270(0x18u);
                          v19 = v70;
                          v34 = v76;
                          v61 = v60;
                          *v60 = 2;
                          v38 = v80;
                          v49 = 1;
                          v46 = v61 + 1;
                          v70[83] = v46;
                          v50 = (unsigned int **)v46;
                        }
                        *v50 = v38;
                        *((_DWORD *)v46 - 1) = v49;
                      }
                      v63 = v19;
                      sub_17E9C40(v19[82], 24, v34);
                      v19 = v63;
                    }
                    v30 = (_DWORD *)v19[83];
                    if ( !v30 )
                      break;
                    v32 = *(v30 - 1);
                  }
                }
              }
              v13 += 48;
            }
            while ( v13 != v15 );
            v13 = v12[5];
          }
          sub_186B220((void *)(v13 - 8));
        }
        v23 = v12[3];
        if ( v23 )
        {
          v24 = v12[4];
          v9 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v9 )
            sub_15D7BC0(v24, v23);
        }
        v25 = (__int64 *)v12[2];
        if ( v25 )
        {
          v26 = *((unsigned int *)v25 - 1);
          if ( (_DWORD)v26 )
          {
            v27 = &v25[4 * v26];
            do
            {
              v28 = v25;
              v25 += 4;
              sub_234F80(v28);
            }
            while ( v25 != v27 );
            v25 = (__int64 *)v12[2];
          }
          sub_186B220(v25 - 1);
        }
        v29 = (void *)v12[1];
        if ( v29 )
        {
          sub_1695230(v12[1]);
          sub_186B220(v29);
        }
        result = sub_186B220(v12);
      }
      ++v10;
    }
    while ( v11 != v10 );
    v11 = (_QWORD **)a1[2];
    if ( v11 )
    {
LABEL_45:
      *((_DWORD *)v11 - 1) = 0;
      return sub_186B220(v11 - 1);
    }
  }
  return result;
}

