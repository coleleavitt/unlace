__int64 __fastcall sub_5A09A0(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 *v7; // rdx
  __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned int v26; // [rsp+Ch] [rbp-6Ch]
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = (__int64 *)a3[1];
  if ( v7 )
  {
    v8 = v7;
    v9 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 >= v9 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *a3;
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v9 )
          goto LABEL_8;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v9 );
LABEL_8:
    v7 = (__int64 *)a3[1];
    if ( v7 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v14 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v14 )
    {
      v15 = 4 * v14;
      v16 = 0;
      while ( 1 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 72) + v16));
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        if ( !v7 )
          break;
        v20 = *((_DWORD *)v7 - 1);
        if ( v20 == *((_DWORD *)v7 - 2) )
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
          v26 = (3 * v20 + 1) >> 1;
          v16 += 4;
          v23 = (unsigned int *)sub_186B300(v7 - 1, v22);
          v7 = (__int64 *)(v23 + 2);
          *v23 = v26;
          v24 = v23[1];
          a3[1] = (__int64)(v23 + 2);
          result = (unsigned int)(v24 + 1);
          v7[v24] = v19;
          *((_DWORD *)v7 - 1) = result;
          if ( v16 == v15 )
            return result;
        }
        else
        {
          v17 = v20;
          result = v20 + 1;
          v18 = &v7[v17];
LABEL_14:
          v16 += 4;
          *v18 = v19;
          *((_DWORD *)v7 - 1) = result;
          if ( v16 == v15 )
            return result;
        }
      }
      v25 = (_QWORD *)sub_186B270(0x18u);
      v7 = v25 + 1;
      *v25 = 2;
      result = 1;
      a3[1] = (__int64)v7;
      v18 = v7;
      goto LABEL_14;
    }
  }
  return result;
}

