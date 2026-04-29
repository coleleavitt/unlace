void __fastcall sub_297CE0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp

  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      *(_DWORD *)(v1 + 56) = -1;
      sub_2978B0(v1 + 40);
      sub_2978B0(v1 + 24);
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_297CE0();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  sub_297CE0();
LABEL_21:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v1 )
    qfree(v1);
LABEL_7:
  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v2 + 8) & 2) == 0 )
  {
    sub_297CE0();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v2 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_297CE0();
LABEL_11:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_12;
  }
  *(_DWORD *)(v2 + 56) = -1;
  sub_2978B0(v2 + 40);
  sub_2978B0(v2 + 24);
  *(_QWORD *)v2 |= 2uLL;
LABEL_12:
  if ( v2 )
    qfree(v2);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 56) = -1;
    sub_2978B0(a1 + 40);
    sub_2978B0(a1 + 24);
    *(_QWORD *)a1 |= 2uLL;
  }
  if ( a1 )
    qfree(a1);
}
