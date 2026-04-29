__int64 __fastcall sub_7B880(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi
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
      result = clear_tinfo_t(v2 + 48);
      v4 = *(_QWORD *)(v2 + 24);
      if ( v4 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        result = qfree(v4);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    result = sub_7B880();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  result = sub_7B880();
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
    result = sub_7B880();
    if ( (**(_BYTE **)(v5 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  result = sub_7B880();
LABEL_13:
  if ( (*(_BYTE *)v5 & 2) == 0 )
  {
LABEL_28:
    result = clear_tinfo_t(v5 + 48);
    v7 = *(_QWORD *)(v5 + 24);
    if ( v7 )
    {
      *(_QWORD *)(v5 + 32) = 0;
      result = qfree(v7);
    }
    *(_QWORD *)v5 |= 2uLL;
  }
  if ( v5 )
    result = qfree(v5);
LABEL_16:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    result = clear_tinfo_t(a1 + 6);
    v6 = a1[3];
    if ( v6 )
    {
      a1[4] = 0;
      result = qfree(v6);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
