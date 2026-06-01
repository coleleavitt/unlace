void __fastcall sub_20175B0(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      v4 = *(_QWORD *)(v2 + 48);
      v5 = *(_QWORD *)(v2 + 40);
      if ( v4 != v5 )
      {
        do
        {
          if ( *(_DWORD *)(v5 + 40) > 0x40u )
          {
            v6 = *(void **)(v5 + 32);
            if ( v6 )
              operator delete[](v6);
          }
          if ( *(_DWORD *)(v5 + 24) > 0x40u )
          {
            v7 = *(void **)(v5 + 16);
            if ( v7 )
              operator delete[](v7);
          }
          v5 += 48;
        }
        while ( v4 != v5 );
        v5 = *(_QWORD *)(v2 + 40);
      }
      if ( v5 )
        operator delete((void *)v5);
      if ( *(_DWORD *)(v2 + 32) > 0x40u )
      {
        v8 = *(void **)(v2 + 24);
        if ( v8 )
          operator delete[](v8);
      }
      if ( *(_DWORD *)(v2 + 16) > 0x40u )
      {
        v9 = *(void **)(v2 + 8);
        if ( v9 )
          operator delete[](v9);
      }
      v2 += 64;
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete((void *)v2);
}
