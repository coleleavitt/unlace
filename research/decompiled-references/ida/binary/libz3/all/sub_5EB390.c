void __fastcall sub_5EB390(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi

  *a1 = &off_1C526C8;
  v2 = a1[11];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[10];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[7];
  if ( v4 )
    sub_186B220(v4);
  v5 = a1[6];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(a1, 0x60u);
}

