void __fastcall sub_4C9D00(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_1C4EEF8;
  v2 = a1[1];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  operator delete(a1, 0x18u);
}

