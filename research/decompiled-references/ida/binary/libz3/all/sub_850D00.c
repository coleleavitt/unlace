__int64 __fastcall sub_850D00(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 8);
  if ( !v1 )
    return result;
  v2 = v1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)v1[8];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = v1[7];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_11;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_11:
    v3 = (__int64 *)v1[8];
    if ( v3 )
LABEL_12:
      sub_186B220(v3 - 1);
  }
  v8 = (__int64 *)v1[6];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = v1[5];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = (__int64 *)v1[6];
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  v12 = v1[3];
  if ( !v12 || (v13 = v1[4], v7 = *(_DWORD *)(v12 + 8) == 1, --*(_DWORD *)(v12 + 8), !v7) )
  {
    v14 = v1[2];
    if ( !v14 )
      goto LABEL_26;
    goto LABEL_25;
  }
  sub_15D7BC0(v13, v12);
  v14 = v1[2];
  if ( v14 )
LABEL_25:
    sub_186B220((void *)(v14 - 8));
LABEL_26:
  v15 = (__int64 *)v1[1];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *v1;
          v7 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_33;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_33:
    v15 = (__int64 *)v1[1];
    if ( v15 )
LABEL_34:
      sub_186B220(v15 - 1);
  }
  return sub_186B220(v1);
}

