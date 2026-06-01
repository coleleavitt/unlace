void __fastcall sub_C43720(_QWORD *a1)
{
  void *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // r12
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v2 = qword_1C7F2C0;
  *a1 = &off_1C58808;
  sub_182CBA0(v2, a1 + 74);
  sub_182CBA0(v2, a1 + 76);
  v3 = a1[73];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 32 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v7 = v3 + 16;
        v3 += 32;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = a1[73];
    }
    sub_186B220((void *)(v3 - 8));
  }
  v8 = (__int64 *)a1[72];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[71];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_14;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_14:
    v8 = (__int64 *)a1[72];
    if ( v8 )
LABEL_15:
      sub_186B220(v8 - 1);
  }
  v13 = a1[66];
  *a1 = &off_1C587E8;
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[64];
  if ( v14 )
  {
    v15 = a1[65];
    v12 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v15, v14);
  }
  v16 = a1[62];
  if ( v16 )
  {
    v17 = a1[63];
    v12 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v17, v16);
  }
  v18 = a1[60];
  if ( v18 )
  {
    v19 = a1[61];
    v12 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v19, v18);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v20 = a1[20];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x270u);
}

