__int64 __fastcall sub_2BA430(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      sub_2B9D40((_QWORD *)(v1 + 64));
      result = cleanup_argloc(v1 + 24);
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    result = sub_2BA430();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_2BA430();
LABEL_21:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v1 )
    result = qfree(v1);
LABEL_7:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v3 + 8) & 2) == 0 )
  {
    result = sub_2BA430();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    result = sub_2BA430();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  sub_2B9D40((_QWORD *)(v3 + 64));
  result = cleanup_argloc(v3 + 24);
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    result = qfree(v3);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_2B9D40(a1 + 8);
    result = cleanup_argloc(a1 + 3);
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
