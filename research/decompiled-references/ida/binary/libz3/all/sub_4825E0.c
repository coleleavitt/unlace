__int64 __fastcall sub_4825E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi

  v2 = a1[7];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = (void *)a1[4];
  if ( v4 )
    result = sub_186B220(v4);
  v5 = a1[3];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = (__int64 *)a1[2];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      return sub_186B220(v6 - 1);
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[1];
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_14;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_14:
    v6 = (__int64 *)a1[2];
    if ( v6 )
      return sub_186B220(v6 - 1);
  }
  return result;
}

