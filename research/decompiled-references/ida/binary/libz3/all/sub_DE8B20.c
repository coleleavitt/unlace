void __fastcall sub_DE8B20(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1C5AE48;
  v2 = a1[6];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  operator delete(a1, 0x40u);
}

