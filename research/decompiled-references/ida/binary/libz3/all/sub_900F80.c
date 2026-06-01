__int64 __fastcall sub_900F80(_QWORD *a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = (void *)a1[3];
  if ( v2 )
    result = sub_186B220(v2);
  v4 = (__int64 *)a1[2];
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    v5 = &v4[result];
    if ( v4 >= v5 )
      return sub_186B220(v4 - 1);
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[1];
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
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
    v4 = (__int64 *)a1[2];
    if ( v4 )
      return sub_186B220(v4 - 1);
  }
  return result;
}

