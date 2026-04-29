__int64 __fastcall sub_339A30(__int64 a1)
{
  void (*v1)(void); // rax

  sub_13C7D0(a1, 0);
  sub_359B50(a1);
  sub_3AC1B0(a1);
  sub_384BE0(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts(&off_4B8480, 0, sub_334BE0, a1) )
    sub_334D80();
  sub_3BFAD0(0);
  sub_3A0880(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_38B2F0(a1);
  return sub_324BC0(a1);
}
