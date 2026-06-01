_QWORD *__fastcall sub_8289A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = (_QWORD *)(a3 + 32);
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
      v10 = *v5;
      if ( (unsigned __int8)sub_15D2CB0(v7, *v5) )
      {
        v11 = sub_15EC2C0(*(_QWORD *)(a2 + 8), v10);
        v12 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        v13 = (_QWORD *)a1[1];
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 - 1);
          if ( v14 == *((_DWORD *)v13 - 2) )
          {
            v19 = (3 * v14 + 1) >> 1;
            v20 = 8 * v19 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v20 || v14 >= v19 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v24, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v24);
              sub_233E40((__int64)v24);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
            v22 = v21[1];
            v13 = v21 + 2;
            *v21 = v19;
            a1[1] = v21 + 2;
            LODWORD(v21) = v22;
            v17 = &v13[v22];
            v16 = (_DWORD)v21 + 1;
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = &v13[v15];
          }
        }
        else
        {
          v23 = (_QWORD *)sub_186B270(0x18u);
          v13 = v23 + 1;
          *v23 = 2;
          v16 = 1;
          a1[1] = v13;
          v17 = v13;
        }
        ++v5;
        *v17 = v12;
        *((_DWORD *)v13 - 1) = v16;
        if ( v8 == v5 )
          return a1;
      }
      else if ( v8 == ++v5 )
      {
        return a1;
      }
      v7 = *(_QWORD *)(a2 + 8);
    }
  }
  return a1;
}

