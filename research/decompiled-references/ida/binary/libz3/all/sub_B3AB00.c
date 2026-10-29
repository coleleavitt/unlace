void __fastcall sub_B3AB00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  *a1 = off_1C571F0;
  v2 = a1[11];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[10];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[7];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[6];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[4];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x80u);
}

