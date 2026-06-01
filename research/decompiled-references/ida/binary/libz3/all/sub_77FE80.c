void __fastcall sub_77FE80(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C54500;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[4];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x30u);
}

