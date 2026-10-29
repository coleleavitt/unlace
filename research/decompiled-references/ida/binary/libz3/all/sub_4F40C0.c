void __fastcall sub_4F40C0(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_1C4FE10;
  v2 = (void *)a1[4];
  if ( v2 )
    sub_186B220(v2);
  v3 = a1[2];
  *a1 = qword_1C66740;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  *a1 = qword_1C66718;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x28u);
}

