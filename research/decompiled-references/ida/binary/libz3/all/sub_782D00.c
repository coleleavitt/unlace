void __fastcall sub_782D00(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void (__fastcall ***v7)(void *); // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 *v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi

  v2 = (__int64 *)a1[12];
  *a1 = &off_1C545D8;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[11];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[12];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void (__fastcall ***)(void *))a1[10];
  if ( v7 )
  {
    v6 = (*((_DWORD *)v7 + 2))-- == 1;
    if ( v6 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  v8 = a1[9];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[7];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (_QWORD *)a1[5];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = &v10[4 * v11];
      do
      {
        while ( 1 )
        {
          v13 = (__int64 *)v10[3];
          if ( v13 )
          {
            v14 = &v13[*((unsigned int *)v13 - 1)];
            if ( v13 >= v14 )
              goto LABEL_30;
            do
            {
              while ( 1 )
              {
                v15 = *v13;
                if ( *v13 )
                {
                  v6 = (*(_DWORD *)(v15 + 4))-- == 1;
                  if ( v6 )
                    break;
                }
                if ( ++v13 >= v14 )
                  goto LABEL_29;
              }
              v16 = *(_QWORD *)(v15 + 8);
              if ( v16 )
                sub_186B220((void *)(v16 - 8));
              ++v13;
              sub_186B220((void *)v15);
            }
            while ( v13 < v14 );
LABEL_29:
            v13 = (__int64 *)v10[3];
            if ( v13 )
LABEL_30:
              sub_186B220(v13 - 1);
          }
          v17 = v10[2];
          if ( v17 )
            sub_186B220((void *)(v17 - 8));
          v18 = v10[1];
          if ( !v18 )
            break;
          v10 += 4;
          sub_186B220((void *)(v18 - 8));
          if ( v12 == v10 )
          {
            v10 = (_QWORD *)a1[5];
            goto LABEL_36;
          }
        }
        v10 += 4;
      }
      while ( v10 != v12 );
      v10 = (_QWORD *)a1[5];
    }
LABEL_36:
    sub_186B220(v10 - 1);
  }
  operator delete(a1, 0x68u);
}

