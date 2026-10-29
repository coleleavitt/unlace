void __fastcall sub_C0B9F0(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rsi
  void *v13; // rbp
  void *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    sub_C0D840(*v1, v1 + 9);
    v2 = v1[12];
    if ( v2 )
      *(_DWORD *)(v2 - 4) = 0;
    v3 = v1[13];
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 - 4);
      if ( !(_DWORD)v4 )
        goto LABEL_9;
      v5 = 16 * v4;
      v6 = 0;
      do
      {
        v7 = v6 + v3;
        v6 += 16;
        sub_182EF00(v1[14], v7);
        v3 = v1[13];
      }
      while ( v5 != v6 );
      if ( v3 )
LABEL_9:
        *(_DWORD *)(v3 - 4) = 0;
    }
    v8 = v1[15];
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 - 4);
      if ( !(_DWORD)v9 )
        goto LABEL_15;
      v10 = 16 * v9;
      v11 = 0;
      do
      {
        v12 = v11 + v8;
        v11 += 16;
        sub_182EF00(v1[16], v12);
        v8 = v1[15];
      }
      while ( v10 != v11 );
      if ( v8 )
LABEL_15:
        *(_DWORD *)(v8 - 4) = 0;
    }
    sub_C0DA60(*v1, v1[1], v1 + 17);
    if ( *((_BYTE *)v1 + 48) )
    {
      v13 = (void *)v1[5];
      if ( v13 )
      {
        sub_16234F0(v1[5]);
        sub_186B220(v13);
      }
    }
    v14 = (void *)v1[17];
    if ( v14 )
      sub_186B220(v14);
    v15 = v1[15];
    if ( v15 )
    {
      v16 = *(unsigned int *)(v15 - 4);
      if ( !(_DWORD)v16 )
        goto LABEL_26;
      v17 = 16 * v16;
      v18 = 0;
      do
      {
        v19 = v18 + v15;
        v18 += 16;
        sub_182EF00(v1[16], v19);
        v15 = v1[15];
      }
      while ( v17 != v18 );
      if ( v15 )
      {
LABEL_26:
        *(_DWORD *)(v15 - 4) = 0;
        sub_186B220((void *)(v15 - 8));
      }
    }
    v20 = v1[13];
    if ( v20 )
    {
      v21 = *(unsigned int *)(v20 - 4);
      if ( !(_DWORD)v21 )
        goto LABEL_32;
      v22 = 16 * v21;
      v23 = 0;
      do
      {
        v24 = v23 + v20;
        v23 += 16;
        sub_182EF00(v1[14], v24);
        v20 = v1[13];
      }
      while ( v22 != v23 );
      if ( v20 )
      {
LABEL_32:
        *(_DWORD *)(v20 - 4) = 0;
        sub_186B220((void *)(v20 - 8));
      }
    }
    v25 = v1[12];
    if ( v25 )
      sub_186B220((void *)(v25 - 8));
    v26 = (void *)v1[9];
    if ( v26 )
      sub_186B220(v26);
    v27 = (__int64 *)v1[8];
    if ( v27 )
    {
      v28 = &v27[*((unsigned int *)v27 - 1)];
      if ( v27 >= v28 )
        goto LABEL_45;
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v30 = v1[7];
            if ( (*(_DWORD *)(v29 + 8))-- == 1 )
              break;
          }
          if ( ++v27 >= v28 )
            goto LABEL_44;
        }
        sub_15D7BC0(v30, v29);
        ++v27;
      }
      while ( v27 < v28 );
LABEL_44:
      v27 = (__int64 *)v1[8];
      if ( v27 )
LABEL_45:
        sub_186B220(v27 - 1);
    }
    sub_186B220(v1);
  }
}

