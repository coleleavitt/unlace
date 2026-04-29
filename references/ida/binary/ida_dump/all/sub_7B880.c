__int64 __fastcall sub_7B880(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rbp

  v1 = a1[1];
  if ( (*(_BYTE *)v1 & 2) != 0 )
    goto LABEL_9;
  if ( (**(_BYTE **)(v1 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
    {
LABEL_4:
      result = clear_tinfo_t();
      if ( *(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 32) = 0;
        result = qfree();
      }
      *(_QWORD *)v1 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    result = sub_7B880();
    if ( (**(_BYTE **)(v1 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  result = sub_7B880();
LABEL_25:
  if ( (*(_BYTE *)v1 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v1 )
    result = qfree();
LABEL_9:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_16;
  if ( (**(_BYTE **)(v3 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    result = sub_7B880();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  result = sub_7B880();
LABEL_13:
  if ( (*(_BYTE *)v3 & 2) == 0 )
  {
LABEL_28:
    result = clear_tinfo_t();
    if ( *(_QWORD *)(v3 + 24) )
    {
      *(_QWORD *)(v3 + 32) = 0;
      result = qfree();
    }
    *(_QWORD *)v3 |= 2uLL;
  }
  if ( v3 )
    result = qfree();
LABEL_16:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    result = clear_tinfo_t();
    if ( a1[3] )
    {
      a1[4] = 0;
      result = qfree();
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree();
  return result;
}
