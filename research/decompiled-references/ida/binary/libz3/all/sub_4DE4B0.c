__int64 __fastcall sub_4DE4B0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_1C4F848;
  v2 = a1[12];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[11];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[10];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  return sub_4DA630((__int64)a1);
}

