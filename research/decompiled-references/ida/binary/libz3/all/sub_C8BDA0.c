__int64 __fastcall sub_C8BDA0(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // r15
  __int64 v6; // rax
  char *v7; // rbx
  char *v8; // r14
  void *v9; // r12
  char *v10; // rsi
  void *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi

  *(_QWORD *)a1 = &off_1C58E00;
  v2 = *(_QWORD *)(a1 + 856);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(void **)(a1 + 848);
  if ( v3 )
    sub_186B220(v3);
  v4 = *(void **)(a1 + 824);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(char **)(a1 + 784);
  if ( v5 )
  {
    v6 = *(unsigned int *)(a1 + 792);
    if ( (_DWORD)v6 )
    {
      v7 = *(char **)(a1 + 784);
      v8 = &v5[40 * v6];
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 8);
        v10 = v7 + 24;
        v7 += 40;
        sub_182CBA0(v9, v10);
      }
      while ( v7 != v8 );
    }
    sub_186B220(v5);
  }
  v11 = *(void **)(a1 + 760);
  if ( v11 )
    sub_186B220(v11);
  sub_F74720(a1 + 632);
  v12 = *(__int64 **)(a1 + 624);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a1 + 616);
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_21;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_21:
    v12 = *(__int64 **)(a1 + 624);
    if ( v12 )
LABEL_22:
      sub_186B220(v12 - 1);
  }
  v17 = *(_QWORD *)(a1 + 592);
  *(_QWORD *)(a1 + 64) = &off_1C58DC0;
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 576);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 584);
    v16 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v19, v18);
  }
  v20 = *(_QWORD *)(a1 + 560);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 568);
    v16 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v21, v20);
  }
  v22 = *(_QWORD *)(a1 + 544);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 552);
    v16 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v23, v22);
  }
  *(_QWORD *)(a1 + 392) = &qword_1C637E8;
  sub_15841B0(a1 + 392);
  *(_QWORD *)(a1 + 232) = &qword_1C637E8;
  sub_15841B0(a1 + 232);
  v24 = *(_QWORD *)(a1 + 224);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  return sub_15841B0(a1 + 64);
}

