__int64 __fastcall sub_847840(__int64 **a1)
{
  __int64 *v1; // rbp
  void *v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[5];
    if ( v2 )
      sub_186B220(v2);
    v3 = (void *)v1[2];
    if ( v3 )
      sub_186B220(v3);
    v4 = (__int64 *)v1[1];
    if ( v4 )
    {
      v5 = &v4[*((unsigned int *)v4 - 1)];
      if ( v4 >= v5 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v6 = *v4;
          if ( *v4 )
          {
            v7 = *v1;
            if ( (*(_DWORD *)(v6 + 8))-- == 1 )
              break;
          }
          if ( ++v4 >= v5 )
            goto LABEL_13;
        }
        sub_15D7BC0(v7, v6);
        ++v4;
      }
      while ( v4 < v5 );
LABEL_13:
      v4 = (__int64 *)v1[1];
      if ( v4 )
LABEL_14:
        sub_186B220(v4 - 1);
    }
    return sub_186B220(v1);
  }
  return result;
}

