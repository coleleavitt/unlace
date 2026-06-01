__int64 __fastcall sub_61CBC0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  char *v17; // r12
  __int64 v18; // rbp
  char *v19; // rbx
  char *v20; // rbp
  __int64 v21; // rdi

  result = (__int64)&off_1C528F0;
  v3 = *(__int64 **)(a1 + 208);
  *(_QWORD *)a1 = &off_1C528F0;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 200);
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = *(__int64 **)(a1 + 208);
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = *(void **)(a1 + 176);
  if ( v8 )
    result = sub_186B220(v8);
  v9 = *(__int64 **)(a1 + 160);
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(_QWORD *)(a1 + 152);
          v7 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_19:
    v9 = *(__int64 **)(a1 + 160);
    if ( v9 )
LABEL_20:
      result = sub_186B220(v9 - 1);
  }
  v13 = *(void **)(a1 + 128);
  if ( v13 )
    result = sub_186B220(v13);
  v14 = *(_QWORD *)(a1 + 120);
  if ( v14 )
    result = sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 112);
  if ( v15 )
    result = sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 104);
  if ( v16 )
    result = sub_186B220((void *)(v16 - 8));
  v17 = *(char **)(a1 + 80);
  if ( v17 )
  {
    v18 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v18 )
    {
      v19 = v17;
      v20 = &v17[16 * v18];
      do
      {
        while ( 1 )
        {
          v21 = *((_QWORD *)v19 + 1);
          if ( !v21 )
            break;
          v19 += 16;
          sub_186B220((void *)(v21 - 8));
          if ( v20 == v19 )
            return sub_186B220(v17);
        }
        v19 += 16;
      }
      while ( v19 != v20 );
    }
    return sub_186B220(v17);
  }
  return result;
}

