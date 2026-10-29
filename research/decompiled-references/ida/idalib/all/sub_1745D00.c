void __fastcall sub_1745D00(__int64 a1, __int64 a2)
{
  void **v3; // rbp
  __int64 v4; // rax
  void **v5; // r14
  __int64 v6; // r12
  void **v7; // rbx
  __int64 v8; // r15
  char ***v9; // rsi
  char ***v10; // rdi
  void **v11; // r14
  int v12; // r14d
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (void **)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 64, v13);
  v5 = *(void ***)a1;
  v6 = v4;
  v7 = (void **)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(void ***)a1 != v7 )
  {
    v8 = v4;
    do
    {
      while ( 1 )
      {
        *(_DWORD *)(v8 + 8) = 0;
        *(_QWORD *)v8 = v8 + 16;
        *(_DWORD *)(v8 + 12) = 12;
        if ( *((_DWORD *)v5 + 2) )
          break;
        v5 += 8;
        v8 += 64;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      v9 = (char ***)v5;
      v10 = (char ***)v8;
      v5 += 8;
      v8 += 64;
      sub_1745BE0(v10, v9);
    }
    while ( v7 != v5 );
LABEL_6:
    v11 = *(void ***)a1;
    v7 = (void **)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
    if ( *(void ***)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 8;
          if ( *v7 == v7 + 2 )
            break;
          free(*v7);
          if ( v7 == v11 )
          {
            v7 = *(void ***)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != v11 );
      v7 = *(void ***)a1;
    }
  }
LABEL_10:
  v12 = v13[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}
