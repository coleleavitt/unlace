__int64 __fastcall sub_D3DC20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  char *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rbx
  __int64 result; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  void *v20; // r12
  __int64 v21; // rsi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi

  v2 = a1 + 152;
  *(_QWORD *)(v2 - 152) = &off_1C5A590;
  sub_14B63F0(v2);
  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(char **)(a1 + 104);
  if ( v5 )
  {
    v6 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      v8 = &v5[24 * v6];
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 16);
          if ( v9 )
            sub_186B220((void *)(v9 - 8));
          v10 = *(_QWORD *)(v7 + 8);
          if ( !v10 )
            break;
          v7 += 24;
          sub_186B220((void *)(v10 - 8));
          if ( v8 == (char *)v7 )
            goto LABEL_12;
        }
        v7 += 24;
      }
      while ( (char *)v7 != v8 );
    }
LABEL_12:
    sub_186B220(v5);
  }
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 72);
  result = sub_182CBA0(v11, a1 + 88);
  v13 = *(_QWORD *)(a1 + 64);
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v13 + 16 * v14;
      do
      {
        v16 = v13;
        v13 += 16;
        sub_15D0DF0(v16);
      }
      while ( v15 != v13 );
      v13 = *(_QWORD *)(a1 + 64);
    }
    result = sub_186B220((void *)(v13 - 8));
  }
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 - 4);
    if ( (_DWORD)v18 )
    {
      v19 = v17 + 32 * v18;
      do
      {
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v17);
        v21 = v17 + 16;
        v17 += 32;
        sub_182CBA0(v20, v21);
      }
      while ( v17 != v19 );
      v17 = *(_QWORD *)(a1 + 56);
    }
    result = sub_186B220((void *)(v17 - 8));
  }
  v22 = *(__int64 **)(a1 + 32);
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      return sub_186B220(v22 - 1);
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 24);
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_32;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_32:
    v22 = *(__int64 **)(a1 + 32);
    if ( v22 )
      return sub_186B220(v22 - 1);
  }
  return result;
}

