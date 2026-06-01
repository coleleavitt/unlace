void __fastcall sub_E3E140(__int64 a1, _QWORD **a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // rbp
  unsigned int v16; // r12d
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  unsigned int v31; // r15d
  __int64 v32; // r14
  unsigned int v33; // eax
  __int64 v34; // rdi
  int v35; // eax
  _QWORD *v36; // rdi
  _QWORD *v37; // rbp
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // r8d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rsi
  size_t v46; // rdi
  __int64 v47; // rax
  __int64 *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 *v56; // rbx
  __int64 *v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 *v60; // r14
  __int64 *v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  char **v68; // r12
  __int64 v69; // rdx
  char **v70; // r12
  __int64 v71; // rdx
  char **exception; // rbx
  __int64 v73; // rdx
  unsigned int v74; // [rsp+8h] [rbp-80h]
  unsigned int v75; // [rsp+8h] [rbp-80h]
  __int64 *v76; // [rsp+8h] [rbp-80h]
  _DWORD *v78; // [rsp+18h] [rbp-70h]
  __int64 v79; // [rsp+20h] [rbp-68h]
  unsigned int v80; // [rsp+2Ch] [rbp-5Ch]
  __int64 v81[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[4 * v4];
      do
      {
        v6 = (__int64 *)v3[3];
        if ( v6 )
        {
          v7 = &v6[*((unsigned int *)v6 - 1)];
          if ( v6 >= v7 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( *v6 )
              {
                v9 = v3[2];
                v10 = (*(_DWORD *)(v8 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v6 >= v7 )
                goto LABEL_11;
            }
            sub_15D7BC0(v9, v8);
            ++v6;
          }
          while ( v6 < v7 );
LABEL_11:
          v6 = (__int64 *)v3[3];
          if ( v6 )
LABEL_12:
            sub_186B220(v6 - 1);
        }
        v11 = (__int64 *)v3[1];
        if ( v11 )
        {
          v12 = &v11[*((unsigned int *)v11 - 1)];
          if ( v11 >= v12 )
            goto LABEL_21;
          do
          {
            while ( 1 )
            {
              v13 = *v11;
              if ( *v11 )
              {
                v14 = *v3;
                v10 = (*(_DWORD *)(v13 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v11 >= v12 )
                goto LABEL_20;
            }
            sub_15D7BC0(v14, v13);
            ++v11;
          }
          while ( v11 < v12 );
LABEL_20:
          v11 = (__int64 *)v3[1];
          if ( v11 )
LABEL_21:
            sub_186B220(v11 - 1);
        }
        v3 += 4;
      }
      while ( v3 != v5 );
      v3 = *(_QWORD **)(a1 + 8);
    }
    *((_DWORD *)v3 - 1) = 0;
    v15 = *a2;
    if ( *a2 )
    {
      v16 = 0;
      if ( *((_DWORD *)v15 - 1) )
      {
        while ( 1 )
        {
          v17 = *((unsigned int *)v3 - 1);
          v18 = &v3[4 * v17];
          if ( (_DWORD)v17 == *((_DWORD *)v3 - 2) )
          {
            v80 = (unsigned int)(3 * v17 + 1) >> 1;
            v46 = 32 * v80 + 8;
            if ( 32 * (int)v17 + 8 >= (unsigned int)v46 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_181416(v81, "Overflow encountered when expanding vector", v73);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v81);
              sub_233E40((__int64)v81);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = sub_186B270(v46);
            v48 = *(__int64 **)(a1 + 8);
            v49 = v47 + 8;
            v78 = (_DWORD *)v47;
            v79 = v47 + 8;
            if ( v48 )
            {
              v50 = *((unsigned int *)v48 - 1);
              *(_DWORD *)(v47 + 4) = v50;
              v51 = v48;
              v52 = &v48[4 * v50];
              if ( v48 != v52 )
              {
                do
                {
                  v53 = *v51;
                  v51 += 4;
                  v49 += 32;
                  *(_QWORD *)(v49 - 32) = v53;
                  v54 = *(v51 - 3);
                  *(v51 - 3) = 0;
                  *(_QWORD *)(v49 - 24) = v54;
                  *(_QWORD *)(v49 - 16) = *(v51 - 2);
                  v55 = *(v51 - 1);
                  *(v51 - 1) = 0;
                  *(_QWORD *)(v49 - 8) = v55;
                }
                while ( v51 != v52 );
              }
              v76 = &v48[4 * v50];
              if ( (_DWORD)v50 )
              {
                do
                {
                  v56 = (__int64 *)v48[3];
                  if ( v56 )
                  {
                    v57 = &v56[*((unsigned int *)v56 - 1)];
                    if ( v56 >= v57 )
                      goto LABEL_69;
                    do
                    {
                      while ( 1 )
                      {
                        v58 = *v56;
                        if ( *v56 )
                        {
                          v59 = v48[2];
                          v10 = (*(_DWORD *)(v58 + 8))-- == 1;
                          if ( v10 )
                            break;
                        }
                        if ( ++v56 >= v57 )
                          goto LABEL_68;
                      }
                      sub_15D7BC0(v59, v58);
                      ++v56;
                    }
                    while ( v56 < v57 );
LABEL_68:
                    v56 = (__int64 *)v48[3];
                    if ( v56 )
LABEL_69:
                      sub_186B220(v56 - 1);
                  }
                  v60 = (__int64 *)v48[1];
                  if ( v60 )
                  {
                    v61 = &v60[*((unsigned int *)v60 - 1)];
                    if ( v60 >= v61 )
                      goto LABEL_78;
                    do
                    {
                      while ( 1 )
                      {
                        v62 = *v60;
                        if ( *v60 )
                        {
                          v63 = *v48;
                          v10 = (*(_DWORD *)(v62 + 8))-- == 1;
                          if ( v10 )
                            break;
                        }
                        if ( ++v60 >= v61 )
                          goto LABEL_77;
                      }
                      sub_15D7BC0(v63, v62);
                      ++v60;
                    }
                    while ( v60 < v61 );
LABEL_77:
                    v60 = (__int64 *)v48[1];
                    if ( v60 )
LABEL_78:
                      sub_186B220(v60 - 1);
                  }
                  v48 += 4;
                }
                while ( v48 != v76 );
                v48 = *(__int64 **)(a1 + 8);
              }
              sub_186B220(v48 - 1);
              v64 = v79;
              v18 = (_QWORD *)(v79 + 32LL * (unsigned int)v78[1]);
            }
            else
            {
              *(_DWORD *)(v47 + 4) = 0;
              v18 = (_QWORD *)(v47 + 8);
              v64 = v47 + 8;
            }
            *(_QWORD *)(a1 + 8) = v64;
            *v78 = v80;
          }
LABEL_27:
          v19 = *v15;
          v18[1] = 0;
          v20 = v15[1];
          *v18 = v19;
          if ( v20 )
          {
            v21 = nullptr;
            v22 = 0;
            do
            {
              if ( v22 >= *(_DWORD *)(v20 - 4) )
                break;
              v23 = *(_QWORD *)(v20 + 8LL * v22);
              if ( v23 )
                ++*(_DWORD *)(v23 + 8);
              if ( v21 )
              {
                v24 = *((_DWORD *)v21 - 1);
                if ( v24 == *((_DWORD *)v21 - 2) )
                {
                  v42 = (3 * v24 + 1) >> 1;
                  v43 = 8 * v42 + 8;
                  if ( 8 * v24 + 8 >= (unsigned int)v43 || v24 >= v42 )
                  {
                    v70 = (char **)__cxa_allocate_exception(0x28u);
                    sub_181416(v81, "Overflow encountered when expanding vector", v71);
                    *v70 = (char *)off_1C63128;
                    sub_2333C0(v70 + 1, v81);
                    sub_233E40((__int64)v81);
                    __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v75 = (3 * v24 + 1) >> 1;
                  v44 = (unsigned int *)sub_186B300(v21 - 1, v43);
                  v45 = v44[1];
                  v21 = v44 + 2;
                  v18[1] = v44 + 2;
                  *v44 = v75;
                  LODWORD(v44) = v45;
                  v27 = &v21[v45];
                  v20 = v15[1];
                  v26 = (_DWORD)v44 + 1;
                }
                else
                {
                  v25 = v24;
                  v26 = v24 + 1;
                  v27 = &v21[v25];
                }
              }
              else
              {
                v66 = (_QWORD *)sub_186B270(0x18u);
                v21 = v66 + 1;
                *v66 = 2;
                v26 = 1;
                v18[1] = v21;
                v27 = v21;
                v20 = v15[1];
              }
              *v27 = v23;
              ++v22;
              *((_DWORD *)v21 - 1) = v26;
            }
            while ( v20 );
          }
          v28 = v15[2];
          v18[3] = 0;
          v29 = v15[3];
          v18[2] = v28;
          if ( v29 )
          {
            v30 = nullptr;
            v31 = 0;
            do
            {
              if ( v31 >= *(_DWORD *)(v29 - 4) )
                break;
              v32 = *(_QWORD *)(v29 + 8LL * v31);
              if ( v32 )
                ++*(_DWORD *)(v32 + 8);
              if ( v30 )
              {
                v33 = *((_DWORD *)v30 - 1);
                if ( v33 == *((_DWORD *)v30 - 2) )
                {
                  v38 = (3 * v33 + 1) >> 1;
                  v39 = 8 * v38 + 8;
                  if ( 8 * v33 + 8 >= (unsigned int)v39 || v33 >= v38 )
                  {
                    v68 = (char **)__cxa_allocate_exception(0x28u);
                    sub_181416(v81, "Overflow encountered when expanding vector", v69);
                    *v68 = (char *)off_1C63128;
                    sub_2333C0(v68 + 1, v81);
                    sub_233E40((__int64)v81);
                    __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v74 = (3 * v33 + 1) >> 1;
                  v40 = (unsigned int *)sub_186B300(v30 - 1, v39);
                  v41 = v40[1];
                  v30 = v40 + 2;
                  v18[3] = v40 + 2;
                  *v40 = v74;
                  LODWORD(v40) = v41;
                  v36 = &v30[v41];
                  v29 = v15[3];
                  v35 = (_DWORD)v40 + 1;
                }
                else
                {
                  v34 = v33;
                  v35 = v33 + 1;
                  v36 = &v30[v34];
                }
              }
              else
              {
                v65 = (_QWORD *)sub_186B270(0x18u);
                v30 = v65 + 1;
                *v65 = 2;
                v35 = 1;
                v18[3] = v30;
                v36 = v30;
                v29 = v15[3];
              }
              *v36 = v32;
              ++v31;
              *((_DWORD *)v30 - 1) = v35;
            }
            while ( v29 );
          }
          v3 = *(_QWORD **)(a1 + 8);
          ++v16;
          v37 = *a2;
          ++*((_DWORD *)v3 - 1);
          if ( !v37 || v16 >= *((_DWORD *)v37 - 1) )
            break;
          v15 = &v37[4 * v16];
        }
      }
    }
  }
  else
  {
    v15 = *a2;
    if ( *a2 && *((_DWORD *)v15 - 1) )
    {
      v16 = 0;
      v67 = (_QWORD *)sub_186B270(0x48u);
      v18 = v67 + 1;
      *v67 = 2;
      *(_QWORD *)(a1 + 8) = v67 + 1;
      goto LABEL_27;
    }
  }
}

