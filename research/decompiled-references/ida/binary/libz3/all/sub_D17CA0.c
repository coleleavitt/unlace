__int64 __fastcall sub_D17CA0(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned int **v10; // rbp
  unsigned int **v11; // r13
  unsigned int *v12; // r12
  _QWORD *v13; // r14
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned int v20; // esi
  unsigned int *v21; // r15
  unsigned int v22; // eax
  unsigned int *v23; // r15
  unsigned int v24; // eax
  __int64 *v25; // rbp
  __int64 *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  void (__fastcall ***v30)(void *); // rbp
  __int64 *v31; // rbp
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 result; // rax
  __int64 *v36; // rbp
  __int64 *v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  void *v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned int v44; // r15d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  unsigned int **v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // ecx
  size_t v57; // rsi
  unsigned int *v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // eax
  unsigned int *v61; // rax
  _QWORD *v62; // rdx
  char **exception; // rbp
  __int64 v64; // rdx
  unsigned int v65; // [rsp+4h] [rbp-64h]
  __int64 v66[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(__int64 **)(a1 + 224);
  v3 = &v2[*(unsigned int *)(a1 + 232)];
  for ( i = v2; i != v3; *(_BYTE *)(v5 + 6) &= ~1u )
    v5 = *i++;
  *(_DWORD *)(a1 + 232) = 0;
  if ( v2 && v2 != (__int64 *)(a1 + 240) )
    sub_186B220(v2);
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 208);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 192);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(unsigned int ***)(a1 + 144);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_31;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        v13 = *(_QWORD **)(a1 + 136);
        v14 = (*v12 + 0x3FFFFFFF) & 0x3FFFFFFF | *v12 & 0xC0000000;
        *v12 = v14;
        if ( (v14 & 0x3FFFFFFF) == 0 )
        {
          v15 = (_DWORD *)v13[83];
          if ( v15 )
          {
            v16 = (unsigned int)*(v15 - 1);
            if ( (_DWORD)v16 != *(v15 - 2) )
            {
              v17 = v16 + 1;
              *(_QWORD *)&v15[2 * v16] = v12;
              *(v15 - 1) = v16 + 1;
              goto LABEL_23;
            }
            v44 = (unsigned int)(3 * v16 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * (int)v16 + 8 < (unsigned int)v45 && (unsigned int)v16 < v44 )
            {
              v46 = (unsigned int *)sub_186B300(v15 - 2, v45);
              v47 = v46[1];
              v15 = v46 + 2;
              v13[83] = v46 + 2;
              v17 = v47 + 1;
              *v46 = v44;
              *(_QWORD *)&v46[2 * v47 + 2] = v12;
              v46[1] = v47 + 1;
              goto LABEL_23;
            }
LABEL_89:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_166874(v66, "Overflow encountered when expanding vector", v64);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = sub_186B270(0x18u);
          v17 = 1;
          v15 = (_DWORD *)(v55 + 8);
          *(_QWORD *)v55 = 2;
          v13[83] = v55 + 8;
          *(_QWORD *)(v55 + 8) = v12;
          *(_DWORD *)(v55 + 4) = 1;
LABEL_23:
          while ( v17 )
          {
            v18 = (unsigned int)(v17 - 1);
            v19 = *(_QWORD *)&v15[2 * v18];
            v20 = v17 - 1;
            *(v15 - 1) = v18;
            if ( *(char *)(v19 + 3) < 0 )
            {
              v42 = *(_QWORD *)(v19 + 8);
              if ( v42 )
              {
                v43 = v13[81];
                v29 = (*(_DWORD *)(v42 + 8))-- == 1;
                if ( v29 )
                  sub_15D7BC0(v43, v42);
              }
              sub_17E9C40(v13[82], 16, v19);
            }
            else
            {
              v21 = *(unsigned int **)(v19 + 8);
              v22 = (*v21 + 0x3FFFFFFF) & 0x3FFFFFFF | *v21 & 0xC0000000;
              *v21 = v22;
              if ( (v22 & 0x3FFFFFFF) == 0 )
              {
                if ( v20 == *(v15 - 2) )
                {
                  v59 = (3 * v20 + 1) >> 1;
                  v60 = 8 * v59 + 8;
                  if ( 8 * v17 >= v60 || v20 >= v59 )
                    goto LABEL_89;
                  v61 = (unsigned int *)sub_186B300(v15 - 2, v60);
                  v53 = v61 + 2;
                  v13[83] = v61 + 2;
                  *v61 = (3 * v20 + 1) >> 1;
                }
                else
                {
                  v53 = (_DWORD *)v13[83];
                }
                v54 = *(v53 - 1);
                *(_QWORD *)&v53[2 * v54] = v21;
                *(v53 - 1) = v54 + 1;
              }
              v23 = *(unsigned int **)(v19 + 16);
              v24 = (*v23 + 0x3FFFFFFF) & 0x3FFFFFFF | *v23 & 0xC0000000;
              *v23 = v24;
              if ( (v24 & 0x3FFFFFFF) == 0 )
              {
                v48 = (_QWORD *)v13[83];
                if ( v48 )
                {
                  v49 = *((_DWORD *)v48 - 1);
                  if ( v49 == *((_DWORD *)v48 - 2) )
                  {
                    v56 = (3 * v49 + 1) >> 1;
                    v57 = 8 * v56 + 8;
                    if ( 8 * v49 + 8 >= (unsigned int)v57 )
                      goto LABEL_89;
                    v65 = (3 * v49 + 1) >> 1;
                    if ( v49 >= v56 )
                      goto LABEL_89;
                    v58 = (unsigned int *)sub_186B300(v48 - 1, v57);
                    v48 = v58 + 2;
                    v13[83] = v58 + 2;
                    *v58 = v65;
                    LODWORD(v58) = v58[1];
                    v52 = (unsigned int **)&v48[(unsigned int)v58];
                    v51 = (_DWORD)v58 + 1;
                  }
                  else
                  {
                    v50 = v49;
                    v51 = v49 + 1;
                    v52 = (unsigned int **)&v48[v50];
                  }
                }
                else
                {
                  v62 = (_QWORD *)sub_186B270(0x18u);
                  *v62 = 2;
                  v51 = 1;
                  v48 = v62 + 1;
                  v13[83] = v48;
                  v52 = (unsigned int **)v48;
                }
                *v52 = v23;
                *((_DWORD *)v48 - 1) = v51;
              }
              sub_17E9C40(v13[82], 24, v19);
            }
            v15 = (_DWORD *)v13[83];
            if ( !v15 )
              break;
            v17 = *(v15 - 1);
          }
        }
      }
      ++v10;
    }
    while ( v10 < v11 );
    v10 = *(unsigned int ***)(a1 + 144);
    if ( v10 )
