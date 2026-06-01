__int64 *__fastcall sub_3EF610(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  _QWORD *v23; // rax
  char **exception; // r13
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+8h] [rbp-90h]
  unsigned int v27; // [rsp+14h] [rbp-84h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *a2;
  v5 = *(_QWORD *)(a3 + 8);
  *a1 = 0;
  v28 = v4;
  a1[1] = v4;
  v29[0] = v4;
  if ( v5 )
  {
    v7 = 0;
    v8 = 0;
    while ( v8 < *(_DWORD *)(v5 - 4) )
    {
      v9 = sub_15E1B70(*a2);
      v10 = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      if ( v7 )
      {
        v11 = *(_DWORD *)(v7 - 4);
        if ( v11 == *(_DWORD *)(v7 - 8) )
        {
          v20 = (3 * v11 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v21 || v11 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = (3 * v11 + 1) >> 1;
          v25 = v10;
          v22 = (unsigned int *)sub_186B300((void *)(v7 - 8), v21);
          v7 = (__int64)(v22 + 2);
          v10 = v25;
          *v22 = v27;
          LODWORD(v22) = v22[1];
          v14 = (_QWORD *)(v7 + 8LL * (unsigned int)v22);
          v13 = (_DWORD)v22 + 1;
        }
        else
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = (_QWORD *)(v7 + 8 * v12);
        }
      }
      else
      {
        v26 = v9;
        v23 = (_QWORD *)sub_186B270(0x18u);
        v7 = (__int64)(v23 + 1);
        *v23 = 2;
        v10 = v26;
        v13 = 1;
        v14 = (_QWORD *)v7;
      }
      *v14 = v10;
      v5 = *(_QWORD *)(a3 + 8);
      ++v8;
      *(_DWORD *)(v7 - 4) = v13;
      if ( !v5 )
        goto LABEL_10;
    }
    if ( v7 )
    {
LABEL_10:
      v15 = *(unsigned int *)(v7 - 4);
      goto LABEL_11;
    }
  }
  v7 = 0;
  v15 = 0;
LABEL_11:
  v16 = sub_15EC1C0(v28, v15);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = *a1;
  *a1 = v16;
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 8))-- == 1 )
      sub_15D7BC0(v28, v17);
  }
  v29[1] = v7;
  sub_2334C0(v29);
  return a1;
}

