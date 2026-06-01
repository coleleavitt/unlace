void __fastcall sub_505A40(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_1C50360;
  v2 = a1[1];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  operator delete(a1, 0x10u);
}

