void __fastcall sub_20DAF0(__int64 a1, const char *a2)
{
  unsigned int v2; // eax
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  void *v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 i; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  void *v14; // rbp

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != 5 )
  {
    if ( v2 > 5 )
    {
      if ( v2 == 6 )
      {
        v6 = *(void **)(a1 + 24);
        if ( v6 )
        {
          free_debug_event(*(_QWORD *)(a1 + 24));
          operator delete(v6, 0x48u);
          *(_DWORD *)(a1 + 8) = 0;
          return;
        }
      }
    }
    else
    {
      if ( v2 != 1 )
      {
        if ( v2 == 4 )
        {
          v4 = *(_QWORD **)(a1 + 24);
          if ( v4 )
          {
            v5 = v4[1];
            if ( v5 )
            {
              v4[2] = 0;
              qfree(v5, a2);
            }
            operator delete(v4, 0x20u);
          }
        }
        goto LABEL_9;
      }
      v14 = *(void **)(a1 + 24);
      if ( v14 )
      {
        sub_20DA00(*(__int64 **)(a1 + 24), a2);
        operator delete(v14, 0x60u);
        *(_DWORD *)(a1 + 8) = 0;
        return;
      }
    }
LABEL_9:
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v7 = *(__int64 **)(a1 + 24);
  if ( !v7 )
    goto LABEL_9;
  v8 = *v7;
  if ( *v7 )
  {
    v9 = v7[1];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (_QWORD *)(v8 + 80 * i);
        v12 = v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          qfree(v12, a2);
        }
        v13 = v11[2];
        if ( v13 )
        {
          v11[3] = 0;
          qfree(v13, a2);
        }
        v8 = *v7;
      }
    }
    v7[1] = 0;
    qfree(v8, a2);
  }
  qfree(v7, a2);
  *(_DWORD *)(a1 + 8) = 0;
}
