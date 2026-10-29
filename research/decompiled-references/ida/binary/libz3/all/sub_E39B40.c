void __fastcall sub_E39B40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void (__fastcall ***v10)(void *); // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  void (__fastcall ***v13)(void *); // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi

  *a1 = &off_1C5CC90;
  v2 = (_QWORD *)a1[16];
  if ( v2 != a1 + 18 )
    operator delete(v2, a1[18] + 1LL);
  v3 = a1[14];
  if ( v3 )
  {
    v4 = a1[15];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  v6 = (__int64 *)a1[13];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[12];
          v5 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = (__int64 *)a1[13];
    if ( v6 )
LABEL_14:
      sub_186B220(v6 - 1);
  }
  v10 = (void (__fastcall ***)(void *))a1[11];
  if ( v10 )
  {
    v5 = (*((_DWORD *)v10 + 4))-- == 1;
    if ( v5 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  v11 = a1[10];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[9];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v13 )
  {
    v5 = (*((_DWORD *)v13 + 2))-- == 1;
    if ( v5 )
    {
      (**v13)(v13);
      sub_186B220(v13);
    }
  }
  v14 = a1[4];
  if ( v14 )
  {
    v15 = a1[5];
    v5 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v15, v14);
  }
  v16 = (__int64 *)a1[3];
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = a1[2];
          v5 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_35;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_35:
    v16 = (__int64 *)a1[3];
    if ( v16 )
LABEL_36:
      sub_186B220(v16 - 1);
  }
  operator delete(a1, 0xA0u);
}

