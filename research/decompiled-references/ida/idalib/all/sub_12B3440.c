void __fastcall sub_12B3440(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_2C403E8;
  v2 = a1[298];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  sub_112BEE0((__int64)a1);
  operator delete(a1, 0x960u);
}
