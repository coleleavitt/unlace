__int64 __fastcall sub_1B4600(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 result; // rax
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
      v3 = *(_QWORD *)(v2 + 160);
      if ( v3 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v3);
      }
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_7;
    }
  }
  else
  {
    sub_1B4600();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_25;
  }
  sub_1B4600();
LABEL_25:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( v2 )
    qfree(v2);
LABEL_9:
  v4 = a1[2];
  if ( (*(_BYTE *)v4 & 2) != 0 )
    goto LABEL_16;
  if ( (**(_BYTE **)(v4 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_28;
  }
  else
  {
    sub_1B4600();
    if ( (**(_BYTE **)(v4 + 16) & 2) != 0 )
      goto LABEL_13;
  }
  sub_1B4600();
LABEL_13:
  if ( (*(_BYTE *)v4 & 2) == 0 )
  {
LABEL_28:
    v7 = *(_QWORD *)(v4 + 160);
    if ( v7 )
    {
      *(_QWORD *)(v4 + 168) = 0;
      qfree(v7);
    }
    *(_QWORD *)v4 |= 2uLL;
  }
  if ( v4 )
    qfree(v4);
LABEL_16:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v6 = a1[20];
    if ( v6 )
    {
      a1[21] = 0;
      qfree(v6);
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
