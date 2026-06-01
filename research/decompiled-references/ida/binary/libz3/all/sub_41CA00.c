__int64 __fastcall sub_41CA00(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    v3 = a1[5];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v3, v2);
  }
  v5 = (__int64 *)a1[3];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[2];
          v4 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_11;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_11:
    v5 = (__int64 *)a1[3];
    if ( v5 )
LABEL_12:
      result = sub_186B220(v5 - 1);
  }
  v9 = *a1;
  if ( *a1 )
  {
    v10 = a1[1];
    v4 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v4 )
      return sub_15D7BC0(v10, v9);
  }
  return result;
}

