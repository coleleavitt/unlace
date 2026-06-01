__int64 __fastcall sub_37E1C0(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 *v5; // rbp
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  void *v10; // rdi
  unsigned int **v11; // rbp
  unsigned int **v12; // r13
  unsigned int *v13; // r12
  _QWORD *v14; // r14
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned int v21; // esi
  unsigned int *v22; // r15
  unsigned int v23; // eax
  unsigned int *v24; // r15
  unsigned int v25; // eax
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  __int64 result; // rax
  void *v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  void *v45; // rdi
  _QWORD *v46; // rbp
  __int64 *v47; // rbx
  __int64 *v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  unsigned int v54; // r15d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  _QWORD *v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  unsigned int **v62; // rcx
  _DWORD *v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // ecx
  size_t v67; // rsi
  unsigned int *v68; // rax
  unsigned int v69; // r8d
  unsigned int v70; // eax
  unsigned int *v71; // rax
  _QWORD *v72; // rdx
  char **exception; // rbp
  __int64 v74; // rdx
  unsigned int v75; // [rsp+4h] [rbp-64h]
  __int64 v76[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_1600000(a1 + 67);
  v2 = (void *)a1[68];
  if ( v2 )
    sub_186B220(v2);
  v3 = a1[66];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[63];
  if ( v4 )
    sub_186B220(v4);
  v5 = (__int64 *)a1[62];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[61];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_14;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_14:
    v5 = (__int64 *)a1[62];
    if ( v5 )
LABEL_15:
      sub_186B220(v5 - 1);
  }
  v10 = (void *)a1[58];
  if ( v10 )
    sub_186B220(v10);
  v11 = (unsigned int **)a1[57];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_35;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        v14 = (_QWORD *)a1[56];
        v15 = (*v13 + 0x3FFFFFFF) & 0x3FFFFFFF | *v13 & 0xC0000000;
        *v13 = v15;
        if ( (v15 & 0x3FFFFFFF) == 0 )
        {
          v16 = (_DWORD *)v14[83];
          if ( v16 )
          {
            v17 = (unsigned int)*(v16 - 1);
            if ( (_DWORD)v17 != *(v16 - 2) )
            {
              v18 = v17 + 1;
              *(_QWORD *)&v16[2 * v17] = v13;
              *(v16 - 1) = v17 + 1;
              goto LABEL_27;
            }
            v54 = (unsigned int)(3 * v17 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * (int)v17 + 8 < (unsigned int)v55 && (unsigned int)v17 < v54 )
            {
              v56 = (unsigned int *)sub_186B300(v16 - 2, v55);
              v57 = v56[1];
              v16 = v56 + 2;
              v14[83] = v56 + 2;
              v18 = v57 + 1;
              *v56 = v54;
              *(_QWORD *)&v56[2 * v57 + 2] = v13;
              v56[1] = v57 + 1;
              goto LABEL_27;
            }
LABEL_112:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C2B8E(v76, "Overflow encountered when expanding vector", v74);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v76);
            sub_233E40((__int64)v76);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = sub_186B270(0x18u);
          v18 = 1;
          v16 = (_DWORD *)(v65 + 8);
          *(_QWORD *)v65 = 2;
          v14[83] = v65 + 8;
          *(_QWORD *)(v65 + 8) = v13;
          *(_DWORD *)(v65 + 4) = 1;
LABEL_27:
          while ( v18 )
          {
            v19 = (unsigned int)(v18 - 1);
            v20 = *(_QWORD *)&v16[2 * v19];
            v21 = v18 - 1;
            *(v16 - 1) = v19;
            if ( *(char *)(v20 + 3) < 0 )
            {
              v52 = *(_QWORD *)(v20 + 8);
              if ( v52 )
              {
                v53 = v14[81];
                v9 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v53, v52);
              }
              sub_17E9C40(v14[82], 16, v20);
            }
            else
            {
              v22 = *(unsigned int **)(v20 + 8);
              v23 = (*v22 + 0x3FFFFFFF) & 0x3FFFFFFF | *v22 & 0xC0000000;
              *v22 = v23;
              if ( (v23 & 0x3FFFFFFF) == 0 )
              {
                if ( v21 == *(v16 - 2) )
                {
                  v69 = (3 * v21 + 1) >> 1;
                  v70 = 8 * v69 + 8;
                  if ( 8 * v18 >= v70 || v21 >= v69 )
                    goto LABEL_112;
                  v71 = (unsigned int *)sub_186B300(v16 - 2, v70);
                  v63 = v71 + 2;
                  v14[83] = v71 + 2;
                  *v71 = (3 * v21 + 1) >> 1;
                }
                else
                {
                  v63 = (_DWORD *)v14[83];
                }
                v64 = *(v63 - 1);
                *(_QWORD *)&v63[2 * v64] = v22;
                *(v63 - 1) = v64 + 1;
              }
              v24 = *(unsigned int **)(v20 + 16);
              v25 = (*v24 + 0x3FFFFFFF) & 0x3FFFFFFF | *v24 & 0xC0000000;
              *v24 = v25;
              if ( (v25 & 0x3FFFFFFF) == 0 )
              {
                v58 = (_QWORD *)v14[83];
                if ( v58 )
                {
                  v59 = *((_DWORD *)v58 - 1);
                  if ( v59 == *((_DWORD *)v58 - 2) )
                  {
                    v66 = (3 * v59 + 1) >> 1;
                    v67 = 8 * v66 + 8;
                    if ( 8 * v59 + 8 >= (unsigned int)v67 )
                      goto LABEL_112;
                    v75 = (3 * v59 + 1) >> 1;
                    if ( v59 >= v66 )
                      goto LABEL_112;
                    v68 = (unsigned int *)sub_186B300(v58 - 1, v67);
                    v58 = v68 + 2;
                    v14[83] = v68 + 2;
                    *v68 = v75;
                    LODWORD(v68) = v68[1];
                    v62 = (unsigned int **)&v58[(unsigned int)v68];
                    v61 = (_DWORD)v68 + 1;
                  }
                  else
                  {
                    v60 = v59;
                    v61 = v59 + 1;
                    v62 = (unsigned int **)&v58[v60];
                  }
                }
                else
                {
                  v72 = (_QWORD *)sub_186B270(0x18u);
                  *v72 = 2;
                  v61 = 1;
                  v58 = v72 + 1;
                  v14[83] = v58;
                  v62 = (unsigned int **)v58;
                }
                *v62 = v24;
                *((_DWORD *)v58 - 1) = v61;
              }
              sub_17E9C40(v14[82], 24, v20);
            }
            v16 = (_DWORD *)v14[83];
            if ( !v16 )
              break;
            v18 = *(v16 - 1);
          }
        }
      }
      ++v11;
    }
    while ( v11 < v12 );
    v11 = (unsigned int **)a1[57];
    if ( v11 )
