void __fastcall sub_DA9360(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // r12
  int v7; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  char v12; // bl
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 *v18; // rax
  char v19; // si
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r13
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // r13d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  _QWORD *v39; // rax
  unsigned __int64 v40; // r15
  __int64 *v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v45; // rax
  char **v46; // rbp
  char **exception; // rbp
  __int64 v48[11]; // [rsp+2h] [rbp-58h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_QWORD *)(v3 + 8) )
    return;
  v5 = v3;
  v7 = *(_DWORD *)v3;
  v8 = (_QWORD *)a1[3];
  v9 = (unsigned int)(*(_DWORD *)v3 - 0x7FFFFFFF);
  if ( !v8 )
  {
    v20 = v7 - 2147483646;
    goto LABEL_43;
  }
  v10 = *((unsigned int *)v8 - 1);
  if ( (unsigned int)v9 < (unsigned int)v10 )
  {
    if ( v8[v9] )
      return;
LABEL_5:
    if ( (_BYTE)byte_1C7EDE8 )
      goto LABEL_6;
LABEL_25:
    if ( __cxa_guard_acquire(&byte_1C7EDE8) )
    {
      qword_1C7EDF0 = 0;
      __cxa_guard_release(&byte_1C7EDE8);
    }
    goto LABEL_6;
  }
  v20 = v7 - 2147483646;
  if ( v20 < (unsigned int)v10 )
  {
    v40 = (unsigned __int64)&v8[v10];
    v41 = &v8[v20];
    if ( (unsigned __int64)v41 >= v40 )
      goto LABEL_53;
    do
    {
      v42 = *v41;
      if ( *v41 )
      {
        v43 = a1[2];
        if ( (*(_DWORD *)(v42 + 8))-- == 1 )
          sub_15D7BC0(v43, v42);
      }
      ++v41;
    }
    while ( (unsigned __int64)v41 < v40 );
    v8 = (_QWORD *)a1[3];
    if ( v8 )
    {
      v10 = *((unsigned int *)v8 - 1);
      goto LABEL_17;
    }
LABEL_43:
    if ( !v20 )
      goto LABEL_5;
    v10 = 0;
    v39 = (_QWORD *)sub_186B270(0x18u);
    v8 = v39 + 1;
    *v39 = 2;
    a1[3] = v39 + 1;
    goto LABEL_22;
  }
LABEL_17:
  if ( (unsigned int)v10 >= v20 )
  {
LABEL_53:
    *((_DWORD *)v8 - 1) = v20;
    goto LABEL_5;
  }
LABEL_22:
  while ( 1 )
  {
    v24 = *((_DWORD *)v8 - 2);
    if ( v24 >= v20 )
      break;
    v21 = (3 * v24 + 1) >> 1;
    v22 = 8 * v21 + 8;
    if ( 8 * v24 + 8 >= (unsigned int)v22 || v24 >= v21 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v48, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v48);
      sub_233E40((__int64)v48);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v23 = (unsigned int *)sub_186B300(v8 - 1, v22);
    v8 = v23 + 2;
    *v23 = v21;
    a1[3] = v23 + 2;
  }
  v25 = 8 * v10;
  *((_DWORD *)v8 - 1) = v20;
  v26 = &v8[(unsigned __int64)v25 / 8];
  v27 = 8LL * v20;
  if ( v25 == v27 )
    goto LABEL_5;
  memset(v26, 0, v27 - v25);
  if ( !(_BYTE)byte_1C7EDE8 )
    goto LABEL_25;
LABEL_6:
  if ( !(_BYTE)byte_1C7EDD8 && __cxa_guard_acquire(&byte_1C7EDD8) )
  {
    qword_1C7EDE0 = 0;
    __cxa_guard_release(&byte_1C7EDD8);
  }
  if ( !(_BYTE)byte_1C7EDC8 && __cxa_guard_acquire(&byte_1C7EDC8) )
  {
    qword_1C7EDD0 = 0;
    __cxa_guard_release(&byte_1C7EDC8);
  }
  v11 = *(_QWORD *)(v5 + 8);
  v12 = 0;
  if ( v11 )
  {
    if ( (v11 & 1) != 0 )
    {
      v13 = *(_QWORD *)(v5 + 16);
      if ( (v13 & 1) != 0 )
      {
        v28 = v11 & 0xFFFFFFFFFFFFFFFELL;
        v29 = v13 & 0xFFFFFFFFFFFFFFFELL;
        v30 = *(_QWORD *)(v28 + 8);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v29 + 8);
          if ( v31 )
          {
            if ( (v30 & 0xFFFFFFFFFFFFFFFELL) != (v31 & 0xFFFFFFFFFFFFFFFELL) || (v12 = 2, (v30 & 1) == (v31 & 1)) )
            {
              v32 = *(_QWORD *)(v29 + 16);
              if ( (v30 & 0xFFFFFFFFFFFFFFFELL) != (v32 & 0xFFFFFFFFFFFFFFFELL) || (v12 = 2, (v30 & 1) == (v32 & 1)) )
              {
                v33 = *(_QWORD *)(v28 + 16);
                if ( (v31 & 0xFFFFFFFFFFFFFFFELL) != (v33 & 0xFFFFFFFFFFFFFFFELL) || (v12 = 2, (v33 & 1) == (v31 & 1)) )
                {
                  v12 = 0;
                  if ( (v32 & 0xFFFFFFFFFFFFFFFELL) == (v33 & 0xFFFFFFFFFFFFFFFELL) )
                    v12 = 2 * ((v33 ^ v32) & 1);
                }
              }
            }
          }
        }
      }
    }
  }
  v14 = (_QWORD *)a1[4];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v34 = (3 * v15 + 1) >> 1;
      v35 = 16 * v34 + 8;
      if ( 16 * v15 + 8 >= (unsigned int)v35 || v15 >= v34 )
      {
        v46 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v48, "Overflow encountered when expanding vector");
        *v46 = (char *)off_1C63128;
        sub_2333C0(v46 + 1, v48);
        sub_233E40((__int64)v48);
        __cxa_throw(v46, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v14 - 1, v35);
      v14 = v36 + 2;
      *v36 = v34;
      v37 = v36[1];
      a1[4] = v14;
      v38 = v37;
      v18 = &v14[2 * v37];
      v17 = v38 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[2 * v16];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x28u);
    v17 = 1;
    v14 = v45 + 1;
    *v45 = 2;
    a1[4] = v45 + 1;
    v18 = v45 + 1;
  }
  v19 = *((_BYTE *)v18 + 8);
  *v18 = v5;
  *((_BYTE *)v18 + 8) = v19 & 0xF8 | v12 | 4;
  *((_DWORD *)v14 - 1) = v17;
  *a3 = 0;
}

