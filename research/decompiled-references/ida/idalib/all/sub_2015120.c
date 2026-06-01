void __fastcall sub_2015120(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // r14
  void *v11; // rdi
  int v12; // r14d
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1 + 16;
  v4 = sub_2237400(a1, a1 + 16, a2, 32, v13);
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v6 )
  {
    v7 = v4;
    do
    {
      v8 = *(_DWORD *)(v5 + 8);
      v5 += 32;
      v7 += 32;
      *(_DWORD *)(v7 - 24) = v8;
      *(_QWORD *)(v7 - 32) = *(_QWORD *)(v5 - 32);
      v9 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 24) = 0;
      *(_DWORD *)(v7 - 8) = v9;
      *(_QWORD *)(v7 - 16) = *(_QWORD *)(v5 - 16);
      *(_DWORD *)(v5 - 8) = 0;
    }
    while ( v6 != v5 );
    v10 = *(_QWORD *)a1;
    v6 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v6 )
    {
      do
      {
        v6 -= 32;
        if ( *(_DWORD *)(v6 + 24) > 0x40u )
        {
          v11 = *(void **)(v6 + 16);
          if ( v11 )
            operator delete[](v11);
        }
        if ( *(_DWORD *)(v6 + 8) > 0x40u && *(_QWORD *)v6 )
          operator delete[](*(void **)v6);
      }
      while ( v10 != v6 );
      v6 = *(_QWORD *)a1;
    }
  }
  v12 = v13[0];
  if ( v3 != v6 )
    free((void *)v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v12;
}
