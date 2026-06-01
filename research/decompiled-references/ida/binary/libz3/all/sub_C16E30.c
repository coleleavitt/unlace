void __fastcall sub_C16E30(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[3 * v2];
      do
      {
        v7 = v1[1];
        v8 = *v1;
        if ( v7 )
        {
          v6 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v6 )
          {
            sub_15D7BC0(v8, v7);
            v8 = *v1;
          }
        }
        v5 = v1[2];
        if ( v5 )
        {
          v6 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v8, v5);
        }
        v1 += 3;
      }
      while ( v4 != v1 );
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

