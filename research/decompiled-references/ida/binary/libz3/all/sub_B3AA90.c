void __fastcall sub_B3AA90(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi

  *a1 = off_1C57290;
  v2 = (void *)a1[13];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[10];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[9];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[8];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = (void *)a1[3];
  if ( v6 )
    sub_186B220(v6);
  operator delete(a1, 0x80u);
}

