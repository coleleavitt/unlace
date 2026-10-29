__int64 (__fastcall **__fastcall sub_B337D0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi
  void *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v20; // rdi

  *a1 = off_1C740B8;
  sub_BDF100(a1, 0);
  v2 = a1[30];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[29];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[26];
  if ( v4 )
    sub_186B220(v4);
  v5 = a1[25];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[24];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[23];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[21];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void *)a1[18];
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[15];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[14];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void *)a1[13];
  if ( v12 )
  {
    sub_B56CD0(a1[13]);
    sub_186B220(v12);
  }
  v13 = a1[12];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[11];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[10];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[9];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[8];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[5];
  result = off_1C70148;
  *a1 = off_1C70148;
  if ( v18 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v18 - 8));
  v20 = a1[4];
  if ( v20 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v20 - 8));
  return result;
}

