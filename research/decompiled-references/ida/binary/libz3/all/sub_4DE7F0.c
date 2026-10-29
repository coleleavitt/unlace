void __fastcall sub_4DE7F0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1C4F968;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_4DA630((__int64)a1);
  operator delete(a1, 0x60u);
}

