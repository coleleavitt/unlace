_QWORD *__fastcall sub_828440(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)(a3 + 32);
  v5 = *(_QWORD *)(a2 + 8);
  a1[1] = 0;
  *a1 = v5;
  v6 = 8LL * *(unsigned int *)(a3 + 24);
  v7 = (_QWORD *)(a3 + 32 + v6);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *v4;
      if ( !*(_WORD *)(*v4 + 4LL) && *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) == *(_QWORD *)(a2 + 24) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 848LL);
        if ( v9 == sub_15D1F10(*v4) )
          break;
      }
      if ( v7 == ++v4 )
        return a1;
    }
    v10 = *(unsigned int *)(v8 + 24);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(v8 + 32);
      v12 = (_DWORD *)a1[1];
      v13 = v8 + 8 * v10;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      if ( v12 )
        goto LABEL_17;
      v14 = sub_186B270(0x18u);
      v12 = (_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = 2;
      v8 += 8;
      a1[1] = v14 + 8;
      *(_QWORD *)(v14 + 8) = v11;
      for ( *(_DWORD *)(v14 + 4) = 1; v8 != v13; *(v12 - 1) = v17 )
      {
        v11 = *(_QWORD *)(v8 + 32);
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
LABEL_17:
        v19 = *(v12 - 1);
        if ( v19 == *(v12 - 2) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v24, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v24);
            sub_233E40((__int64)v24);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v12 - 2, v21);
          v23 = v22[1];
          v12 = v22 + 2;
          *v22 = v20;
          a1[1] = v22 + 2;
          LODWORD(v22) = v23;
          v18 = &v12[2 * v23];
          v17 = (_DWORD)v22 + 1;
        }
        else
        {
          v16 = v19;
          v17 = v19 + 1;
          v18 = &v12[2 * v16];
        }
        v8 += 8;
        *v18 = v11;
      }
    }
  }
  return a1;
}

