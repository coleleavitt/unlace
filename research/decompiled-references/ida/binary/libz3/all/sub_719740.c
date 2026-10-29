_QWORD *__fastcall sub_719740(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // r13d
  size_t v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // r8d
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD *result; // rax
  _QWORD *v22; // rax
  char **exception; // rbx
  __int64 v24; // rdx
  _DWORD *v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 16 * v3 + 8;
    if ( 16 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_109F38(v27, "Overflow encountered when expanding vector", v24);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v27);
      sub_233E40((__int64)v27);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v5 = sub_186B270(v4);
    v6 = (__int64 *)*a1;
    v25 = (_DWORD *)v5;
    v7 = v5 + 8;
    v26 = v7;
    if ( *a1 )
    {
      v8 = *((unsigned int *)v6 - 1);
      v9 = v7;
      v25[1] = v8;
      v10 = v8;
      v11 = v6;
      v12 = &v6[2 * v8];
      if ( v6 != v12 )
      {
        do
        {
          v13 = *v11;
          v11 += 2;
          v9 += 16;
          *(_QWORD *)(v9 - 16) = v13;
          v14 = *(v11 - 1);
          *(v11 - 1) = 0;
          *(_QWORD *)(v9 - 8) = v14;
        }
        while ( v12 != v11 );
      }
      v15 = &v6[2 * v8];
      if ( v10 )
      {
        do
        {
          v16 = (__int64 *)v6[1];
          if ( v16 )
          {
            v17 = &v16[*((unsigned int *)v16 - 1)];
            if ( v16 >= v17 )
              goto LABEL_16;
            do
            {
              while ( 1 )
              {
                v18 = *v16;
                if ( *v16 )
                {
                  v19 = *v6;
                  if ( (*(_DWORD *)(v18 + 8))-- == 1 )
                    break;
                }
                if ( ++v16 >= v17 )
                  goto LABEL_15;
              }
              sub_15D7BC0(v19, v18);
              ++v16;
            }
            while ( v16 < v17 );
LABEL_15:
            v16 = (__int64 *)v6[1];
            if ( v16 )
LABEL_16:
              sub_186B220(v16 - 1);
          }
          v6 += 2;
        }
        while ( v6 != v15 );
        v6 = (__int64 *)*a1;
      }
      sub_186B220(v6 - 1);
    }
    else
    {
      v25[1] = 0;
    }
    *a1 = v26;
    *v25 = v3;
    return v25;
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x28u);
    *v22 = 2;
    result = v22 + 1;
    *a1 = (__int64)result;
  }
  return result;
}

