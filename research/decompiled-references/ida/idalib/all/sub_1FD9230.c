void __fastcall sub_1FD9230(void *src, size_t n, unsigned int **a3)
{
  size_t v5; // rbp
  __int64 v6; // rax
  _WORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  _WORD *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !*((_DWORD *)a3 + 2) )
    return;
  v5 = n;
  v6 = sub_227D6D0(src, n);
  v7 = *(_WORD **)(v6 + 32);
  v8 = v6;
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v7 > 1u )
  {
    *v7 = 8224;
    v10 = (_WORD *)(*(_QWORD *)(v6 + 32) + 2LL);
    *(_QWORD *)(v6 + 32) = v10;
  }
  else
  {
    n = (size_t)"  ";
    v9 = sub_227BF10(v6, "  ", 2);
    v10 = *(_WORD **)(v9 + 32);
    v8 = v9;
  }
  v11 = *(_QWORD *)(v8 + 24) - (_QWORD)v10;
  if ( v5 > v11 )
  {
    n = (size_t)src;
    v20 = sub_227BF10(v8, src, v5);
    v10 = *(_WORD **)(v20 + 32);
    v8 = v20;
    if ( *(_QWORD *)(v20 + 24) - (_QWORD)v10 <= 1u )
    {
LABEL_8:
      n = (size_t)":\n";
      v10 = (_WORD *)v8;
      sub_227BF10(v8, ":\n", 2);
      goto LABEL_9;
    }
  }
  else
  {
    if ( v5 )
    {
      n = (size_t)src;
      memcpy(v10, src, v5);
      v21 = *(_QWORD *)(v8 + 24);
      v10 = (_WORD *)(v5 + *(_QWORD *)(v8 + 32));
      *(_QWORD *)(v8 + 32) = v10;
      v11 = v21 - (_QWORD)v10;
    }
    if ( v11 <= 1 )
      goto LABEL_8;
  }
  *v10 = 2618;
  *(_QWORD *)(v8 + 32) += 2LL;
LABEL_9:
  v12 = *a3;
  v13 = (__int64)&(*a3)[2 * *((unsigned int *)a3 + 2)];
  if ( (unsigned int *)v13 != *a3 )
  {
    do
    {
      while ( 1 )
      {
        v14 = sub_227D6D0(v10, n);
        v15 = *(_DWORD **)(v14 + 32);
        if ( *(_QWORD *)(v14 + 24) - (_QWORD)v15 > 3u )
        {
          *v15 = 538976288;
          *(_QWORD *)(v14 + 32) += 4LL;
        }
        else
        {
          v14 = sub_227BF10(v14, "    ", 4);
        }
        v16 = sub_227B910(v14, *v12);
        v17 = *(_DWORD **)(v16 + 32);
        if ( *(_QWORD *)(v16 + 24) - (_QWORD)v17 > 3u )
        {
          *v17 = 540945696;
          *(_QWORD *)(v16 + 32) += 4LL;
        }
        else
        {
          v16 = sub_227BF10(v16, " -> ", 4);
        }
        n = (int)v12[1];
        v10 = (_WORD *)v16;
        v18 = sub_227B930(v16, n);
        v19 = *(_BYTE **)(v18 + 32);
        if ( *(_BYTE **)(v18 + 24) != v19 )
          break;
        n = (size_t)"\n";
        v10 = (_WORD *)v18;
        v12 += 2;
        sub_227BF10(v18, "\n", 1);
        if ( (unsigned int *)v13 == v12 )
          return;
      }
      v12 += 2;
      *v19 = 10;
      ++*(_QWORD *)(v18 + 32);
    }
    while ( v12 != (unsigned int *)v13 );
  }
}
