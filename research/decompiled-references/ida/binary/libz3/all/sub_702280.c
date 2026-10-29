__int64 __fastcall sub_702280(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rax
  void (__fastcall ***v5)(void *); // rbx
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rax
  __int64 result; // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi

  v2 = (void *)a1[24];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[21];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[20];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (void (__fastcall ***)(void *))a1[19];
  if ( v5 )
  {
    v6 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v6 )
    {
      (**v5)(v5);
      sub_186B220(v5);
    }
  }
  v7 = (__int64 *)a1[18];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[17];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[18];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = (void *)a1[14];
  if ( v11 )
    sub_186B220(v11);
  v12 = (void *)a1[11];
  if ( v12 )
    sub_186B220(v12);
  v13 = (void *)a1[8];
  if ( v13 )
    sub_186B220(v13);
  v14 = (void *)a1[5];
  if ( v14 )
    sub_186B220(v14);
  v15 = a1[4];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  result = sub_2334C0(a1 + 2);
  v17 = (__int64 *)a1[1];
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[2 * v18];
      do
      {
        v20 = (__int64 *)v17[1];
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v20 >= v21 )
            goto LABEL_40;
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              if ( *v20 )
              {
                v23 = *v17;
                v6 = (*(_DWORD *)(v22 + 8))-- == 1;
                if ( v6 )
                  break;
              }
              if ( ++v20 >= v21 )
                goto LABEL_39;
            }
            sub_15D7BC0(v23, v22);
            ++v20;
          }
          while ( v20 < v21 );
LABEL_39:
          v20 = (__int64 *)v17[1];
          if ( v20 )
LABEL_40:
            sub_186B220(v20 - 1);
        }
        v17 += 2;
      }
      while ( v17 != v19 );
      v17 = (__int64 *)a1[1];
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

