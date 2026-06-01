_QWORD *__fastcall sub_8EF180(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  unsigned int **v4; // rbp
  unsigned int **v5; // r15
  _DWORD *v6; // rsi
  unsigned int i; // edx
  unsigned int v8; // r14d
  _QWORD *result; // rax
  unsigned int **v10; // rbp
  unsigned int **v11; // r15
  unsigned int **v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  unsigned int **v15; // rcx
  unsigned int *v16; // r14
  unsigned int v17; // ecx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  unsigned int **v25; // rbx
  unsigned int *v26; // rsi
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-94h]
  __int64 v30; // [rsp+10h] [rbp-88h] BYREF
  unsigned int **v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+28h] [rbp-70h] BYREF
  void *v33; // [rsp+30h] [rbp-68h]
  __int64 v34[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int ***)(a2 + 8);
  v32 = 0;
  v33 = nullptr;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v5 != v4 )
    {
      v6 = nullptr;
      for ( i = 0; ; i = v32 )
      {
        v8 = **v4;
        if ( v8 >= i )
        {
          sub_186B510(&v32, v8 + 1, 0);
          v6 = v33;
        }
        ++v4;
        v6[v8 >> 5] |= 1 << v8;
        if ( v5 == v4 )
          break;
      }
    }
  }
  result = sub_8EE1A0(&v30, a1, 0);
  v10 = v31;
  if ( v31 )
  {
    v11 = v31;
    v12 = &v31[*((unsigned int *)v31 - 1)];
    if ( v31 != v12 )
    {
      do
      {
        v16 = *v11;
        v17 = **v11;
        if ( v17 >= (unsigned int)v32 || (*((_DWORD *)v33 + (v17 >> 5)) & (1 << v17)) == 0 )
        {
          v18 = *(_QWORD **)(a2 + 8);
          ++v16[2];
          if ( v18 )
          {
            v19 = *((_DWORD *)v18 - 1);
            if ( v19 == *((_DWORD *)v18 - 2) )
            {
              v20 = (3 * v19 + 1) >> 1;
              v21 = 8 * v20 + 8;
              if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_8E4EB0(v34, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v34);
                sub_233E40((__int64)v34);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v29 = (3 * v19 + 1) >> 1;
              v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
              v18 = v22 + 2;
              *(_QWORD *)(a2 + 8) = v22 + 2;
              *v22 = v29;
              LODWORD(v22) = v22[1];
              v15 = (unsigned int **)&v18[(unsigned int)v22];
              v14 = (_DWORD)v22 + 1;
            }
            else
            {
              v13 = v19;
              v14 = v19 + 1;
              v15 = (unsigned int **)&v18[v13];
            }
          }
          else
          {
            v28 = (_QWORD *)sub_186B270(0x18u);
            v18 = v28 + 1;
            *v28 = 2;
            v14 = 1;
            *(_QWORD *)(a2 + 8) = v18;
            v15 = (unsigned int **)v18;
          }
          *v15 = v16;
          *((_DWORD *)v18 - 1) = v14;
        }
        ++v11;
      }
      while ( v12 != v11 );
      v23 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
      if ( (unsigned __int64)v10 < v23 )
      {
        v24 = v30;
        v25 = v10;
        do
        {
          v26 = *v25;
          if ( *v25 )
          {
            if ( v26[2]-- == 1 )
              sub_15D7BC0(v24, v26);
          }
          ++v25;
        }
        while ( (unsigned __int64)v25 < v23 );
      }
    }
    result = (_QWORD *)sub_186B220(v10 - 1);
  }
  if ( v33 )
    return (_QWORD *)sub_186B220(v33);
  return result;
}

