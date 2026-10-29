void __fastcall sub_D30510(_QWORD *a1)
{
  __int64 v1; // rbp

  v1 = a1[1];
  *a1 = &off_1C5A570;
  if ( v1 )
  {
    sub_18572D0((void *)(v1 + 8));
    sub_186B220((void *)v1);
  }
  sub_18572D0(a1 + 2);
}

