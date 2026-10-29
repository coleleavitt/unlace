void __fastcall sub_174210(_BYTE *a1)
{
  bool v1; // zf

  v1 = a1[32] == 0;
  *(_QWORD *)a1 = &off_234A60;
  if ( !v1 && *((_QWORD *)a1 + 2) )
    qfclose();
  operator delete(a1, 0x28u);
}

