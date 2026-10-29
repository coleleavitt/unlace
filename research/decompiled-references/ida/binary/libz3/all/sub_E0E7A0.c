void __fastcall sub_E0E7A0(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbx
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi

  v2 = a1[11];
  if ( v2 )
  {
    v3 = a1[12];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = a1[9];
  if ( v5 )
  {
    v6 = a1[10];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v6, v5);
  }
  v7 = (__int64 *)a1[8];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[8 * v8];
      do
      {
        v10 = v7[4];
        if ( v10 )
        {
          v11 = v7[5];
          v4 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v11, v10);
        }
        v12 = (__int64 *)v7[3];
        if ( v12 )
        {
          v13 = &v12[*((unsigned int *)v12 - 1)];
          if ( v12 >= v13 )
            goto LABEL_21;
          do
          {
            while ( 1 )
            {
              v14 = *v12;
              if ( *v12 )
              {
                v15 = v7[2];
                v4 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v4 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_20;
            }
            sub_15D7BC0(v15, v14);
            ++v12;
          }
          while ( v12 < v13 );
LABEL_20:
          v12 = (__int64 *)v7[3];
          if ( v12 )
LABEL_21:
            sub_186B220(v12 - 1);
        }
        v16 = *v7;
        if ( *v7 )
        {
          v17 = v7[1];
          v4 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v17, v16);
        }
        v7 += 8;
      }
      while ( v7 != v9 );
      v7 = (__int64 *)a1[8];
    }
    sub_186B220(v7 - 1);
  }
  v18 = (__int64 *)a1[7];
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[6];
          v4 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_35;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_35:
    v18 = (__int64 *)a1[7];
    if ( v18 )
LABEL_36:
      sub_186B220(v18 - 1);
  }
  v22 = a1[4];
  if ( v22 )
  {
    v23 = a1[5];
    v4 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v23, v22);
  }
  v24 = (__int64 *)a1[3];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = a1[2];
          v4 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_47;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_47:
    v24 = (__int64 *)a1[3];
    if ( v24 )
LABEL_48:
      sub_186B220(v24 - 1);
  }
}

