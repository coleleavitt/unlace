__int64 __fastcall sub_5B6000(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi

  v2 = (__int64 *)a1[14];
  *a1 = &off_1C790C0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[13];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[14];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[12];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[11];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[12];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  result = sub_14B63F0(a1 + 9);
  v12 = (__int64 *)a1[8];
  if ( v12 )
  {
    result = *((unsigned int *)v12 - 1);
    v13 = &v12[result];
    if ( v12 >= v13 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[7];
          v6 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_26:
    v12 = (__int64 *)a1[8];
    if ( v12 )
LABEL_27:
      result = sub_186B220(v12 - 1);
  }
  v16 = (__int64 *)a1[6];
  if ( v16 )
  {
    result = *((unsigned int *)v16 - 1);
    v17 = &v16[result];
    if ( v16 >= v17 )
      return sub_186B220(v16 - 1);
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = a1[5];
          v6 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_35;
      }
      result = sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_35:
    v16 = (__int64 *)a1[6];
    if ( v16 )
      return sub_186B220(v16 - 1);
  }
  return result;
}

