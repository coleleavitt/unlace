void __fastcall sub_4F4390(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_1C4FF80;
  a1[5] = &off_1C4FF30;
  v2 = (void *)a1[11];
  if ( v2 )
    sub_186B220(v2);
  v3 = a1[9];
  a1[5] = qword_1C66908;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[8];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[7];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[6];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[3];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[2];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[1];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  operator delete(a1, 0x68u);
}

