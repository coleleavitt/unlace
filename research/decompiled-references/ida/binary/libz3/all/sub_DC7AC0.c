__int64 __fastcall sub_DC7AC0(__int64 **a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (__int64 *)v1[1];
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      if ( v2 >= v3 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v4 = *v2;
          if ( *v2 )
          {
            v5 = *v1;
            if ( (*(_DWORD *)(v4 + 8))-- == 1 )
              break;
          }
          if ( ++v2 >= v3 )
            goto LABEL_9;
        }
        sub_15D7BC0(v5, v4);
        ++v2;
      }
      while ( v2 < v3 );
LABEL_9:
      v2 = (__int64 *)v1[1];
      if ( v2 )
LABEL_10:
        sub_186B220(v2 - 1);
    }
    return sub_186B220(v1);
  }
  return result;
}

