__int64 auto_is_ok()
{
  unsigned int v0; // r8d
  __int64 v1; // rdi
  int v2; // r9d
  __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v0 = 0;
  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1344LL);
  v2 = *(_DWORD *)(v1 + 116);
  for ( i = v1 + 152; ; i += 104 )
  {
    if ( !_bittest(&v2, v0) )
    {
      v4 = *(_QWORD *)(i + 8);
      if ( v4 )
      {
        v5 = i;
        do
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)(v4 + 16);
            v7 = *(_QWORD *)(v4 + 24);
            if ( *(_DWORD *)(v4 + 32) )
              break;
            v4 = *(_QWORD *)(v4 + 24);
            if ( !v7 )
              goto LABEL_8;
          }
          v5 = v4;
          v4 = *(_QWORD *)(v4 + 16);
        }
        while ( v6 );
LABEL_8:
        if ( i != v5 && *(_DWORD *)(v5 + 36) )
          break;
      }
    }
    if ( ++v0 == 14 )
      return 1;
  }
  return 0;
}

