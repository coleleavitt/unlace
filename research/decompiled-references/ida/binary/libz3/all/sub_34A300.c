__int64 __fastcall sub_34A300(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 *v4; // r13
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  void (***v12)(void); // rdi
  void (*v13)(void); // rax
  void (__fastcall ***v14)(void *); // rbx
  void *v15; // rbx
  __int64 result; // rax
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  void (***v25)(void); // [rsp+8h] [rbp-30h]

  v2 = (void *)a1[22];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[19];
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)a1[16];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = &v4[2 * v5];
      do
      {
        v7 = (__int64 *)v4[1];
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = *v4;
                v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_15;
            }
            sub_15D7BC0(v10, v9);
            ++v7;
          }
          while ( v7 < v8 );
LABEL_15:
          v7 = (__int64 *)v4[1];
          if ( v7 )
LABEL_16:
            sub_186B220(v7 - 1);
        }
        v4 += 2;
      }
      while ( v4 != v6 );
      v4 = (__int64 *)a1[16];
    }
    sub_186B220(v4 - 1);
  }
  v12 = (void (***)(void))a1[15];
  if ( v12 )
  {
    v13 = **v12;
    if ( v13 != nullsub_164 )
    {
      v25 = (void (***)(void))a1[15];
      v13();
      v12 = v25;
    }
    sub_186B220(v12);
  }
  v14 = (void (__fastcall ***)(void *))a1[14];
  if ( v14 )
  {
    v11 = (*((_DWORD *)v14 + 4))-- == 1;
    if ( v11 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 10);
  result = sub_182CBA0(v15, a1 + 12);
  v17 = (__int64 *)a1[7];
  if ( v17 )
  {
    result = *((unsigned int *)v17 - 1);
    v18 = &v17[result];
    if ( v17 >= v18 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[6];
          v11 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_34;
      }
      result = sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_34:
    v17 = (__int64 *)a1[7];
    if ( v17 )
LABEL_35:
      result = sub_186B220(v17 - 1);
  }
  v21 = (__int64 *)a1[5];
  if ( v21 )
  {
    result = *((unsigned int *)v21 - 1);
    v22 = &v21[result];
    if ( v21 >= v22 )
      return sub_186B220(v21 - 1);
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[4];
          v11 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_43;
      }
      result = sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_43:
    v21 = (__int64 *)a1[5];
    if ( v21 )
      return sub_186B220(v21 - 1);
  }
  return result;
}

