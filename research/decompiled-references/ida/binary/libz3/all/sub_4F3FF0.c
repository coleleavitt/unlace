void __fastcall sub_4F3FF0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_1C4FE38;
  v2 = a1[3];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[2];
  *a1 = qword_1C66768;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  *a1 = qword_1C66718;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x20u);
}

