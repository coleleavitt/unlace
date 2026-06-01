__int64 (__fastcall **__fastcall sub_B31460(_QWORD *a1))()
{
  _QWORD **v2; // rbx
  _QWORD **i; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rdi
  void *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v31; // rdi

  v2 = (_QWORD **)a1[32];
  *a1 = off_1C72170;
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = v4[2];
        if ( v5 )
          sub_186B220((void *)(v5 - 8));
        v6 = v4[1];
        if ( v6 )
          sub_186B220((void *)(v6 - 8));
        if ( *v4 )
          sub_186B220((void *)(*v4 - 8LL));
        sub_186B220(v4);
      }
    }
  }
  sub_180C0E0(a1 + 50);
  v7 = a1[49];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[48];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[45];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[44];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[43];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[32];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  *a1 = off_1C740B8;
  sub_BDF100(a1, 0);
  v13 = a1[30];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[29];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = (void *)a1[26];
  if ( v15 )
    sub_186B220(v15);
  v16 = a1[25];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[24];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[23];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[21];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = (void *)a1[18];
  if ( v20 )
    sub_186B220(v20);
  v21 = (void *)a1[15];
  if ( v21 )
    sub_186B220(v21);
  v22 = a1[14];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = (void *)a1[13];
  if ( v23 )
  {
    sub_B56CD0(a1[13]);
    sub_186B220(v23);
  }
  v24 = a1[12];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[11];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = a1[10];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[9];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = a1[8];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v29 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v29 - 8));
  v31 = a1[4];
  if ( v31 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v31 - 8));
  return result;
}

