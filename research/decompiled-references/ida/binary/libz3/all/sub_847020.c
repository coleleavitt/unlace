__int64 __fastcall sub_847020(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  bool v5; // zf
  _QWORD **v6; // rbx
  _QWORD **v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi

  v2 = a1[9];
  result = (__int64)&off_1C612D0;
  *a1 = &off_1C612D0;
  if ( v2 )
  {
    v4 = a1[10];
    v5 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v5 )
      result = sub_15D7BC0(v4, v2);
  }
  v6 = (_QWORD **)a1[8];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 == v7 )
      goto LABEL_16;
    do
    {
      v8 = *v6;
      if ( *v6 )
      {
        v9 = v8[3];
        if ( v9 )
        {
          v10 = v8[4];
          v5 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(v10, v9);
        }
        v11 = v8[1];
        if ( v11 )
        {
          v12 = v8[2];
          v5 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v5 )
            sub_15D7BC0(v12, v11);
        }
        result = sub_186B220(v8);
      }
      ++v6;
    }
    while ( v7 != v6 );
    v7 = (_QWORD **)a1[8];
    if ( v7 )
    {
LABEL_16:
      *((_DWORD *)v7 - 1) = 0;
      result = sub_186B220(v7 - 1);
    }
  }
  v13 = (void *)a1[5];
  if ( v13 )
    result = sub_186B220(v13);
  v14 = a1[2];
  if ( v14 )
  {
    v15 = a1[3];
    v5 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v5 )
      return sub_15D7BC0(v15, v14);
  }
  return result;
}

