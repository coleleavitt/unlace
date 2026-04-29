__int64 __fastcall sub_339DB0(__int64 a1)
{
  void (*v1)(void); // rax

  sub_13CA90(a1, 0);
  sub_359ED0(a1);
  sub_3AC530(a1);
  sub_384F60(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4C6180, 0, sub_334F60, a1) )
    sub_335100();
  sub_3BFE50(0);
  sub_3A0C00(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_38B670(a1);
  return sub_324F40(a1);
}
