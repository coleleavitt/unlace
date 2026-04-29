__int64 __fastcall sub_9D800(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
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
      v3 = *(_QWORD *)(v2 + 112);
      if ( v3 )
      {
        *(_QWORD *)(v2 + 120) = 0;
        qfree(v3);
      }
      qfree(*(_QWORD *)(v2 + 96));
      v4 = *(_QWORD *)(v2 + 72);
      if ( v4 )
      {
        *(_QWORD *)(v2 + 80) = 0;
        qfree(v4);
      }
      qfree(*(_QWORD *)(v2 + 56));
      sub_1188E0(v2 + 40);
      result = sub_1188E0(v2 + 24);
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_9;
    }
  }
  else
  {
    result = sub_9D800();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_35;
  }
  result = sub_9D800();
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
      v7 = *(_QWORD *)(v6 + 112);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 120) = 0;
        qfree(v7);
      }
      qfree(*(_QWORD *)(v6 + 96));
      v8 = *(_QWORD *)(v6 + 72);
      if ( v8 )
      {
        *(_QWORD *)(v6 + 80) = 0;
        qfree(v8);
      }
      qfree(*(_QWORD *)(v6 + 56));
      sub_1188E0(v6 + 40);
      result = sub_1188E0(v6 + 24);
      *(_QWORD *)v6 |= 2uLL;
      goto LABEL_22;
    }
  }
  else
  {
    result = sub_9D800();
    if ( (**(_BYTE **)(v6 + 16) & 2) != 0 )
      goto LABEL_21;
  }
  result = sub_9D800();
LABEL_21:
  if ( (*(_BYTE *)v6 & 2) == 0 )
    goto LABEL_14;
LABEL_22:
  if ( v6 )
    result = qfree(v6);
LABEL_24:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v9 = a1[14];
    if ( v9 )
    {
      a1[15] = 0;
      qfree(v9);
    }
    qfree(a1[12]);
    v10 = a1[9];
    if ( v10 )
    {
      a1[10] = 0;
      qfree(v10);
    }
    qfree(a1[7]);
    sub_1188E0(a1 + 5);
    result = sub_1188E0(a1 + 3);
    *a1 |= 2uLL;
  }
  if ( a1 )
    return qfree(a1);
  return result;
}
