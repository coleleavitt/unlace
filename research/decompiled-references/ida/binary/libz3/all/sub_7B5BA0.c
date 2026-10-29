__int64 __fastcall sub_7B5BA0(_QWORD *a1)
{
  char **exception; // rbp
  __int64 v2; // rdx
  char **v3; // rbp
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r12
  _QWORD *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned int *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r12d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  char *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28[9]; // [rsp+0h] [rbp-48h] BYREF

  result = a1[3];
  v6 = *(_QWORD *)(result + 3296);
  if ( !v6 )
    return result;
  v8 = (_QWORD *)a1[121];
  v9 = *(_DWORD *)(v6 - 4);
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 >= v9 )
    {
      v11 = a1[120];
      if ( v11 )
        v12 = *(_DWORD *)(v11 - 4);
      else
        v12 = 0;
      do
      {
LABEL_9:
        result = (unsigned int)(2 * *(_DWORD *)(v6 - 4));
        if ( v12 >= (unsigned int)result )
          break;
        v14 = (_QWORD *)a1[120];
        if ( v14 )
        {
          v15 = *((unsigned int *)v14 - 1);
          if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
          {
            v16 = (unsigned int)(3 * v15 + 1) >> 1;
            v17 = 4 * v16 + 8;
            if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v28, "Overflow encountered when expanding vector", v2);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v28);
              sub_233E40((__int64)v28);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300(v14 - 1, v17);
            v14 = v18 + 2;
            *v18 = v16;
            v19 = v18[1];
            a1[120] = v14;
            v13 = (unsigned int *)v14 + v19;
          }
          else
          {
            v13 = (unsigned int *)v14 + v15;
          }
        }
        else
        {
          v26 = (_QWORD *)sub_186B270(0x10u);
          v14 = v26 + 1;
          *v26 = 2;
          a1[120] = v26 + 1;
          v13 = (unsigned int *)(v26 + 1);
        }
        *v13 = v12;
        result = a1[3];
        ++v12;
        ++*((_DWORD *)v14 - 1);
        v6 = *(_QWORD *)(result + 3296);
LABEL_8:
        ;
      }
      while ( v6 );
      return result;
    }
  }
  else
  {
    if ( !v9 )
      return result;
    v10 = 0;
    v27 = (_QWORD *)sub_186B270(0xAu);
    v8 = v27 + 1;
    *v27 = 2;
    a1[121] = v27 + 1;
  }
  while ( 1 )
  {
    v23 = *((_DWORD *)v8 - 2);
    if ( v23 >= v9 )
      break;
    v20 = (3 * v23 + 1) >> 1;
    v21 = v20 + 8;
    if ( v23 + 8 >= (unsigned int)v21 || v23 >= v20 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C(v28, "Overflow encountered when expanding vector", v4);
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v8 - 1, v21);
    v8 = v22 + 2;
    *v22 = v20;
    a1[121] = v22 + 2;
  }
  v24 = a1[3];
  *((_DWORD *)v8 - 1) = v9;
  v25 = (char *)v8 + v10;
  v6 = *(_QWORD *)(v24 + 3296);
  if ( v10 != v9 )
    memset(v25, 0, v9 - (unsigned __int64)v10);
  result = a1[120];
  if ( !result )
  {
    v12 = 0;
    goto LABEL_8;
  }
  v12 = *(_DWORD *)(result - 4);
  if ( v6 )
    goto LABEL_9;
  return result;
}

