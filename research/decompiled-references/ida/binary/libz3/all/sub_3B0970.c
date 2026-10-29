__int64 __fastcall sub_3B0970(_QWORD **a1)
{
  _QWORD *v1; // r12
  unsigned __int64 v2; // rbp
  _QWORD *v3; // r15
  bool v4; // zf
  void *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  _QWORD *v8; // r14
  void *v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r13
  _QWORD *v14; // rbp
  void *v15; // rdi
  __int64 result; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[2];
    if ( v2 )
    {
      v17 = v2 + 8LL * *(unsigned int *)(v2 - 4);
      if ( v2 >= v17 )
        goto LABEL_21;
      do
      {
        while ( 1 )
        {
          v3 = *(_QWORD **)v2;
          v4 = (*(_DWORD *)(*(_QWORD *)v2 + 32LL))-- == 1;
          if ( v4 )
            break;
          v2 += 8LL;
          if ( v2 >= v17 )
            goto LABEL_20;
        }
        v5 = (void *)v3[9];
        if ( v5 )
          sub_186B220(v5);
        v6 = v3[3];
        if ( v6 )
        {
          v7 = v6 + 8LL * *(unsigned int *)(v6 - 4);
          if ( v6 >= v7 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v8 = *(_QWORD **)v6;
              v4 = (*(_DWORD *)(*(_QWORD *)v6 + 32LL))-- == 1;
              if ( v4 )
                break;
              v6 += 8LL;
              if ( v6 >= v7 )
                goto LABEL_17;
            }
            v9 = (void *)v8[9];
            if ( v9 )
              sub_186B220(v9);
            v6 += 8LL;
            sub_3B2C00(v8 + 2);
            sub_186B220(v8);
          }
          while ( v6 < v7 );
LABEL_17:
          v6 = v3[3];
          if ( v6 )
LABEL_18:
            sub_186B220((void *)(v6 - 8));
        }
        v2 += 8LL;
        sub_186B220(v3);
      }
      while ( v2 < v17 );
LABEL_20:
      v2 = v1[2];
      if ( v2 )
LABEL_21:
        *(_DWORD *)(v2 - 4) = 0;
    }
    sub_1829A00(v1 + 4);
    v10 = v1[80];
    if ( v10 )
      sub_186B220((void *)(v10 - 8));
    v11 = (void *)v1[77];
    if ( v11 )
      sub_186B220(v11);
    sub_18299D0(v1 + 4);
    v12 = v1[2];
    if ( v12 )
    {
      v13 = v12 + 8LL * *(unsigned int *)(v12 - 4);
      if ( v12 >= v13 )
        goto LABEL_35;
      do
      {
        while ( 1 )
        {
          v14 = *(_QWORD **)v12;
          v4 = (*(_DWORD *)(*(_QWORD *)v12 + 32LL))-- == 1;
          if ( v4 )
            break;
          v12 += 8LL;
          if ( v12 >= v13 )
            goto LABEL_34;
        }
        v15 = (void *)v14[9];
        if ( v15 )
          sub_186B220(v15);
        v12 += 8LL;
        sub_3B2C00(v14 + 2);
        sub_186B220(v14);
      }
      while ( v12 < v13 );
LABEL_34:
      v12 = v1[2];
      if ( v12 )
LABEL_35:
        sub_186B220((void *)(v12 - 8));
    }
    return sub_186B220(v1);
  }
  return result;
}

