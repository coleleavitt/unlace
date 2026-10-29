__int64 __fastcall sub_6C44B0(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r12
  void *v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = a1 + 75;
  *(v2 - 75) = (__int64)&off_1C530D8;
  sub_2334C0(v2);
  v3 = (_QWORD *)a1[74];
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[v4];
      do
      {
        while ( *v3 )
        {
          v6 = (void *)(*v3++ - 8LL);
          sub_186B220(v6);
          if ( v3 == v5 )
          {
            v3 = (_QWORD *)a1[74];
            goto LABEL_7;
          }
        }
        ++v3;
      }
      while ( v3 != v5 );
      v3 = (_QWORD *)a1[74];
    }
LABEL_7:
    sub_186B220(v3 - 1);
  }
  v7 = a1[73];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (void *)a1[70];
  if ( v8 )
    sub_186B220(v8);
  v9 = a1[66];
  *a1 = &off_1C530B8;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[64];
  if ( v10 )
  {
    v11 = a1[65];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = a1[62];
  if ( v13 )
  {
    v14 = a1[63];
    v12 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  v15 = a1[60];
  if ( v15 )
  {
    v16 = a1[61];
    v12 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v17 = a1[20];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  return sub_15841B0(a1);
}

