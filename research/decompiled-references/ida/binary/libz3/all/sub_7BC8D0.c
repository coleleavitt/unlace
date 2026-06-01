bool __fastcall sub_7BC8D0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  __int64 i; // rax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int *v13; // r12
  unsigned int *v14; // r15
  unsigned int *v15; // r13
  __int64 v16; // rbp
  _BYTE *v17; // rax
  unsigned int v18; // r14d
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned int v25; // r14d
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned int *v28; // rax
  _DWORD *v29; // rcx
  unsigned int v30; // r12d
  unsigned int v31; // edi
  _QWORD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int v37; // ebp
  unsigned int *v38; // rax
  char *v39; // rdx
  char *v40; // rax
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int v43; // r14d
  unsigned int *v44; // rax
  __int64 v45; // rax
  bool result; // al
  unsigned int v47; // ebp
  size_t v48; // rdi
  __int64 v49; // rax
  _DWORD *v50; // r9
  _QWORD *v51; // rdi
  __int64 v52; // r11
  unsigned __int64 v53; // rax
  __int64 v54; // r11
  _QWORD *v55; // rax
  int v57; // [rsp+10h] [rbp-78h]
  _DWORD *v58; // [rsp+10h] [rbp-78h]
  int v59; // [rsp+10h] [rbp-78h]
  unsigned __int64 v60; // [rsp+18h] [rbp-70h]
  _DWORD *v61; // [rsp+20h] [rbp-68h]
  int v62; // [rsp+28h] [rbp-60h]
  __int64 v63[11]; // [rsp+30h] [rbp-58h] BYREF

  for ( i = *(_QWORD *)(a1 + 824); i; i = *(_QWORD *)(a1 + 824) )
  {
    v10 = *(_DWORD *)(i - 4);
    if ( !v10 )
      break;
    v11 = v10 - 1;
    v12 = *(_DWORD *)(i + 4LL * v11);
    *(_DWORD *)(i - 4) = v11;
    *(_BYTE *)(*(_QWORD *)(a1 + 816) + v12) = 0;
  }
  v13 = *(unsigned int **)(a1 + 800);
  if ( !v13 || (v14 = &v13[*(v13 - 1)], v14 == v13) )
  {
    result = 0;
    goto LABEL_41;
  }
  v60 = 0;
  v15 = *(unsigned int **)(a1 + 800);
  do
  {
    v29 = *(_DWORD **)(a1 + 816);
    v30 = *v15;
    if ( v29 )
    {
      v31 = *(v29 - 1);
      if ( v30 < v31 )
      {
        v16 = v30;
        v17 = (char *)v29 + v30;
        if ( *v17 )
          goto LABEL_22;
        v18 = v30 + 1;
        if ( v31 >= v30 + 1 )
        {
          *v17 = 1;
          v19 = *(_QWORD **)(a1 + 824);
          if ( v19 )
            goto LABEL_10;
          goto LABEL_29;
        }
        v34 = *(v29 - 2);
        if ( v34 >= v18 )
        {
          *(v29 - 1) = v18;
          v40 = (char *)v29 + v31;
          v39 = (char *)v29 + v18;
          goto LABEL_36;
        }
      }
      else
      {
        v18 = v30 + 1;
        if ( v31 >= v30 + 1 )
          goto LABEL_26;
        v34 = *(v29 - 2);
        if ( v34 >= v18 )
        {
          *(v29 - 1) = v18;
          v16 = v30;
          v40 = (char *)v29 + v31;
          v39 = (char *)v29 + v18;
LABEL_36:
          memset(v40, 0, v39 - v40);
          v29 = *(_DWORD **)(a1 + 816);
          goto LABEL_27;
        }
      }
    }
    else
    {
      v18 = v30 + 1;
      if ( v30 == -1 )
      {
LABEL_26:
        v16 = v30;
        goto LABEL_27;
      }
      v33 = sub_186B270(0xAu);
      v34 = 2;
      v31 = 0;
      v29 = (_DWORD *)(v33 + 8);
      *(_QWORD *)v33 = 2;
      *(_QWORD *)(a1 + 816) = v33 + 8;
      if ( v18 <= 2 )
      {
        *(_DWORD *)(v33 + 4) = v18;
        v16 = v30;
        v40 = (char *)(v33 + 8);
        v39 = (char *)v29 + v18;
        goto LABEL_36;
      }
    }
    do
    {
      v35 = (3 * v34 + 1) >> 1;
      v36 = v35 + 8;
      v37 = v35;
      if ( v34 + 8 >= (unsigned int)v36 || v34 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v63, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v63);
        sub_233E40((__int64)v63);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v29 - 2, v36);
      v34 = v37;
      v29 = v38 + 2;
      *v38 = v37;
      *(_QWORD *)(a1 + 816) = v38 + 2;
    }
    while ( v37 < v18 );
    v38[1] = v18;
    v16 = v30;
    v39 = (char *)v29 + v18;
    v40 = (char *)v29 + v31;
    if ( v18 != v31 )
      goto LABEL_36;
