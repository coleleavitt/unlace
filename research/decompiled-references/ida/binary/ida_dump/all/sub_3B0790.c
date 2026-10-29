void __fastcall sub_3B0790(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      sub_3ACAB0(v2 + 32);
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_3B0790();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_23;
  }
  sub_3B0790();
LABEL_23:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree();
LABEL_7:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v3 + 8) & 2) == 0 )
  {
    sub_3B0790();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_3B0790();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  sub_3ACAB0(v3 + 32);
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    qfree();
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_140140(a1 + 7, a2);
    if ( a1[4] )
    {
      a1[5] = 0;
      qfree();
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree();
}
