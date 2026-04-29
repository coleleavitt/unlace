__int64 __fastcall sub_33ECD0(__int64 a1)
{
  void (*v1)(void); // rax

  sub_140C90(a1, 0);
  sub_35EDD0(a1);
  sub_3B1430(a1);
  sub_389E60(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4E5A60, 0, sub_339E70, a1) )
    sub_33A010();
  sub_3C4D50(0);
  sub_3A5B00(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_390570(a1);
  return sub_329D50(a1);
}
