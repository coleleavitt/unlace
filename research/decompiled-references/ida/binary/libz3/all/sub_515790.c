void __fastcall sub_515790(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = qword_1C66740;
  v2 = a1[2];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  *a1 = qword_1C66718;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x18u);
}

