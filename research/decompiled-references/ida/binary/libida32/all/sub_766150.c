void __fastcall sub_766150(__int64 a1)
{
  unsigned int v2; // eax
  void **v3; // rbx
  void *v4; // rdi
  void **v5; // rbp
  void *v6; // rdi
  void *v7; // rbx
  void **v8; // rbp
  void *v9; // rdi

  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > 4u )
  {
    if ( v2 != 5 )
      return;
    v8 = *(void ***)(a1 + 8);
    if ( v8 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = nullptr;
        qfree(v9);
      }
      operator delete(v8, 0x18u);
    }
  }
  else
  {
    if ( v2 <= 1 )
    {
      if ( v2 == 1 )
      {
        v3 = *(void ***)(a1 + 16);
        if ( v3 )
        {
          v4 = *v3;
          if ( *v3 )
          {
            v3[1] = nullptr;
            qfree(v4);
          }
          operator delete(v3, 0x18u);
        }
      }
      return;
    }
    v5 = *(void ***)(a1 + 8);
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = nullptr;
        qfree(v6);
      }
      qfree(v5);
    }
  }
  v7 = *(void **)(a1 + 16);
  if ( v7 )
  {
    sub_766150(v7);
    operator delete(v7, 0x20u);
  }
}

