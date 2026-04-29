__int64 __fastcall sub_338C50(__int64 a1)
{
  void (*v1)(void); // rax

  sub_13C0D0(a1, 0);
  sub_358D50(a1);
  sub_3AB3B0(a1);
  sub_383DE0(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4B93E0, 0, sub_333DF0, a1) )
    sub_333F90();
  sub_3BECD0(0);
  sub_39FA80(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_38A4F0(a1);
  return sub_324400(a1);
}
