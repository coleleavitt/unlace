__int64 __fastcall sub_387070(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      sub_386EA0(*(_QWORD **)(v2 + 48));
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_387070();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_24;
  }
  sub_387070();
LABEL_24:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree(v2);
LABEL_7:
  v3 = a1[2];
  if ( (*(_BYTE *)v3 & 2) != 0 )
    goto LABEL_14;
  if ( (**(_BYTE **)(v3 + 8) & 2) == 0 )
  {
    sub_387070();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_387070();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  sub_386EA0(*(_QWORD **)(v3 + 48));
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    qfree(v3);
LABEL_14:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      do
      {
        sub_386EA0(*(_QWORD **)(v5 + 24));
        v6 = (void *)v5;
        v5 = *(_QWORD *)(v5 + 16);
        operator delete(v6, 0x28u);
      }
      while ( v5 );
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}