LABEL_27:
    if ( *((_BYTE *)v29 + v16) )
      goto LABEL_13;
    *((_BYTE *)v29 + v16) = 1;
    v19 = *(_QWORD **)(a1 + 824);
    if ( v19 )
    {
LABEL_10:
      v20 = *((unsigned int *)v19 - 1);
      if ( (_DWORD)v20 == *((_DWORD *)v19 - 2) )
      {
        v41 = (unsigned int)(3 * v20 + 1) >> 1;
        v42 = 4 * v41 + 8;
        v43 = v41;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v42 || (unsigned int)v20 >= v41 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_113C8C(v63, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v63);
          sub_233E40((__int64)v63);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v19 - 1, v42);
        v19 = v44 + 2;
        *v44 = v43;
        v45 = v44[1];
        *(_QWORD *)(a1 + 824) = v19;
        v21 = (unsigned int *)v19 + v45;
      }
      else
      {
        v21 = (unsigned int *)v19 + v20;
      }
      goto LABEL_12;
    }
LABEL_29:
    v32 = (_QWORD *)sub_186B270(0x10u);
    v19 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 824) = v32 + 1;
    v21 = (unsigned int *)(v32 + 1);
LABEL_12:
    *v21 = v30;
    ++*((_DWORD *)v19 - 1);
LABEL_13:
    v22 = *(_QWORD *)(a1 + 792);
    if ( v22 && v30 < *(_DWORD *)(v22 - 4) )
    {
      v23 = *(_QWORD *)(v22 + 8 * v16);
      v24 = (unsigned __int64)v23 >> 63;
      if ( v23 <= 0 )
        v23 = -v23;
      v25 = v23;
      *(_BYTE *)(a1 + 996) |= v23 > 0xFFFFFFFFLL;
      if ( (_DWORD)v23 )
      {
        v26 = (_QWORD *)*a2;
        if ( *a2 )
        {
          v27 = *((unsigned int *)v26 - 1);
          if ( (_DWORD)v27 == *((_DWORD *)v26 - 2) )
          {
            v47 = (unsigned int)(3 * v27 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * (int)v27 + 8 >= (unsigned int)v48 || (unsigned int)v27 >= v47 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v63, "Overflow encountered when expanding vector", v5);
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v63);
              sub_233E40((__int64)v63);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = v24;
            v49 = sub_186B270(v48);
            LODWORD(v24) = v57;
            v50 = (_DWORD *)v49;
            v26 = (_QWORD *)(v49 + 8);
            v51 = (_QWORD *)*a2;
            if ( *a2 )
            {
              v52 = *((unsigned int *)v51 - 1);
              v53 = 0;
              v50[1] = v52;
              v54 = 8 * v52;
              if ( v54 )
              {
                do
                {
                  *(_QWORD *)&v50[v53 / 4 + 2] = v51[v53 / 8];
                  v53 += 8LL;
                }
                while ( v54 != v53 );
              }
              v62 = v57;
              v61 = v50;
              v58 = v50 + 2;
              sub_186B220(v51 - 1);
              v50 = v61;
              v26 = v58;
              LODWORD(v24) = v62;
              v28 = &v58[2 * v61[1]];
            }
            else
            {
              *(_DWORD *)(v49 + 4) = 0;
              v28 = (unsigned int *)(v49 + 8);
            }
            *v50 = v47;
            *a2 = v26;
          }
          else
          {
            v28 = (unsigned int *)&v26[v27];
          }
        }
        else
        {
          v59 = v24;
          v55 = (_QWORD *)sub_186B270(0x18u);
          LODWORD(v24) = v59;
          v26 = v55 + 1;
          *v55 = 2;
          *a2 = v55 + 1;
          v28 = (unsigned int *)(v55 + 1);
        }
        *v28 = v25;
        v28[1] = v24 + 2 * v30;
        v60 += v25;
        ++*((_DWORD *)v26 - 1);
      }
    }
LABEL_22:
    ++v15;
  }
  while ( v14 != v15 );
  result = v60 > 0x7FFFFFFE;
LABEL_41:
  *(_BYTE *)(a1 + 996) |= result;
  return result;
}

