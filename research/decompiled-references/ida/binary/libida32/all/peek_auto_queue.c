__int64 __fastcall peek_auto_queue(unsigned int a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // edx
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi

  v3 = 0;
  while ( a2 != dword_2389780[v3] )
  {
    if ( ++v3 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v4 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1344LL);
  v5 = -1;
  v6 = *(_DWORD *)(v4 + 116);
  if ( !_bittest(&v6, v3) )
  {
    v7 = v4 + 104LL * (int)v3 + 136;
    v8 = v7 + 16;
    v9 = *(_QWORD *)(v7 + 24);
    if ( v9 )
    {
      v10 = v8;
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 16);
          v12 = *(_QWORD *)(v9 + 24);
          if ( a1 < *(_DWORD *)(v9 + 32) )
            break;
          v9 = *(_QWORD *)(v9 + 24);
          if ( !v12 )
            goto LABEL_12;
        }
        v10 = v9;
        v9 = *(_QWORD *)(v9 + 16);
      }
      while ( v11 );
LABEL_12:
      v5 = -1;
      if ( v8 != v10 )
      {
        v5 = *(_DWORD *)(v10 + 36) - 1;
        if ( v5 < a1 )
          return a1;
      }
    }
  }
  return v5;
}

