__int64 __fastcall sub_BF5EA0(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  __int64 result; // rax
  void *v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 *v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbp
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[80];
  if ( v1 )
    v1(a1 + 78, a1 + 78, 3);
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[76];
  if ( v3 )
    v3(a1 + 74, a1 + 74, 3);
  result = a1[72];
  if ( result )
    result = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))result)(a1 + 70, a1 + 70, 3);
  v5 = (void *)a1[67];
  if ( v5 )
    result = sub_186B220(v5);
  v6 = (__int64 *)a1[66];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[65];
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_16;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_16:
    v6 = (__int64 *)a1[66];
    if ( v6 )
LABEL_17:
      result = sub_186B220(v6 - 1);
  }
  v11 = (__int64 *)a1[64];
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v12 = &v11[result];
    if ( v11 >= v12 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[63];
          v10 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_25;
      }
      result = sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_25:
    v11 = (__int64 *)a1[64];
    if ( v11 )
LABEL_26:
      result = sub_186B220(v11 - 1);
  }
  v15 = (__int64 *)a1[35];
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[34];
          v10 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_34;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_34:
    v15 = (__int64 *)a1[35];
    if ( v15 )
LABEL_35:
      result = sub_186B220(v15 - 1);
  }
  v19 = a1[33];
  if ( v19 )
    result = sub_186B220((void *)(v19 - 8));
  v20 = (__int64 *)a1[16];
  if ( v20 )
  {
    result = *((unsigned int *)v20 - 1);
    v21 = &v20[result];
    if ( v20 >= v21 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[15];
          v10 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_45;
      }
      result = sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_45:
    v20 = (__int64 *)a1[16];
    if ( v20 )
LABEL_46:
      result = sub_186B220(v20 - 1);
  }
  v24 = a1[14];
  if ( v24 )
    return sub_186B220((void *)(v24 - 8));
  return result;
}

