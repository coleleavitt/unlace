_QWORD *__fastcall sub_7F61E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  _QWORD *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r12
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v22; // rax
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)(a3 + 32);
  v6 = *(unsigned int *)(a3 + 24);
  v7 = *(_QWORD *)(a2 + 8);
  a1[1] = 0;
  v6 *= 8;
  *a1 = v7;
  v8 = (_QWORD *)(a3 + 32 + v6);
  if ( v6 )
  {
    while ( 1 )
    {
      v13 = sub_15EC2C0(v7, *v4);
      v14 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v15 = (_QWORD *)a1[1];
      if ( !v15 )
        break;
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 != *((_DWORD *)v15 - 2) )
      {
        v10 = v16;
        v11 = v16 + 1;
        v12 = &v15[v10];
        goto LABEL_4;
      }
      v17 = (3 * v16 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v15 - 1, v18);
      v20 = v19[1];
      *v19 = v17;
      ++v4;
      a1[1] = v19 + 2;
      *(_QWORD *)&v19[2 * v20 + 2] = v14;
      v19[1] = v20 + 1;
      if ( v8 == v4 )
        return a1;
LABEL_5:
      v7 = *(_QWORD *)(a2 + 8);
    }
    v22 = (_QWORD *)sub_186B270(0x18u);
    v15 = v22 + 1;
    *v22 = 2;
    v11 = 1;
    a1[1] = v15;
    v12 = v15;
LABEL_4:
    ++v4;
    *v12 = v14;
    *((_DWORD *)v15 - 1) = v11;
    if ( v8 == v4 )
      return a1;
    goto LABEL_5;
  }
  return a1;
}

