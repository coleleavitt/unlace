__int64 __fastcall sub_743890(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void (__fastcall ***v7)(void *); // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi

  v2 = (__int64 *)a1[80];
  *a1 = &off_1C54028;
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
          v5 = a1[79];
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
    v2 = (__int64 *)a1[80];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void (__fastcall ***)(void *))a1[74];
  if ( v7 )
  {
    v6 = (*((_DWORD *)v7 + 2))-- == 1;
    if ( v6 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  sub_14B63F0(a1 + 72);
  sub_18572D0(a1 + 68);
  v8 = a1[66];
  *a1 = &off_1C54008;
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[64];
  if ( v9 )
  {
    v10 = a1[65];
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  v11 = a1[62];
  if ( v11 )
  {
    v12 = a1[63];
    v6 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v12, v11);
  }
  v13 = a1[60];
  if ( v13 )
  {
    v14 = a1[61];
    v6 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v14, v13);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v15 = a1[20];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  return sub_15841B0(a1);
}

