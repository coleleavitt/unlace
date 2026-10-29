__int64 __fastcall sub_8FFFF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi

  *a1 = &off_1C6F338;
  a1[4] = &off_1C4C1E8;
  a1[71] = &off_1C4C1A8;
  v2 = a1[75];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[74];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[3 * v4];
      do
      {
        v8 = v3[1];
        v9 = *v3;
        if ( v8 )
        {
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
          {
            sub_15D7BC0(v9, v8);
            v9 = *v3;
          }
        }
        v6 = v3[2];
        if ( v6 )
        {
          v7 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v6);
        }
        v3 += 3;
      }
      while ( v3 != v5 );
      v3 = (__int64 *)a1[74];
    }
    sub_186B220(v3 - 1);
  }
  v10 = a1[70];
  a1[4] = &off_1C4C1C8;
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[68];
  if ( v11 )
  {
    v12 = a1[69];
    v7 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v12, v11);
  }
  v13 = a1[66];
  if ( v13 )
  {
    v14 = a1[67];
    v7 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v14, v13);
  }
  v15 = a1[64];
  if ( v15 )
  {
    v16 = a1[65];
    v7 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v16, v15);
  }
  a1[45] = &qword_1C637E8;
  sub_15841B0(a1 + 45);
  a1[25] = &qword_1C637E8;
  sub_15841B0(a1 + 25);
  v17 = a1[24];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  return sub_15841B0(a1 + 4);
}

