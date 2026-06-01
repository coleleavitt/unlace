__int64 __fastcall sub_7EC940(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  __int64 result; // rax
  __int64 v19; // rbp
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rax
  unsigned int *v30; // rax
  __int64 v31; // rbp
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rdx
  _QWORD *v37; // rdx
  unsigned int v38; // r13d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r12d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 2536) )
  {
    v8 = *(_QWORD **)(a1 + 2568);
    if ( v8 )
      goto LABEL_3;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 2536) = 1;
    v20 = (_QWORD *)sub_180C100(v19 + 2144, 16);
    v21 = *(_QWORD **)(v19 + 2128);
    v22 = v20;
    *v20 = off_1C54BB0;
    v20[1] = a1;
    if ( v21 )
    {
      v23 = *((_DWORD *)v21 - 1);
      if ( v23 == *((_DWORD *)v21 - 2) )
      {
        v38 = (3 * v23 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v39 || v23 >= v38 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = (unsigned int *)sub_186B300(v21 - 1, v39);
        v41 = v40[1];
        v21 = v40 + 2;
        *(_QWORD *)(v19 + 2128) = v40 + 2;
        *v40 = v38;
        LODWORD(v40) = v41;
        v26 = &v21[v41];
        v25 = (_DWORD)v40 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v21[v24];
      }
    }
    else
    {
      v51 = (_QWORD *)sub_186B270(0x18u);
      v21 = v51 + 1;
      *v51 = 2;
      v25 = 1;
      *(_QWORD *)(v19 + 2128) = v21;
      v26 = v21;
    }
    *v26 = v22;
    v8 = *(_QWORD **)(a1 + 2568);
    *((_DWORD *)v21 - 1) = v25;
    if ( v8 )
    {
LABEL_3:
      v9 = *((unsigned int *)v8 - 1);
      if ( a2 < (unsigned int)v9 )
        goto LABEL_12;
      v10 = a2 + 1;
      if ( (unsigned int)v9 >= a2 + 1 )
      {
        *((_DWORD *)v8 - 1) = v10;
        goto LABEL_12;
      }
      goto LABEL_9;
    }
  }
  v10 = a2 + 1;
  if ( a2 == -1 )
    goto LABEL_12;
  v9 = 0;
  v27 = (_QWORD *)sub_186B270(0x10u);
  v8 = v27 + 1;
  *v27 = 2;
  *(_QWORD *)(a1 + 2568) = v27 + 1;
LABEL_9:
  while ( 1 )
  {
    v14 = *((_DWORD *)v8 - 2);
    if ( v14 >= v10 )
      break;
    v11 = (3 * v14 + 1) >> 1;
    v12 = 4 * v11 + 8;
    if ( 4 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v53, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v53);
      sub_233E40((__int64)v53);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
    v8 = v13 + 2;
    *v13 = v11;
    *(_QWORD *)(a1 + 2568) = v13 + 2;
  }
  v15 = 4 * v9;
  *((_DWORD *)v8 - 1) = v10;
  v16 = 4LL * v10;
  if ( v15 != v16 )
    memset((char *)v8 + v15, 0, v16 - v15);
LABEL_12:
  v17 = (_DWORD *)v8 + a2;
  result = *(unsigned int *)(a1 + 2560);
  if ( (unsigned int)result >= *v17 )
  {
    v28 = *(_QWORD **)(a1 + 2584);
    *v17 = result + 1;
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v42 = (unsigned int)(3 * v29 + 1) >> 1;
        v43 = 4 * v42 + 8;
        if ( 4 * (int)v29 + 8 >= (unsigned int)v43 || (unsigned int)v29 >= v42 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v28 - 1, v43);
        v28 = v44 + 2;
        *v44 = v42;
        v45 = v44[1];
        *(_QWORD *)(a1 + 2584) = v28;
        v30 = (unsigned int *)v28 + v45;
      }
      else
      {
        v30 = (unsigned int *)v28 + v29;
      }
    }
    else
    {
      v50 = (_QWORD *)sub_186B270(0x10u);
      v28 = v50 + 1;
      *v50 = 2;
      *(_QWORD *)(a1 + 2584) = v50 + 1;
      v30 = (unsigned int *)(v50 + 1);
    }
    *v30 = a2;
    v31 = *(_QWORD *)(a1 + 8);
    ++*((_DWORD *)v28 - 1);
    v32 = (_QWORD *)sub_180C100(v31 + 2144, 16);
    v33 = *(_QWORD **)(v31 + 2128);
    v34 = v32;
    *v32 = off_1C54BD8;
    v32[1] = a1 + 2584;
    if ( v33 )
    {
      v35 = *((_DWORD *)v33 - 1);
      if ( v35 == *((_DWORD *)v33 - 2) )
      {
        v46 = (3 * v35 + 1) >> 1;
        v47 = 8 * v46 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v47 || v35 >= v46 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v53, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v53);
          sub_233E40((__int64)v53);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v48 = (unsigned int *)sub_186B300(v33 - 1, v47);
        v49 = v48[1];
        v33 = v48 + 2;
        *(_QWORD *)(v31 + 2128) = v48 + 2;
        *v48 = v46;
        LODWORD(v48) = v49;
        v37 = &v33[v49];
        result = (unsigned int)((_DWORD)v48 + 1);
      }
      else
      {
        v36 = v35;
        result = v35 + 1;
        v37 = &v33[v36];
      }
    }
    else
    {
      v52 = (_QWORD *)sub_186B270(0x18u);
      v33 = v52 + 1;
      *v52 = 2;
      result = 1;
      *(_QWORD *)(v31 + 2128) = v33;
      v37 = v33;
    }
    *v37 = v34;
    *((_DWORD *)v33 - 1) = result;
  }
  return result;
}

