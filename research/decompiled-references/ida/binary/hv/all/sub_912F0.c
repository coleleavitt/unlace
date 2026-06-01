void __fastcall sub_912F0(_QWORD *a1)
{
  bool v1; // zf

  v1 = a1[13] == 0;
  *a1 = &off_163DB8;
  if ( !v1 )
    sub_A4700(a1 + 6);
  sub_92B70(a1);
  operator delete(a1, 0x80A8u);
}

