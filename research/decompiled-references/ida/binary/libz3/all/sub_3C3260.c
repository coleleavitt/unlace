__int64 __fastcall sub_3C3260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int i; // r14d
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned int *v27; // rbx
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  char **exception; // rbx
  unsigned int *v35[11]; // [rsp+0h] [rbp-58h] BYREF

  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  *(_QWORD *)a1 = a2;
  v11 = *(_QWORD **)(a1 + 24);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 16);
          v10 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_13;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_13:
    v11 = *(_QWORD **)(a1 + 24);
    if ( v11 )
LABEL_14:
      *((_DWORD *)v11 - 1) = 0;
  }
  v15 = *(_QWORD *)(a3 + 8);
  for ( i = 0; v15; *((_DWORD *)v18 - 1) = v21 )
  {
    if ( i >= *(_DWORD *)(v15 - 4) )
      break;
    v17 = *(_QWORD *)(v15 + 8LL * i);
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v18 = *(_QWORD **)(a1 + 24);
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v29 = (3 * v19 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v30 || v19 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3BCB70((__int64 *)v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v18 - 1, v30);
        v32 = v31[1];
        v18 = v31 + 2;
        *v31 = v29;
        *(_QWORD *)(a1 + 24) = v31 + 2;
        LODWORD(v31) = v32;
        v22 = &v18[v32];
        v15 = *(_QWORD *)(a3 + 8);
        v21 = (_DWORD)v31 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      v18 = v33 + 1;
      *v33 = 2;
      v21 = 1;
      *(_QWORD *)(a1 + 24) = v18;
      v22 = v18;
      v15 = *(_QWORD *)(a3 + 8);
    }
    *v22 = v17;
    ++i;
  }
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  sub_3BCB50(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  *(_QWORD *)(a1 + 32) = a4;
  v35[0] = nullptr;
  sub_3BF620((__int64 *)a1, v35);
  v27 = v35[0];
  if ( v35[0] )
  {
    *(_DWORD *)(a1 + 56) = *(v35[0] - 1);
    sub_3C2300(a1, (__int64)v35, v23, v24, v25, v26);
    return sub_186B220(v27 - 2);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 0;
    return sub_3C2300(a1, (__int64)v35, v23, v24, v25, v26);
  }
}

