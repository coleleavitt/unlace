void __fastcall sub_4F44F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi

  *a1 = &off_1C4FE88;
  v2 = a1[16];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[15];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[14];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  sub_180C0E0(a1 + 7);
  v5 = a1[6];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[5];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (void *)a1[4];
  if ( v7 )
    sub_186B220(v7);
  v8 = a1[1];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  operator delete(a1, 0x98u);
}

