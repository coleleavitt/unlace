void __fastcall sub_3B0B70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // r14
  bool v7; // zf
  void *v8; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  void *v11; // rdi
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r13
  void *v14; // rdi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  _QWORD *v17; // r12
  void *v18; // rdi
  __int64 *v19; // [rsp+0h] [rbp-58h]
  int v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  _QWORD *ptr; // [rsp+10h] [rbp-48h]
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = *(__int64 **)(a1 + 24);
      v5 = (__int64 *)(v2 + 8LL * v3);
      while ( 1 )
      {
        v6 = *v4;
        if ( a2 == *v4 )
          break;
        if ( v5 == ++v4 )
          return;
      }
      if ( v4 + 1 != v5 )
        memmove(v4, v4 + 1, (char *)(v5 - 1) - (char *)v4);
      *(_DWORD *)(v2 - 4) = v3 - 1;
      v7 = (*(_DWORD *)(v6 + 32))-- == 1;
      if ( v7 )
      {
        v8 = *(void **)(v6 + 72);
        if ( v8 )
          sub_186B220(v8);
        v9 = *(__int64 **)(v6 + 24);
        v19 = v9;
        if ( v9 )
        {
          v23 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
          if ( (unsigned __int64)v9 >= v23 )
            goto LABEL_41;
          do
          {
            v10 = *v19;
            ptr = (_QWORD *)v10;
            v20 = *(_DWORD *)(*v19 + 32);
            *(_DWORD *)(v10 + 32) = v20 - 1;
            if ( v20 == 1 )
            {
              v11 = *(void **)(v10 + 72);
              if ( v11 )
                sub_186B220(v11);
              v12 = ptr[3];
              if ( v12 )
              {
                v21 = v12 + 8LL * *(unsigned int *)(v12 - 4);
                if ( v12 >= v21 )
                  goto LABEL_38;
                do
                {
                  while ( 1 )
                  {
                    v13 = *(_QWORD **)v12;
                    v7 = (*(_DWORD *)(*(_QWORD *)v12 + 32LL))-- == 1;
                    if ( v7 )
                      break;
                    v12 += 8LL;
                    if ( v12 >= v21 )
                      goto LABEL_37;
                  }
                  v14 = (void *)v13[9];
                  if ( v14 )
                    sub_186B220(v14);
                  v15 = v13[3];
                  if ( v15 )
                  {
                    v16 = v15 + 8LL * *(unsigned int *)(v15 - 4);
                    if ( v15 >= v16 )
                      goto LABEL_35;
                    do
                    {
                      while ( 1 )
                      {
                        v17 = *(_QWORD **)v15;
                        v7 = (*(_DWORD *)(*(_QWORD *)v15 + 32LL))-- == 1;
                        if ( v7 )
                          break;
                        v15 += 8LL;
                        if ( v15 >= v16 )
                          goto LABEL_34;
                      }
                      v18 = (void *)v17[9];
                      if ( v18 )
                        sub_186B220(v18);
                      v15 += 8LL;
                      sub_3B2C00(v17 + 2);
                      sub_186B220(v17);
                    }
                    while ( v15 < v16 );
LABEL_34:
                    v15 = v13[3];
                    if ( v15 )
LABEL_35:
                      sub_186B220((void *)(v15 - 8));
                  }
                  v12 += 8LL;
                  sub_186B220(v13);
                }
                while ( v12 < v21 );
LABEL_37:
                v12 = ptr[3];
                if ( v12 )
LABEL_38:
                  sub_186B220((void *)(v12 - 8));
              }
              sub_186B220(ptr);
            }
            ++v19;
          }
          while ( (unsigned __int64)v19 < v23 );
          v19 = *(__int64 **)(v6 + 24);
          if ( v19 )
LABEL_41:
            sub_186B220(v19 - 1);
        }
        sub_186B220((void *)v6);
      }
    }
  }
}

