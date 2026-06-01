__int64 __fastcall sub_E6A820(unsigned __int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned int *v4; // rbp
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rbx
  void *v17; // r14
  __int64 v18; // rsi
  void *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r14
  void *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rbp
  void *v37; // rdi
  _QWORD *v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // rbp
  void *v41; // rdi
  __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v50; // [rsp+0h] [rbp-58h]
  __int64 *v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+10h] [rbp-48h]
  unsigned int **v53; // [rsp+18h] [rbp-40h]

  v1 = (__int64 *)a1;
  v2 = *(_QWORD *)(a1 + 552);
  if ( !v2 )
  {
    v51 = (__int64 *)(a1 + 16);
    goto LABEL_23;
  }
  v3 = *(unsigned int *)(v2 - 4);
  if ( (_DWORD)v3 )
  {
    v50 = *(_QWORD *)(a1 + 552);
    v52 = v2 + 8 * v3;
    v51 = (__int64 *)(a1 + 16);
    v53 = (unsigned int **)(a1 + 720);
    while ( 1 )
    {
      v4 = *(unsigned int **)v50;
      v5 = *(unsigned int **)(*(_QWORD *)v50 + 72LL);
      if ( v5 )
      {
        a1 = *v1 + 648;
        sub_234C20((__int64 *)a1, v5);
      }
      v6 = v1[97];
      v7 = *v4;
      if ( !v6 )
        goto LABEL_14;
      if ( v7 >= *(_DWORD *)(v6 - 4) )
        goto LABEL_14;
      v8 = (unsigned int *)(v6 + 4LL * v7);
      v9 = *v8;
      if ( *v8 == -1 )
        goto LABEL_14;
      v10 = v1[98];
      *v8 = -1;
      if ( !v10 )
        break;
      v11 = (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
      if ( v9 != (_DWORD)v11 )
      {
        v12 = 8 * v11;
LABEL_12:
        v11 = *(_QWORD *)(v10 + v12);
        a1 = v9;
        *(_QWORD *)(v10 + 8LL * v9) = v11;
        *(_DWORD *)(v6 + 4LL * *(unsigned int *)v11) = v9;
        LODWORD(v11) = *(_DWORD *)(v10 - 4) - 1;
      }
      *(_DWORD *)(v10 - 4) = v11;
      v7 = *v4;
LABEL_14:
      if ( !(unsigned __int8)sub_186AF10(a1) )
      {
        v13 = v1[90];
        if ( !v13 || (v14 = *(unsigned int *)(v13 - 4), (_DWORD)v14 == *(_DWORD *)(v13 - 8)) )
        {
          sub_2FD3F0(v53);
          v13 = v1[90];
          v14 = *(unsigned int *)(v13 - 4);
        }
        *(_DWORD *)(v13 + 4 * v14) = v7;
        ++*(_DWORD *)(v13 - 4);
      }
      v15 = *((_QWORD *)v4 + 4);
      v16 = v15 + 32LL * v4[2];
      while ( v16 != v15 )
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v18 = v15 + 16;
        v15 += 32;
        sub_182CBA0(v17, v18);
      }
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v4 + 10);
      sub_182CBA0(v19, v4 + 14);
      a1 = (unsigned __int64)v51;
      sub_17E9C40(v51, 4 * (9 * v4[2] + (v4[1] & 0x1FFFFFFF) + 20), v4);
      v50 += 8;
      if ( v52 == v50 )
      {
        v2 = v1[69];
        if ( v2 )
          goto LABEL_22;
        goto LABEL_23;
      }
    }
    v12 = 0x7FFFFFFF8LL;
    goto LABEL_12;
  }
  v51 = (__int64 *)(a1 + 16);
LABEL_22:
  *(_DWORD *)(v2 - 4) = 0;
LABEL_23:
  v20 = v1[103];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = v1[102];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = v1[101];
  if ( v22 )
  {
    v23 = *(unsigned int *)(v22 - 4);
    if ( (_DWORD)v23 )
    {
      v24 = v22 + 32 * v23;
      do
      {
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v26 = v22 + 16;
        v22 += 32;
        sub_182CBA0(v25, v26);
      }
      while ( v22 != v24 );
      v22 = v1[101];
    }
    sub_186B220((void *)(v22 - 8));
  }
  v27 = v1[100];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = v1[99];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = v1[98];
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = v1[97];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = (unsigned int *)v1[95];
  if ( v31 )
    sub_234C20((__int64 *)(v1[96] + 648), v31);
  v32 = v1[90];
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  sub_2334C0(v1 + 87);
  v33 = v1[86];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = (_QWORD *)v1[85];
  if ( v34 )
  {
    v35 = *((unsigned int *)v34 - 1);
    if ( (_DWORD)v35 )
    {
      v36 = &v34[v35];
      do
      {
        while ( *v34 )
        {
          v37 = (void *)(*v34++ - 8LL);
          sub_186B220(v37);
          if ( v34 == v36 )
          {
            v34 = (_QWORD *)v1[85];
            goto LABEL_53;
          }
        }
        ++v34;
      }
      while ( v34 != v36 );
      v34 = (_QWORD *)v1[85];
    }
LABEL_53:
    sub_186B220(v34 - 1);
  }
  v38 = (_QWORD *)v1[84];
  if ( v38 )
  {
    v39 = *((unsigned int *)v38 - 1);
    if ( (_DWORD)v39 )
    {
      v40 = &v38[v39];
      do
      {
        while ( *v38 )
        {
          v41 = (void *)(*v38++ - 8LL);
          sub_186B220(v41);
          if ( v40 == v38 )
          {
            v38 = (_QWORD *)v1[84];
            goto LABEL_60;
          }
        }
        ++v38;
      }
      while ( v38 != v40 );
      v38 = (_QWORD *)v1[84];
    }
LABEL_60:
    sub_186B220(v38 - 1);
  }
  v42 = v1[83];
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = (void *)v1[80];
  if ( v43 )
    sub_186B220(v43);
  sub_2334C0(v1 + 78);
  v44 = v1[77];
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = v1[76];
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = (void *)v1[73];
  if ( v46 )
    sub_186B220(v46);
  v47 = v1[72];
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  sub_2334C0(v1 + 70);
  v48 = v1[69];
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  return sub_17E9B80(v51);
}

