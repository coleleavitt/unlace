void __fastcall sub_2224990(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  __int64 v4; // r12
  char *v5; // rax
  char *v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rax
  void *v12; // rdi
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  char *v15; // r14
  char *v16; // rdi
  int v17; // r14d
  const void *v18; // rsi
  size_t v19; // rdx
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (char *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 80, v22);
  v5 = *(char **)a1;
  v6 = (char *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 != v6 )
  {
    v7 = v5 + 24;
    v8 = v4 + 8;
    v9 = (unsigned __int64)&v5[((v6 - v5 - 80) & 0xFFFFFFFFFFFFFFF0LL) + 104];
    do
    {
      v11 = *((_QWORD *)v7 - 3);
      *(_DWORD *)(v8 + 8) = 0;
      v12 = (void *)(v8 + 16);
      *(_DWORD *)(v8 + 12) = 6;
      v13 = *(v7 - 2);
      *(_QWORD *)(v8 - 8) = v11;
      *(_QWORD *)v8 = v8 + 16;
      if ( v13 && (_DWORD *)v8 != v7 - 4 )
      {
        v14 = *((_DWORD **)v7 - 2);
        if ( v14 == v7 )
        {
          v18 = v7;
          v19 = 8LL * v13;
          if ( v13 <= 6uLL
            || (v21 = v9,
                sub_2237220(v8, v8 + 16, v13, 8),
                v12 = *(void **)v8,
                v18 = *((const void **)v7 - 2),
                v9 = v21,
                (v19 = 8LL * (unsigned int)*(v7 - 2)) != 0) )
          {
            v20 = v9;
            memcpy(v12, v18, v19);
            v9 = v20;
            *(_DWORD *)(v8 + 8) = v13;
            *(v7 - 2) = 0;
          }
          else
          {
            *(_DWORD *)(v8 + 8) = v13;
            *(v7 - 2) = 0;
          }
        }
        else
        {
          *(_QWORD *)v8 = v14;
          *(_DWORD *)(v8 + 8) = v13;
          *(_DWORD *)(v8 + 12) = *(v7 - 1);
          *((_QWORD *)v7 - 2) = v7;
          *(v7 - 1) = 0;
          *(v7 - 2) = 0;
        }
      }
      v10 = v7[12];
      v7 += 20;
      v8 += 80;
      *(_DWORD *)(v8 - 16) = v10;
    }
    while ( v7 != (_DWORD *)v9 );
    v15 = *(char **)a1;
    v6 = (char *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
    if ( v6 != *(char **)a1 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 80;
          v16 = *((char **)v6 + 1);
          if ( v16 == v6 + 24 )
            break;
          free(v16);
          if ( v6 == v15 )
          {
            v6 = *(char **)a1;
            goto LABEL_12;
          }
        }
      }
      while ( v6 != v15 );
      v6 = *(char **)a1;
    }
  }
LABEL_12:
  v17 = v22[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v17;
}
