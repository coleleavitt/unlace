unsigned __int64 __fastcall peek_auto_queue(unsigned __int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi

  v3 = 0;
  while ( a2 != dword_23AD7A0[v3] )
  {
    if ( ++v3 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v4 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL);
  v5 = -1;
  v6 = *(_DWORD *)(v4 + 148);
  if ( !_bittest(&v6, v3) )
  {
    v7 = v4 + 104LL * (int)v3 + 168;
    v8 = v7 + 16;
    v9 = *(_QWORD **)(v7 + 24);
    if ( v9 )
    {
      v10 = (_QWORD *)v8;
      do
      {
        while ( 1 )
        {
          v11 = v9[2];
          v12 = v9[3];
          if ( a1 < v9[4] )
            break;
          v9 = (_QWORD *)v9[3];
          if ( !v12 )
            goto LABEL_12;
        }
        v10 = v9;
        v9 = (_QWORD *)v9[2];
      }
      while ( v11 );
LABEL_12:
      v5 = -1;
      if ( (_QWORD *)v8 != v10 )
      {
        v5 = v10[5] - 1LL;
        if ( v5 < a1 )
          return a1;
      }
    }
  }
  return v5;
}
