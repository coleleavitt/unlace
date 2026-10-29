__int64 __fastcall sub_75CB80(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v2 = a1[79];
  *a1 = &off_1C542B0;
  if ( v2 )
  {
    v3 = a1[80];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = a1[77];
  if ( v5 )
  {
    v6 = a1[78];
    v4 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v6, v5);
  }
  v7 = (__int64 *)a1[76];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[75];
          v4 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_14;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_14:
    v7 = (__int64 *)a1[76];
    if ( v7 )
LABEL_15:
      sub_186B220(v7 - 1);
  }
  v11 = a1[74];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void *)a1[71];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[66];
  *a1 = &off_1C54290;
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[64];
  if ( v14 )
  {
    v15 = a1[65];
    v4 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v15, v14);
  }
  v16 = a1[62];
  if ( v16 )
  {
    v17 = a1[63];
    v4 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v17, v16);
  }
  v18 = a1[60];
  if ( v18 )
  {
    v19 = a1[61];
    v4 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v19, v18);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v20 = a1[20];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  return sub_15841B0(a1);
}

