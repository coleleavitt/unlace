__int64 __fastcall sub_230EE0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // rdi

  result = (__int64)&off_1C4C428;
  *a1 = &off_1C4C428;
  v3 = a1[13];
  if ( v3 )
    result = sub_186B220((void *)(v3 - 8));
  v4 = a1[12];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = (__int64 *)a1[11];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[10];
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = (__int64 *)a1[11];
    if ( v5 )
LABEL_13:
      result = sub_186B220(v5 - 1);
  }
  v10 = (__int64 *)a1[9];
  if ( v10 )
  {
    result = *((unsigned int *)v10 - 1);
    v11 = &v10[result];
    if ( v10 >= v11 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[8];
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_21;
      }
      result = sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_21:
    v10 = (__int64 *)a1[9];
    if ( v10 )
LABEL_22:
      result = sub_186B220(v10 - 1);
  }
  v14 = (void *)a1[5];
  if ( v14 )
    return sub_186B220(v14);
  return result;
}

