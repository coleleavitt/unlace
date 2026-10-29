__int64 __fastcall sub_8206D0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5, int a6)
{
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  __int64 v10; // rax
  __int64 *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rbx
  unsigned int i; // ebx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  __int64 *j; // rcx
  __int64 v23; // rdx
  unsigned int **v24; // r13
  __int64 v25; // rdx
  unsigned int **v26; // r14
  __int64 v27; // r12
  __int64 v28; // rdx
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // edx
  __int64 *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  unsigned int v39; // r15d
  unsigned int v40; // ecx
  unsigned int *v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // rcx
  int v45; // edx
  __int64 *v46; // rcx
  unsigned int v47; // r13d
  unsigned int v48; // ecx
  unsigned int *v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r12d
  unsigned int v52; // ecx
  unsigned int *v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  int v58; // [rsp+0h] [rbp-68h]
  int v59; // [rsp+0h] [rbp-68h]
  int v60; // [rsp+8h] [rbp-60h]
  int v61; // [rsp+8h] [rbp-60h]
  __int64 v62; // [rsp+10h] [rbp-58h] BYREF
  void *v63; // [rsp+18h] [rbp-50h]

  v10 = *(_QWORD *)(a1 + 456);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(__int64 **)(a1 + 464);
  if ( v11 )
  {
    *((_DWORD *)v11 - 1) = 0;
    if ( !a2 )
      goto LABEL_11;
  }
  else if ( !a2 )
  {
    return a1 + 456;
  }
  if ( (unsigned __int8)sub_163DF10((int)a1 + 184, *a2, (int)a3, a4, a5, a6, v58, v60, v62, v63) )
  {
    v16 = a2;
  }
  else
  {
    v16 = (_QWORD *)a2[7];
    if ( a2 == v16 )
    {
LABEL_9:
      v11 = *(__int64 **)(a1 + 464);
      goto LABEL_10;
    }
    while ( !(unsigned __int8)sub_163DF10((int)a1 + 184, *v16, v12, v13, v14, v15, v59, v61, v62, v63) )
    {
      v16 = (_QWORD *)v16[7];
      if ( a2 == v16 )
        goto LABEL_9;
    }
  }
  v11 = *(__int64 **)(a1 + 464);
  if ( *((_BYTE *)v16 + 8) )
  {
    *a3 = v16;
LABEL_10:
    if ( !v11 )
      return a1 + 456;
    goto LABEL_11;
  }
  *((_BYTE *)v16 + 8) = 1;
  if ( v11 )
  {
    v43 = *((_DWORD *)v11 - 1);
    if ( v43 == *((_DWORD *)v11 - 2) )
    {
      v51 = (3 * v43 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v43 + 8 >= v52 || v43 >= v51 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v62, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v62);
        sub_233E40((__int64)&v62);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v11 - 1, v52);
      v11 = (__int64 *)(v53 + 2);
      v54 = v53[1];
      *v53 = v51;
      *(_QWORD *)(a1 + 464) = v53 + 2;
      LODWORD(v53) = v54;
      v46 = &v11[v54];
      v45 = (_DWORD)v53 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v11[v44];
    }
  }
  else
  {
    v57 = (_QWORD *)sub_186B270(0x18u);
    v45 = 1;
    *v57 = 2;
    v11 = v57 + 1;
    *(_QWORD *)(a1 + 464) = v11;
    v46 = v11;
  }
  *v46 = (__int64)v16;
  *((_DWORD *)v11 - 1) = v45;
  *a3 = v16;
