__int64 __fastcall sub_668F0(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebp
  int v4; // r12d
  __int64 v5; // rbx
  char *v6; // rdi
  char *v7; // rax
  unsigned int *v8; // r15
  _QWORD *v9; // r13
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx

  result = *(_QWORD *)(a1 + 376);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 || (v2 = *(_DWORD *)(a1 + 72), v4 = **(_DWORD **)(a1 + 368), v2 + 1 != v4) )
    {
      if ( !under_debugger )
        sub_383060(51919);
      goto LABEL_27;
    }
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(char **)(v5 + 344);
    v7 = &v6[4 * *(_QWORD *)(v5 + 352)];
    if ( v6 != v7 )
    {
      while ( v2 != *(_DWORD *)v6 )
      {
        v6 += 4;
        if ( v7 == v6 )
          goto LABEL_10;
      }
      if ( v7 != v6 )
      {
        memmove(v6, v6 + 4, v7 - v6 - 4);
        --*(_QWORD *)(v5 + 352);
      }
    }
LABEL_10:
    v8 = *(unsigned int **)(a1 + 344);
    result = 4LL * *(_QWORD *)(a1 + 352);
    if ( result )
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)(a1 + 8);
        v10 = *v8;
        v11 = (_DWORD *)v9[43];
        v12 = v9[44];
        v13 = &v11[v12];
        if ( v11 == v13 )
          goto LABEL_19;
        v14 = (_DWORD *)v9[43];
        while ( (_DWORD)v10 != *v14 )
        {
          if ( v13 == ++v14 )
            goto LABEL_19;
        }
        if ( v13 == v14 )
        {
LABEL_19:
          if ( v9[45] < (unsigned __int64)(v12 + 1) )
          {
            v16 = qvector_reserve();
            v17 = v9[44];
            v9[43] = v16;
            v13 = (_DWORD *)(v16 + 4 * v17);
          }
          *v13 = v10;
          ++v9[44];
          v10 = *v8;
        }
        v15 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v10 >= *(_DWORD *)(v15 + 64) )
          break;
        ++v8;
        sub_66220(*(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v10) + 368LL, v2, v4);
        result = *(_QWORD *)(a1 + 344) + 4LL * *(_QWORD *)(a1 + 352);
        if ( v8 == (unsigned int *)result )
          return result;
      }
      if ( !under_debugger )
        sub_383060(52719);
LABEL_27:
      BUG();
    }
  }
  return result;
}
