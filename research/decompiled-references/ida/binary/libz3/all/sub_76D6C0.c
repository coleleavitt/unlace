__int64 __fastcall sub_76D6C0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi

  result = sub_76E360(*a1, *a1, a1 + 11);
  v3 = (__int64 *)a1[15];
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
          v6 = a1[14];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
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
    v3 = (__int64 *)a1[15];
    if ( v3 )
LABEL_9:
      result = sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[11];
  if ( v8 )
    result = sub_186B220(v8);
  v9 = (__int64 *)a1[4];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[3];
          v7 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_19;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_19:
    v9 = (__int64 *)a1[4];
    if ( v9 )
LABEL_20:
      result = sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[2];
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    v14 = &v13[result];
    if ( v13 >= v14 )
      return sub_186B220(v13 - 1);
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[1];
          v7 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_28:
    v13 = (__int64 *)a1[2];
    if ( v13 )
      return sub_186B220(v13 - 1);
  }
  return result;
}

