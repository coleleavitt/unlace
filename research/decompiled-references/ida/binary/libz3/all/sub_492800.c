__int64 __fastcall sub_492800(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  sub_1584DA0(a1);
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  *(_QWORD *)(a1 + 160) = 0;
  sub_1584DA0(a1 + 168);
  v3 = *(_QWORD *)(a1 + 528);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  *(_QWORD *)(a1 + 528) = 0;
  return sub_1584DA0(a1 + 328);
}

