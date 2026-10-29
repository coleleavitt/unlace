__int64 __fastcall sub_137120(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_9;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      v3 = *(_QWORD *)(v2 + 48);
      if ( v3 )
      {
        *(_QWORD *)(v2 + 56) = 0;
        qfree(v3);
      }
      result = qfree(*(_QWORD *)(v2 + 32));
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    result = sub_137120();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  result = sub_137120();
LABEL_25:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v2 )
    result = qfree(v2);
LABEL_9:
  v5 = a1[2];
  if ( (*(_BYTE *)v5 & 2) != 0 )
    goto LABEL_16;
  if ( (**(_BYTE **)(v5 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v5 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    result = sub_137120();
    if ( (**(_BYTE **)(v5 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  result = sub_137120();
LABEL_13:
  if ( (*(_BYTE *)v5 & 2) == 0 )
  {
LABEL_28:
    v7 = *(_QWORD *)(v5 + 48);
    if ( v7 )
    {
      *(_QWORD *)(v5 + 56) = 0;
      qfree(v7);
    }
    result = qfree(*(_QWORD *)(v5 + 32));
    *(_QWORD *)v5 |= 2uLL;
  }
  if ( v5 )
    result = qfree(v5);
LABEL_16:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v6 = a1[6];
    if ( v6 )
    {
      a1[7] = 0;
      qfree(v6);
    }
    result = qfree(a1[4]);
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}
