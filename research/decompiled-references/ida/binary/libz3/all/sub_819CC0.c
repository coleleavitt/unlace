__int64 __fastcall sub_819CC0(__int64 *a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi

  v2 = (void *)a1[4];
  if ( v2 )
    result = sub_186B220(v2);
  v4 = (__int64 *)a1[3];
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v5 = &v4[result];
    if ( v4 >= v5 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[2];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_10:
    v4 = (__int64 *)a1[3];
    if ( v4 )
LABEL_11:
      result = sub_186B220(v4 - 1);
  }
  v9 = (__int64 *)a1[1];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      return sub_186B220(v9 - 1);
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *a1;
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_19:
    v9 = (__int64 *)a1[1];
    if ( v9 )
      return sub_186B220(v9 - 1);
  }
  return result;
}

