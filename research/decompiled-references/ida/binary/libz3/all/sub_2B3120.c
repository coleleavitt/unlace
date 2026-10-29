__int64 __fastcall sub_2B3120(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = (__int64 *)a1[1];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v2 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = *a1;
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v2;
    }
    while ( v2 < v4 );
LABEL_8:
    v2 = (__int64 *)a1[1];
    if ( v2 )
LABEL_9:
      result = sub_186B220(v2 - 1);
  }
  a1[1] = 0;
  return result;
}

