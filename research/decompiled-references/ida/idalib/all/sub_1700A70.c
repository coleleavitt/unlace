void __fastcall sub_1700A70(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // r13
  __int64 v6; // rdi
  void **v7; // rdi
  void **v8; // r12
  void **v9; // rdi
  void **v10; // rbx
  __int64 v11; // rdx
  void **v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void **v16; // rdi
  void **v17; // r13
  void **v18; // rdi
  void **v19; // rdi
  _QWORD *v20; // r13
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  _QWORD *v23; // r12
  _QWORD *v24; // rdi
  _QWORD *v25; // [rsp+8h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 420) )
    free(*(void **)(a1 + 400));
  if ( *(_BYTE *)(a1 + 392) && *(_DWORD *)(a1 + 372) )
    free(*(void **)(a1 + 360));
  v2 = *(_QWORD **)(a1 + 256);
  v3 = *(unsigned int *)(a1 + 272);
  v4 = 4 * v3;
  if ( (_DWORD)v3 )
  {
    v5 = &v2[v4];
    while ( 1 )
    {
      while ( *v2 == -4096 )
      {
        if ( v2[1] != -1 )
          goto LABEL_9;
        v2 += 4;
        if ( v5 == v2 )
        {
LABEL_19:
          v2 = *(_QWORD **)(a1 + 256);
          v4 = 4LL * *(unsigned int *)(a1 + 272);
          goto LABEL_20;
        }
      }
      if ( *v2 != -8192 || v2[1] != -2 )
      {
LABEL_9:
        v6 = v2[2];
        if ( v6 )
        {
          if ( (v6 & 4) != 0 )
          {
            v7 = (void **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
            v8 = v7;
            if ( v7 )
            {
              v9 = (void **)*v7;
              if ( v9 != v8 + 2 )
                free(v9);
              operator delete(v8, 0x50u);
            }
          }
        }
      }
      v2 += 4;
      if ( v5 == v2 )
        goto LABEL_19;
    }
  }
LABEL_20:
  operator delete(v2, v4 * 8, 8);
  v10 = *(void ***)(a1 + 232);
  if ( v10 != (void **)(a1 + 232) )
  {
    do
    {
      v11 = *((unsigned int *)v10 + 8);
      v12 = (void **)*v10;
      v13 = v10[2];
      v14 = 24 * v11;
      if ( (_DWORD)v11 )
      {
        v25 = &v13[3 * v11];
        do
        {
          while ( 1 )
          {
            if ( *v13 != -2 && *v13 != -1 )
            {
              v15 = v13[1];
              if ( v15 )
              {
                if ( (v15 & 4) != 0 )
                {
                  v16 = (void **)(v15 & 0xFFFFFFFFFFFFFFF8LL);
                  v17 = v16;
                  if ( v16 )
                    break;
                }
              }
            }
            v13 += 3;
            if ( v25 == v13 )
              goto LABEL_31;
          }
          v18 = (void **)*v16;
          if ( v18 != v17 + 2 )
            free(v18);
          v13 += 3;
          operator delete(v17, 0x50u);
        }
        while ( v25 != v13 );
LABEL_31:
        v13 = v10[2];
        v14 = 24LL * *((unsigned int *)v10 + 8);
      }
      operator delete(v13, v14, 8);
      v19 = v10;
      v10 = v12;
      operator delete(v19);
    }
    while ( v12 != (void **)(a1 + 232) );
  }
  if ( !*(_BYTE *)(a1 + 44) )
    free(*(void **)(a1 + 24));
  v20 = *(_QWORD **)(a1 + 8);
  v21 = *(_QWORD **)a1;
  if ( v20 != *(_QWORD **)a1 )
  {
    do
    {
      while ( 1 )
      {
        v22 = (_QWORD *)v21[6];
        v23 = (_QWORD *)v21[5];
        if ( v22 != v23 )
        {
          do
          {
            while ( 1 )
            {
              v24 = (_QWORD *)v23[3];
              if ( v24 == v23 + 5 )
                break;
              operator delete(v24);
              v23 += 8;
              if ( v22 == v23 )
                goto LABEL_39;
            }
            v23 += 8;
          }
          while ( v22 != v23 );
LABEL_39:
          v23 = (_QWORD *)v21[5];
        }
        if ( !v23 )
          break;
        v21 += 12;
        operator delete(v23);
        if ( v20 == v21 )
          goto LABEL_42;
      }
      v21 += 12;
    }
    while ( v20 != v21 );
LABEL_42:
    v21 = *(_QWORD **)a1;
  }
  if ( v21 )
    operator delete(v21);
}
