__int64 __fastcall sub_BC7760(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  char **v4; // rbx
  __int64 v5; // rdx
  char **v6; // r12
  __int64 v7; // rdx
  char **v8; // r12
  __int64 v9; // rdx
  char **v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r13
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  _DWORD *v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  __int64 v34; // rbx
  _DWORD *v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int *v43; // rax
  _DWORD *v44; // rdx
  _QWORD *v45; // rax
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  _QWORD *v54; // rax
  unsigned int v55; // r15d
  unsigned int *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rbx
  unsigned int v62; // r15d
  unsigned int v63; // eax
  __int64 v64; // rax
  _QWORD *v65; // rax
  unsigned int v66; // r15d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rbx
  unsigned int v72; // r15d
  __int64 v73; // rdx
  _QWORD *v74; // rdx
  unsigned int v75; // ebx
  unsigned int v76; // ecx
  unsigned int *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rdx
  unsigned int v80; // r15d
  unsigned int v81; // ecx
  unsigned int *v82; // rax
  __int64 v83; // rax
  int v84; // r15d
  unsigned int v85; // edx
  unsigned int *v86; // rdx
  __int64 v87; // rdx
  int v88; // r15d
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  unsigned int v91; // [rsp+8h] [rbp-70h]
  unsigned int v92; // [rsp+8h] [rbp-70h]
  unsigned int v93; // [rsp+Ch] [rbp-6Ch]
  __int64 v94; // [rsp+18h] [rbp-60h] BYREF
  __int64 v95[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = sub_BB1CC0(a1, *a2);
  v13 = *(_DWORD **)(sub_15D1F10(v12) + 24);
  if ( !v13 || *(_DWORD *)(a1 + 1720) != *v13 || v13[1] )
  {
    v14 = sub_186B270(0x10u);
    v15 = sub_BB7A40((_QWORD *)a1, (__int64)v12);
    *(_QWORD *)v14 = off_1C559A8;
    *(_QWORD *)(v14 + 8) = v15;
    return v14;
  }
  v17 = *(_QWORD *)(a1 + 4064);
  if ( v17 )
    v93 = *(_DWORD *)(v17 - 4);
  else
    v93 = 0;
  v18 = *(_QWORD *)(a1 + 4056);
  if ( !v18 || (v19 = *(_DWORD *)(v18 - 4), v19 == *(_DWORD *)(v18 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 4056));
    v18 = *(_QWORD *)(a1 + 4056);
    v19 = *(_DWORD *)(v18 - 4);
  }
  *(_QWORD *)(v18 + 8LL * v19) = v12;
  *(_DWORD *)(v18 - 4) = v19 + 1;
  sub_BB7C70(a1, (_QWORD *)(a1 + 4064), (__int64 *)(a1 + 4056));
  v20 = sub_15D1F10(v12);
  v14 = sub_186B270(0x38u);
  *(_QWORD *)v14 = &off_1C57EB0;
  v21 = *(_QWORD *)(a1 + 4064);
  *(_QWORD *)(v14 + 8) = a1;
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(v14 + 24) = v20;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  if ( v21 )
  {
    v22 = *(_DWORD *)(v21 - 4);
    if ( v93 >= v22 )
      goto LABEL_44;
    v23 = 8LL * v93;
    v24 = 8 * (v93 + (unsigned __int64)(v22 - 1 - v93) + 1);
    while ( 1 )
    {
      v34 = *(_QWORD *)(v21 + v23);
      if ( *(_WORD *)(v34 + 4) )
        break;
      v35 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
      if ( !v35 || *v35 != *(_DWORD *)(a1 + 1744) )
        break;
      if ( v35[1] || (v55 = *(_DWORD *)(v34 + 24), v55 != 1) )
      {
        if ( v35[1] == 42 )
        {
          v66 = *(_DWORD *)(v34 + 24);
          if ( v66 == 1 )
          {
            v67 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
            if ( v67 )
            {
              v68 = **(unsigned int **)(v34 + 32);
              if ( (unsigned int)v68 < *(_DWORD *)(v67 - 4) )
              {
                v69 = *(_QWORD *)(v67 + 8 * v68);
                if ( v69 )
                {
                  v70 = *(_QWORD **)(v14 + 32);
                  v71 = *(_QWORD *)(v69 + 8);
                  if ( v70 )
                  {
                    v72 = *((_DWORD *)v70 - 1);
                    if ( v72 == *((_DWORD *)v70 - 2) )
                    {
                      v85 = 16 * ((3 * v72 + 1) >> 1) + 8;
                      if ( 16 * v72 + 8 >= v85 || v72 >= (3 * v72 + 1) >> 1 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_154526(v95, "Overflow encountered when expanding vector", v3);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v95);
                        sub_233E40((__int64)v95);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v86 = (unsigned int *)sub_186B300(v70 - 1, v85);
                      v70 = v86 + 2;
                      *v86 = (3 * v72 + 1) >> 1;
                      v87 = v86[1];
                      *(_QWORD *)(v14 + 32) = v70;
                      v88 = v87;
                      v74 = &v70[2 * v87];
                      v66 = v88 + 1;
                    }
                    else
                    {
                      v73 = v72;
                      v66 = v72 + 1;
                      v74 = &v70[2 * v73];
                    }
                  }
                  else
                  {
                    v90 = (_QWORD *)sub_186B270(0x28u);
                    *v90 = 2;
                    v70 = v90 + 1;
                    *(_QWORD *)(v14 + 32) = v70;
                    v74 = v70;
                  }
                  *(_BYTE *)v74 = 0;
                  v74[1] = v71;
                  *((_DWORD *)v70 - 1) = v66;
                  LODWORD(v95[0]) = 1;
                  sub_BB3DC0((unsigned int **)(v14 + 48), (unsigned int *)v95);
                  v21 = *(_QWORD *)(a1 + 4064);
                }
              }
            }
            goto LABEL_21;
          }
        }
        if ( v35[1] != 41 )
          break;
        v94 = *(_QWORD *)(v21 + v23);
        sub_BB70A0((_QWORD *)(v14 + 40), &v94);
        v49 = *(_DWORD **)(v14 + 48);
        if ( v49 )
        {
          v50 = *(v49 - 1);
          if ( v50 == *(v49 - 2) )
          {
            v75 = (3 * v50 + 1) >> 1;
            v76 = 4 * v75 + 8;
            if ( 4 * v50 + 8 >= v76 || v50 >= v75 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_154526(v95, "Overflow encountered when expanding vector", v11);
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v95);
              sub_233E40((__int64)v95);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v77 = (unsigned int *)sub_186B300(v49 - 2, v76);
            v78 = v77[1];
            v49 = v77 + 2;
            *v77 = v75;
            *(_QWORD *)(v14 + 48) = v77 + 2;
            LODWORD(v77) = v78;
            v53 = &v49[v78];
            v52 = (_DWORD)v77 + 1;
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
          v79 = (_QWORD *)sub_186B270(0x10u);
          *v79 = 2;
          v52 = 1;
          v49 = v79 + 1;
          *(_QWORD *)(v14 + 48) = v49;
          v53 = v49;
        }
        v23 += 8;
        *v53 = 2;
        *(v49 - 1) = v52;
        v21 = *(_QWORD *)(a1 + 4064);
        if ( v23 == v24 )
        {
LABEL_43:
          if ( v21 )
LABEL_44:
            *(_DWORD *)(v21 - 4) = v93;
          return v14;
        }
      }
      else
      {
        v56 = *(unsigned int **)(v34 + 32);
        v57 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
        if ( v57 )
        {
          v58 = *v56;
          if ( (unsigned int)v58 < *(_DWORD *)(v57 - 4) )
          {
            v59 = *(_QWORD *)(v57 + 8 * v58);
            if ( v59 )
            {
              v60 = *(_QWORD **)(v14 + 32);
              v61 = *(_QWORD *)(v59 + 8);
              if ( v60 )
              {
                v62 = *((_DWORD *)v60 - 1);
                v63 = *((_DWORD *)v60 - 2);
                if ( v62 == v63 )
                {
                  v80 = (3 * v63 + 1) >> 1;
                  v81 = 16 * v80 + 8;
                  if ( 16 * v63 + 8 >= v81 || v63 >= v80 )
                  {
                    v4 = (char **)__cxa_allocate_exception(0x28u);
                    sub_154526(v95, "Overflow encountered when expanding vector", v5);
                    *v4 = (char *)off_1C63128;
                    sub_2333C0(v4 + 1, v95);
                    sub_233E40((__int64)v95);
                    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v82 = (unsigned int *)sub_186B300(v60 - 1, v81);
                  v60 = v82 + 2;
                  *v82 = v80;
                  v83 = v82[1];
                  *(_QWORD *)(v14 + 32) = v60;
                  v84 = v83;
                  v65 = &v60[2 * v83];
                  v55 = v84 + 1;
                }
                else
                {
                  v64 = v62;
                  v55 = v62 + 1;
                  v65 = &v60[2 * v64];
                }
              }
              else
              {
                v89 = (_QWORD *)sub_186B270(0x28u);
                *v89 = 2;
                v60 = v89 + 1;
                *(_QWORD *)(v14 + 32) = v89 + 1;
                v65 = v89 + 1;
              }
              *(_BYTE *)v65 = 0;
              v65[1] = v61;
              *((_DWORD *)v60 - 1) = v55;
              LODWORD(v95[0]) = 0;
              sub_BB3DC0((unsigned int **)(v14 + 48), (unsigned int *)v95);
              v21 = *(_QWORD *)(a1 + 4064);
              goto LABEL_21;
            }
          }
        }
        if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)(a1 + 24), v56) )
        {
          v95[0] = v34;
          sub_BB70A0((_QWORD *)(v14 + 40), v95);
          LODWORD(v94) = 2;
          sub_BB3DC0((unsigned int **)(v14 + 48), (unsigned int *)&v94);
          v21 = *(_QWORD *)(a1 + 4064);
          goto LABEL_21;
        }
LABEL_20:
        v21 = *(_QWORD *)(a1 + 4064);
LABEL_21:
        v23 += 8;
        if ( v23 == v24 )
          goto LABEL_43;
      }
    }
    v36 = *(_QWORD *)(a1 + 24);
    v37 = sub_BB7A40((_QWORD *)a1, *(_QWORD *)(v21 + v23));
    v38 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v39 = *(_QWORD **)(v14 + 40);
    if ( v39 )
    {
      v40 = *((_DWORD *)v39 - 1);
      if ( v40 == *((_DWORD *)v39 - 2) )
      {
        v41 = (3 * v40 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v40 + 8 >= (unsigned int)v42 || v40 >= v41 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v95, "Overflow encountered when expanding vector", v9);
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v95);
          sub_233E40((__int64)v95);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v91 = (3 * v40 + 1) >> 1;
        v43 = (unsigned int *)sub_186B300(v39 - 1, v42);
        v44 = v43 + 2;
        *(_QWORD *)(v14 + 40) = v43 + 2;
        *v43 = v91;
        LODWORD(v43) = v43[1];
        *(_QWORD *)&v44[2 * (unsigned int)v43] = v38;
        *(v44 - 1) = (_DWORD)v43 + 1;
        v28 = *(_DWORD **)(v14 + 48);
        if ( !v28 )
          goto LABEL_32;
        goto LABEL_15;
      }
      v25 = v40;
      v26 = v40 + 1;
      v27 = &v39[v25];
    }
    else
    {
      v54 = (_QWORD *)sub_186B270(0x18u);
      v39 = v54 + 1;
      *v54 = 2;
      v26 = 1;
      *(_QWORD *)(v14 + 40) = v39;
      v27 = v39;
    }
    *v27 = v38;
    *((_DWORD *)v39 - 1) = v26;
    v28 = *(_DWORD **)(v14 + 48);
    if ( !v28 )
    {
LABEL_32:
      v45 = (_QWORD *)sub_186B270(0x10u);
      v28 = v45 + 1;
      *v45 = 2;
      v31 = 1;
      *(_QWORD *)(v14 + 48) = v28;
      v32 = v28;
LABEL_17:
      *v32 = 2;
      *(v28 - 1) = v31;
      if ( v38 )
      {
        if ( (*(_DWORD *)(v38 + 8))-- == 1 )
          sub_15D7BC0(v36, v38);
      }
      goto LABEL_20;
    }
LABEL_15:
    v29 = *(v28 - 1);
    if ( v29 == *(v28 - 2) )
    {
      v46 = (3 * v29 + 1) >> 1;
      v47 = 4 * v46 + 8;
      if ( 4 * v29 + 8 >= (unsigned int)v47 || v29 >= v46 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v95, "Overflow encountered when expanding vector", v7);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v95);
        sub_233E40((__int64)v95);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v92 = (3 * v29 + 1) >> 1;
      v48 = (unsigned int *)sub_186B300(v28 - 2, v47);
      v28 = v48 + 2;
      *(_QWORD *)(v14 + 48) = v48 + 2;
      *v48 = v92;
      LODWORD(v48) = v48[1];
      v32 = &v28[(unsigned int)v48];
      v31 = (_DWORD)v48 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v28[v30];
    }
    goto LABEL_17;
  }
  return v14;
}

