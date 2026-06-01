__int64 __fastcall sub_CE9A00(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rdi
  void *v15; // rdi

  v2 = (__int64 *)a1[12];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v2 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = a1[11];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v2;
    }
    while ( v2 < v4 );
LABEL_8:
    v2 = (__int64 *)a1[12];
    if ( v2 )
LABEL_9:
      result = sub_186B220(v2 - 1);
  }
  v8 = (__int64 *)a1[10];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[9];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_17:
    v8 = (__int64 *)a1[10];
    if ( v8 )
LABEL_18:
      result = sub_186B220(v8 - 1);
  }
  v12 = a1[8];
  if ( v12 )
    result = sub_186B220((void *)(v12 - 8));
  v13 = a1[7];
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = (void *)a1[4];
  if ( v14 )
    result = sub_186B220(v14);
  v15 = (void *)a1[1];
  if ( v15 )
    return sub_186B220(v15);
  return result;
}

