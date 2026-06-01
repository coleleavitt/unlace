__int64 __fastcall sub_86A0E0(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi

  v2 = a1[80];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_180C0E0(a1 + 75);
  v3 = (void *)a1[72];
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)a1[71];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[70];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[71];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = a1[67];
  a1[1] = &off_1C4CA60;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[65];
  if ( v10 )
  {
    v11 = a1[66];
    v8 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v11, v10);
  }
  v12 = a1[63];
  if ( v12 )
  {
    v13 = a1[64];
    v8 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v13, v12);
  }
  v14 = a1[61];
  if ( v14 )
  {
    v15 = a1[62];
    v8 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v15, v14);
  }
  a1[42] = &qword_1C637E8;
  sub_15841B0(a1 + 42);
  a1[22] = &qword_1C637E8;
  sub_15841B0(a1 + 22);
  v16 = a1[21];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  return sub_15841B0(a1 + 1);
}

