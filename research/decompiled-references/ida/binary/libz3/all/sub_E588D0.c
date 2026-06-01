unsigned int *__fastcall sub_E588D0(unsigned int **a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  unsigned int *result; // rax
  __int64 *v6; // r15
  unsigned int *v7; // r12
  unsigned int *v8; // r13
  __int64 v9; // r14
  _DWORD *v10; // rdx
  int v11; // edi
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // r14
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  bool v22; // zf
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  _DWORD *v25; // rdi
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r10d
  unsigned int *v31; // r8
  unsigned int v32; // eax
  unsigned int *v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rax
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rdi
  int v45; // eax
  unsigned int **v46; // rdi
  __int64 v47; // rax
  _DWORD *v48; // rsi
  int v49; // eax
  unsigned int v50; // r9d
  unsigned int *v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // r9d
  unsigned int v54; // eax
  unsigned int *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rsi
  char **exception; // rbp
  char **v59; // rbp
  _QWORD *v60; // [rsp+8h] [rbp-90h]
  _QWORD *v61; // [rsp+8h] [rbp-90h]
  _QWORD *v62; // [rsp+8h] [rbp-90h]
  _QWORD *v63; // [rsp+8h] [rbp-90h]
  _QWORD *v64; // [rsp+8h] [rbp-90h]
  unsigned int v65; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+8h] [rbp-90h]
  _QWORD *v67; // [rsp+8h] [rbp-90h]
  unsigned int *v68; // [rsp+10h] [rbp-88h]
  unsigned int *v69; // [rsp+10h] [rbp-88h]
  __int64 v70; // [rsp+10h] [rbp-88h]
  _QWORD *v71; // [rsp+10h] [rbp-88h]
  _QWORD *v72; // [rsp+10h] [rbp-88h]
  __int64 v73; // [rsp+10h] [rbp-88h]
  unsigned int v74; // [rsp+18h] [rbp-80h]
  __int64 v75; // [rsp+18h] [rbp-80h]
  __int64 v76; // [rsp+18h] [rbp-80h]
  unsigned int *v77; // [rsp+18h] [rbp-80h]
  unsigned int *v78; // [rsp+20h] [rbp-78h]
  unsigned int *v79; // [rsp+20h] [rbp-78h]
  __int64 v80[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(*a1 - 2);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 32 * v3 + 8;
    if ( 32 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v80, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v80);
      sub_233E40((__int64)v80);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = (unsigned int *)sub_186B270(v4);
    v6 = (__int64 *)*a1;
    v7 = result;
    v8 = result + 2;
    if ( *a1 )
    {
      v9 = *((unsigned int *)v6 - 1);
      v10 = result + 2;
      result[1] = v9;
      v11 = v9;
      v12 = v6;
      v13 = &v6[4 * v9];
      if ( v6 != v13 )
      {
        do
        {
          v14 = *v12;
          v12 += 4;
          v10 += 8;
          *((_QWORD *)v10 - 4) = v14;
          v15 = *(v12 - 3);
          *(v12 - 3) = 0;
          *((_QWORD *)v10 - 3) = v15;
          v16 = *(v12 - 2);
          *(v12 - 2) = 0;
          *((_QWORD *)v10 - 2) = v16;
          v17 = *(v12 - 1);
          *(v12 - 1) = 0;
          *((_QWORD *)v10 - 1) = v17;
        }
        while ( v12 != v13 );
      }
      v18 = &v6[4 * v9];
      if ( v11 )
      {
        do
        {
          while ( 1 )
          {
            v23 = v6[1];
            v24 = (_QWORD *)*v6;
            if ( v23 )
            {
              v22 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v22 )
              {
                sub_15D7BC0(v24, v23);
                v24 = (_QWORD *)*v6;
              }
            }
            v19 = (unsigned int *)v6[3];
            if ( v19 )
            {
              v20 = (*v19 + 0x3FFFFFFF) & 0x3FFFFFFF | *v19 & 0xC0000000;
              *v19 = v20;
              if ( (v20 & 0x3FFFFFFF) == 0 )
              {
                v25 = (_DWORD *)v24[83];
                if ( v25 )
                {
                  v26 = (unsigned int)*(v25 - 1);
                  if ( (_DWORD)v26 == *(v25 - 2) )
                  {
                    v38 = (unsigned int)(3 * v26 + 1) >> 1;
                    v39 = 8 * v38 + 8;
                    if ( 8 * (int)v26 + 8 >= (unsigned int)v39 || (unsigned int)v26 >= v38 )
                    {
LABEL_57:
                      v59 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v80, "Overflow encountered when expanding vector");
                      *v59 = (char *)off_1C63128;
                      sub_2333C0(v59 + 1, v80);
                      sub_233E40((__int64)v80);
                      __cxa_throw(
                        v59,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v74 = (unsigned int)(3 * v26 + 1) >> 1;
                    v68 = v19;
                    v62 = v24;
                    v40 = (unsigned int *)sub_186B300(v25 - 2, v39);
                    v24 = v62;
                    v25 = v40 + 2;
                    v62[83] = v40 + 2;
                    *v40 = v74;
                    v41 = v40[1];
                    v27 = v41 + 1;
                    *(_QWORD *)&v40[2 * v41 + 2] = v68;
                    v40[1] = v41 + 1;
                  }
                  else
                  {
                    v27 = v26 + 1;
                    *(_QWORD *)&v25[2 * v26] = v19;
                    *(v25 - 1) = v26 + 1;
                  }
                }
                else
                {
                  v69 = v19;
                  v63 = v24;
                  v47 = sub_186B270(0x18u);
                  v24 = v63;
                  v27 = 1;
                  v25 = (_DWORD *)(v47 + 8);
                  *(_QWORD *)v47 = 2;
                  v63[83] = v47 + 8;
                  *(_QWORD *)(v47 + 8) = v69;
                  *(_DWORD *)(v47 + 4) = 1;
                }
                if ( v27 )
                {
                  while ( 1 )
                  {
                    v28 = (unsigned int)(v27 - 1);
                    v29 = *(_QWORD *)&v25[2 * v28];
                    v30 = v27 - 1;
                    *(v25 - 1) = v28;
                    if ( *(char *)(v29 + 3) < 0 )
                    {
                      v35 = *(_QWORD *)(v29 + 8);
                      if ( v35 )
                      {
                        v36 = v24[81];
                        v22 = (*(_DWORD *)(v35 + 8))-- == 1;
                        if ( v22 )
                        {
                          v70 = v29;
                          v64 = v24;
                          sub_15D7BC0(v36, v35);
                          v29 = v70;
                          v24 = v64;
                        }
                      }
                      v61 = v24;
                      sub_17E9C40(v24[82], 16, v29);
                      v24 = v61;
                    }
                    else
                    {
                      v31 = *(unsigned int **)(v29 + 8);
                      v32 = (*v31 + 0x3FFFFFFF) & 0x3FFFFFFF | *v31 & 0xC0000000;
                      *v31 = v32;
                      if ( (v32 & 0x3FFFFFFF) == 0 )
                      {
                        if ( v30 == *(v25 - 2) )
                        {
                          v79 = v31;
                          v53 = (3 * v30 + 1) >> 1;
                          v76 = v29;
                          v54 = 8 * v53 + 8;
                          v72 = v24;
                          if ( 8 * v27 >= v54 )
                            goto LABEL_57;
                          v66 = (3 * v30 + 1) >> 1;
                          if ( v30 >= v53 )
                            goto LABEL_57;
                          v55 = (unsigned int *)sub_186B300(v25 - 2, v54);
                          v24 = v72;
                          v48 = v55 + 2;
                          v29 = v76;
                          v31 = v79;
                          v72[83] = v55 + 2;
                          *v55 = v66;
                        }
                        else
                        {
                          v48 = (_DWORD *)v24[83];
                        }
                        v49 = *(v48 - 1);
                        *(_QWORD *)&v48[2 * v49] = v31;
                        *(v48 - 1) = v49 + 1;
                      }
                      v33 = *(unsigned int **)(v29 + 16);
                      v34 = (*v33 + 0x3FFFFFFF) & 0x3FFFFFFF | *v33 & 0xC0000000;
                      *v33 = v34;
                      if ( (v34 & 0x3FFFFFFF) == 0 )
                      {
                        v42 = (_QWORD *)v24[83];
                        if ( v42 )
                        {
                          v43 = *((_DWORD *)v42 - 1);
                          if ( v43 == *((_DWORD *)v42 - 2) )
                          {
                            v78 = v33;
                            v50 = (3 * v43 + 1) >> 1;
                            v75 = v29;
                            v71 = v24;
                            if ( 8 * v43 + 8 >= 8 * v50 + 8 )
                              goto LABEL_57;
                            v65 = (3 * v43 + 1) >> 1;
                            if ( v43 >= v50 )
                              goto LABEL_57;
                            v51 = (unsigned int *)sub_186B300(v42 - 1, 8 * v50 + 8);
                            v24 = v71;
                            v52 = v51[1];
                            v42 = v51 + 2;
                            v29 = v75;
                            v71[83] = v51 + 2;
                            v33 = v78;
                            *v51 = v65;
                            LODWORD(v51) = v52;
                            v46 = (unsigned int **)&v42[v52];
                            v45 = (_DWORD)v51 + 1;
                          }
                          else
                          {
                            v44 = v43;
                            v45 = v43 + 1;
                            v46 = (unsigned int **)&v42[v44];
                          }
                        }
                        else
                        {
                          v77 = v33;
                          v73 = v29;
                          v67 = v24;
                          v56 = (_QWORD *)sub_186B270(0x18u);
                          v24 = v67;
                          v29 = v73;
                          v57 = v56;
                          *v56 = 2;
                          v33 = v77;
                          v45 = 1;
                          v42 = v57 + 1;
                          v67[83] = v42;
                          v46 = (unsigned int **)v42;
                        }
                        *v46 = v33;
                        *((_DWORD *)v42 - 1) = v45;
                      }
                      v60 = v24;
                      sub_17E9C40(v24[82], 24, v29);
                      v24 = v60;
                    }
                    v25 = (_DWORD *)v24[83];
                    if ( v25 )
                    {
                      v27 = *(v25 - 1);
                      if ( v27 )
                        continue;
                    }
                    break;
                  }
                }
                v24 = (_QWORD *)*v6;
              }
            }
            v21 = v6[2];
            if ( v21 )
            {
              v22 = (*(_DWORD *)(v21 + 8))-- == 1;
              if ( v22 )
                break;
            }
            v6 += 4;
            if ( v6 == v18 )
              goto LABEL_18;
          }
          v6 += 4;
          sub_15D7BC0(v24, v21);
        }
        while ( v6 != v18 );
LABEL_18:
        v6 = (__int64 *)*a1;
      }
      result = (unsigned int *)sub_186B220(v6 - 1);
    }
    else
    {
      result[1] = 0;
    }
    *a1 = v8;
    *v7 = v3;
  }
  else
  {
    v37 = (_QWORD *)sub_186B270(0x48u);
    *v37 = 2;
    result = (unsigned int *)(v37 + 1);
    *a1 = result;
  }
  return result;
}

