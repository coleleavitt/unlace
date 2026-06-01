void __fastcall sub_4CAED0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  v1 = a1 - 6;
  *(a1 - 6) = &off_1C4F1F0;
  *a1 = off_1C4F220;
  v3 = a1[4];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[2];
  *a1 = qword_1C65E98;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(a1 - 1);
  *(a1 - 6) = qword_1C65EC0;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(a1 - 3);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(a1 - 4);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  operator delete(v1, 0x58u);
}

