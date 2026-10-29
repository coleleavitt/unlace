__int64 __fastcall sub_D81A00(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 *v16; // rdi
  __int64 *v17; // rcx
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi

  *(_QWORD *)a1 = &off_1C5A780;
  sub_D814A0(a1);
  v2 = *(__int64 **)(a1 + 632);
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
          v5 = *(_QWORD *)(a1 + 624);
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
    v2 = *(__int64 **)(a1 + 632);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = *(void **)(a1 + 600);
  if ( v7 )
    sub_186B220(v7);
  v8 = *(void **)(a1 + 576);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(void **)(a1 + 552);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void **)(a1 + 528);
  if ( v10 )
    sub_186B220(v10);
  v11 = *(__int64 **)(a1 + 392);
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 384);
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_25;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_25:
    v11 = *(__int64 **)(a1 + 392);
    if ( v11 )
LABEL_26:
      sub_186B220(v11 - 1);
  }
  v15 = *(_QWORD *)(a1 + 376);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(__int64 **)(a1 + 88);
  v17 = &v16[*(unsigned int *)(a1 + 96)];
  for ( i = v16; i != v17; *(_BYTE *)(v19 + 6) &= ~1u )
    v19 = *i++;
  result = a1 + 104;
  *(_DWORD *)(a1 + 96) = 0;
  if ( v16 != (__int64 *)(a1 + 104) && v16 )
    result = sub_186B220(v16);
  v21 = *(_QWORD *)(a1 + 80);
  if ( v21 )
    result = sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 72);
  if ( v22 )
    result = sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 64);
  if ( v23 )
    result = sub_186B220((void *)(v23 - 8));
  v24 = *(_QWORD *)(a1 + 56);
  if ( v24 )
    return sub_186B220((void *)(v24 - 8));
  return result;
}

