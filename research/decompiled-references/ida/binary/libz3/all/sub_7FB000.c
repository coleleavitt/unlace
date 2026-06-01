__int64 __fastcall sub_7FB000(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi

  result = (__int64)&off_1C54CF8;
  *a1 = &off_1C54CF8;
  v3 = a1[11];
  if ( v3 )
    result = sub_186B220((void *)(v3 - 8));
  v4 = a1[10];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[9];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[8];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = a1[7];
  if ( v7 )
    result = sub_186B220((void *)(v7 - 8));
  v8 = a1[6];
  if ( v8 )
    result = sub_186B220((void *)(v8 - 8));
  v9 = (__int64 *)a1[5];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      return sub_186B220(v9 - 1);
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[4];
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_20;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_20:
    v9 = (__int64 *)a1[5];
    if ( v9 )
      return sub_186B220(v9 - 1);
  }
  return result;
}

