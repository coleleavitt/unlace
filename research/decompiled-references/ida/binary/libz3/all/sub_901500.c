__int64 __fastcall sub_901500(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdi
  void *v11; // rdi

  v2 = a1[8];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[7];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = (__int64 *)a1[6];
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v6 = &v5[result];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = a1[5];
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      result = sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = (__int64 *)a1[6];
    if ( v5 )
LABEL_13:
      result = sub_186B220(v5 - 1);
  }
  v10 = a1[4];
  if ( v10 )
    result = sub_186B220((void *)(v10 - 8));
  v11 = (void *)a1[1];
  if ( v11 )
    return sub_186B220(v11);
  return result;
}

