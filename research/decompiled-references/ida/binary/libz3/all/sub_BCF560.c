__int64 __fastcall sub_BCF560(_QWORD *a1)
{
  void *v2; // rdi
  __int64 result; // rax
  void *v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdi

  v2 = (void *)a1[24];
  if ( v2 )
    result = sub_186B220(v2);
  v4 = (void *)a1[21];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = (__int64 *)a1[14];
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
          v8 = a1[13];
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
    v5 = (__int64 *)a1[14];
    if ( v5 )
LABEL_13:
      result = sub_186B220(v5 - 1);
  }
  v10 = a1[12];
  if ( v10 )
    return sub_186B220((void *)(v10 - 8));
  return result;
}

