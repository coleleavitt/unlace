__int64 __fastcall sub_33F130(__int64 a1)
{
  void (*v1)(void); // rax

  sub_1406D0(a1, 0);
  sub_35F310(a1);
  sub_3B1970(a1);
  sub_38A3A0(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4E0120, 0, sub_33A2E0, a1) )
    sub_33A480();
  sub_3C5290(0);
  sub_3A6040(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_390AB0(a1);
  return sub_32A080(a1);
}
