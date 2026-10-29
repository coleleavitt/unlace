__int64 __fastcall sub_828290(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  unsigned int *v3; // rbx
  __int64 result; // rax
  unsigned int *v5; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbp
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = (unsigned int *)(a1 + 64);
  result = 4LL * *(unsigned int *)(a1 + 32);
  v5 = (unsigned int *)(a1 + 64 + result);
  if ( result )
  {
    v7 = a1 - 8;
    while ( 1 )
    {
      v10 = (_QWORD *)(*a2 + 8LL * *v3);
      v11 = (_QWORD *)*v10;
      if ( !*v10 )
        break;
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v13 = (3 * v12 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v3;
        v15 = (unsigned int *)sub_186B300(v11 - 1, v14);
        v16 = v15[1];
        v17 = v15 + 2;
        *v10 = v15 + 2;
        *v15 = v13;
        result = (unsigned int)(v16 + 1);
        *(_QWORD *)&v17[2 * v16] = v7;
        *(v17 - 1) = result;
        if ( v5 == v3 )
          return result;
      }
      else
      {
        v8 = v12;
        result = v12 + 1;
        v9 = &v11[v8];
LABEL_4:
        ++v3;
        *v9 = v7;
        *((_DWORD *)v11 - 1) = result;
        if ( v5 == v3 )
          return result;
      }
    }
    v18 = (_QWORD *)sub_186B270(0x18u);
    v11 = v18 + 1;
    *v18 = 2;
    result = 1;
    *v10 = v11;
    v9 = v11;
    goto LABEL_4;
  }
  return result;
}

