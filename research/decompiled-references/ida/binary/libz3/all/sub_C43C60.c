void __fastcall sub_C43C60(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  void *v5; // rdi
  void *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  void *v14; // r13
  __int64 v15; // rsi
  void *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  void *v20; // r13
  __int64 v21; // rsi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdi

  v2 = (_QWORD *)a1[92];
  *a1 = &off_1C58828;
  if ( v2 )
  {
    if ( *v2 )
      sub_186B220((void *)(*v2 - 8LL));
    sub_186B220(v2);
  }
  v3 = (void (__fastcall ***)(void *))a1[98];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = (void *)a1[93];
  if ( v5 )
    sub_186B220(v5);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 88);
  sub_182CBA0(v6, a1 + 90);
  v7 = a1[87];
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 16 * v8;
      do
      {
        v10 = v7;
        v7 += 16;
        sub_15D0DF0(v10);
      }
      while ( v9 != v7 );
      v7 = a1[87];
    }
    sub_186B220((void *)(v7 - 8));
  }
  v11 = a1[86];
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v11 + 32 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11);
        v15 = v11 + 16;
        v11 += 32;
        sub_182CBA0(v14, v15);
      }
      while ( v11 != v13 );
      v11 = a1[86];
    }
    sub_186B220((void *)(v11 - 8));
  }
  sub_18572D0(a1 + 83);
  v16 = qword_1C7F2C0;
  a1[5] = &off_1C58808;
  sub_182CBA0(v16, a1 + 79);
  sub_182CBA0(v16, a1 + 81);
  v17 = a1[78];
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
      v17 = a1[78];
    }
    sub_186B220((void *)(v17 - 8));
  }
  v22 = (__int64 *)a1[77];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[76];
          v4 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_35;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_35:
    v22 = (__int64 *)a1[77];
    if ( v22 )
LABEL_36:
      sub_186B220(v22 - 1);
  }
  v26 = a1[71];
  a1[5] = &off_1C587E8;
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[69];
  if ( v27 )
  {
    v28 = a1[70];
    v4 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v28, v27);
  }
  v29 = a1[67];
  if ( v29 )
  {
    v30 = a1[68];
    v4 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v30, v29);
  }
  v31 = a1[65];
  if ( v31 )
  {
    v32 = a1[66];
    v4 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v32, v31);
  }
  a1[46] = &qword_1C637E8;
  sub_15841B0(a1 + 46);
  a1[26] = &qword_1C637E8;
  sub_15841B0(a1 + 26);
  v33 = a1[25];
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  sub_15841B0(a1 + 5);
  operator delete(a1, 0x318u);
}

