void __fastcall sub_AEBC70(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  char **exception; // r12
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  unsigned int v28; // r15d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33[11]; // [rsp+2h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v9 = (__int64 *)a1[3];
  v10 = v9;
  if ( v9 )
  {
    v11 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 >= v11 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[2];
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v10 >= v11 )
          goto LABEL_9;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( (unsigned __int64)v10 < v11 );
LABEL_9:
    v9 = (__int64 *)a1[3];
    if ( v9 )
LABEL_10:
      *((_DWORD *)v9 - 1) = 0;
  }
  v15 = *(_QWORD *)(*a1 + 104LL);
  if ( dword_1C7ED00 == a2 )
  {
    v16 = *(_QWORD *)(v15 + 856);
    if ( !v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( dword_1C7ECFC == a2 )
  {
    v16 = *(_QWORD *)(v15 + 864);
    if ( !v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (a2 >> 1));
  if ( (a2 & 1) != 0 )
  {
    v27 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
    v16 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v9 = (__int64 *)a1[3];
    goto LABEL_16;
  }
  if ( v16 )
LABEL_15:
    ++*(_DWORD *)(v16 + 8);
LABEL_16:
  v17 = v9;
  if ( v9 )
  {
    v18 = *((_DWORD *)v9 - 1);
    if ( v18 == *((_DWORD *)v9 - 2) )
    {
      v28 = (3 * v18 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v29 || v18 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
      v31 = v30[1];
      v17 = (__int64 *)(v30 + 2);
      *v30 = v28;
      a1[3] = v30 + 2;
      LODWORD(v30) = v31;
      v21 = &v17[v31];
      v20 = (_DWORD)v30 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v9[v19];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v17 = v32 + 1;
    *v32 = 2;
    v20 = 1;
    a1[3] = v17;
    v21 = v17;
  }
  *v21 = v16;
  *((_DWORD *)v17 - 1) = v20;
  if ( a3 == 2 )
  {
    v22 = 0;
  }
  else if ( a3 > 2 )
  {
    v22 = 2;
    if ( a3 != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 57);
    }
  }
  else
  {
    v22 = a3 == 0 ? 1 : 3;
  }
  sub_AE9120(v33, a1, v22, a4);
  v23 = v33[0];
  v24 = v33[1];
  sub_AEAD60(a1, (__int64 *)v22, (__int64)(a1 + 2), v33[0], v25, v26);
  if ( v23 )
  {
    v14 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v24, v23);
  }
}

