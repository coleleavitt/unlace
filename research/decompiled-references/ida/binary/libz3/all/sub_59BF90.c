void __fastcall sub_59BF90(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &off_1C51D00;
  v2 = (void *)a1[8];
  if ( v2 )
    sub_4D63B0(v2);
  v3 = a1[7];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[6];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[5];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[4];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[2];
  *a1 = qword_1C665B0;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x48u);
}

