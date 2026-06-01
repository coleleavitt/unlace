__int64 __fastcall sub_6B1000(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // r15
  __int64 v5; // rax
  char *v6; // rbx
  char *v7; // r13
  void *v8; // r12
  char *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi

  sub_6B1200();
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(void **)(a1 + 176);
  if ( v3 )
    sub_186B220(v3);
  v4 = *(char **)(a1 + 152);
  if ( v4 )
  {
    v5 = *(unsigned int *)(a1 + 160);
    if ( (_DWORD)v5 )
    {
      v6 = *(char **)(a1 + 152);
      v7 = &v4[48 * v5];
      do
      {
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v6 + 8);
        v9 = v6 + 24;
        v6 += 48;
        sub_182CBA0(v8, v9);
      }
      while ( v7 != v6 );
    }
    sub_186B220(v4);
  }
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 112);
  sub_182CBA0(v11, a1 + 128);
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 96);
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 80);
    v14 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  sub_2334C0((__int64 *)(a1 + 56));
  v17 = *(__int64 **)(a1 + 48);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *(_QWORD *)(a1 + 40);
          v14 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_25;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_25:
    v17 = *(__int64 **)(a1 + 48);
    if ( v17 )
LABEL_26:
      sub_186B220(v17 - 1);
  }
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    v14 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v22, v21);
  }
  return sub_2B4F40((__int64 *)(a1 + 8));
}

