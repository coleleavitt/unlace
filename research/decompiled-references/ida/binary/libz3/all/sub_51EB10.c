char *__fastcall sub_51EB10(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  char **exception; // rbx
  char *result; // rax
  int v7; // r12d
  int v9; // r15d
  __int64 *v10; // rbx
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ebp
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[11]; // [rsp+10h] [rbp-58h] BYREF

  result = (char *)*(unsigned int *)(a2 + 24);
  v7 = (_DWORD)result + a4;
  if ( (_DWORD)result )
  {
    v9 = a4;
    v10 = (__int64 *)(a2 + 32);
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *(_WORD *)(*v10 + 4) == 1 )
        {
          result = (char *)*(unsigned int *)sub_148B390(a3, *(unsigned int *)(v12 + 16));
          if ( (int)result > 0 )
            break;
        }
        ++v9;
        ++v10;
        if ( v9 == v7 )
          return result;
      }
      sub_148B080(a3, *(unsigned int *)(v12 + 16), 0xFFFFFFFFLL);
      v13 = (_QWORD *)*a5;
      if ( *a5 )
      {
        v14 = *((unsigned int *)v13 - 1);
        if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
        {
          v15 = (unsigned int)(3 * v14 + 1) >> 1;
          v16 = 4 * v15 + 8;
          if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v20, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v13 - 1, v16);
          v13 = v17 + 2;
          *v17 = v15;
          v18 = v17[1];
          *a5 = v13;
          result = (char *)v13 + 4 * v18;
        }
        else
        {
          result = (char *)v13 + 4 * v14;
        }
      }
      else
      {
        v19 = (_QWORD *)sub_186B270(0x10u);
        v13 = v19 + 1;
        *v19 = 2;
        *a5 = v19 + 1;
        result = (char *)(v19 + 1);
      }
      *(_DWORD *)result = v9++;
      ++v10;
      ++*((_DWORD *)v13 - 1);
    }
    while ( v9 != v7 );
  }
  return result;
}

