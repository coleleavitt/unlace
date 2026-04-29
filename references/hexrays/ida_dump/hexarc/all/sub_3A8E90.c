void __fastcall sub_3A8E90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi

  v3 = a1[1];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
    {
LABEL_4:
      sub_3A51B0((__int64 *)(v3 + 32));
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_3A8E90();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_23;
  }
  sub_3A8E90();
LABEL_23:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v3 )
    qfree(v3);
LABEL_7:
  v4 = a1[2];
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v4 + 8) & 2) == 0 )
  {
    sub_3A8E90();
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v4 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_3A8E90();
LABEL_11:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_12;
  }
  sub_3A51B0((__int64 *)(v4 + 32));
  *(_QWORD *)v4 |= 2uLL;
LABEL_12:
  if ( v4 )
    qfree(v4);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_139A80(a1 + 7, a2);
    v5 = a1[4];
    if ( v5 )
    {
      a1[5] = 0;
      qfree(v5);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree(a1);
}
