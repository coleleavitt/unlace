void __fastcall sub_183A990(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  __int64 v4; // rax
  void **v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  void **v9; // rbx

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 40) + 32LL * v2;
      v5 = *(void ***)(v4 + 24);
      *(_QWORD *)(v4 + 24) = 0;
      if ( v5 )
      {
        if ( *v5 != v5 + 2 )
          free(*v5);
        operator delete(v5, 0x70u);
        v3 = *(_DWORD *)(a1 + 16);
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = 32LL * *(_QWORD *)(v6 - 8);
      v8 = v6 + v7;
      if ( v6 != v6 + v7 )
      {
        while ( 1 )
        {
          v9 = *(void ***)(v8 - 8);
          if ( v9 )
          {
            if ( *v9 != v9 + 2 )
              free(*v9);
            operator delete(v9, 0x70u);
            v6 = *(_QWORD *)(a1 + 40);
          }
          if ( v8 - 32 == v6 )
            break;
          v8 -= 32;
        }
        v7 = 32LL * *(_QWORD *)(v8 - 40);
      }
      operator delete[]((void *)(v6 - 8), v7 + 8);
    }
    *(_BYTE *)(a1 + 1) &= ~1u;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
