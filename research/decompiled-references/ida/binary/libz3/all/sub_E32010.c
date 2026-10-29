_QWORD *__fastcall sub_E32010(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // rdx
  const void **v4; // r14
  const void **v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  unsigned int v10; // esi
  _QWORD *v11; // rax
  int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+0h] [rbp-58h] BYREF

  *a1 = 0;
  v4 = *(const void ***)(a2 + 16);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    while ( v5 != v4 )
    {
      while ( 1 )
      {
        if ( !*v4 )
          BUG();
        v6 = __dynamic_cast(
               *v4,
               (const struct __class_type_info *)&`typeinfo for'solver,
               (const struct __class_type_info *)&`typeinfo for'pool_solver,
               0);
        v7 = (_QWORD *)*a1;
        v8 = v6[20];
        if ( *a1 )
          break;
        v18 = (_QWORD *)sub_186B270(0x18u);
        *v18 = 2;
        v13 = 1;
        v7 = v18 + 1;
        *a1 = v18 + 1;
        v9 = v18 + 1;
LABEL_13:
        ++v4;
        *v9 = v8;
        *((_DWORD *)v7 - 1) = v13;
        if ( v5 == v4 )
          return a1;
      }
      v9 = &v7[*((unsigned int *)v7 - 1)];
      v10 = *((_DWORD *)v7 - 1);
      if ( v7 == v9 )
      {
LABEL_11:
        if ( v10 == *((_DWORD *)v7 - 2) )
        {
          v14 = (3 * v10 + 1) >> 1;
          v15 = 8 * v14 + 8;
          if ( 8 * v10 + 8 >= v15 || v10 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_180DB2(v19, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
          v7 = v16 + 2;
          *v16 = v14;
          v17 = v16[1];
          *a1 = v7;
          v9 = &v7[v17];
          v13 = v17 + 1;
        }
        else
        {
          v13 = v10 + 1;
        }
        goto LABEL_13;
      }
      v11 = (_QWORD *)*a1;
      while ( *v11 != v8 )
      {
        if ( ++v11 == v9 )
          goto LABEL_11;
      }
      ++v4;
    }
  }
  return a1;
}

