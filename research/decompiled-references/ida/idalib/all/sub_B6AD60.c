void __fastcall sub_B6AD60(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // r15
  char *v15; // r14
  char *v16; // rax
  char *v17; // rdi
  int v18; // r14d
  char *v19; // [rsp+8h] [rbp-50h]
  __int64 v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 48, v20);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    v8 = v4;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)v5;
        *(_QWORD *)(v8 + 8) = 0;
        *(_DWORD *)(v8 + 24) = 0;
        *(_QWORD *)v8 = v9;
        v10 = *(_QWORD *)(v5 + 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 8) = v10;
        LODWORD(v10) = *(_DWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v8 + 16) = v10;
        v11 = *(_DWORD *)(v5 + 20);
        *(_DWORD *)(v5 + 16) = 0;
        LODWORD(v10) = *(_DWORD *)(v8 + 20);
        *(_DWORD *)(v8 + 20) = v11;
        v12 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 20) = v10;
        LODWORD(v10) = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(v8 + 24) = v12;
        *(_DWORD *)(v5 + 24) = v10;
        *(_DWORD *)(v8 + 40) = 0;
        *(_DWORD *)(v8 + 44) = 0;
        LODWORD(v10) = *(_DWORD *)(v5 + 40);
        *(_QWORD *)(v8 + 32) = v8 + 48;
        if ( (_DWORD)v10 )
          break;
        v5 += 48;
        v8 += 48;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      v13 = v5 + 32;
      v5 += 48;
      sub_B6A7F0(v8 + 32, v13);
      v8 += 48;
    }
    while ( v7 != v5 );
LABEL_6:
    v14 = *(_QWORD *)a1;
    v7 = *(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v7 )
    {
      do
      {
        v7 -= 48;
        v15 = *(char **)(v7 + 32);
        v16 = &v15[120 * *(unsigned int *)(v7 + 40)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 120;
              v17 = *((char **)v16 + 1);
              if ( v17 == v16 + 24 )
                break;
              v19 = v16;
              free(v17);
              v16 = v19;
              if ( v15 == v19 )
                goto LABEL_10;
            }
          }
          while ( v15 != v16 );
LABEL_10:
          v15 = *(char **)(v7 + 32);
        }
        if ( v15 != (char *)(v7 + 48) )
          free(v15);
        operator delete(*(_QWORD *)(v7 + 8), 8LL * *(unsigned int *)(v7 + 24), 4);
      }
      while ( v14 != v7 );
      v7 = *(_QWORD *)a1;
    }
  }
  v18 = v20[0];
  if ( v2 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v18;
}
