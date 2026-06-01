void __fastcall sub_277990(_QWORD *a1, const char *a2, double a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rax

  *a1 = &unk_8711E8;
  v5 = (_QWORD *)qword_8CC770;
  v6 = (_QWORD *)(qword_8CC770 + 16 * xmmword_8CC778);
  if ( (_QWORD *)qword_8CC770 == v6 )
    goto LABEL_10;
  while ( a1 != (_QWORD *)v5[1] )
  {
    v5 += 2;
    if ( v6 == v5 )
      goto LABEL_10;
  }
  if ( !v5 )
  {
LABEL_10:
    if ( under_debugger )
      goto LABEL_14;
    interr(40959, a2, v6, a5, a3);
LABEL_12:
    if ( !under_debugger )
    {
      interr(40840, a2, v6, a5, a3);
      nullsub_66(40840);
      return;
    }
LABEL_14:
    BUG();
  }
  if ( !*v5 )
    goto LABEL_12;
  *(_OWORD *)v5 = 0;
  v7 = a1[3];
  if ( v7 )
  {
    a1[4] = 0;
    qfree(v7, a2);
  }
}
