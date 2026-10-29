__int64 __fastcall sub_DB89C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi

  v2 = a1[7];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[6];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[5];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[4];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[3];
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[2];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      return sub_186B220(v8 - 1);
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[1];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_18;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_18:
    v8 = (__int64 *)a1[2];
    if ( v8 )
      return sub_186B220(v8 - 1);
  }
  return result;
}

