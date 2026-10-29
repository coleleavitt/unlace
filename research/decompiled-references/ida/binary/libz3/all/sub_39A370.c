__int64 __fastcall sub_39A370(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_1C4E2A0;
  v2 = a1[66];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_399410(a1[64], a1[65]);
  sub_399410(a1[62], a1[63]);
  sub_399450(a1[60], a1[61]);
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v3 = a1[20];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  return sub_15841B0(a1);
}

