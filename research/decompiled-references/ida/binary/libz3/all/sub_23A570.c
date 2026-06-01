__int64 __fastcall sub_23A570(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rbp
  __int64 *v4; // rbp
  unsigned int *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v4 = &v1[4 * v2];
      do
      {
        v9 = v1[1];
        v6 = *v1;
        if ( v9 )
        {
          v8 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v8 )
          {
            sub_15D7BC0(v6, v9);
            v6 = *v1;
          }
        }
        v5 = (unsigned int *)v1[3];
        if ( v5 )
        {
          sub_234C20((__int64 *)(v6 + 648), v5);
          v6 = *v1;
        }
        v7 = v1[2];
        if ( v7 )
        {
          v8 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v6, v7);
        }
        v1 += 4;
      }
      while ( v4 != v1 );
      v1 = *a1;
    }
    return sub_186B220(v1 - 1);
  }
  return result;
}

