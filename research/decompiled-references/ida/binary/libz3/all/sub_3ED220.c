__int64 __fastcall sub_3ED220(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 result; // rax

  v2 = a1[12];
  if ( v2 )
  {
    v3 = a1[13];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v3, v2);
  }
  v5 = a1[10];
  if ( v5 )
  {
    v6 = a1[11];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v6, v5);
  }
  v7 = a1[8];
  if ( v7 )
  {
    v8 = a1[9];
    v4 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v8, v7);
  }
  v9 = (__int64 *)a1[7];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[6];
          v4 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_17:
    v9 = (__int64 *)a1[7];
    if ( v9 )
LABEL_18:
      result = sub_186B220(v9 - 1);
  }
  v13 = a1[3];
  if ( v13 )
  {
    v14 = a1[4];
    v4 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v14, v13);
  }
  v15 = a1[1];
  if ( v15 )
  {
    v16 = a1[2];
    v4 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v4 )
      return sub_15D7BC0(v16, v15);
  }
  return result;
}

