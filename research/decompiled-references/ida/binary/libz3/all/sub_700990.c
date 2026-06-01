void __fastcall sub_700990(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi

  v2 = (__int64 *)a1[72];
  *a1 = &off_1C53560;
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[6 * v3];
      do
      {
        v10 = v2[4];
        if ( v10 )
        {
          v11 = v2[5];
          v7 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v11, v10);
        }
        v5 = v2[2];
        if ( v5 )
        {
          v6 = v2[3];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v8 = *v2;
        if ( *v2 )
        {
          v9 = v2[1];
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v8);
        }
        v2 += 6;
      }
      while ( v2 != v4 );
      v2 = (__int64 *)a1[72];
    }
    sub_186B220(v2 - 1);
  }
  v12 = a1[70];
  if ( v12 )
  {
    v13 = a1[71];
    v7 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v13, v12);
  }
  v14 = a1[66];
  *a1 = &off_1C53540;
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[64];
  if ( v15 )
  {
    v16 = a1[65];
    v7 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v16, v15);
  }
  v17 = a1[62];
  if ( v17 )
  {
    v18 = a1[63];
    v7 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v18, v17);
  }
  v19 = a1[60];
  if ( v19 )
  {
    v20 = a1[61];
    v7 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v20, v19);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v21 = a1[20];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x248u);
}

