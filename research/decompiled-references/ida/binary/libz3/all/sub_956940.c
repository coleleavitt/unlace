void __fastcall sub_956940(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r12
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v14; // rdi
  void **v15; // rbx
  __int64 v16; // rax
  void **v17; // r12
  void **v18; // rbx
  __int64 v19; // rax
  void **v20; // r12
  __int64 v21; // rdi

  v2 = a1[22];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[18];
  if ( v3 )
    sub_186B220(v3);
  v4 = (void *)a1[15];
  if ( v4 )
    sub_186B220(v4);
  v5 = (_QWORD *)a1[13];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[v6];
      do
      {
        while ( *v5 )
        {
          v8 = (void *)(*v5++ - 8LL);
          sub_186B220(v8);
          if ( v7 == v5 )
          {
            v5 = (_QWORD *)a1[13];
            goto LABEL_13;
          }
        }
        ++v5;
      }
      while ( v5 != v7 );
      v5 = (_QWORD *)a1[13];
    }
LABEL_13:
    sub_186B220(v5 - 1);
  }
  v9 = (__int64 *)a1[12];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[11];
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_21;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_21:
    v9 = (__int64 *)a1[12];
    if ( v9 )
LABEL_22:
      sub_186B220(v9 - 1);
  }
  v14 = (void *)a1[8];
  if ( v14 )
    sub_186B220(v14);
  v15 = (void **)a1[7];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[3 * v16];
      do
      {
        while ( *v15 )
        {
          sub_186B220(*v15);
          v15 += 3;
          if ( v15 == v17 )
          {
            v15 = (void **)a1[7];
            goto LABEL_31;
          }
        }
        v15 += 3;
      }
      while ( v15 != v17 );
      v15 = (void **)a1[7];
    }
LABEL_31:
    sub_186B220(v15 - 1);
  }
  v18 = (void **)a1[6];
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 )
    {
      v20 = &v18[3 * v19];
      do
      {
        while ( *v18 )
        {
          sub_186B220(*v18);
          v18 += 3;
          if ( v20 == v18 )
          {
            v18 = (void **)a1[6];
            goto LABEL_38;
          }
        }
        v18 += 3;
      }
      while ( v18 != v20 );
      v18 = (void **)a1[6];
    }
LABEL_38:
    sub_186B220(v18 - 1);
  }
  v21 = a1[5];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
}

