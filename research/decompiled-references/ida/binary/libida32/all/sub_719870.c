void *__fastcall sub_719870(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // r14
  void *result; // rax
  unsigned int v6; // ebp
  int v7; // r12d
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int **v10; // rdx
  int v11; // eax
  unsigned int *v12; // rdx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r13
  char v18; // al
  __int64 v19; // rax
  unsigned int *v20; // r13
  int v21; // r12d
  unsigned int *v22; // rbx
  __int64 v23; // rdx
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  unsigned int *v28; // rsi
  unsigned __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int **v35; // rdx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  unsigned int *v40; // r13
  int v41; // eax
  __int64 v42; // rdx
  unsigned int *v43; // r13
  int v44; // eax
  __int64 v45; // rdx
  unsigned int *v46; // rsi
  unsigned int *v47; // r13
  int v48; // r14d
  __int64 v49; // rdx
  unsigned int *v50; // r13
  int v51; // r14d
  __int64 v52; // rdx
  unsigned int *v53; // rsi
  unsigned int *v54; // r13
  int v55; // r14d
  __int64 v56; // rdx
  int v57; // [rsp+4h] [rbp-44h]
  int v58; // [rsp+4h] [rbp-44h]
  int v59; // [rsp+4h] [rbp-44h]
  unsigned __int64 v60; // [rsp+8h] [rbp-40h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 2664);
  v3 = *(__int64 **)(v2 + 8);
  if ( !v3 )
  {
    v6 = *(__int16 *)(a1 + 1634);
    if ( *(__int16 *)(a1 + 1634) <= 0 )
    {
      v4 = 0x10102464C457FLL;
      if ( !MEMORY[0x10102464C457F] )
        goto LABEL_3;
      v30 = MEMORY[0x10102464C4583];
      v7 = MEMORY[0x10102464C4583];
      if ( MEMORY[0x10102464C4583] < 0 )
        goto LABEL_47;
      v60 = MEMORY[0x10102464C4583];
    }
    else
    {
      v20 = (unsigned int *)(a1 + 1640);
      v21 = 0;
      v22 = (unsigned int *)(a1 + 1640);
      do
      {
        v23 = *v22;
        v24 = v22;
        ++v21;
        v22 += 8;
        sub_724B00(a1, v24, v23);
        v6 = *(__int16 *)(a1 + 1634);
      }
      while ( v21 < (int)v6 );
      v25 = *(_QWORD *)(a1 + 2664);
      v3 = *(__int64 **)(v25 + 8);
      v2 = v25;
      v4 = *v3;
      a1 = *(unsigned int *)*v3;
      if ( !(_DWORD)a1 )
        goto LABEL_3;
      v60 = *(__int16 *)(v4 + 4);
      v7 = *(__int16 *)(v4 + 4);
      if ( v3 )
        goto LABEL_5;
      v26 = 0;
      if ( (__int16)v6 > 0 )
      {
        do
        {
          v27 = *v20;
          v28 = v20;
          a1 = v1;
          v57 = v26;
          v20 += 8;
          sub_724B00(v1, v28, v27);
          v26 = v57 + 1;
        }
        while ( v57 + 1 < *(__int16 *)(v1 + 1634) );
        v25 = *(_QWORD *)(v1 + 2664);
      }
      v2 = v25;
      v29 = *(__int16 *)(**(_QWORD **)(v25 + 8) + 4LL);
      v30 = v29;
      if ( v7 < 0 )
      {
LABEL_47:
        if ( under_debugger )
          goto LABEL_73;
        goto LABEL_48;
      }
      if ( v60 < v29 )
        goto LABEL_6;
    }
    v3 = nullptr;
    if ( v7 == v30 )
      goto LABEL_6;
    goto LABEL_47;
  }
  v4 = *v3;
  if ( !*(_DWORD *)*v3 )
  {
LABEL_3:
    unk_2CA26C9 = *(_DWORD *)v1 >> 1 < (unsigned int)*((__int16 *)v3 + 4);
    return &unk_2CA26C9;
  }
  v6 = *(__int16 *)(a1 + 1634);
  v60 = *(__int16 *)(v4 + 4);
  v7 = *(__int16 *)(v4 + 4);
LABEL_5:
  if ( v7 < 0 )
    goto LABEL_47;
LABEL_6:
  v8 = 0;
  *(_DWORD *)(v2 + 24) = v7;
  *(_BYTE *)(v2 + 28) = 0;
  *(_WORD *)(v2 + 30) = 0;
  v9 = *(_QWORD *)(v1 + 2664);
  v10 = *(unsigned int ***)(v9 + 8);
  if ( !v10 && *(__int16 *)(v1 + 1634) > 0 )
  {
    v40 = (unsigned int *)(v1 + 1640);
    v41 = 0;
    do
    {
      v42 = *v40;
      v8 = (unsigned __int64)v40;
      a1 = v1;
      v58 = v41;
      v40 += 8;
      sub_724B00(v1, v8, v42);
      v41 = v58 + 1;
    }
    while ( v58 + 1 < *(__int16 *)(v1 + 1634) );
    v9 = *(_QWORD *)(v1 + 2664);
    v10 = *(unsigned int ***)(v9 + 8);
  }
  v11 = *(_DWORD *)(v9 + 24);
  v12 = *v10;
  if ( v11 )
    v13 = *(unsigned int *)((char *)v12 + 6 * v11);
  else
    v13 = *v12;
  if ( !v13 )
    goto LABEL_70;
  v14 = *(__int16 *)(v1 + 1634);
  v15 = v14;
  if ( v14 > 0x1E )
    goto LABEL_71;
  v16 = v1 + 32 * v14 + 1640;
  *(_WORD *)(v1 + 1634) = v14 + 1;
  *(_QWORD *)(v1 + 2664) = v16;
  sub_724B00(v1, v16, v13);
  v17 = *(_QWORD *)(*(_QWORD *)(v1 + 2664) + 8LL);
  if ( !v17 && *(__int16 *)(v1 + 1634) > 0 )
  {
    v43 = (unsigned int *)(v1 + 1640);
    v44 = 0;
    do
    {
      v45 = *v43;
      v46 = v43;
      v59 = v44;
      v43 += 8;
      sub_724B00(v1, v46, v45);
      v44 = v59 + 1;
    }
    while ( v59 + 1 < *(__int16 *)(v1 + 1634) );
    v17 = *(_QWORD *)(*(_QWORD *)(v1 + 2664) + 8LL);
  }
  sub_719870(v1);
  if ( v60 < *(__int16 *)(v4 + 4) )
  {
    v8 = v6;
    a1 = v1;
    sub_724BA0(v1, v6);
    v31 = *(_QWORD *)(v1 + 2664);
    v32 = *(_QWORD *)(v31 + 8);
    if ( !v32 && *(__int16 *)(v1 + 1634) > 0 )
    {
      v47 = (unsigned int *)(v1 + 1640);
      v48 = 0;
      do
      {
        v49 = *v47;
        v8 = (unsigned __int64)v47;
        a1 = v1;
        ++v48;
        v47 += 8;
        sub_724B00(v1, v8, v49);
      }
      while ( v48 < *(__int16 *)(v1 + 1634) );
      v31 = *(_QWORD *)(v1 + 2664);
      v32 = *(_QWORD *)(v31 + 8);
    }
    v33 = *(__int16 *)(*(_QWORD *)v32 + 4LL);
    if ( v60 < v33 || v7 == (_DWORD)v33 )
    {
      *(_DWORD *)(v31 + 24) = v7;
      *(_BYTE *)(v31 + 28) = 0;
      *(_WORD *)(v31 + 30) = 0;
      v34 = *(_QWORD *)(v1 + 2664);
      v35 = *(unsigned int ***)(v34 + 8);
      if ( !v35 && *(__int16 *)(v1 + 1634) > 0 )
      {
        v54 = (unsigned int *)(v1 + 1640);
        v55 = 0;
        do
        {
          v56 = *v54;
          v8 = (unsigned __int64)v54;
          a1 = v1;
          ++v55;
          v54 += 8;
          sub_724B00(v1, v8, v56);
        }
        while ( v55 < *(__int16 *)(v1 + 1634) );
        v34 = *(_QWORD *)(v1 + 2664);
        v35 = *(unsigned int ***)(v34 + 8);
      }
      v36 = *(_DWORD *)(v34 + 24);
      v12 = *v35;
      if ( v36 )
        v37 = *(unsigned int *)((char *)v12 + 6 * v36);
      else
        v37 = *v12;
      if ( v37 )
      {
        v38 = *(__int16 *)(v1 + 1634);
        v15 = v38;
        if ( v38 <= 0x1E )
        {
          v39 = v1 + 32 * v38 + 1640;
          *(_WORD *)(v1 + 1634) = v38 + 1;
          *(_QWORD *)(v1 + 2664) = v39;
          sub_724B00(v1, v39, v37);
          v17 = *(_QWORD *)(*(_QWORD *)(v1 + 2664) + 8LL);
          if ( !v17 && *(__int16 *)(v1 + 1634) > 0 )
          {
            v50 = (unsigned int *)(v1 + 1640);
            v51 = 0;
            do
            {
              v52 = *v50;
              v53 = v50;
              ++v51;
              v50 += 8;
              sub_724B00(v1, v53, v52);
            }
            while ( v51 < *(__int16 *)(v1 + 1634) );
            v17 = *(_QWORD *)(*(_QWORD *)(v1 + 2664) + 8LL);
          }
          v18 = *(_DWORD *)v1 >> 1 < (unsigned int)*(__int16 *)(v17 + 8);
          unk_2CA26C9 = v18;
          goto LABEL_14;
        }
LABEL_71:
        sub_722BC0(24, 0, v15);
      }
LABEL_70:
      sub_722BF0(a1, v8, v12);
    }
    if ( under_debugger )
LABEL_73:
      BUG();
LABEL_48:
    interr(835);
  }
  v18 = unk_2CA26C9;
LABEL_14:
  if ( v18 )
  {
    sub_71FC40(v1, v3, v17, (unsigned int)v7, 0);
    byte_2CA26CA = 1;
  }
  if ( *((__int16 *)v3 + 4) < 0 )
  {
    sub_724BA0(v1, v6);
    byte_2CA26CA = 1;
    v19 = sub_724A00(v1, v6);
    sub_724140(v1, v3, *(_QWORD *)(v19 + 8), *(unsigned int *)(v19 + 24));
    result = &unk_2CA26C8;
    if ( unk_2CA26C8 )
      result = (void *)sub_71C9D0(v1, *(unsigned int *)(v1 + 5796), v1 + 4244, *(unsigned int *)(v1 + 5792));
    unk_2CA26C9 = 0;
  }
  else
  {
    unk_2CA26C9 = *(_DWORD *)v1 >> 1 < (unsigned int)*((__int16 *)v3 + 4);
    sub_71A620(v1, v3);
    return (void *)sub_724BA0(v1, v6);
  }
  return result;
}

