__int64 __fastcall sub_ABC7C0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // r13d
  __int64 v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  int v21; // esi
  __int64 *v22; // rbx
  __int64 *v23; // r13
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int8 v30; // dl
  int v31; // ecx
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // r14
  __int64 v38; // rdx
  char *v39; // rdi
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rdx
  char *v46; // rdi
  __int64 v47; // rdx
  __int64 i; // rsi
  unsigned __int8 v49; // al
  int v50; // ecx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53[11]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a1[66];
  v8 = (__int64 **)(v7 + 8LL * a3);
  if ( !*v8 || !*((_DWORD *)*v8 - 1) )
    return 1;
  v10 = (__int64 *)(v7 + 8LL * a2);
  v11 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(a1[4] + 8LL * a2)) + 24) + 8LL);
  if ( *(_BYTE *)(v11 + 8) )
    sub_DBF6E(0);
  v12 = (_QWORD *)a1[146];
  v13 = *(_DWORD *)v11 + 1;
  if ( v12 )
  {
    v14 = *((unsigned int *)v12 - 1);
    if ( (unsigned int)v14 >= v13 )
    {
LABEL_6:
      v15 = (_QWORD *)a1[147];
      if ( v15 )
        goto LABEL_7;
      if ( !v13 )
        goto LABEL_8;
LABEL_48:
      v16 = 0;
      v52 = (_QWORD *)sub_186B270(0x10u);
      v15 = v52 + 1;
      *v52 = 2;
      a1[147] = v52 + 1;
      goto LABEL_34;
    }
  }
  else
  {
    if ( *(_DWORD *)v11 == -1 )
      goto LABEL_8;
    v14 = 0;
    v51 = (_QWORD *)sub_186B270(0x10u);
    v12 = v51 + 1;
    *v51 = 2;
    a1[146] = v51 + 1;
  }
  while ( 1 )
  {
    v36 = *((_DWORD *)v12 - 2);
    if ( v36 >= v13 )
      break;
    v33 = (3 * v36 + 1) >> 1;
    v34 = 4 * v33 + 8;
    if ( 4 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_139F3A(v53, "Overflow encountered when expanding vector", v6);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v35 = (unsigned int *)sub_186B300(v12 - 1, v34);
    v12 = v35 + 2;
    *v35 = v33;
    a1[146] = v35 + 2;
  }
  v37 = 4 * v14;
  *((_DWORD *)v12 - 1) = v13;
  v38 = 4LL * v13;
  v39 = (char *)v12 + v37;
  if ( v37 != v38 )
  {
    memset(v39, 255, v38 - v37);
    goto LABEL_6;
  }
  v15 = (_QWORD *)a1[147];
  if ( !v15 )
    goto LABEL_48;
LABEL_7:
  v16 = *((unsigned int *)v15 - 1);
  if ( (unsigned int)v16 < v13 )
  {
LABEL_34:
    while ( 1 )
    {
      v43 = *((_DWORD *)v15 - 2);
      if ( v43 >= v13 )
        break;
      v40 = (3 * v43 + 1) >> 1;
      v41 = 4 * v40 + 8;
      if ( 4 * v43 + 8 >= (unsigned int)v41 || v43 >= v40 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v53, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v15 - 1, v41);
      v15 = v42 + 2;
      *v42 = v40;
      a1[147] = v42 + 2;
    }
    v44 = 4 * v16;
    *((_DWORD *)v15 - 1) = v13;
    v45 = 4LL * v13;
    v46 = (char *)v15 + v44;
    if ( v44 != v45 )
      memset(v46, 255, v45 - v44);
  }
LABEL_8:
  v17 = *v10;
  if ( !*v10 )
  {
    v22 = *v8;
    if ( v22 )
    {
      v23 = &v22[*((unsigned int *)v22 - 1)];
      if ( v23 != v22 )
        goto LABEL_15;
    }
    return 1;
  }
  v18 = v17 + 8LL * *(unsigned int *)(v17 - 4);
  v19 = *v10;
  if ( v18 != v17 )
  {
    do
    {
      v20 = *(_BYTE *)(v19 + 7);
      v21 = *(_DWORD *)(v19 + 4);
      v19 += 8;
      *(_DWORD *)(a1[(v20 >> 7) + 146] + 4LL * (v21 & 0x7FFFFFFF)) = *(_DWORD *)(v19 - 8);
    }
    while ( v19 != v18 );
    v22 = *v8;
    if ( v22 )
    {
      v23 = &v22[*((unsigned int *)v22 - 1)];
      if ( v23 != v22 )
      {
        do
        {
          while ( 1 )
          {
LABEL_15:
            v24 = *((_DWORD *)v22 + 1) & 0x7FFFFFFF;
            v25 = *(_DWORD *)(a1[(*((char *)v22 + 7) >= 0) + 146] + 4 * v24);
            if ( v25 != -1 )
            {
              sub_AB99C0((__int64)a1, v25, *(_DWORD *)v22, *((_DWORD *)v22 + 1) & 0x7FFFFFFF);
              v47 = *v10;
              if ( *v10 )
              {
                for ( i = v47 + 8LL * *(unsigned int *)(v47 - 4);
                      i != v47;
                      *(_DWORD *)(a1[(v49 >> 7) + 146] + 4LL * (v50 & 0x7FFFFFFF)) = -1 )
                {
                  v49 = *(_BYTE *)(v47 + 7);
                  v50 = *(_DWORD *)(v47 + 4);
                  v47 += 8;
                }
              }
              return 0;
            }
            if ( *(_DWORD *)(a1[(*((_BYTE *)v22 + 7) >> 7) + 146] + 4 * v24) == -1 )
              break;
            if ( v23 == ++v22 )
              goto LABEL_20;
          }
          if ( !v17 || (v26 = *(unsigned int *)(v17 - 4), (_DWORD)v26 == *(_DWORD *)(v17 - 8)) )
          {
            sub_AC62D0(v10);
            v17 = *v10;
            v26 = *(unsigned int *)(*v10 - 4);
          }
          v27 = *v22++;
          *(_QWORD *)(v17 + 8 * v26) = v27;
          ++*(_DWORD *)(v17 - 4);
        }
        while ( v23 != v22 );
LABEL_20:
        if ( !v17 )
          return 1;
      }
    }
    goto LABEL_21;
  }
  v22 = *v8;
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 != v23 )
      goto LABEL_15;
LABEL_21:
    v28 = v17 + 8LL * *(unsigned int *)(v17 - 4);
    if ( v28 != v17 )
    {
      v29 = v17;
      do
      {
        v30 = *(_BYTE *)(v29 + 7);
        v31 = *(_DWORD *)(v29 + 4);
        v29 += 8;
        *(_DWORD *)(a1[(v30 >> 7) + 146] + 4LL * (v31 & 0x7FFFFFFF)) = -1;
      }
      while ( v28 != v29 );
    }
  }
  return 1;
}

