__int64 __fastcall sub_76B0A0(__int64 *a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int i; // r15d
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int v22; // r13d
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int v27; // r12d
  unsigned int *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  unsigned __int64 v31; // r13
  __int64 *j; // rbp
  __int64 v33; // rsi
  _QWORD *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-70h]
  __int64 v37[11]; // [rsp+18h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4) != 2 )
    return 1;
  v36 = *a1;
  if ( *(_DWORD *)(a2 + 20) )
  {
    v6 = *(_QWORD *)(a2 + 80);
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v7 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v8 = 0;
    v9 = 1;
    *(v7 - 1) = 2;
    v10 = v7;
    while ( 1 )
    {
      *v7 = v6;
      ++v8;
      *((_DWORD *)v10 - 1) = v9;
      if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 20) )
        break;
      while ( 1 )
      {
        v6 = *(_QWORD *)(a2 + 8 * v8 + 80);
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v11 = *((_DWORD *)v10 - 1);
        if ( v11 == *((_DWORD *)v10 - 2) )
          break;
        v12 = v11;
        v9 = v11 + 1;
        ++v8;
        v10[v12] = v6;
        *((_DWORD *)v10 - 1) = v9;
        if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 20) )
          goto LABEL_12;
      }
      v25 = (3 * v11 + 1) >> 1;
      v26 = 8 * v25 + 8;
      v27 = v25;
      if ( 8 * v11 + 8 >= (unsigned int)v26 || v11 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v10 - 1, v26);
      v10 = v28 + 2;
      *v28 = v27;
      v29 = v28[1];
      v30 = v29;
      v7 = &v10[v29];
      v9 = (unsigned int)(v30 + 1);
    }
LABEL_12:
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      v17 = v10[i];
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v18 = (_QWORD *)a1[4];
      if ( v18 )
      {
        v19 = *((_DWORD *)v18 - 1);
        if ( v19 == *((_DWORD *)v18 - 2) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 8 * v20 + 8;
          v22 = v20;
          if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v37, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v37);
            sub_233E40((__int64)v37);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v18 - 1, v21);
          v24 = v23[1];
          v18 = v23 + 2;
          *v23 = v22;
          a1[4] = (__int64)(v23 + 2);
          LODWORD(v23) = v24;
          v16 = &v18[v24];
          v15 = (_DWORD)v23 + 1;
        }
        else
        {
          v14 = v19;
          v15 = v19 + 1;
          v16 = &v18[v14];
        }
      }
      else
      {
        v35 = (_QWORD *)sub_186B270(0x18u);
        v18 = v35 + 1;
        a1[4] = (__int64)(v35 + 1);
        *v35 = 2;
        v16 = v35 + 1;
        v15 = 1;
      }
      *v16 = v17;
      *((_DWORD *)v18 - 1) = v15;
      v9 = *((unsigned int *)v10 - 1);
    }
    v31 = (unsigned __int64)&v10[v9];
    for ( j = v10; (unsigned __int64)j < v31; ++j )
    {
      v33 = *j;
      if ( *j )
      {
        if ( (*(_DWORD *)(v33 + 8))-- == 1 )
          sub_15D7BC0(v36, v33);
      }
    }
    sub_186B220(v10 - 1);
  }
  return 1;
}

