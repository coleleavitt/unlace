void __fastcall sub_4CA200(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = a1 - 4;
  *(a1 - 4) = &off_1C4EF70;
  *a1 = qword_1C65DC8;
  v3 = a1[1];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(a1 - 1);
  *(a1 - 4) = qword_1C65E70;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(a1 - 3);
  *(a1 - 4) = qword_1C65DF8;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(v1, 0x30u);
}

