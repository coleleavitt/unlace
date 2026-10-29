void __fastcall sub_4C9CD0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_1C4F000;
  v2 = a1[1];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  operator delete(a1, 0x10u);
}

