__int64 __fastcall sub_337450(__int64 a1)
{
  void (*v1)(void); // rax

  sub_13A5D0(a1, 0);
  sub_357550(a1);
  sub_3A9B30(a1);
  sub_382560(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4B2260, 0, sub_3325F0, a1) )
    sub_332790();
  sub_3BD450(0);
  sub_39E200(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_388C70(a1);
  return sub_322940(a1);
}
