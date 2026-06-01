__int64 __fastcall sub_451AA0(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  v2 = (__int64 *)a1[1];
  result = *((unsigned int *)a1 + 4);
  v4 = &v2[result];
  if ( v2 < v4 )
  {
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
          goto LABEL_7;
      }
      result = sub_15D7BC0(v6, v5);
      ++v2;
    }
    while ( v2 < v4 );
LABEL_7:
    v2 = (__int64 *)a1[1];
  }
  if ( v2 )
  {
    if ( v2 != a1 + 3 )
      return sub_186B220(v2);
  }
  return result;
}

