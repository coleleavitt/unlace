__int64 (__fastcall **__fastcall sub_B44D80(_QWORD *a1))()
{
  _QWORD **v2; // rbx
  _QWORD **v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v27; // rdi

  v2 = (_QWORD **)a1[29];
  *a1 = off_1C72790;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_9;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( *v4 )
          sub_186B220((void *)(*v4 - 8LL));
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v2 != v3 );
    v3 = (_QWORD **)a1[29];
    if ( v3 )
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
  }
  v5 = a1[57];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[56];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[55];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[54];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void *)a1[51];
  if ( v9 )
    sub_186B220(v9);
  v10 = a1[50];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[49];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[48];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_180C0E0(a1 + 39);
  v13 = a1[38];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[37];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[34];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[33];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[32];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[29];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = (__int64 *)a1[24];
  if ( v19 )
  {
    v20 = &v19[*((unsigned int *)v19 - 1)];
    if ( v19 >= v20 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = a1[23];
          if ( (*(_DWORD *)(v21 + 8))-- == 1 )
            break;
        }
        if ( ++v19 >= v20 )
          goto LABEL_45;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( v19 < v20 );
LABEL_45:
    v19 = (__int64 *)a1[24];
    if ( v19 )
LABEL_46:
      sub_186B220(v19 - 1);
  }
  v24 = a1[22];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v25 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v25 - 8));
  v27 = a1[4];
  if ( v27 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v27 - 8));
  return result;
}

