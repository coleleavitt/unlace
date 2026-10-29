__int64 __fastcall sub_5E4240(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi

  result = (__int64)&off_1C52638;
  v3 = (__int64 *)a1[25];
  *a1 = &off_1C52638;
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[24];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[25];
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[21];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = (void *)a1[18];
  if ( v9 )
    result = sub_186B220(v9);
  v10 = (void *)a1[15];
  if ( v10 )
    result = sub_186B220(v10);
  v11 = (void *)a1[11];
  if ( v11 )
    result = sub_186B220(v11);
  v12 = a1[9];
  if ( v12 )
    result = sub_186B220((void *)(v12 - 8));
  v13 = (__int64 *)a1[7];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      return sub_186B220(v13 - 1);
    do
    {
      v15 = *v13++;
      result = sub_62A410(a1[6], v15);
    }
    while ( v13 < v14 );
    v13 = (__int64 *)a1[7];
    if ( v13 )
      return sub_186B220(v13 - 1);
  }
  return result;
}

