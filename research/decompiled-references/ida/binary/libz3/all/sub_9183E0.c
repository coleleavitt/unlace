void __fastcall sub_9183E0(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *a1 = &off_1C55BE8;
  v2 = a1[6];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[3];
  if ( v3 )
    sub_186B220(v3);
  operator delete(a1, 0x48u);
}

