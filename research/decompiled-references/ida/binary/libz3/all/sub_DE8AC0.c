void __fastcall sub_DE8AC0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1C5AB80;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  operator delete(a1, 0x30u);
}

