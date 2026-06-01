void __fastcall sub_CECC40(_QWORD *a1)
{
  void *v1; // rdi
  void (__fastcall ***v2)(_QWORD); // rbx
  __int64 v3; // rax
  void *v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 *v9; // rbx
  __int64 v10; // r14
  void *v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // rax
  bool v14; // zf
  __int64 *v15; // rax
  void **ptr; // [rsp+0h] [rbp-48h]

  *a1 = off_1C59CD8;
  v1 = (void *)a1[2];
  if ( v1 )
    sub_186B220(v1);
  v2 = (void (__fastcall ***)(_QWORD))a1[3];
  if ( v2 )
  {
    (**v2)(a1[3]);
    sub_186B220(v2);
  }
  v3 = a1[4];
  ptr = (void **)v3;
  if ( v3 )
  {
    v4 = *(void **)v3;
    v5 = *(__int64 **)v3;
    v6 = *(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 8);
    if ( *(_QWORD *)v3 != v6 )
    {
      while ( (unsigned __int64)*v5 <= 1 )
      {
        v5 += 2;
        if ( (__int64 *)v6 == v5 )
          goto LABEL_36;
      }
      if ( (__int64 *)v6 != v5 )
      {
        v7 = *v5;
        while ( 1 )
        {
          v8 = v5[1];
          v9 = *(__int64 **)v8;
          v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
          v11 = ptr[3];
          if ( *(_QWORD *)v8 != v10 )
          {
            while ( (unsigned __int64)*v9 <= 1 )
            {
              if ( (__int64 *)v10 == ++v9 )
                goto LABEL_25;
            }
            if ( (__int64 *)v10 != v9 )
              break;
          }
LABEL_25:
          if ( v7 )
          {
            v14 = (*(_DWORD *)(v7 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v11, v7);
          }
          if ( *(_QWORD *)v8 )
            sub_186B220(*(void **)v8);
          sub_186B220((void *)v8);
          v15 = v5 + 2;
          if ( (__int64 *)v6 != v5 + 2 )
          {
            while ( 1 )
            {
              v7 = *v15;
              v5 = v15;
              if ( (unsigned __int64)*v15 > 1 )
                break;
              v15 += 2;
              if ( (__int64 *)v6 == v15 )
                goto LABEL_35;
            }
            if ( (__int64 *)v6 != v15 )
              continue;
          }
LABEL_35:
          v4 = *ptr;
          goto LABEL_36;
        }
        v12 = *v9;
        if ( *v9 )
        {
          while ( 1 )
          {
            v14 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( !v14 )
              break;
            sub_15D7BC0(v11, v12);
            v11 = ptr[3];
            v13 = v9 + 1;
            if ( (__int64 *)v10 == v9 + 1 )
              goto LABEL_25;
LABEL_21:
            while ( 1 )
            {
              v12 = *v13;
              v9 = v13;
              if ( (unsigned __int64)*v13 > 1 )
                break;
              if ( (__int64 *)v10 == ++v13 )
                goto LABEL_25;
            }
            if ( (__int64 *)v10 == v13 )
              goto LABEL_25;
          }
        }
        v13 = v9 + 1;
        if ( (__int64 *)v10 == v9 + 1 )
          goto LABEL_25;
        goto LABEL_21;
      }
    }
LABEL_36:
    if ( v4 )
      sub_186B220(v4);
    sub_186B220(ptr);
  }
  sub_18572D0(a1 + 5);
}

