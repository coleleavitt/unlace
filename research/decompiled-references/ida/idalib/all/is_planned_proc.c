bool __fastcall is_planned_proc(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi

  v2 = 0;
  while ( dword_23AD7A0[v2] != 30 )
  {
    if ( ++v2 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL);
  v4 = -1;
  v5 = *(_DWORD *)(v3 + 148);
  if ( !_bittest(&v5, v2) )
  {
    v6 = v3 + 104LL * (int)v2 + 168;
    v7 = v6 + 16;
    v8 = *(_QWORD **)(v6 + 24);
    if ( v8 )
    {
      v9 = (_QWORD *)v7;
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( a1 < v8[4] )
            break;
          v8 = (_QWORD *)v8[3];
          if ( !v11 )
            goto LABEL_12;
        }
        v9 = v8;
        v8 = (_QWORD *)v8[2];
      }
      while ( v10 );
LABEL_12:
      v4 = -1;
      if ( (_QWORD *)v7 != v9 )
      {
        v4 = v9[5] - 1LL;
        if ( v4 < a1 )
          v4 = a1;
      }
    }
  }
  return a1 == v4;
}
