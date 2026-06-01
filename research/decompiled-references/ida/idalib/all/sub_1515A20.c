void __fastcall sub_1515A20(__int64 a1, __int64 a2)
{
  char *v3; // r13
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // r14
  char *v7; // rbp
  _DWORD *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  void *v11; // rdi
  char v12; // al
  unsigned int v13; // ebp
  _DWORD *v14; // rax
  char *v15; // rbx
  char *v16; // rdi
  int v17; // ebx
  const void *v18; // rsi
  size_t v19; // rdx
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = (char *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 56, v22);
  v5 = *(char **)a1;
  v6 = v4;
  v7 = (char *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 == v7 )
    goto LABEL_12;
  v8 = v5 + 24;
  v9 = v4 + 8;
  v10 = (unsigned __int64)&v5[8
                            * (0x6DB6DB6DB6DB6DB8LL * ((unsigned __int64)(v7 - v5 - 56) >> 3)
                             - ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v7 - v5 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL))
                            + 80];
  do
  {
    while ( 1 )
    {
      v11 = (void *)(v9 + 16);
      *(_BYTE *)(v9 - 8) = *((_BYTE *)v8 - 24);
      v12 = *((_BYTE *)v8 - 23);
      *(_DWORD *)(v9 + 8) = 0;
      *(_BYTE *)(v9 - 7) = v12;
      *(_DWORD *)(v9 + 12) = 4;
      v13 = *(v8 - 2);
      *(_QWORD *)v9 = v9 + 16;
      if ( v13 )
      {
        if ( (_DWORD *)v9 != v8 - 4 )
          break;
      }
LABEL_3:
      v8 += 14;
      v9 += 56;
      if ( (_DWORD *)v10 == v8 )
        goto LABEL_8;
    }
    v14 = *((_DWORD **)v8 - 2);
    if ( v14 == v8 )
    {
      v18 = v8;
      v19 = 8LL * v13;
      if ( v13 <= 4uLL
        || (v21 = v10,
            sub_2237220(v9, v9 + 16, v13, 8),
            v11 = *(void **)v9,
            v18 = *((const void **)v8 - 2),
            v10 = v21,
            (v19 = 8LL * (unsigned int)*(v8 - 2)) != 0) )
      {
        v20 = v10;
        memcpy(v11, v18, v19);
        v10 = v20;
        *(_DWORD *)(v9 + 8) = v13;
        *(v8 - 2) = 0;
      }
      else
      {
        *(_DWORD *)(v9 + 8) = v13;
        *(v8 - 2) = 0;
      }
      goto LABEL_3;
    }
    *(_QWORD *)v9 = v14;
    v9 += 56;
    *(_DWORD *)(v9 - 48) = v13;
    *(_DWORD *)(v9 - 44) = *(v8 - 1);
    *((_QWORD *)v8 - 2) = v8;
    v8 += 14;
    *(v8 - 15) = 0;
    *(v8 - 16) = 0;
  }
  while ( (_DWORD *)v10 != v8 );
LABEL_8:
  v15 = *(char **)a1;
  v7 = (char *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(char **)a1 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v7 -= 56;
        v16 = *((char **)v7 + 1);
        if ( v16 == v7 + 24 )
          break;
        free(v16);
        if ( v7 == v15 )
        {
          v7 = *(char **)a1;
          goto LABEL_12;
        }
      }
    }
    while ( v7 != v15 );
    v7 = *(char **)a1;
  }
LABEL_12:
  v17 = v22[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v17;
}
