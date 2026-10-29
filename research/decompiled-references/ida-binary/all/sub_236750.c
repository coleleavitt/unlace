void __fastcall sub_236750(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  int **v8; // rdx
  char v9; // r8
  __int64 v10; // rax

  dword_8CC388 = 0;
  v4 = dbg;
  if ( dbg )
  {
    v5 = *(unsigned int *)(dbg + 48);
    v6 = *(_QWORD **)(dbg + 40);
    dword_8CC388 = *(_DWORD *)(dbg + 48);
    if ( v6 )
    {
      v7 = 0;
      if ( *v6 )
      {
        do
        {
          if ( sub_1E2ED0(v7) )
            dword_8CC388 |= 1 << v7;
          ++v7;
        }
        while ( v6[v7] );
        v4 = dbg;
        LODWORD(v5) = dword_8CC388;
      }
      v8 = off_8600C0;
      v9 = 0;
      do
      {
        v10 = **v8;
        if ( (int)v10 >= 0 )
        {
          v9 = 1;
          LODWORD(v5) = *(unsigned __int8 *)(*(_QWORD *)(v4 + 56) + 32 * v10 + 12) | (unsigned int)v5;
        }
        ++v8;
      }
      while ( v8 != (int **)algn_8600E8 );
      if ( v9 )
        dword_8CC388 = v5;
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr(41334, dbg, a4, v5, a1);
      sub_236840();
    }
  }
}
