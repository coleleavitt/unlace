void __fastcall sub_8478D0(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  _QWORD **v5; // rbx
  _QWORD **v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi

  v2 = a1[9];
  *a1 = &off_1C612D0;
  if ( v2 )
  {
    v3 = a1[10];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = (_QWORD **)a1[8];
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 == v6 )
      goto LABEL_16;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        v8 = v7[3];
        if ( v8 )
        {
          v9 = v7[4];
          v4 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v9, v8);
        }
        v10 = v7[1];
        if ( v10 )
        {
          v11 = v7[2];
          v4 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v11, v10);
        }
        sub_186B220(v7);
      }
      ++v5;
    }
    while ( v6 != v5 );
    v6 = (_QWORD **)a1[8];
    if ( v6 )
    {
LABEL_16:
      *((_DWORD *)v6 - 1) = 0;
      sub_186B220(v6 - 1);
    }
  }
  v12 = (void *)a1[5];
  if ( v12 )
    sub_186B220(v12);
  v13 = a1[2];
  if ( v13 )
  {
    v14 = a1[3];
    v4 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v14, v13);
  }
  operator delete(a1, 0x58u);
}

