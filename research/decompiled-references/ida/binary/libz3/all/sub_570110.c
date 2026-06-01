void __fastcall sub_570110(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C51480;
  v2 = a1[4];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  *a1 = qword_1C65DF8;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x28u);
}

