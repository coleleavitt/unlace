void __fastcall sub_4CAE20(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  *a1 = &off_1C4F1F0;
  a1[6] = off_1C4F220;
  v2 = a1[10];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[8];
  a1[6] = qword_1C65E98;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[7];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[5];
  *a1 = qword_1C65EC0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[3];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[2];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  operator delete(a1, 0x58u);
}

