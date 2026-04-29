void __fastcall sub_36C5B0(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  void *v5; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  if ( (**(_BYTE **)(v2 + 8) & 2) != 0 )
  {
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
    {
LABEL_4:
      clear_tinfo_t();
      sub_36BBD0(*(_QWORD **)(v2 + 48));
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_36C5B0();
    if ( (**(_BYTE **)(v2 + 16) & 2) != 0 )
      goto LABEL_23;
  }
  sub_36C5B0();
LABEL_23:
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
    sub_36C5B0();
    if ( (**(_BYTE **)(v3 + 16) & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (**(_BYTE **)(v3 + 16) & 2) == 0 )
  {
LABEL_10:
    sub_36C5B0();
LABEL_11:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_12;
  }
  clear_tinfo_t();
  sub_36BBD0(*(_QWORD **)(v3 + 48));
  *(_QWORD *)v3 |= 2uLL;
LABEL_12:
  if ( v3 )
    qfree(v3);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    clear_tinfo_t();
    v4 = a1[6];
    while ( v4 )
    {
      sub_36BBD0(*(_QWORD **)(v4 + 24));
      v5 = (void *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      operator delete(v5, 0x28u);
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree((__int64)a1);
}
