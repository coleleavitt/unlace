_QWORD *__fastcall sub_7FC560(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  char **exception; // rbp
  __int64 v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)(a3 + 32);
  v5 = *(unsigned int *)(a3 + 24);
  v6 = *(_QWORD *)(a2 + 8);
  a1[1] = 0;
  v5 *= 8;
  *a1 = v6;
  v7 = (_QWORD *)(a3 + 32 + v5);
  if ( v5 )
  {
    while ( 1 )
    {
      v9 = *v4;
      if ( (unsigned __int8)sub_15D2CB0(v6, *v4) )
      {
        v10 = sub_15EC2C0(*(_QWORD *)(a2 + 8), v9);
        v11 = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v12 = (_QWORD *)a1[1];
        if ( v12 )
        {
          v13 = *((_DWORD *)v12 - 1);
          if ( v13 == *((_DWORD *)v12 - 2) )
          {
            v18 = (3 * v13 + 1) >> 1;
            v19 = 8 * v18 + 8;
            if ( 8 * v13 + 8 >= (unsigned int)v19 || v13 >= v18 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v24, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v24);
              sub_233E40((__int64)v24);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v20 = (unsigned int *)sub_186B300(v12 - 1, v19);
            v21 = v20[1];
            v12 = v20 + 2;
            *v20 = v18;
            a1[1] = v20 + 2;
            LODWORD(v20) = v21;
            v16 = &v12[v21];
            v15 = (_DWORD)v20 + 1;
          }
          else
          {
            v14 = v13;
            v15 = v13 + 1;
            v16 = &v12[v14];
          }
        }
        else
        {
          v22 = (_QWORD *)sub_186B270(0x18u);
          v12 = v22 + 1;
          *v22 = 2;
          v15 = 1;
          a1[1] = v12;
          v16 = v12;
        }
        ++v4;
        *v16 = v11;
        *((_DWORD *)v12 - 1) = v15;
        if ( v7 == v4 )
          return a1;
      }
      else if ( v7 == ++v4 )
      {
        return a1;
      }
      v6 = *(_QWORD *)(a2 + 8);
    }
  }
  return a1;
}

