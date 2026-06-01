__int64 __fastcall sub_B9BD60(__int64 **a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 *v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 *v9; // rdx
  unsigned int v10; // ebx
  size_t v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rdi
  _DWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char *v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v10 = (3 * v6 + 1) >> 1;
      v11 = 16 * v10 + 8;
      if ( 16 * v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v21);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = sub_186B270(v11);
      v13 = *a1;
      v14 = (_DWORD *)v12;
      v5 = (__int64 *)(v12 + 8);
      if ( *a1 )
      {
        v15 = *((unsigned int *)v13 - 1);
        v16 = v12 + 8;
        *(_DWORD *)(v12 + 4) = v15;
        v17 = v13;
        v18 = &v13[2 * v15];
        if ( v13 != v18 )
        {
          do
          {
            v19 = *v17;
            v17 += 2;
            v16 += 16;
            *(_QWORD *)(v16 - 16) = v19;
            *(_QWORD *)(v16 - 8) = *(v17 - 1);
          }
          while ( v18 != v17 );
        }
        sub_186B220(v13 - 1);
        v9 = &v5[2 * (unsigned int)v14[1]];
        result = (unsigned int)(v14[1] + 1);
      }
      else
      {
        *(_DWORD *)(v12 + 4) = 0;
        v9 = (__int64 *)(v12 + 8);
        result = 1;
      }
      *a1 = v5;
      *v14 = v10;
    }
    else
    {
      v7 = v6;
      result = v6 + 1;
      v9 = &v5[2 * v7];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x28u);
    v5 = v20 + 1;
    *v20 = 2;
    result = 1;
    *a1 = v5;
    v9 = v5;
  }
  *v9 = *a2;
  v9[1] = a2[1];
  *((_DWORD *)v5 - 1) = result;
  return result;
}

