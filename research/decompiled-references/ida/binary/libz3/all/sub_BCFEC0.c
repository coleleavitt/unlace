__int64 __fastcall sub_BCFEC0(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v5)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  void *v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 *v13; // rbp
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 result; // rax
  __int64 v29; // rdi

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[153];
  if ( v1 )
    v1(a1 + 151, a1 + 151, 3);
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[149];
  if ( v3 )
    v3(a1 + 147, a1 + 147, 3);
  v4 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[144];
  if ( v4 )
    v4(a1 + 142, a1 + 142, 3);
  v5 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[140];
  if ( v5 )
    v5(a1 + 138, a1 + 138, 3);
  v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[136];
  if ( v6 )
    v6(a1 + 134, a1 + 134, 3);
  v7 = (void *)a1[131];
  if ( v7 )
    sub_186B220(v7);
  v8 = (__int64 *)a1[130];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[129];
          v12 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = (__int64 *)a1[130];
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  v13 = (__int64 *)a1[128];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[127];
          v12 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_29;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_29:
    v13 = (__int64 *)a1[128];
    if ( v13 )
LABEL_30:
      sub_186B220(v13 - 1);
  }
  v17 = (__int64 *)a1[99];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[98];
          v12 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_38;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_38:
    v17 = (__int64 *)a1[99];
    if ( v17 )
LABEL_39:
      sub_186B220(v17 - 1);
  }
  v21 = a1[97];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = (__int64 *)a1[80];
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[79];
          v12 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_49;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_49:
    v22 = (__int64 *)a1[80];
    if ( v22 )
LABEL_50:
      sub_186B220(v22 - 1);
  }
  v26 = a1[78];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  sub_2334C0(a1 + 35);
  v27 = a1[34];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  result = sub_2334C0(a1 + 16);
  v29 = a1[15];
  if ( v29 )
    return sub_186B220((void *)(v29 - 8));
  return result;
}

