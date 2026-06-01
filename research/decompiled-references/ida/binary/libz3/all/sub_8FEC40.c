void __fastcall sub_8FEC40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C6F2B8;
  v2 = a1[18];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_1680D50(a1 + 6);
  v3 = a1[5];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x98u);
}

