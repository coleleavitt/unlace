__int64 __fastcall sub_222770(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_11;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      v3 = *(_QWORD *)(v2 + 88);
      if ( v3 )
      {
        *(_QWORD *)(v2 + 96) = 0;
        qfree(v3);
      }
      result = clear_tinfo_t(v2 + 48);
      v5 = *(_QWORD *)(v2 + 24);
      if ( v5 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        result = qfree(v5);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_9;
    }
  }
  else
  {
    result = sub_222770();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_35;
  }
  result = sub_222770();
LABEL_35:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_9:
  if ( v2 )
    result = qfree(v2);
LABEL_11:
  v6 = a1[2];
  if ( (*(_BYTE *)v6 & 2) != 0 )
    goto LABEL_24;
  if ( (**(_BYTE **)(v6 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v6 + 16) & 2) != 0 )
    {
LABEL_14:
      v7 = *(_QWORD *)(v6 + 88);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 96) = 0;
        qfree(v7);
      }
      result = clear_tinfo_t(v6 + 48);
      v8 = *(_QWORD *)(v6 + 24);
      if ( v8 )
      {
        *(_QWORD *)(v6 + 32) = 0;
        result = qfree(v8);
      }
      *(_QWORD *)v6 |= 2uLL;
      goto LABEL_22;
    }
  }
  else
  {
    result = sub_222770();
    if ( (**(_BYTE **)(v6 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_222770();
LABEL_21:
  if ( (*(_BYTE *)v6 & 2) == 0 )
    goto LABEL_14;
LABEL_22:
  if ( v6 )
    result = qfree(v6);
LABEL_24:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v9 = a1[11];
    if ( v9 )
    {
      a1[12] = 0;
      qfree(v9);
    }
    result = clear_tinfo_t(a1 + 6);
    v10 = a1[3];
    if ( v10 )
    {
      a1[4] = 0;
      result = qfree(v10);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
