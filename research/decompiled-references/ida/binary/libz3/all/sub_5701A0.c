void __fastcall sub_5701A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = qword_1C65E20;
  v2 = a1[3];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  *a1 = qword_1C65DF8;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x30u);
}

