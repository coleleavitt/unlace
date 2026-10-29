__int64 __fastcall sub_64B7D0(__int64 a1)
{
  int v1; // ebx
  char *v3; // r12
  const char *v4; // rdi
  int v5; // r15d
  int i; // r14d
  __int64 v7; // rax
  _DWORD *v8; // r14
  const char **v9; // r13
  const char *v10; // r15
  size_t v11; // rax
  size_t v12; // rbx
  signed __int64 v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  const char **v21; // [rsp+0h] [rbp-48h]
  _DWORD *dest; // [rsp+8h] [rbp-40h]

  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      qfree(*(void **)(a1 + 56));
      qfree(*(void **)(a1 + 64));
      *(_QWORD *)(a1 + 72) = 0;
      *(_OWORD *)(a1 + 56) = 0;
    }
    v3 = (char *)qcalloc(v1, 8);
    if ( v3 )
    {
      dest = (_DWORD *)qalloc(*(unsigned int *)(a1 + 20));
      if ( dest )
      {
        v4 = *(const char **)(a1 + 32);
        if ( v1 <= 0 )
        {
          *(_DWORD *)(a1 + 12) = 0;
          qsort(v3, 0, 8u, (__compar_fn_t)compar);
        }
        else
        {
          v5 = 0;
          for ( i = 0; i != v1; ++i )
          {
            if ( *(_DWORD *)v4 != 2147483646 )
            {
              v7 = v5++;
              *(_QWORD *)&v3[8 * v7] = v4;
            }
            v4 = (const char *)sub_647640(v4);
          }
          *(_DWORD *)(a1 + 12) = v5;
          qsort(v3, v5, 8u, (__compar_fn_t)compar);
          if ( v5 > 0 )
          {
            v8 = dest;
            v9 = (const char **)v3;
            v21 = (const char **)&v3[8 * v5];
            do
            {
              v10 = *v9++;
              v11 = sub_647640(v10);
              v12 = v11 - (_QWORD)v10;
              memcpy(v8, v10, v11 - (_QWORD)v10);
              v8 = (_DWORD *)((char *)v8 + v12);
            }
            while ( v21 != v9 );
            v13 = (char *)v8 - (char *)dest;
            v14 = (_DWORD)v8 - (_DWORD)dest;
            goto LABEL_16;
          }
        }
        v8 = dest;
        v13 = 0;
        v14 = 0;
LABEL_16:
        v15 = *(unsigned int *)(a1 + 20) - v13;
        if ( v15 <= 0xF )
        {
          *(_DWORD *)(a1 + 20) = v14;
          *(_DWORD *)(a1 + 52) = 0x7FFFFFFF;
          dest = (_DWORD *)qrealloc(dest);
          if ( !dest )
          {
            if ( !under_debugger )
              interr(130);
            BUG();
          }
        }
        else
        {
          *v8 = 2147483646;
          v8[1] = v15;
          v8[2] = v14;
          v8[3] = v14;
          ++*(_DWORD *)(a1 + 12);
          *(_DWORD *)(a1 + 52) = v14;
        }
        v1 = 1;
        qfree(v3);
        qfree(*(void **)(a1 + 32));
        *(_QWORD *)(a1 + 32) = dest;
        sub_64B100(a1, 0, v16, v17, v18, v19);
        return (unsigned int)v1;
      }
      qfree(v3);
    }
    return (unsigned int)-1;
  }
  return (unsigned int)v1;
}
