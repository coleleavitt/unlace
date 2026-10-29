bool __fastcall is_planned_proc(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // edx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi

  v2 = 0;
  while ( dword_2389780[v2] != 30 )
  {
    if ( ++v2 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1344LL);
  v4 = -1;
  v5 = *(_DWORD *)(v3 + 116);
  if ( !_bittest(&v5, v2) )
  {
    v6 = v3 + 104LL * (int)v2 + 136;
    v7 = v6 + 16;
    v8 = *(_QWORD *)(v6 + 24);
    if ( v8 )
    {
      v9 = v7;
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 16);
          v11 = *(_QWORD *)(v8 + 24);
          if ( a1 < *(_DWORD *)(v8 + 32) )
            break;
          v8 = *(_QWORD *)(v8 + 24);
          if ( !v11 )
            goto LABEL_12;
        }
        v9 = v8;
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v10 );
LABEL_12:
      v4 = -1;
      if ( v7 != v9 )
      {
        v4 = *(_DWORD *)(v9 + 36) - 1;
        if ( v4 < a1 )
          v4 = a1;
      }
    }
  }
  return a1 == v4;
}

