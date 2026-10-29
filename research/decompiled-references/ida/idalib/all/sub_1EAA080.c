unsigned __int64 __fastcall sub_1EAA080(void *src, size_t n, unsigned int **a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rax
  void *v7; // rdi
  __int64 v8; // rbp
  char *v9; // rsi
  void *v10; // rdi
  unsigned int *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rbp
  size_t v14; // rax
  void *v15; // rdi
  size_t v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  size_t v19; // rax
  size_t v20; // r14
  __int64 v21; // rbp
  size_t v22; // rax
  void *v23; // rdi
  size_t v24; // r14

  result = *((unsigned int *)a3 + 2);
  if ( (_DWORD)result )
  {
    v6 = sub_227D6D0(src, n);
    v7 = *(void **)(v6 + 32);
    v8 = v6;
    if ( n > *(_QWORD *)(v6 + 24) - (_QWORD)v7 )
    {
      v8 = sub_227BF10(v6, src, n);
    }
    else if ( n )
    {
      memcpy(v7, src, n);
      *(_QWORD *)(v8 + 32) += n;
    }
    v9 = ":\n";
    v10 = (void *)v8;
    result = sub_995540(v8, ":\n");
    v11 = *a3;
    v12 = (__int64)&(*a3)[4 * *((unsigned int *)a3 + 2)];
    if ( (unsigned int *)v12 != v11 )
    {
      do
      {
        while ( 1 )
        {
          v21 = sub_227D6D0(v10, v9);
          v22 = j__strlen("  ");
          v23 = *(void **)(v21 + 32);
          v24 = v22;
          if ( v22 <= *(_QWORD *)(v21 + 24) - (_QWORD)v23 )
          {
            if ( v22 )
            {
              memcpy(v23, "  ", v22);
              *(_QWORD *)(v21 + 32) += v24;
            }
          }
          else
          {
            v21 = sub_227BF10(v21, "  ", v22);
          }
          v13 = sub_227B910(v21, *v11);
          v14 = j__strlen(" -> ");
          v15 = *(void **)(v13 + 32);
          v16 = v14;
          if ( v14 > *(_QWORD *)(v13 + 24) - (_QWORD)v15 )
          {
            v13 = sub_227BF10(v13, " -> ", v14);
          }
          else if ( v14 )
          {
            memcpy(v15, " -> ", v14);
            *(_QWORD *)(v13 + 32) += v16;
          }
          v17 = *((_QWORD *)v11 + 1);
          v9 = *(char **)(v17 + 8);
          v18 = sub_227BF10(v13, v9, *(_QWORD *)(v17 + 16));
          v19 = j__strlen("\n");
          v10 = *(void **)(v18 + 32);
          v20 = v19;
          result = *(_QWORD *)(v18 + 24) - (_QWORD)v10;
          if ( v20 <= result )
            break;
          v9 = "\n";
          v10 = (void *)v18;
          v11 += 4;
          result = sub_227BF10(v18, "\n", v20);
          if ( v11 == (unsigned int *)v12 )
            return result;
        }
        if ( v20 )
        {
          v9 = "\n";
          result = (unsigned __int64)memcpy(v10, "\n", v20);
          *(_QWORD *)(v18 + 32) += v20;
        }
        v11 += 4;
      }
      while ( v11 != (unsigned int *)v12 );
    }
  }
  return result;
}
