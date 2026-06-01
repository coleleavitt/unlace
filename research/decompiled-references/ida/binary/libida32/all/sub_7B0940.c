void __fastcall sub_7B0940(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = off_2BD1F60;
  if ( qword_2CAA8E0 == a1 )
  {
    qword_2CAA8E0 = nullptr;
    if ( qword_2CAA8D8 != a1 )
    {
LABEL_3:
      if ( qword_2CAA8D0 != a1 )
        goto LABEL_4;
LABEL_16:
      qword_2CAA8D0 = nullptr;
      if ( qword_2CAA8C8 != a1 )
        goto LABEL_5;
      goto LABEL_17;
    }
  }
  else if ( qword_2CAA8D8 != a1 )
  {
    goto LABEL_3;
  }
  qword_2CAA8D8 = nullptr;
  if ( qword_2CAA8D0 == a1 )
    goto LABEL_16;
LABEL_4:
  if ( qword_2CAA8C8 != a1 )
    goto LABEL_5;
LABEL_17:
  qword_2CAA8C8 = nullptr;
LABEL_5:
  v2 = (void *)a1[17];
  if ( v2 )
  {
    a1[18] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[14];
  if ( v3 )
  {
    a1[15] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    a1[12] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[8];
  if ( v5 )
  {
    a1[9] = 0;
    qfree(v5);
  }
  sub_79C490(a1);
}

