__int64 __fastcall sub_B21620(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  unsigned int v5; // r13d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  unsigned int v12; // ecx
  unsigned int v14; // r14d
  __int64 v15; // rbx
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rbx
  unsigned int v25; // ebp
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  char *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // eax
  _QWORD *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a2;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = *(_QWORD **)(a1 + 120);
  v9 = v7;
  if ( !v8 || a2 >= *((_DWORD *)v8 - 1) )
  {
    v14 = a2 + 1;
    if ( v7 )
    {
      v15 = *((unsigned int *)v7 - 1);
      if ( (unsigned int)v15 >= v14 )
      {
        *((_DWORD *)v7 - 1) = v14;
LABEL_19:
        v22 = *(_QWORD **)(a1 + 96);
        v23 = v22;
        if ( v22 )
          goto LABEL_20;
        if ( v14 )
          goto LABEL_43;
        v8 = *(_QWORD **)(a1 + 120);
LABEL_47:
        v37 = nullptr;
        if ( !v8 )
          goto LABEL_37;
        goto LABEL_39;
      }
    }
    else
    {
      if ( a2 == -1 )
      {
        v9 = *(_QWORD **)(a1 + 96);
        v40 = v9;
        if ( v9 )
        {
          *((_DWORD *)v9 - 1) = 0;
          if ( v8 )
            goto LABEL_38;
          goto LABEL_50;
        }
        goto LABEL_47;
      }
      v15 = 0;
      v41 = (_QWORD *)sub_186B270(0x10u);
      v9 = v41 + 1;
      *v41 = 2;
      *(_QWORD *)(a1 + 88) = v41 + 1;
    }
    while ( 1 )
    {
      v19 = *((_DWORD *)v9 - 2);
      if ( v19 >= v14 )
        break;
      v16 = (3 * v19 + 1) >> 1;
      v17 = 4 * v16 + 8;
      if ( 4 * v19 + 8 >= (unsigned int)v17 || v19 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v44, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v44);
        sub_233E40((__int64)v44);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
      v9 = v18 + 2;
      *v18 = v16;
      *(_QWORD *)(a1 + 88) = v18 + 2;
    }
    v20 = 4 * v15;
    *((_DWORD *)v9 - 1) = v14;
    v21 = 4LL * v14;
    if ( v20 == v21 )
    {
      v22 = *(_QWORD **)(a1 + 96);
      v23 = v22;
      if ( v22 )
      {
LABEL_20:
        v24 = *((unsigned int *)v22 - 1);
        if ( (unsigned int)v24 >= v14 )
        {
          v8 = *(_QWORD **)(a1 + 120);
          *((_DWORD *)v22 - 1) = v14;
LABEL_28:
          if ( v8 )
            goto LABEL_29;
          if ( v14 )
            goto LABEL_45;
          v7 = *(_QWORD **)(a1 + 88);
          v40 = *(_QWORD **)(a1 + 96);
LABEL_50:
          v37 = v40;
          v9 = v7;
          v8 = nullptr;
          goto LABEL_37;
        }
LABEL_25:
        while ( 1 )
        {
          v28 = *((_DWORD *)v23 - 2);
          if ( v28 >= v14 )
            break;
          v25 = (3 * v28 + 1) >> 1;
          v26 = 4 * v25 + 8;
          if ( 4 * v28 + 8 >= (unsigned int)v26 || v28 >= v25 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v44, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (unsigned int *)sub_186B300(v23 - 1, v26);
          v23 = v27 + 2;
          *v27 = v25;
          *(_QWORD *)(a1 + 96) = v27 + 2;
        }
        v29 = 4 * v24;
        *((_DWORD *)v23 - 1) = v14;
        v8 = *(_QWORD **)(a1 + 120);
        v30 = (char *)v23 + v29;
        v31 = 4LL * v14;
        if ( v29 == v31 )
        {
          if ( v8 )
          {
LABEL_29:
            v32 = *((unsigned int *)v8 - 1);
            if ( (unsigned int)v32 >= v14 )
            {
              v7 = *(_QWORD **)(a1 + 88);
              v40 = *(_QWORD **)(a1 + 96);
LABEL_38:
              v9 = v7;
              v37 = v40;
LABEL_39:
              *((_DWORD *)v8 - 1) = v14;
LABEL_37:
              *((_DWORD *)v9 + v5) = v5;
              *((_DWORD *)v8 + v5) = *(_DWORD *)(a1 + 84);
              *((_DWORD *)v37 + v5) = 1;
              return v5;
            }
LABEL_34:
            while ( 1 )
            {
              v36 = *((_DWORD *)v8 - 2);
              if ( v36 >= v14 )
                break;
              v33 = (3 * v36 + 1) >> 1;
              v34 = 4 * v33 + 8;
              if ( 4 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v44, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v44);
                sub_233E40((__int64)v44);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v35 = (unsigned int *)sub_186B300(v8 - 1, v34);
              v8 = v35 + 2;
              *v35 = v33;
              *(_QWORD *)(a1 + 120) = v35 + 2;
            }
            *((_DWORD *)v8 - 1) = v14;
            v37 = *(_QWORD **)(a1 + 96);
            v38 = 4 * v32;
            v39 = 4LL * v14;
            v9 = *(_QWORD **)(a1 + 88);
            if ( v38 != v39 )
              memset((char *)v8 + v38, 0, v39 - v38);
            goto LABEL_37;
          }
LABEL_45:
          v32 = 0;
          v43 = (_QWORD *)sub_186B270(0x10u);
          v8 = v43 + 1;
          *v43 = 2;
          *(_QWORD *)(a1 + 120) = v43 + 1;
          goto LABEL_34;
        }
        memset(v30, 0, v31 - v29);
        goto LABEL_28;
      }
LABEL_43:
      v24 = 0;
      v42 = (_QWORD *)sub_186B270(0x10u);
      v23 = v42 + 1;
      *v42 = 2;
      *(_QWORD *)(a1 + 96) = v42 + 1;
      goto LABEL_25;
    }
    memset((char *)v9 + v20, 0, v21 - v20);
    goto LABEL_19;
  }
  v10 = a2;
  v11 = (_DWORD *)v8 + a2;
  if ( *v11 != *(_DWORD *)(a1 + 84) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * a2) = 1;
    *v11 = *(_DWORD *)(a1 + 84);
    *((_DWORD *)v7 + a2) = a2;
    return v5;
  }
  while ( 1 )
  {
    v12 = v5;
    v5 = *((_DWORD *)v7 + v10);
    if ( v5 == v12 )
      break;
    v10 = v5;
  }
  return v12;
}

