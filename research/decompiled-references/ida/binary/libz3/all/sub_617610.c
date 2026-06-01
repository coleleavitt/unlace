_QWORD *__fastcall sub_617610(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  _DWORD *v11; // rdx
  __int64 v13; // r15
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v16; // ecx
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // [rsp+8h] [rbp-70h]
  unsigned int v26; // [rsp+Ch] [rbp-6Ch]
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 24);
  a1[1] = 0;
  *a1 = v5;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
  {
    v9 = 0;
LABEL_3:
    if ( v9 >= *(_DWORD *)(v6 - 4) )
      return a1;
    v10 = *(_QWORD *)(v6 + 8LL * v9);
    if ( *(_WORD *)(v10 + 4) )
      goto LABEL_7;
    v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
    if ( !v11 || *(_DWORD *)(a2 + 40) != *v11 || v11[1] != 1 || *(_DWORD *)(v10 + 24) <= 1u )
      goto LABEL_7;
    v13 = *(_QWORD *)(v10 + 40);
    v14 = (_QWORD *)a1[1];
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    if ( !v14 )
    {
      v15 = (_QWORD *)sub_186B270(0x18u);
      v14 = v15 + 1;
      *v15 = 2;
      v16 = 1;
      v17 = 1;
      a1[1] = v14;
      v18 = v14;
      goto LABEL_15;
    }
    v19 = 1;
    while ( 1 )
    {
      v20 = *((_DWORD *)v14 - 1);
      if ( v20 == *((_DWORD *)v14 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v27, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v27);
          sub_233E40((__int64)v27);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = v19;
        v25 = (3 * v20 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v14 - 1, v22);
        v24 = v23[1];
        v14 = v23 + 2;
        a1[1] = v23 + 2;
        v16 = v26;
        *v23 = v25;
        LODWORD(v23) = v24;
        v18 = &v14[v24];
        v17 = (_DWORD)v23 + 1;
LABEL_15:
        *v18 = v13;
        v19 = v16 + 1;
        *((_DWORD *)v14 - 1) = v17;
        if ( v19 >= *(_DWORD *)(v10 + 24) )
        {
LABEL_20:
          v6 = *(_QWORD *)(a4 + 8);
LABEL_7:
          ++v9;
          if ( !v6 )
            return a1;
          goto LABEL_3;
        }
      }
      else
      {
        ++v19;
        v14[v20] = v13;
        *((_DWORD *)v14 - 1) = v20 + 1;
        if ( v19 >= *(_DWORD *)(v10 + 24) )
          goto LABEL_20;
      }
      v13 = *(_QWORD *)(v10 + 8LL * v19 + 32);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
    }
  }
  return a1;
}

