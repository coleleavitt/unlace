__int64 __fastcall sub_743A40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void (__fastcall ***v8)(void *); // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi

  v2 = a1 + 85;
  *(v2 - 85) = &off_1C54048;
  sub_18572D0(v2);
  v3 = (__int64 *)a1[83];
  a1[3] = &off_1C54028;
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[82];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = (__int64 *)a1[83];
    if ( v3 )
LABEL_9:
      sub_186B220(v3 - 1);
  }
  v8 = (void (__fastcall ***)(void *))a1[77];
  if ( v8 )
  {
    v7 = (*((_DWORD *)v8 + 2))-- == 1;
    if ( v7 )
    {
      (**v8)(v8);
      sub_186B220(v8);
    }
  }
  sub_14B63F0(a1 + 75);
  sub_18572D0(a1 + 71);
  v9 = a1[69];
  a1[3] = &off_1C54008;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[67];
  if ( v10 )
  {
    v11 = a1[68];
    v7 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v11, v10);
  }
  v12 = a1[65];
  if ( v12 )
  {
    v13 = a1[66];
    v7 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v13, v12);
  }
  v14 = a1[63];
  if ( v14 )
  {
    v15 = a1[64];
    v7 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v15, v14);
  }
  a1[44] = &qword_1C637E8;
  sub_15841B0(a1 + 44);
  a1[24] = &qword_1C637E8;
  sub_15841B0(a1 + 24);
  v16 = a1[23];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  return sub_15841B0(a1 + 3);
}

