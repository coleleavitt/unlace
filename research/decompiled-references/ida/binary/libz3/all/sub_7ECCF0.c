__int64 __fastcall sub_7ECCF0(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  _DWORD *v14; // rdx
  __int64 result; // rax
  unsigned int *v16; // rbx
  unsigned int *i; // r12
  unsigned int v18; // esi
  __int64 v19; // r13
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2;
  if ( !*(_BYTE *)(a1 + 2536) )
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
        v28 = (3 * v23 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v29 || v23 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v21 - 1, v29);
        v31 = v30[1];
        v21 = v30 + 2;
        *(_QWORD *)(v19 + 2128) = v30 + 2;
        *v30 = v28;
        LODWORD(v30) = v31;
        v26 = &v21[v31];
        v25 = (_DWORD)v30 + 1;
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
      v32 = (_QWORD *)sub_186B270(0x18u);
      v21 = v32 + 1;
      *v32 = 2;
      v25 = 1;
      *(_QWORD *)(v19 + 2128) = v21;
      v26 = v21;
    }
    *v26 = v22;
    v5 = *(_QWORD **)(a1 + 2552);
    *((_DWORD *)v21 - 1) = v25;
    if ( v5 )
      goto LABEL_3;
LABEL_21:
    v7 = v4 + 1;
    if ( (_DWORD)v4 == -1 )
      goto LABEL_12;
    v6 = 0;
    v27 = (_QWORD *)sub_186B270(0x10u);
    v5 = v27 + 1;
    *v27 = 2;
    *(_QWORD *)(a1 + 2552) = v27 + 1;
    goto LABEL_9;
  }
  v5 = *(_QWORD **)(a1 + 2552);
  if ( !v5 )
    goto LABEL_21;
LABEL_3:
  v6 = *((unsigned int *)v5 - 1);
  if ( (unsigned int)v4 < (unsigned int)v6 )
    goto LABEL_12;
  v7 = v4 + 1;
  if ( (unsigned int)v6 >= (int)v4 + 1 )
  {
    *((_DWORD *)v5 - 1) = v7;
    goto LABEL_12;
  }
LABEL_9:
  while ( 1 )
  {
    v11 = *((_DWORD *)v5 - 2);
    if ( v11 >= v7 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = 4 * v8 + 8;
    if ( 4 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v33, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v5 - 1, v9);
    v5 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 2552) = v10 + 2;
  }
  v12 = 4 * v6;
  *((_DWORD *)v5 - 1) = v7;
  v13 = 4LL * v7;
  if ( v12 != v13 )
    memset((char *)v5 + v12, 0, v13 - v12);
LABEL_12:
  v14 = (_DWORD *)v5 + v4;
  result = *(unsigned int *)(a1 + 2544);
  if ( (unsigned int)result >= *v14 )
  {
    *v14 = result + 1;
    result = *(_QWORD *)(a1 + 2344);
    v16 = *(unsigned int **)(result + 8 * v4);
    if ( v16 )
    {
      result = *(v16 - 1);
      for ( i = &v16[result]; i != v16; result = sub_7EC940(a1, v18) )
        v18 = *v16++;
    }
  }
  return result;
}

