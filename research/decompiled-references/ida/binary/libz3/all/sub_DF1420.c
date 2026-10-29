void __fastcall sub_DF1420(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void (__fastcall ***v11)(void *); // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  void (__fastcall ***v14)(void *); // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi

  *a1 = &off_1C75490;
  v2 = a1[20];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (_QWORD *)a1[16];
  *a1 = &off_1C5CC90;
  if ( v3 != a1 + 18 )
    operator delete(v3, a1[18] + 1LL);
  v4 = a1[14];
  if ( v4 )
  {
    v5 = a1[15];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = (__int64 *)a1[13];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[12];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_15;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_15:
    v7 = (__int64 *)a1[13];
    if ( v7 )
LABEL_16:
      sub_186B220(v7 - 1);
  }
  v11 = (void (__fastcall ***)(void *))a1[11];
  if ( v11 )
  {
    v6 = (*((_DWORD *)v11 + 4))-- == 1;
    if ( v6 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v12 = a1[10];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[9];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v14 )
  {
    v6 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v6 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v15 = a1[4];
  if ( v15 )
  {
    v16 = a1[5];
    v6 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v16, v15);
  }
  v17 = (__int64 *)a1[3];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[2];
          v6 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_37;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_37:
    v17 = (__int64 *)a1[3];
    if ( v17 )
LABEL_38:
      sub_186B220(v17 - 1);
  }
  operator delete(a1, 0xA8u);
}

