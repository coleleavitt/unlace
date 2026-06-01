void __fastcall sub_B3AA30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_1C570B0;
  v2 = a1[8];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[6];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[4];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(a1, 0x48u);
}

