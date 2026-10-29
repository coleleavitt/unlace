void __fastcall sub_AEAE50(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r13
  void *v15; // rdi
  int v16; // r13d
  __int64 v17[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a1 + 2;
  v4 = sub_2237400(a1, a1 + 2, a2, 32, v17);
  v5 = v4;
  v6 = *a1 + 32LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v6 )
  {
    v7 = v6 + 16;
    v8 = *a1 + 16;
    v9 = v4;
    do
    {
      while ( 1 )
      {
        *(_BYTE *)v9 = 0;
        v11 = v9 + 16;
        *(_QWORD *)(v9 + 8) = 0;
        *(_DWORD *)(v9 + 24) = 1;
        *(_QWORD *)(v9 + 16) = 0;
        *(_BYTE *)v9 = *(_BYTE *)(v8 - 16);
        *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 - 8);
        v12 = *(_DWORD *)(v8 + 8);
        if ( v12 <= 0x40 )
          break;
        v10 = v8;
        v8 += 32;
        v9 += 32;
        sub_22056A0(v11, v10);
        if ( v8 == v7 )
          goto LABEL_6;
      }
      v13 = *(_QWORD *)v8;
      v8 += 32;
      *(_DWORD *)(v9 + 24) = v12;
      v9 += 32;
      *(_QWORD *)(v9 - 16) = v13;
    }
    while ( v8 != v7 );
LABEL_6:
    v14 = *a1;
    v6 = *a1 + 32LL * *((unsigned int *)a1 + 2);
    if ( *a1 != v6 )
    {
      do
      {
        v6 -= 32;
        if ( *(_DWORD *)(v6 + 24) > 0x40u )
        {
          v15 = *(void **)(v6 + 16);
          if ( v15 )
            operator delete[](v15);
        }
      }
      while ( v14 != v6 );
      v6 = *a1;
    }
  }
  v16 = v17[0];
  if ( v3 != (__int64 *)v6 )
    free((void *)v6);
  *a1 = v5;
  *((_DWORD *)a1 + 3) = v16;
}
