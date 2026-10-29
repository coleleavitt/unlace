void __fastcall sub_4FE740(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C669F0;
  v2 = (void *)a1[4];
  if ( v2 )
    sub_4D63E0(v2);
  v3 = a1[2];
  *a1 = qword_1C665B0;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x28u);
}