LABEL_11:
  for ( i = 0; i < *((_DWORD *)v11 - 1); ++i )
  {
    v18 = (_QWORD *)v11[i];
    v19 = *v18;
    if ( !*(_WORD *)(*v18 + 4LL) )
    {
      v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      if ( v20 )
      {
        if ( *(_DWORD *)(a1 + 200) == *v20 )
        {
          if ( v20[1] )
          {
            v11 = *(__int64 **)(a1 + 464);
            if ( v20[1] == 2 )
            {
              v24 = (unsigned int **)(v19 + 32);
              v25 = *(unsigned int *)(v19 + 24);
              v26 = &v24[v25];
              if ( v25 * 8 )
              {
                do
                {
                  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
                  if ( v27 )
                  {
                    v28 = **v24;
                    if ( (unsigned int)v28 >= *(_DWORD *)(v27 - 4) )
                      v27 = 0;
                    else
                      v27 = *(_QWORD *)(v27 + 8 * v28);
                  }
                  if ( !*(_BYTE *)(v27 + 8) )
                  {
                    *(_BYTE *)(v27 + 8) = 1;
                    if ( v11 )
                    {
                      v29 = *((_DWORD *)v11 - 1);
                      if ( v29 == *((_DWORD *)v11 - 2) )
                      {
                        v39 = (3 * v29 + 1) >> 1;
                        v40 = 8 * v39 + 8;
                        if ( 8 * v29 + 8 >= v40 || v29 >= v39 )
                        {
                          v6 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(&v62, "Overflow encountered when expanding vector");
                          *v6 = (char *)off_1C63128;
                          sub_2333C0(v6 + 1, &v62);
                          sub_233E40((__int64)&v62);
                          __cxa_throw(
                            v6,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v41 = (unsigned int *)sub_186B300(v11 - 1, v40);
                        v11 = (__int64 *)(v41 + 2);
                        v42 = v41[1];
                        *v41 = v39;
                        *(_QWORD *)(a1 + 464) = v41 + 2;
                        LODWORD(v41) = v42;
                        v32 = &v11[v42];
                        v31 = (_DWORD)v41 + 1;
                      }
                      else
                      {
                        v30 = v29;
                        v31 = v29 + 1;
                        v32 = &v11[v30];
                      }
                    }
                    else
                    {
                      v55 = (_QWORD *)sub_186B270(0x18u);
                      v31 = 1;
                      *v55 = 2;
                      v11 = v55 + 1;
                      *(_QWORD *)(a1 + 464) = v11;
                      v32 = v11;
                    }
                    *v32 = v27;
                    *((_DWORD *)v11 - 1) = v31;
                  }
                  ++v24;
                }
                while ( v26 != v24 );
              }
            }
            goto LABEL_17;
          }
          v33 = *(_QWORD **)(a1 + 456);
          v34 = v18[22];
          if ( v33 )
          {
            v35 = *((_DWORD *)v33 - 1);
            if ( v35 == *((_DWORD *)v33 - 2) )
            {
              v47 = (3 * v35 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v35 + 8 >= v48 || v35 >= v47 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v62, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, &v62);
                sub_233E40((__int64)&v62);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v49 = (unsigned int *)sub_186B300(v33 - 1, v48);
              v50 = v49[1];
              v33 = v49 + 2;
              *v49 = v47;
              *(_QWORD *)(a1 + 456) = v49 + 2;
              LODWORD(v49) = v50;
              v38 = &v33[v50];
              v37 = (_DWORD)v49 + 1;
            }
            else
            {
              v36 = v35;
              v37 = v35 + 1;
              v38 = &v33[v36];
            }
          }
          else
          {
            v56 = (_QWORD *)sub_186B270(0x18u);
            *v56 = 2;
            v37 = 1;
            v33 = v56 + 1;
            *(_QWORD *)(a1 + 456) = v33;
            v38 = v33;
          }
          *v38 = v34;
          *((_DWORD *)v33 - 1) = v37;
        }
      }
    }
    v11 = *(__int64 **)(a1 + 464);
LABEL_17:
    if ( !v11 )
      return a1 + 456;
  }
  for ( j = &v11[*((unsigned int *)v11 - 1)]; v11 != j; *(_BYTE *)(v23 + 8) = 0 )
    v23 = *v11++;
  return a1 + 456;
}

