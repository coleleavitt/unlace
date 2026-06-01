__int64 __fastcall sub_69B8A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi

  v2 = a1[14];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[13];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[10];
  if ( v5 )
    result = sub_186B220(v5);
  v6 = (void *)a1[7];
  if ( v6 )
    result = sub_186B220(v6);
  v7 = (void *)a1[4];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (__int64 *)a1[3];
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
          v11 = a1[2];
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
    v8 = (__int64 *)a1[3];
    if ( v8 )
      return sub_186B220(v8 - 1);
  }
  return result;
}

