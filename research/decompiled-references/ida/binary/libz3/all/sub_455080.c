__int64 __fastcall sub_455080(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi

  v2 = (__int64 *)a1[10];
  if ( v2 )
  {
    result = *((unsigned int *)v2 - 1);
    v4 = &v2[result];
    if ( v2 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v2;
        if ( *v2 )
        {
          v6 = a1[9];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
      result = sub_15D7BC0(v6, v5);
      ++v2;
    }
    while ( v2 < v4 );
LABEL_8:
    v2 = (__int64 *)a1[10];
    if ( v2 )
LABEL_9:
      result = sub_186B220(v2 - 1);
  }
  v8 = a1[6];
  if ( v8 )
  {
    v9 = a1[7];
    v7 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v9, v8);
  }
  v10 = a1[4];
  if ( v10 )
  {
    v11 = a1[5];
    v7 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v7 )
      result = sub_15D7BC0(v11, v10);
  }
  v12 = (__int64 *)a1[3];
  if ( v12 )
  {
    result = *((unsigned int *)v12 - 1);
    v13 = &v12[result];
    if ( v12 >= v13 )
      return sub_186B220(v12 - 1);
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[2];
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_23;
      }
      result = sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_23:
    v12 = (__int64 *)a1[3];
    if ( v12 )
      return sub_186B220(v12 - 1);
  }
  return result;
}

