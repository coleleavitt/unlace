void __fastcall sub_41D4E0(__int64 **a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // r14
  __int64 v3; // r12
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // r15
  void *v11; // rdi
  _QWORD *v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // r13
  void *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  _QWORD *v20; // r13
  void (***v21)(void); // rdi
  _DWORD *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-50h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v2 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v3 = *v1;
        if ( *v1 )
        {
          v4 = (*(_DWORD *)(v3 + 48))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v1 >= v2 )
          goto LABEL_40;
      }
      v5 = *(_QWORD *)(v3 + 136);
      if ( v5 )
        sub_186B220((void *)(v5 - 8));
      sub_2334C0((__int64 *)(v3 + 112));
      v6 = *(_QWORD *)(v3 + 80);
      if ( v6 )
      {
        v7 = *(unsigned int *)(v6 - 4);
        if ( (_DWORD)v7 )
        {
          v23 = v6 + 136 * v7;
          do
          {
            v8 = *(_QWORD **)(v6 + 112);
            if ( v8 )
            {
              v9 = *((unsigned int *)v8 - 1);
              if ( (_DWORD)v9 )
              {
                v10 = &v8[v9];
                do
                {
                  while ( *v8 )
                  {
                    v11 = (void *)(*v8++ - 8LL);
                    sub_186B220(v11);
                    if ( v8 == v10 )
                      goto LABEL_17;
                  }
                  ++v8;
                }
                while ( v8 != v10 );
LABEL_17:
                v8 = *(_QWORD **)(v6 + 112);
              }
              sub_186B220(v8 - 1);
            }
            sub_2334C0((__int64 *)(v6 + 96));
            v12 = *(_QWORD **)(v6 + 80);
            if ( v12 )
            {
              v13 = *((unsigned int *)v12 - 1);
              if ( (_DWORD)v13 )
              {
                v14 = &v12[v13];
                do
                {
                  while ( *v12 )
                  {
                    v15 = (void *)(*v12++ - 8LL);
                    sub_186B220(v15);
                    if ( v14 == v12 )
                      goto LABEL_24;
                  }
                  ++v12;
                }
                while ( v12 != v14 );
LABEL_24:
                v12 = *(_QWORD **)(v6 + 80);
              }
              sub_186B220(v12 - 1);
            }
            v16 = *(_QWORD *)(v6 + 72);
            if ( v16 )
              sub_186B220((void *)(v16 - 8));
            v17 = *(_QWORD *)(v6 + 64);
            if ( v17 )
              sub_186B220((void *)(v17 - 8));
            sub_2334C0((__int64 *)(v6 + 48));
            v18 = *(_QWORD *)(v6 + 40);
            if ( v18 )
              sub_186B220((void *)(v18 - 8));
            v19 = *(_QWORD *)(v6 + 16);
            if ( v19 )
              sub_186B220((void *)(v19 - 8));
            v20 = *(_QWORD **)v6;
            if ( *(_QWORD *)v6 )
            {
              v4 = (*(_DWORD *)v20)-- == 1;
              if ( v4 )
              {
                v21 = (void (***)(void))v20[11];
                if ( v21 )
                {
                  v4 = (*((_DWORD *)v21 + 4))-- == 1;
                  if ( v4 )
                  {
                    (**v21)();
                    sub_186B220(v21);
                  }
                }
                v22 = (_DWORD *)v20[10];
                if ( v22 )
                  sub_41CD50(v22);
                sub_2B4F40(v20 + 8);
                sub_2B4F40(v20 + 6);
                sub_2334C0(v20 + 4);
                sub_3FCDF0(v20[2], v20[3]);
                sub_186B220(v20);
              }
            }
            v6 += 136;
          }
          while ( v6 != v23 );
          v6 = *(_QWORD *)(v3 + 80);
        }
        sub_186B220((void *)(v6 - 8));
      }
      ++v1;
      sub_3FCDF0(*(_QWORD *)(v3 + 56), *(_QWORD *)(v3 + 64));
      sub_186B220((void *)v3);
    }
    while ( v1 < v2 );
LABEL_40:
    v1 = *a1;
    if ( *a1 )
LABEL_41:
      sub_186B220(v1 - 1);
  }
}

