void __fastcall sub_1499FD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v14; // ebp
  __int64 v15; // rbp
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 112, v18);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_QWORD *)v8 = *(_QWORD *)v5;
      v10 = *(_DWORD *)(v5 + 8);
      *(_BYTE *)(v8 + 96) = 0;
      *(_DWORD *)(v8 + 8) = v10;
      if ( *(_BYTE *)(v5 + 96) )
      {
        v11 = *(_QWORD *)(v5 + 16);
        *(_DWORD *)(v8 + 32) = 0;
        *(_DWORD *)(v8 + 36) = 2;
        *(_QWORD *)(v8 + 16) = v11;
        v12 = *(_DWORD *)(v5 + 32);
        *(_QWORD *)(v8 + 24) = v8 + 40;
        if ( v12 )
          sub_147FF00((char ***)(v8 + 24), (char ***)(v5 + 24));
        v13 = *(_QWORD *)(v5 + 56);
        *(_DWORD *)(v8 + 72) = 0;
        *(_DWORD *)(v8 + 76) = 2;
        *(_QWORD *)(v8 + 56) = v13;
        *(_QWORD *)(v8 + 64) = v8 + 80;
        if ( *(_DWORD *)(v5 + 72) )
          sub_147FF00((char ***)(v8 + 64), (char ***)(v5 + 64));
        *(_BYTE *)(v8 + 96) = 1;
      }
      v9 = *(_DWORD *)(v5 + 104);
      v5 += 112;
      v8 += 112;
      *(_DWORD *)(v8 - 8) = v9;
    }
    while ( v7 != v5 );
    v15 = *(_QWORD *)a1;
    v7 = *(_QWORD *)a1 + 112LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v7 )
    {
      do
      {
        v7 -= 112;
        if ( *(_BYTE *)(v7 + 96) )
        {
          sub_15DCED0(*(_QWORD *)(v7 + 56), v7 + 56);
          v16 = *(void **)(v7 + 64);
          if ( v16 != (void *)(v7 + 80) )
            free(v16);
          v17 = *(void **)(v7 + 24);
          if ( v17 != (void *)(v7 + 40) )
            free(v17);
        }
      }
      while ( v7 != v15 );
      v7 = *(_QWORD *)a1;
    }
  }
  v14 = v18[0];
  if ( v2 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v14;
}
