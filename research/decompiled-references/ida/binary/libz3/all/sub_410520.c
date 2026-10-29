void __fastcall sub_410520(__int64 a1, __int64 a2, double a3)
{
  char **v3; // rbx
  char **exception; // r12
  __int64 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rdi
  unsigned int v25; // r10d
  unsigned int v26; // esi
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _DWORD *v31; // r15
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  _QWORD *v36; // rsi
  __int64 *v37; // rax
  unsigned int v38; // r15d
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  _QWORD *v42; // rsi
  unsigned int v43; // r9d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rsi
  void (__fastcall ***v47)(void *); // r15
  _DWORD *v48; // r15
  __int64 *v49; // r15
  __int64 v50; // rdx
  _QWORD *v51; // rbp
  __int64 *v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 *v55; // r15
  __int64 v56; // rdx
  _QWORD *v57; // rbp
  __int64 *v58; // rbx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 *v61; // r15
  __int64 v62; // rdx
  _QWORD *v63; // rbp
  __int64 *v64; // rbx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rdi
  unsigned int v68; // ecx
  size_t v69; // rsi
  unsigned int v70; // r12d
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // [rsp+8h] [rbp-90h]
  __int64 v76; // [rsp+8h] [rbp-90h]
  __int64 *v77; // [rsp+8h] [rbp-90h]
  __int64 *v78; // [rsp+8h] [rbp-90h]
  __int64 *v79; // [rsp+8h] [rbp-90h]
  __int64 v80; // [rsp+8h] [rbp-90h]
  __int64 *i; // [rsp+18h] [rbp-80h]
  __int64 v82; // [rsp+20h] [rbp-78h]
  __int64 v83; // [rsp+20h] [rbp-78h]
  unsigned int v84; // [rsp+2Ch] [rbp-6Ch]
  __int64 v85; // [rsp+30h] [rbp-68h]
  __int64 v87[11]; // [rsp+40h] [rbp-58h] BYREF

  v5 = *(__int64 **)a2;
  v6 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v6 )
  {
    while ( (unsigned __int64)*v5 <= 1 )
    {
      v5 += 2;
      if ( (__int64 *)v6 == v5 )
        return;
    }
    if ( (__int64 *)v6 != v5 )
    {
      v7 = *v5;
      do
      {
        v8 = *(unsigned int *)(a1 + 272);
        v9 = sub_3FCD00(*(_QWORD **)(a1 + 264), v8, v7);
        if ( v9 )
        {
          v10 = v9[1];
          v11 = v5[1];
          v12 = *(__int64 **)(v10 + 192);
          v85 = v10;
          if ( v12 )
          {
            for ( i = &v12[*((unsigned int *)v12 - 1)]; i != v12; ++v12 )
            {
              v13 = sub_186B270(0x70u);
              v14 = *v12;
              v15 = (_QWORD *)v13;
              v75 = *(_DWORD *)(*v12 + 96);
              sub_407990((_QWORD *)*v12, v8, v16, v75, v17, v18);
              sub_400BE0((__int64)v15, *(_QWORD *)(*(_QWORD *)(v11 + 176) + 8LL), *(_QWORD *)(v14 + 16), v75);
              v23 = v15[7];
              ++*(_DWORD *)v15;
              if ( v23 )
              {
                v21 = *(_DWORD *)(v23 - 4);
                if ( v21 )
                {
                  v19 = *v12;
                  v24 = (_QWORD *)v15[9];
                  v22 = *(_QWORD *)(*v12 + 72);
                  if ( v24 && (v25 = *((_DWORD *)v24 - 1)) != 0 )
                  {
                    v26 = 0;
                    while ( 1 )
                    {
                      v20 = *(_QWORD *)(*v12 + 72);
                      v27 = 0;
                      while ( v24[v27 + v26] == *(_QWORD *)v20 )
                      {
                        ++v27;
                        v20 += 8;
                        if ( v21 == v27 )
                          goto LABEL_18;
                      }
                      if ( v27 == v21 )
                        break;
                      v26 += v21;
                      if ( v26 >= v25 )
                        goto LABEL_37;
                    }
                  }
                  else
                  {
LABEL_37:
                    if ( v22 )
                    {
                      v38 = 0;
                      do
                      {
                        if ( v38 >= *(_DWORD *)(v22 - 4) )
                          break;
                        v20 = *(_QWORD *)(v22 + 8LL * v38);
                        if ( v20 )
                          ++*(_DWORD *)(v20 + 8);
                        if ( v24 )
                        {
                          v39 = *((_DWORD *)v24 - 1);
                          if ( v39 == *((_DWORD *)v24 - 2) )
                          {
                            v43 = (3 * v39 + 1) >> 1;
                            v44 = 8 * v43 + 8;
                            if ( 8 * v39 + 8 >= (unsigned int)v44 || v39 >= v43 )
                            {
                              exception = (char **)__cxa_allocate_exception(0x28u);
                              sub_3FCFD0(v87, "Overflow encountered when expanding vector");
                              *exception = (char *)off_1C63128;
                              sub_2333C0(exception + 1, v87);
                              sub_233E40((__int64)v87);
                              __cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v84 = (3 * v39 + 1) >> 1;
                            v82 = v20;
                            v76 = v19;
                            v45 = (unsigned int *)sub_186B300(v24 - 1, v44);
                            v46 = v45[1];
                            v24 = v45 + 2;
                            v19 = v76;
                            v20 = v82;
                            v15[9] = v45 + 2;
                            *v45 = v84;
                            LODWORD(v45) = v46;
                            v42 = &v24[v46];
                            v22 = *(_QWORD *)(v76 + 72);
                            v41 = (_DWORD)v45 + 1;
                          }
                          else
                          {
                            v40 = v39;
                            v41 = v39 + 1;
                            v42 = &v24[v40];
                          }
                        }
                        else
                        {
                          v83 = v20;
                          v80 = v19;
                          v73 = (_QWORD *)sub_186B270(0x18u);
                          v19 = v80;
                          v24 = v73 + 1;
                          v20 = v83;
                          *v73 = 2;
                          v42 = v24;
                          v41 = 1;
                          v15[9] = v24;
                          v22 = *(_QWORD *)(v80 + 72);
                        }
                        *v42 = v20;
                        ++v38;
                        *((_DWORD *)v24 - 1) = v41;
                      }
                      while ( v22 );
                    }
                  }
                }
              }
LABEL_18:
              v8 = (__int64)v15;
              sub_40F760((_QWORD **)(v11 + 176), (__int64)v15, v19, v20, v21, v22, a3);
              v28 = (*(_DWORD *)v15)-- == 1;
              if ( v28 )
              {
                v47 = (void (__fastcall ***)(void *))v15[11];
                if ( v47 )
                {
                  v28 = (*((_DWORD *)v47 + 4))-- == 1;
                  if ( v28 )
                  {
                    (**v47)(v47);
                    sub_186B220(v47);
                  }
                }
                v48 = (_DWORD *)v15[10];
                if ( v48 )
                {
                  v28 = (*v48)-- == 1;
                  if ( v28 )
                  {
                    sub_41CB00(v48);
                    sub_186B220(v48);
                  }
                }
                v49 = (__int64 *)v15[9];
                if ( v49 )
                {
                  v50 = *((unsigned int *)v49 - 1);
                  if ( v49 >= &v49[v50] )
                    goto LABEL_64;
                  v77 = v5;
                  v51 = v15;
                  v52 = &v49[v50];
                  do
                  {
                    while ( 1 )
                    {
                      v53 = *v49;
                      if ( *v49 )
                      {
                        v54 = v51[8];
                        v28 = (*(_DWORD *)(v53 + 8))-- == 1;
                        if ( v28 )
                          break;
                      }
                      if ( ++v49 >= v52 )
                        goto LABEL_63;
                    }
                    sub_15D7BC0(v54, v53);
                    ++v49;
                  }
                  while ( v49 < v52 );
LABEL_63:
                  v15 = v51;
                  v5 = v77;
                  v49 = (__int64 *)v15[9];
                  if ( v49 )
LABEL_64:
                    sub_186B220(v49 - 1);
                }
                v55 = (__int64 *)v15[7];
                if ( v55 )
                {
                  v56 = *((unsigned int *)v55 - 1);
                  if ( v55 >= &v55[v56] )
                    goto LABEL_73;
                  v78 = v5;
                  v57 = v15;
                  v58 = &v55[v56];
                  do
                  {
                    while ( 1 )
                    {
                      v59 = *v55;
                      if ( *v55 )
                      {
                        v60 = v57[6];
                        v28 = (*(_DWORD *)(v59 + 8))-- == 1;
                        if ( v28 )
                          break;
                      }
                      if ( ++v55 >= v58 )
                        goto LABEL_72;
                    }
                    sub_15D7BC0(v60, v59);
                    ++v55;
                  }
                  while ( v55 < v58 );
LABEL_72:
                  v15 = v57;
                  v5 = v78;
                  v55 = (__int64 *)v15[7];
                  if ( v55 )
LABEL_73:
                    sub_186B220(v55 - 1);
                }
                v61 = (__int64 *)v15[5];
                if ( v61 )
                {
                  v62 = *((unsigned int *)v61 - 1);
                  if ( v61 >= &v61[v62] )
                    goto LABEL_82;
                  v79 = v5;
                  v63 = v15;
                  v64 = &v61[v62];
                  do
                  {
                    while ( 1 )
                    {
                      v65 = *v61;
                      if ( *v61 )
                      {
                        v66 = v63[4];
                        v28 = (*(_DWORD *)(v65 + 8))-- == 1;
                        if ( v28 )
                          break;
                      }
                      if ( ++v61 >= v64 )
                        goto LABEL_81;
                    }
                    sub_15D7BC0(v66, v65);
                    ++v61;
                  }
                  while ( v61 < v64 );
LABEL_81:
                  v15 = v63;
                  v5 = v79;
                  v61 = (__int64 *)v15[5];
                  if ( v61 )
LABEL_82:
                    sub_186B220(v61 - 1);
                }
                v8 = v15[2];
                if ( v8 )
                {
                  v67 = v15[3];
                  v28 = (*(_DWORD *)(v8 + 8))-- == 1;
                  if ( v28 )
                    sub_15D7BC0(v67, v8);
                }
                sub_186B220(v15);
              }
            }
          }
          *(_BYTE *)(v11 + 212) = 0;
          v29 = *(_QWORD *)(v85 + 200);
          if ( v29 )
          {
            v30 = 0;
            do
            {
              if ( v30 >= *(_DWORD *)(v29 - 4) )
                break;
              v31 = *(_DWORD **)(v29 + 8LL * v30);
              if ( v31 )
                ++*v31;
              v32 = *(_QWORD **)(v11 + 200);
              if ( v32 )
              {
                v33 = *((_DWORD *)v32 - 1);
                if ( v33 == *((_DWORD *)v32 - 2) )
                {
                  v68 = (3 * v33 + 1) >> 1;
                  v69 = 8 * v68 + 8;
                  v70 = v68;
                  if ( 8 * v33 + 8 >= (unsigned int)v69 || v33 >= v68 )
                  {
                    v3 = (char **)__cxa_allocate_exception(0x28u);
                    sub_3FCFD0(v87, "Overflow encountered when expanding vector");
                    *v3 = (char *)off_1C63128;
                    sub_2333C0(v3 + 1, v87);
                    sub_233E40((__int64)v87);
                    __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v71 = (unsigned int *)sub_186B300(v32 - 1, v69);
                  v72 = v71[1];
                  v32 = v71 + 2;
                  *(_QWORD *)(v11 + 200) = v71 + 2;
                  *v71 = v70;
                  LODWORD(v71) = v72;
                  v36 = &v32[v72];
                  v29 = *(_QWORD *)(v85 + 200);
                  v35 = (_DWORD)v71 + 1;
                }
                else
                {
                  v34 = v33;
                  v35 = v33 + 1;
                  v36 = &v32[v34];
                }
              }
              else
              {
                v74 = (_QWORD *)sub_186B270(0x18u);
                v32 = v74 + 1;
                *v74 = 2;
                v36 = v32;
                v35 = 1;
                *(_QWORD *)(v11 + 200) = v32;
                v29 = *(_QWORD *)(v85 + 200);
              }
              *v36 = v31;
              ++v30;
              *((_DWORD *)v32 - 1) = v35;
            }
            while ( v29 );
          }
        }
        v37 = v5 + 2;
        if ( (__int64 *)v6 == v5 + 2 )
          break;
        while ( 1 )
        {
          v7 = *v37;
          v5 = v37;
          if ( (unsigned __int64)*v37 > 1 )
            break;
          v37 += 2;
          if ( (__int64 *)v6 == v37 )
            return;
        }
      }
      while ( (__int64 *)v6 != v37 );
    }
  }
}

