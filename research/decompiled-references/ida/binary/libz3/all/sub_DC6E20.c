__int64 __fastcall sub_DC6E20(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r14
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18[11]; // [rsp+0h] [rbp-58h] BYREF

  v1 = (__int64 *)a1[1];
  result = *((unsigned int *)a1 + 4);
  v3 = &v1[result];
  if ( v1 < v3 )
  {
    do
    {
      v4 = *v1;
      if ( *v1 )
      {
        v5 = *a1;
        if ( (*(_DWORD *)(v4 + 16))-- == 1 )
        {
          v7 = *(_QWORD **)(v5 + 80);
          if ( v7 )
          {
            v8 = *((_DWORD *)v7 - 1);
            if ( v8 == *((_DWORD *)v7 - 2) )
            {
              v12 = (3 * v8 + 1) >> 1;
              v13 = 8 * v12 + 8;
              if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DBF430(v18, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v18);
                sub_233E40((__int64)v18);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v14 = (unsigned int *)sub_186B300(v7 - 1, v13);
              v15 = v14[1];
              v7 = v14 + 2;
              *(_QWORD *)(v5 + 80) = v14 + 2;
              *v14 = v12;
              LODWORD(v14) = v15;
              v11 = &v7[v15];
              v10 = (_DWORD)v14 + 1;
            }
            else
            {
              v9 = v8;
              v10 = v8 + 1;
              v11 = &v7[v9];
            }
          }
          else
          {
            v16 = (_QWORD *)sub_186B270(0x18u);
            v7 = v16 + 1;
            *v16 = 2;
            v10 = 1;
            *(_QWORD *)(v5 + 80) = v7;
            v11 = v7;
          }
          *v11 = v4;
          *((_DWORD *)v7 - 1) = v10;
        }
        result = sub_DE3700(v5);
      }
      ++v1;
    }
    while ( v1 < v3 );
    v1 = (__int64 *)a1[1];
  }
  if ( v1 != a1 + 3 )
  {
    if ( v1 )
      return sub_186B220(v1);
  }
  return result;
}