LABEL_31:
      sub_186B220(v10 - 1);
  }
  v25 = *(__int64 **)(a1 + 128);
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_40;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = *(_QWORD *)(a1 + 120);
          v29 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_39;
      }
      sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_39:
    v25 = *(__int64 **)(a1 + 128);
    if ( v25 )
LABEL_40:
      sub_186B220(v25 - 1);
  }
  v30 = *(void (__fastcall ****)(void *))(a1 + 112);
  if ( v30 )
  {
    v29 = (*((_DWORD *)v30 + 2))-- == 1;
    if ( v29 )
    {
      (**v30)(v30);
      sub_186B220(v30);
    }
  }
  v31 = *(__int64 **)(a1 + 104);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 >= v32 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *(_QWORD *)(a1 + 96);
          v29 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_51;
      }
      sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_51:
    v31 = *(__int64 **)(a1 + 104);
    if ( v31 )
LABEL_52:
      sub_186B220(v31 - 1);
  }
  result = sub_1670470(a1 + 56);
  v36 = *(__int64 **)(a1 + 48);
  if ( v36 )
  {
    result = *((unsigned int *)v36 - 1);
    v37 = &v36[result];
    if ( v36 >= v37 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v39 = *(_QWORD *)(a1 + 40);
          v29 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v29 )
            break;
        }
        if ( ++v36 >= v37 )
          goto LABEL_60;
      }
      result = sub_15D7BC0(v39, v38);
      ++v36;
    }
    while ( v36 < v37 );
LABEL_60:
    v36 = *(__int64 **)(a1 + 48);
    if ( v36 )
LABEL_61:
      result = sub_186B220(v36 - 1);
  }
  v40 = *(void **)(a1 + 16);
  if ( v40 )
    result = sub_186B220(v40);
  v41 = *(_QWORD *)(a1 + 8);
  if ( v41 )
    return sub_186B220((void *)(v41 - 8));
  return result;
}

