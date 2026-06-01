void __fastcall sub_12DE810(__int64 a1, __int64 a2)
{
  void **v2; // r12
  __int64 v4; // rax
  void **v5; // rdx
  __int64 v6; // r13
  void **v7; // rbx
  __int64 v8; // rcx
  void *v9; // rax
  void **v10; // r14
  void *v11; // rdi
  int v12; // r14d
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (void **)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 16, v13);
  v5 = *(void ***)a1;
  v6 = v4;
  v7 = (void **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = *v5;
      v5 += 2;
      v8 += 16;
      *(_QWORD *)(v8 - 16) = v9;
      *(_DWORD *)(v8 - 8) = *((_DWORD *)v5 - 2);
      *(_DWORD *)(v8 - 4) = *((_DWORD *)v5 - 1);
      *(v5 - 2) = (void *)-4096LL;
    }
    while ( v7 != v5 );
    v10 = *(void ***)a1;
    v7 = (void **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 2;
          v11 = *v7;
          if ( (char *)*v7 + 4096 != nullptr && (char *)*v7 + 0x2000 != nullptr )
          {
            if ( v11 )
              break;
          }
          if ( v10 == v7 )
            goto LABEL_8;
        }
        operator delete[](v11);
      }
      while ( v10 != v7 );
LABEL_8:
      v7 = *(void ***)a1;
    }
  }
  v12 = v13[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}
