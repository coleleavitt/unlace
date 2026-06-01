void __fastcall sub_1C38D40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r14
  int v9; // r14d
  __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 24, v10);
  v3 = *(_QWORD *)a1;
  v4 = v2;
  v5 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v5 )
  {
    v6 = v2;
    do
    {
      v7 = *(_DWORD *)(v3 + 8);
      v3 += 24;
      v6 += 24;
      *(_DWORD *)(v6 - 16) = v7;
      *(_QWORD *)(v6 - 24) = *(_QWORD *)(v3 - 24);
      LOBYTE(v7) = *(_BYTE *)(v3 - 12);
      *(_DWORD *)(v3 - 16) = 0;
      *(_BYTE *)(v6 - 12) = v7;
      *(_QWORD *)(v6 - 8) = *(_QWORD *)(v3 - 8);
    }
    while ( v5 != v3 );
    v8 = *(_QWORD *)a1;
    v5 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v5 )
    {
      do
      {
        v5 -= 24;
        if ( *(_DWORD *)(v5 + 8) > 0x40u && *(_QWORD *)v5 )
          operator delete[](*(void **)v5);
      }
      while ( v8 != v5 );
      v5 = *(_QWORD *)a1;
    }
  }
  v9 = v10[0];
  if ( a1 + 16 != v5 )
    free((void *)v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v9;
}
