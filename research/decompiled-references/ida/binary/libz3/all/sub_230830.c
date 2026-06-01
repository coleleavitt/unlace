__int64 __fastcall sub_230830(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 616);
    v5 = *(_QWORD *)(a1 + 608);
    if ( v4 )
    {
      if ( !v5 )
      {
LABEL_16:
        *(_DWORD *)(v4 - 4) -= a2;
        return sub_13A2C20(a1 + 32, a2);
      }
      v6 = *(_DWORD *)(v4 - 4);
    }
    else
    {
      v6 = 0;
      if ( !v5 )
        return sub_13A2C20(a1 + 32, a2);
    }
    v7 = *(unsigned int *)(v4 + 4LL * (v6 - a2));
    v8 = (__int64 *)(v5 + 24 * v7);
    v9 = 24LL * *(unsigned int *)(v5 - 4);
    v10 = (__int64 *)(v5 + v9);
    if ( 24 * v7 != v9 )
    {
      do
      {
        v13 = v8[1];
        v14 = *v8;
        if ( v13 )
        {
          v12 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v12 )
          {
            sub_15D7BC0(v14, v13);
            v14 = *v8;
          }
        }
        v11 = v8[2];
        if ( v11 )
        {
          v12 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v14, v11);
        }
        v8 += 3;
      }
      while ( v10 != v8 );
      v5 = *(_QWORD *)(a1 + 608);
      v4 = *(_QWORD *)(a1 + 616);
    }
    *(_DWORD *)(v5 - 4) = v7;
    if ( v4 )
      goto LABEL_16;
  }
  return sub_13A2C20(a1 + 32, a2);
}

