void __fastcall sub_701700(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rax
  _QWORD **v11; // r13
  _QWORD **v12; // r14
  _QWORD *v13; // r15
  unsigned int *v14; // rbx
  unsigned int *v15; // r12
  unsigned int v16; // esi
  _QWORD *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // r12
  void *v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // r12
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rsi

  sub_700C00((__int64)a1);
  v2 = (void *)a1[45];
  if ( v2 )
    sub_186B220(v2);
  v3 = a1[44];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[43];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[42];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[41];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (void *)a1[38];
  if ( v7 )
    sub_186B220(v7);
  v8 = (void *)a1[35];
  if ( v8 )
    sub_186B220(v8);
  sub_16234F0(a1 + 29);
  sub_16234F0(a1 + 23);
  v9 = (void *)a1[20];
  if ( v9 )
    sub_186B220(v9);
  v10 = a1[19];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (_QWORD **)a1[18];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 == v12 )
      goto LABEL_30;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        v14 = (unsigned int *)v13[1];
        if ( v14 )
        {
          v15 = &v14[*(v14 - 1)];
          if ( v14 == v15 )
            goto LABEL_26;
          do
          {
            v16 = *v14++;
            sub_1144670(*v13, v16 >> 1);
          }
          while ( v15 != v14 );
          v15 = (unsigned int *)v13[1];
          if ( v15 )
          {
LABEL_26:
            *(v15 - 1) = 0;
            sub_186B220(v15 - 2);
          }
        }
        sub_186B220(v13);
      }
      ++v11;
    }
    while ( v12 != v11 );
    v12 = (_QWORD **)a1[18];
    if ( v12 )
    {
LABEL_30:
      *((_DWORD *)v12 - 1) = 0;
      sub_186B220(v12 - 1);
    }
  }
  v17 = (_QWORD *)a1[17];
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[v18];
      do
      {
        while ( *v17 )
        {
          v20 = (void *)(*v17++ - 8LL);
          sub_186B220(v20);
          if ( v19 == v17 )
          {
            v17 = (_QWORD *)a1[17];
            goto LABEL_37;
          }
        }
        ++v17;
      }
      while ( v17 != v19 );
      v17 = (_QWORD *)a1[17];
    }
LABEL_37:
    sub_186B220(v17 - 1);
  }
  v21 = (_QWORD *)a1[16];
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = &v21[v22];
      do
      {
        while ( *v21 )
        {
          v24 = (void *)(*v21++ - 8LL);
          sub_186B220(v24);
          if ( v23 == v21 )
          {
            v21 = (_QWORD *)a1[16];
            goto LABEL_44;
          }
        }
        ++v21;
      }
      while ( v21 != v23 );
      v21 = (_QWORD *)a1[16];
    }
LABEL_44:
    sub_186B220(v21 - 1);
  }
  v25 = a1[14];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = a1[13];
  a1[10] = &off_1C53508;
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[11];
  if ( v27 )
  {
    v28 = *(unsigned int *)(v27 - 4);
    if ( !(_DWORD)v28 )
      goto LABEL_54;
    v29 = 8 * v28;
    v30 = 0;
    do
    {
      v31 = v30 + v27;
      v30 += 8;
      sub_17B1E70(a1[12], v31);
      v27 = a1[11];
    }
    while ( v29 != v30 );
    if ( v27 )
    {
LABEL_54:
      *(_DWORD *)(v27 - 4) = 0;
      sub_186B220((void *)(v27 - 8));
    }
  }
  v32 = a1[9];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = a1[8];
  a1[5] = &off_1C53508;
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = a1[6];
  if ( v34 )
  {
    v35 = *(unsigned int *)(v34 - 4);
    if ( !(_DWORD)v35 )
      goto LABEL_64;
    v36 = 8 * v35;
    v37 = 0;
    do
    {
      v38 = v37 + v34;
      v37 += 8;
      sub_17B1E70(a1[7], v38);
      v34 = a1[6];
    }
    while ( v36 != v37 );
    if ( v34 )
    {
LABEL_64:
      *(_DWORD *)(v34 - 4) = 0;
      sub_186B220((void *)(v34 - 8));
    }
  }
  sub_1144B60(a1 + 2);
  sub_18572D0(a1 + 1);
}

