__int64 __fastcall sub_BD19D0(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  v1 = (__int64 *)a1[1];
  if ( v1 )
  {
    v3 = &v1[2 * *((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      return sub_186B220(v1 - 1);
    do
    {
      while ( 1 )
      {
        v6 = *v1;
        v7 = *a1;
        if ( *v1 )
        {
          v5 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v5 )
          {
            result = sub_15D7BC0(v7, v6);
            v7 = *a1;
          }
        }
        v4 = v1[1];
        if ( v4 )
        {
          v5 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v5 )
            break;
        }
        v1 += 2;
        if ( v1 >= v3 )
          goto LABEL_11;
      }
      result = sub_15D7BC0(v7, v4);
      v1 += 2;
    }
    while ( v1 < v3 );
LABEL_11:
    v1 = (__int64 *)a1[1];
    if ( v1 )
      return sub_186B220(v1 - 1);
  }
  return result;
}

