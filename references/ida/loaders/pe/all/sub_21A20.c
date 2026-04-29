void __fastcall sub_21A20(__int64 a1)
{
  int v1; // eax
  void *v3; // rbp
  void *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rsi
  void *v9; // rdi
  void *v10; // rdi

  v1 = *(_DWORD *)(a1 + 4);
  switch ( v1 )
  {
    case 20:
      if ( *(_DWORD *)(a1 + 28) )
      {
        v9 = *(void **)(a1 + 32);
        if ( v9 )
          operator delete[](v9);
        *(_DWORD *)(a1 + 28) = 0;
      }
      if ( *(_DWORD *)(a1 + 40) )
      {
        v10 = *(void **)(a1 + 48);
        if ( v10 )
          operator delete[](v10);
        *(_DWORD *)(a1 + 40) = 0;
      }
      break;
    case 21:
      if ( *(_DWORD *)(a1 + 28) )
      {
        v5 = *(_QWORD *)(a1 + 32);
        if ( v5 )
        {
          v6 = v5 + 56LL * *(_QWORD *)(v5 - 8);
          if ( v5 == v6 )
          {
            v8 = 0;
          }
          else
          {
            do
            {
              v7 = v6;
              v6 -= 56;
              sub_21A20(v6);
            }
            while ( *(_QWORD *)(a1 + 32) != v6 );
            v8 = 56LL * *(_QWORD *)(v7 - 64);
          }
          operator delete[]((void *)(v6 - 8), v8 + 8);
        }
        *(_DWORD *)(a1 + 28) = 0;
      }
      break;
    case 15:
      v3 = *(void **)(a1 + 24);
      if ( v3 )
      {
        sub_21A20(*(_QWORD *)(a1 + 24));
        operator delete(v3, 0x38u);
        *(_QWORD *)(a1 + 24) = 0;
      }
      break;
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    sub_21A20(*(_QWORD *)(a1 + 16));
    operator delete(v4, 0x38u);
  }
  *(_QWORD *)(a1 + 16) = 0;
}
