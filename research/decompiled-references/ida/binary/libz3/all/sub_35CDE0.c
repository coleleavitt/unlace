__int64 __fastcall sub_35CDE0(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r12
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
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
        v8 = v1[2];
        if ( v8 )
        {
          v9 = v1[3];
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v8);
        }
        v5 = *v1;
        if ( *v1 )
        {
          v6 = v1[1];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v1 += 4;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    return sub_186B220(v1 - 1);
  }
  return result;
}

