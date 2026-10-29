void __fastcall sub_5B61A0(_QWORD *a1)
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
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi

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
  sub_14B63F0(a1 + 9);
  v11 = (__int64 *)a1[8];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[7];
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_26;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = (__int64 *)a1[8];
    if ( v11 )
LABEL_27:
      sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[6];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[5];
          v6 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_35;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_35:
    v15 = (__int64 *)a1[6];
    if ( v15 )
LABEL_36:
      sub_186B220(v15 - 1);
  }
  operator delete(a1, 0x78u);
}

