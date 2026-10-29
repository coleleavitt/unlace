void __fastcall sub_812600(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[13] == 0;
  *a1 = &off_2B12B18;
  if ( !v1 )
    sub_730100(a1 + 6);
  sub_814B60(a1);
  operator delete(a1, 0x80A8u);
}

