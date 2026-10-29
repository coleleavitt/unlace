__int64 __fastcall sub_3B2C00(__int64 a1)
{
  unsigned __int64 v1; // rcx
  _QWORD *v2; // r12
  bool v3; // zf
  void *v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r15
  void *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-58h]
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+10h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 8);
  v13 = v1;
  if ( v1 )
  {
    v15 = v1 + 8LL * *(unsigned int *)(v1 - 4);
    if ( v1 >= v15 )
      return sub_186B220((void *)(v13 - 8));
    do
    {
      v2 = *(_QWORD **)v13;
      v3 = (*(_DWORD *)(*(_QWORD *)v13 + 32LL))-- == 1;
      if ( v3 )
      {
        v4 = (void *)v2[9];
        if ( v4 )
          sub_186B220(v4);
        v5 = v2[3];
        if ( v5 )
        {
          v14 = v5 + 8LL * *(unsigned int *)(v5 - 4);
          if ( v5 >= v14 )
            goto LABEL_27;
          do
          {
            while ( 1 )
            {
              v6 = *(_QWORD **)v5;
              v3 = (*(_DWORD *)(*(_QWORD *)v5 + 32LL))-- == 1;
              if ( v3 )
                break;
              v5 += 8LL;
              if ( v5 >= v14 )
                goto LABEL_26;
            }
            v7 = (void *)v6[9];
            if ( v7 )
              sub_186B220(v7);
            v8 = v6[3];
            if ( v8 )
            {
              v9 = v8 + 8LL * *(unsigned int *)(v8 - 4);
              if ( v8 >= v9 )
                goto LABEL_24;
              do
              {
                while ( 1 )
                {
                  v10 = *(_QWORD **)v8;
                  v3 = (*(_DWORD *)(*(_QWORD *)v8 + 32LL))-- == 1;
                  if ( v3 )
                    break;
                  v8 += 8LL;
                  if ( v8 >= v9 )
                    goto LABEL_23;
                }
                v11 = (void *)v10[9];
                if ( v11 )
                  sub_186B220(v11);
                v8 += 8LL;
                sub_3B2C00(v10 + 2);
                sub_186B220(v10);
              }
              while ( v8 < v9 );
LABEL_23:
              v8 = v6[3];
              if ( v8 )
LABEL_24:
                sub_186B220((void *)(v8 - 8));
            }
            v5 += 8LL;
            sub_186B220(v6);
          }
          while ( v5 < v14 );
LABEL_26:
          v5 = v2[3];
          if ( v5 )
LABEL_27:
            sub_186B220((void *)(v5 - 8));
        }
        sub_186B220(v2);
      }
      v13 += 8LL;
    }
    while ( v13 < v15 );
    result = *(_QWORD *)(a1 + 8);
    v13 = result;
    if ( result )
      return sub_186B220((void *)(v13 - 8));
  }
  return result;
}

