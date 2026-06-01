void __fastcall sub_901760(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi

  v2 = (_QWORD *)a1[15];
  if ( v2 != a1 + 17 )
    operator delete(v2, a1[17] + 1LL);
  v3 = a1[12];
  if ( v3 )
  {
    v4 = a1[13];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  v6 = (void *)a1[8];
  if ( v6 )
    sub_186B220(v6);
  v7 = (__int64 *)a1[7];
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
          v10 = a1[6];
          v5 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v5 )
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
    v7 = (__int64 *)a1[7];
    if ( v7 )
LABEL_16:
      sub_186B220(v7 - 1);
  }
  v11 = (void *)a1[5];
  if ( v11 )
    sub_186B220(v11);
  v12 = (__int64 *)a1[2];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[1];
          v5 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_26;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_26:
    v12 = (__int64 *)a1[2];
    if ( v12 )
LABEL_27:
      sub_186B220(v12 - 1);
  }
}

