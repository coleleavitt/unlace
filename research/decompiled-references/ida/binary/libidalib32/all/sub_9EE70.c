void __fastcall sub_9EE70(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v3; // rbp
  void *v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 i; // r12
  _QWORD *v9; // rbp
  void *v10; // rbp

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 5 )
  {
    if ( v1 > 5 )
    {
      if ( v1 == 6 )
      {
        v4 = *(void **)(a1 + 24);
        if ( v4 )
        {
          free_debug_event();
          operator delete(v4, 0x3Cu);
          *(_DWORD *)(a1 + 8) = 0;
          return;
        }
      }
    }
    else
    {
      if ( v1 != 1 )
      {
        if ( v1 == 4 )
        {
          v3 = *(_QWORD **)(a1 + 24);
          if ( v3 )
          {
            if ( v3[1] )
            {
              v3[2] = 0;
              qfree();
            }
            operator delete(v3, 0x20u);
          }
        }
        goto LABEL_9;
      }
      v10 = *(void **)(a1 + 24);
      if ( v10 )
      {
        sub_9ED80(*(_QWORD **)(a1 + 24));
        operator delete(v10, 0x60u);
        *(_DWORD *)(a1 + 8) = 0;
        return;
      }
    }
LABEL_9:
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v5 = *(__int64 **)(a1 + 24);
  if ( !v5 )
    goto LABEL_9;
  v6 = *v5;
  if ( *v5 )
  {
    v7 = v5[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (_QWORD *)(v6 + (i << 6));
        if ( v9[4] )
        {
          v9[5] = 0;
          qfree();
        }
        if ( v9[1] )
        {
          v9[2] = 0;
          qfree();
        }
        v6 = *v5;
      }
    }
    v5[1] = 0;
    qfree();
  }
  qfree();
  *(_DWORD *)(a1 + 8) = 0;
}

