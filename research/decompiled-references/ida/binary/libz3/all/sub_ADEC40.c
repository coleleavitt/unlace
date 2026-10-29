__int64 __fastcall sub_ADEC40(_QWORD *a1)
{
  void *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  void *v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rbx
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi

  v2 = (void *)a1[9];
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(a1[9]);
    result = sub_186B220(v2);
    a1[9] = 0;
  }
  v4 = (_QWORD *)a1[4];
  if ( v4 )
  {
    v5 = (_QWORD *)v4[17];
    if ( v5 != v4 + 19 )
      operator delete(v5, v4[19] + 1LL);
    v6 = (_QWORD *)v4[13];
    if ( v6 != v4 + 15 )
      operator delete(v6, v4[15] + 1LL);
    result = sub_186B220(v4);
    a1[4] = 0;
  }
  v7 = (void *)a1[22];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (__int64 *)a1[19];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[18];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_18;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_18:
    v8 = (__int64 *)a1[19];
    if ( v8 )
LABEL_19:
      result = sub_186B220(v8 - 1);
  }
  v13 = a1[17];
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = (__int64 *)a1[16];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[15];
          v12 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_29;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_29:
    v14 = (__int64 *)a1[16];
    if ( v14 )
LABEL_30:
      result = sub_186B220(v14 - 1);
  }
  v18 = (void *)a1[12];
  if ( v18 )
    result = sub_186B220(v18);
  v19 = (void *)a1[9];
  if ( v19 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(a1[9]);
    result = sub_186B220(v19);
  }
  v20 = (_QWORD *)a1[4];
  if ( v20 )
  {
    v21 = (_QWORD *)v20[17];
    if ( v21 != v20 + 19 )
      operator delete(v21, v20[19] + 1LL);
    v22 = (_QWORD *)v20[13];
    if ( v22 != v20 + 15 )
      operator delete(v22, v20[15] + 1LL);
    return sub_186B220(v20);
  }
  return result;
}

