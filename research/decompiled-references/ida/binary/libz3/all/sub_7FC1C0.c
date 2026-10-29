__int64 __fastcall sub_7FC1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned int i; // r13d
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  unsigned int v14; // ebx
  size_t v15; // rsi
  unsigned int *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // eax
  _QWORD *v21; // rax
  char **exception; // r12
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v24; // [rsp+18h] [rbp-50h]
  __int64 v25[9]; // [rsp+20h] [rbp-48h] BYREF

  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)a1 + 24LL))(&v23, a1, a2);
  v5 = v24;
  if ( v24 )
  {
    for ( i = 0; i < *((_DWORD *)v5 - 1); ++i )
    {
      while ( 1 )
      {
        v7 = v5[i];
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        v8 = *(_QWORD *)(a4 + 8);
        if ( !v8 )
        {
          v21 = (_QWORD *)sub_186B270(0x18u);
          v17 = v21 + 1;
          *v21 = 2;
          v5 = v24;
          v20 = 1;
          *(_QWORD *)(a4 + 8) = v17;
          v19 = v17;
          goto LABEL_21;
        }
        v9 = *(_DWORD *)(v8 - 4);
        if ( v9 == *(_DWORD *)(v8 - 8) )
          break;
        ++i;
        *(_QWORD *)(v8 + 8LL * v9) = v7;
        *(_DWORD *)(v8 - 4) = v9 + 1;
        if ( i >= *((_DWORD *)v5 - 1) )
          goto LABEL_9;
      }
      v14 = (3 * v9 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v25, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300((void *)(v8 - 8), v15);
      v17 = v16 + 2;
      v18 = v16[1];
      *v16 = v14;
      *(_QWORD *)(a4 + 8) = v16 + 2;
      v5 = v24;
      LODWORD(v16) = v18;
      v19 = &v17[v18];
      v20 = (_DWORD)v16 + 1;
LABEL_21:
      *v19 = v7;
      *((_DWORD *)v17 - 1) = v20;
      if ( !v5 )
        return 0;
    }
LABEL_9:
    v10 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v10 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v11 = *v5;
        if ( *v5 )
        {
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v10 )
          goto LABEL_15;
      }
      sub_15D7BC0(v23, v11);
      ++v5;
    }
    while ( v5 < v10 );
LABEL_15:
    v5 = v24;
    if ( v24 )
LABEL_16:
      sub_186B220(v5 - 1);
  }
  return 0;
}

