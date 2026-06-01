__int64 __fastcall sub_24AC60(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  v1 = (__int64 *)a1[1];
  if ( v1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 >= v4 )
      return sub_186B220(v1 - 1);
    do
    {
      while ( 1 )
      {
        v5 = *v1;
        if ( *v1 )
        {
          v6 = *a1;
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v1 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v1;
    }
    while ( v1 < v4 );
LABEL_8:
    v1 = (__int64 *)a1[1];
    if ( v1 )
      return sub_186B220(v1 - 1);
  }
  return result;
}

