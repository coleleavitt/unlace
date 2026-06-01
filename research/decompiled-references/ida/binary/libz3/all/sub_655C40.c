__int64 __fastcall sub_655C40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  void *v12; // rdi
  void *v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = a1[14];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[13];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[12];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[11];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = (__int64 *)a1[10];
  if ( v7 )
  {
    result = *((unsigned int *)v7 - 1);
    v8 = &v7[result];
    if ( v7 >= v8 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[9];
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_16;
      }
      result = sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_16:
    v7 = (__int64 *)a1[10];
    if ( v7 )
LABEL_17:
      result = sub_186B220(v7 - 1);
  }
  v12 = (void *)a1[6];
  if ( v12 )
    result = sub_186B220(v12);
  v13 = (void *)a1[3];
  if ( v13 )
    result = sub_186B220(v13);
  v14 = (__int64 *)a1[2];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[1];
          v11 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_29;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_29:
    v14 = (__int64 *)a1[2];
    if ( v14 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

