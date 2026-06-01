void __fastcall sub_570390(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &off_1C514D0;
  v2 = a1[7];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5];
  *a1 = qword_1C65EC0;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[3];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[2];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(a1, 0x40u);
}

