__int64 __fastcall sub_B9160(_QWORD *a1)
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
      sub_11C7E0(v1 + 96);
      sub_11C7E0(v1 + 80);
      result = sub_11C7E0(v1 + 64);
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    result = sub_B9160();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_B9160();
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
    result = sub_B9160();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    result = sub_B9160();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  sub_11C7E0(v3 + 96);
  sub_11C7E0(v3 + 80);
  result = sub_11C7E0(v3 + 64);
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    result = qfree(v3);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    sub_11C7E0(a1 + 12);
    sub_11C7E0(a1 + 10);
    result = sub_11C7E0(a1 + 8);
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