LABEL_35:
      sub_186B220(v11 - 1);
  }
  v26 = (__int64 *)a1[55];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = a1[54];
          v9 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v26 >= v27 )
          goto LABEL_43;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( v26 < v27 );
LABEL_43:
    v26 = (__int64 *)a1[55];
    if ( v26 )
LABEL_44:
      sub_186B220(v26 - 1);
  }
  v30 = (__int64 *)a1[53];
  if ( v30 )
  {
    v31 = &v30[*((unsigned int *)v30 - 1)];
    if ( v30 >= v31 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = a1[52];
          v9 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_52;
      }
      sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_52:
    v30 = (__int64 *)a1[53];
    if ( v30 )
LABEL_53:
      sub_186B220(v30 - 1);
  }
  v34 = (__int64 *)a1[51];
  if ( v34 )
  {
    v35 = &v34[*((unsigned int *)v34 - 1)];
    if ( v34 >= v35 )
      goto LABEL_62;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = a1[50];
          v9 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_61;
      }
      sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_61:
    v34 = (__int64 *)a1[51];
    if ( v34 )
LABEL_62:
      sub_186B220(v34 - 1);
  }
  v38 = (void *)a1[47];
  if ( v38 )
    sub_186B220(v38);
  v39 = (void *)a1[44];
  if ( v39 )
    sub_186B220(v39);
  v40 = (void *)a1[41];
  if ( v40 )
    sub_186B220(v40);
  result = sub_157EB20(a1 + 31);
  v42 = (void *)a1[26];
  if ( v42 )
    result = sub_186B220(v42);
  v43 = a1[23];
  if ( v43 )
  {
    v44 = a1[24];
    v9 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v9 )
      result = sub_15D7BC0(v44, v43);
  }
  v45 = (void *)a1[13];
  if ( v45 )
    result = sub_186B220(v45);
  v46 = (_QWORD *)a1[10];
  if ( v46 )
  {
    v47 = (__int64 *)v46[12];
    if ( v47 )
    {
      v48 = &v47[*((unsigned int *)v47 - 1)];
      if ( v47 >= v48 )
        goto LABEL_85;
      do
      {
        while ( 1 )
        {
          v49 = *v47;
          if ( *v47 )
          {
            v50 = v46[11];
            v9 = (*(_DWORD *)(v49 + 8))-- == 1;
            if ( v9 )
              break;
          }
          if ( ++v47 >= v48 )
            goto LABEL_84;
        }
        sub_15D7BC0(v50, v49);
        ++v47;
      }
      while ( v47 < v48 );
LABEL_84:
      v47 = (__int64 *)v46[12];
      if ( v47 )
LABEL_85:
        sub_186B220(v47 - 1);
    }
    v51 = v46[10];
    if ( v51 )
      sub_186B220((void *)(v51 - 8));
    return sub_186B220(v46);
  }
  return result;
}

